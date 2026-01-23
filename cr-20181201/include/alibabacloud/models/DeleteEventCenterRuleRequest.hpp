// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEEVENTCENTERRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEEVENTCENTERRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class DeleteEventCenterRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteEventCenterRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteEventCenterRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
    };
    DeleteEventCenterRuleRequest() = default ;
    DeleteEventCenterRuleRequest(const DeleteEventCenterRuleRequest &) = default ;
    DeleteEventCenterRuleRequest(DeleteEventCenterRuleRequest &&) = default ;
    DeleteEventCenterRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteEventCenterRuleRequest() = default ;
    DeleteEventCenterRuleRequest& operator=(const DeleteEventCenterRuleRequest &) = default ;
    DeleteEventCenterRuleRequest& operator=(DeleteEventCenterRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->ruleId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DeleteEventCenterRuleRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline DeleteEventCenterRuleRequest& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


  protected:
    // The ID of the instance.
    shared_ptr<string> instanceId_ {};
    // The ID of the event notification rule.
    shared_ptr<string> ruleId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
