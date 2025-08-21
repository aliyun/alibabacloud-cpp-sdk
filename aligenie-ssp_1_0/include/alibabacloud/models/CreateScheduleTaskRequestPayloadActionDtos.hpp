// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESCHEDULETASKREQUESTPAYLOADACTIONDTOS_HPP_
#define ALIBABACLOUD_MODELS_CREATESCHEDULETASKREQUESTPAYLOADACTIONDTOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class CreateScheduleTaskRequestPayloadActionDTOs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateScheduleTaskRequestPayloadActionDTOs& obj) { 
      DARABONBA_ANY_TO_JSON(customAction, customAction_);
    };
    friend void from_json(const Darabonba::Json& j, CreateScheduleTaskRequestPayloadActionDTOs& obj) { 
      DARABONBA_ANY_FROM_JSON(customAction, customAction_);
    };
    CreateScheduleTaskRequestPayloadActionDTOs() = default ;
    CreateScheduleTaskRequestPayloadActionDTOs(const CreateScheduleTaskRequestPayloadActionDTOs &) = default ;
    CreateScheduleTaskRequestPayloadActionDTOs(CreateScheduleTaskRequestPayloadActionDTOs &&) = default ;
    CreateScheduleTaskRequestPayloadActionDTOs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateScheduleTaskRequestPayloadActionDTOs() = default ;
    CreateScheduleTaskRequestPayloadActionDTOs& operator=(const CreateScheduleTaskRequestPayloadActionDTOs &) = default ;
    CreateScheduleTaskRequestPayloadActionDTOs& operator=(CreateScheduleTaskRequestPayloadActionDTOs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->customAction_ != nullptr; };
    // customAction Field Functions 
    bool hasCustomAction() const { return this->customAction_ != nullptr;};
    void deleteCustomAction() { this->customAction_ = nullptr;};
    inline     const Darabonba::Json & customAction() const { DARABONBA_GET(customAction_) };
    Darabonba::Json & customAction() { DARABONBA_GET(customAction_) };
    inline CreateScheduleTaskRequestPayloadActionDTOs& setCustomAction(const Darabonba::Json & customAction) { DARABONBA_SET_VALUE(customAction_, customAction) };
    inline CreateScheduleTaskRequestPayloadActionDTOs& setCustomAction(Darabonba::Json & customAction) { DARABONBA_SET_RVALUE(customAction_, customAction) };


  protected:
    Darabonba::Json customAction_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
