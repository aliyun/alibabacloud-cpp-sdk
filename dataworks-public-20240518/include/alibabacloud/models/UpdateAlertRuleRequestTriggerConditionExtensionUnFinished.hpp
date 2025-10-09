// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEALERTRULEREQUESTTRIGGERCONDITIONEXTENSIONUNFINISHED_HPP_
#define ALIBABACLOUD_MODELS_UPDATEALERTRULEREQUESTTRIGGERCONDITIONEXTENSIONUNFINISHED_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateAlertRuleRequestTriggerConditionExtensionUnFinished : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAlertRuleRequestTriggerConditionExtensionUnFinished& obj) { 
      DARABONBA_PTR_TO_JSON(UnFinishedTime, unFinishedTime_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAlertRuleRequestTriggerConditionExtensionUnFinished& obj) { 
      DARABONBA_PTR_FROM_JSON(UnFinishedTime, unFinishedTime_);
    };
    UpdateAlertRuleRequestTriggerConditionExtensionUnFinished() = default ;
    UpdateAlertRuleRequestTriggerConditionExtensionUnFinished(const UpdateAlertRuleRequestTriggerConditionExtensionUnFinished &) = default ;
    UpdateAlertRuleRequestTriggerConditionExtensionUnFinished(UpdateAlertRuleRequestTriggerConditionExtensionUnFinished &&) = default ;
    UpdateAlertRuleRequestTriggerConditionExtensionUnFinished(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAlertRuleRequestTriggerConditionExtensionUnFinished() = default ;
    UpdateAlertRuleRequestTriggerConditionExtensionUnFinished& operator=(const UpdateAlertRuleRequestTriggerConditionExtensionUnFinished &) = default ;
    UpdateAlertRuleRequestTriggerConditionExtensionUnFinished& operator=(UpdateAlertRuleRequestTriggerConditionExtensionUnFinished &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->unFinishedTime_ != nullptr; };
    // unFinishedTime Field Functions 
    bool hasUnFinishedTime() const { return this->unFinishedTime_ != nullptr;};
    void deleteUnFinishedTime() { this->unFinishedTime_ = nullptr;};
    inline string unFinishedTime() const { DARABONBA_PTR_GET_DEFAULT(unFinishedTime_, "") };
    inline UpdateAlertRuleRequestTriggerConditionExtensionUnFinished& setUnFinishedTime(string unFinishedTime) { DARABONBA_PTR_SET_VALUE(unFinishedTime_, unFinishedTime) };


  protected:
    // The latest completion time of the instance. The period is in the hh:mm format. Valid values of hh: [0,47]. Valid values of mm: [0,59].
    std::shared_ptr<string> unFinishedTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
