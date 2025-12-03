// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETACCESSRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETACCESSRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetAccessRuleResponseBodyAccessRule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DFS20180620
{
namespace Models
{
  class GetAccessRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAccessRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessRule, accessRule_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAccessRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessRule, accessRule_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAccessRuleResponseBody() = default ;
    GetAccessRuleResponseBody(const GetAccessRuleResponseBody &) = default ;
    GetAccessRuleResponseBody(GetAccessRuleResponseBody &&) = default ;
    GetAccessRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAccessRuleResponseBody() = default ;
    GetAccessRuleResponseBody& operator=(const GetAccessRuleResponseBody &) = default ;
    GetAccessRuleResponseBody& operator=(GetAccessRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessRule_ == nullptr
        && return this->requestId_ == nullptr; };
    // accessRule Field Functions 
    bool hasAccessRule() const { return this->accessRule_ != nullptr;};
    void deleteAccessRule() { this->accessRule_ = nullptr;};
    inline const GetAccessRuleResponseBodyAccessRule & accessRule() const { DARABONBA_PTR_GET_CONST(accessRule_, GetAccessRuleResponseBodyAccessRule) };
    inline GetAccessRuleResponseBodyAccessRule accessRule() { DARABONBA_PTR_GET(accessRule_, GetAccessRuleResponseBodyAccessRule) };
    inline GetAccessRuleResponseBody& setAccessRule(const GetAccessRuleResponseBodyAccessRule & accessRule) { DARABONBA_PTR_SET_VALUE(accessRule_, accessRule) };
    inline GetAccessRuleResponseBody& setAccessRule(GetAccessRuleResponseBodyAccessRule && accessRule) { DARABONBA_PTR_SET_RVALUE(accessRule_, accessRule) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAccessRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<GetAccessRuleResponseBodyAccessRule> accessRule_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DFS20180620
#endif
