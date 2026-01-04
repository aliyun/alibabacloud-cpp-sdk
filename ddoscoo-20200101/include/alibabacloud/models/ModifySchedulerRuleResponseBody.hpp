// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSCHEDULERRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSCHEDULERRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class ModifySchedulerRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifySchedulerRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Cname, cname_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
    };
    friend void from_json(const Darabonba::Json& j, ModifySchedulerRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Cname, cname_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
    };
    ModifySchedulerRuleResponseBody() = default ;
    ModifySchedulerRuleResponseBody(const ModifySchedulerRuleResponseBody &) = default ;
    ModifySchedulerRuleResponseBody(ModifySchedulerRuleResponseBody &&) = default ;
    ModifySchedulerRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifySchedulerRuleResponseBody() = default ;
    ModifySchedulerRuleResponseBody& operator=(const ModifySchedulerRuleResponseBody &) = default ;
    ModifySchedulerRuleResponseBody& operator=(ModifySchedulerRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cname_ == nullptr
        && this->requestId_ == nullptr && this->ruleName_ == nullptr; };
    // cname Field Functions 
    bool hasCname() const { return this->cname_ != nullptr;};
    void deleteCname() { this->cname_ = nullptr;};
    inline string getCname() const { DARABONBA_PTR_GET_DEFAULT(cname_, "") };
    inline ModifySchedulerRuleResponseBody& setCname(string cname) { DARABONBA_PTR_SET_VALUE(cname_, cname) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifySchedulerRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline ModifySchedulerRuleResponseBody& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


  protected:
    // The CNAME that is assigned by Sec-Traffic Manager for the scheduling rule.
    // 
    // > To enable the scheduling rule, you must map the domain name of the service to the CNAME.
    shared_ptr<string> cname_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The name of the rule.
    shared_ptr<string> ruleName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
