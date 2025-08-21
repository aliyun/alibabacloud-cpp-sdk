// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESCHEDULERRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATESCHEDULERRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class CreateSchedulerRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSchedulerRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Cname, cname_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSchedulerRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Cname, cname_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
    };
    CreateSchedulerRuleResponseBody() = default ;
    CreateSchedulerRuleResponseBody(const CreateSchedulerRuleResponseBody &) = default ;
    CreateSchedulerRuleResponseBody(CreateSchedulerRuleResponseBody &&) = default ;
    CreateSchedulerRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSchedulerRuleResponseBody() = default ;
    CreateSchedulerRuleResponseBody& operator=(const CreateSchedulerRuleResponseBody &) = default ;
    CreateSchedulerRuleResponseBody& operator=(CreateSchedulerRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cname_ != nullptr
        && this->requestId_ != nullptr && this->ruleName_ != nullptr; };
    // cname Field Functions 
    bool hasCname() const { return this->cname_ != nullptr;};
    void deleteCname() { this->cname_ = nullptr;};
    inline string cname() const { DARABONBA_PTR_GET_DEFAULT(cname_, "") };
    inline CreateSchedulerRuleResponseBody& setCname(string cname) { DARABONBA_PTR_SET_VALUE(cname_, cname) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateSchedulerRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline CreateSchedulerRuleResponseBody& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


  protected:
    // The CNAME that is assigned by Sec-Traffic Manager for the scheduling rule.
    // 
    // > To enable the scheduling rule, you must map the domain name of the service to the CNAME.
    std::shared_ptr<string> cname_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // The name of the rule.
    std::shared_ptr<string> ruleName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
