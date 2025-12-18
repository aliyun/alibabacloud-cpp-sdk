// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMANAGEDRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMANAGEDRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetManagedRuleResponseBodyManagedRule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetManagedRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetManagedRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ManagedRule, managedRule_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetManagedRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ManagedRule, managedRule_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetManagedRuleResponseBody() = default ;
    GetManagedRuleResponseBody(const GetManagedRuleResponseBody &) = default ;
    GetManagedRuleResponseBody(GetManagedRuleResponseBody &&) = default ;
    GetManagedRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetManagedRuleResponseBody() = default ;
    GetManagedRuleResponseBody& operator=(const GetManagedRuleResponseBody &) = default ;
    GetManagedRuleResponseBody& operator=(GetManagedRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->managedRule_ == nullptr
        && return this->requestId_ == nullptr; };
    // managedRule Field Functions 
    bool hasManagedRule() const { return this->managedRule_ != nullptr;};
    void deleteManagedRule() { this->managedRule_ = nullptr;};
    inline const GetManagedRuleResponseBodyManagedRule & managedRule() const { DARABONBA_PTR_GET_CONST(managedRule_, GetManagedRuleResponseBodyManagedRule) };
    inline GetManagedRuleResponseBodyManagedRule managedRule() { DARABONBA_PTR_GET(managedRule_, GetManagedRuleResponseBodyManagedRule) };
    inline GetManagedRuleResponseBody& setManagedRule(const GetManagedRuleResponseBodyManagedRule & managedRule) { DARABONBA_PTR_SET_VALUE(managedRule_, managedRule) };
    inline GetManagedRuleResponseBody& setManagedRule(GetManagedRuleResponseBodyManagedRule && managedRule) { DARABONBA_PTR_SET_RVALUE(managedRule_, managedRule) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetManagedRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the managed rule.
    std::shared_ptr<GetManagedRuleResponseBodyManagedRule> managedRule_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
