
/**
 * @file <argos3/testing/experiment/test_footbot_controller.h>
 *
 * @author Carlo Pinciroli <ilpincy@gmail.com>
 */
#include <argos3/core/control_interface/ci_controller.h>
#include <argos3/plugins/robots/foot-bot/control_interface/ci_footbot_wheels_actuator.h>
#include <argos3/plugins/robots/foot-bot/control_interface/ci_footbot_leds_actuator.h>

using namespace argos;

class CTestFootBotController : public CCI_Controller {

public:

   CTestFootBotController();
   virtual ~CTestFootBotController();
   virtual void Init(TConfigurationNode& t_tree);
   virtual void Reset();
   virtual void Destroy();
   virtual void ControlStep();

private:

   CCI_FootBotWheelsActuator* m_pcWheels;
   CCI_FootBotLEDsActuator* m_pcLEDs;

};