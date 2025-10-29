// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEALERTRULEREQUESTTRIGGERCONDITIONEXTENSIONUNFINISHED_HPP_
#define ALIBABACLOUD_MODELS_CREATEALERTRULEREQUESTTRIGGERCONDITIONEXTENSIONUNFINISHED_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateAlertRuleRequestTriggerConditionExtensionUnFinished : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAlertRuleRequestTriggerConditionExtensionUnFinished& obj) { 
      DARABONBA_PTR_TO_JSON(UnFinishedTime, unFinishedTime_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAlertRuleRequestTriggerConditionExtensionUnFinished& obj) { 
      DARABONBA_PTR_FROM_JSON(UnFinishedTime, unFinishedTime_);
    };
    CreateAlertRuleRequestTriggerConditionExtensionUnFinished() = default ;
    CreateAlertRuleRequestTriggerConditionExtensionUnFinished(const CreateAlertRuleRequestTriggerConditionExtensionUnFinished &) = default ;
    CreateAlertRuleRequestTriggerConditionExtensionUnFinished(CreateAlertRuleRequestTriggerConditionExtensionUnFinished &&) = default ;
    CreateAlertRuleRequestTriggerConditionExtensionUnFinished(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAlertRuleRequestTriggerConditionExtensionUnFinished() = default ;
    CreateAlertRuleRequestTriggerConditionExtensionUnFinished& operator=(const CreateAlertRuleRequestTriggerConditionExtensionUnFinished &) = default ;
    CreateAlertRuleRequestTriggerConditionExtensionUnFinished& operator=(CreateAlertRuleRequestTriggerConditionExtensionUnFinished &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->unFinishedTime_ == nullptr; };
    // unFinishedTime Field Functions 
    bool hasUnFinishedTime() const { return this->unFinishedTime_ != nullptr;};
    void deleteUnFinishedTime() { this->unFinishedTime_ = nullptr;};
    inline string unFinishedTime() const { DARABONBA_PTR_GET_DEFAULT(unFinishedTime_, "") };
    inline CreateAlertRuleRequestTriggerConditionExtensionUnFinished& setUnFinishedTime(string unFinishedTime) { DARABONBA_PTR_SET_VALUE(unFinishedTime_, unFinishedTime) };


  protected:
    // The latest completion time of the instance. The period is in the hh:mm format. Valid values of hh: [0,47]. Valid values of mm: [0,59].
    std::shared_ptr<string> unFinishedTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
