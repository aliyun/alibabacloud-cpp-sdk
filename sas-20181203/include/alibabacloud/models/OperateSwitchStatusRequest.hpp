// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPERATESWITCHSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_OPERATESWITCHSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class OperateSwitchStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OperateSwitchStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, OperateSwitchStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    OperateSwitchStatusRequest() = default ;
    OperateSwitchStatusRequest(const OperateSwitchStatusRequest &) = default ;
    OperateSwitchStatusRequest(OperateSwitchStatusRequest &&) = default ;
    OperateSwitchStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OperateSwitchStatusRequest() = default ;
    OperateSwitchStatusRequest& operator=(const OperateSwitchStatusRequest &) = default ;
    OperateSwitchStatusRequest& operator=(OperateSwitchStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ruleId_ == nullptr
        && this->status_ == nullptr; };
    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline int64_t getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
    inline OperateSwitchStatusRequest& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline OperateSwitchStatusRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The ID of the rule.
    // 
    // >  You can call the ListContainerWebDefenseRule operation to query the IDs of rules.
    // 
    // This parameter is required.
    shared_ptr<int64_t> ruleId_ {};
    // The status of the rule. Valid values: on and off.
    // 
    // This parameter is required.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
