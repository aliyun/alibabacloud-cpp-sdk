// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERPROFILEPATHRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERPROFILEPATHRULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeUserProfilePathRulesResponseBodyUserProfilePathRule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeUserProfilePathRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserProfilePathRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UserProfilePathRule, userProfilePathRule_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserProfilePathRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UserProfilePathRule, userProfilePathRule_);
    };
    DescribeUserProfilePathRulesResponseBody() = default ;
    DescribeUserProfilePathRulesResponseBody(const DescribeUserProfilePathRulesResponseBody &) = default ;
    DescribeUserProfilePathRulesResponseBody(DescribeUserProfilePathRulesResponseBody &&) = default ;
    DescribeUserProfilePathRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserProfilePathRulesResponseBody() = default ;
    DescribeUserProfilePathRulesResponseBody& operator=(const DescribeUserProfilePathRulesResponseBody &) = default ;
    DescribeUserProfilePathRulesResponseBody& operator=(DescribeUserProfilePathRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->userProfilePathRule_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUserProfilePathRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // userProfilePathRule Field Functions 
    bool hasUserProfilePathRule() const { return this->userProfilePathRule_ != nullptr;};
    void deleteUserProfilePathRule() { this->userProfilePathRule_ = nullptr;};
    inline const DescribeUserProfilePathRulesResponseBodyUserProfilePathRule & userProfilePathRule() const { DARABONBA_PTR_GET_CONST(userProfilePathRule_, DescribeUserProfilePathRulesResponseBodyUserProfilePathRule) };
    inline DescribeUserProfilePathRulesResponseBodyUserProfilePathRule userProfilePathRule() { DARABONBA_PTR_GET(userProfilePathRule_, DescribeUserProfilePathRulesResponseBodyUserProfilePathRule) };
    inline DescribeUserProfilePathRulesResponseBody& setUserProfilePathRule(const DescribeUserProfilePathRulesResponseBodyUserProfilePathRule & userProfilePathRule) { DARABONBA_PTR_SET_VALUE(userProfilePathRule_, userProfilePathRule) };
    inline DescribeUserProfilePathRulesResponseBody& setUserProfilePathRule(DescribeUserProfilePathRulesResponseBodyUserProfilePathRule && userProfilePathRule) { DARABONBA_PTR_SET_RVALUE(userProfilePathRule_, userProfilePathRule) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The directory blacklist and whitelist.
    std::shared_ptr<DescribeUserProfilePathRulesResponseBodyUserProfilePathRule> userProfilePathRule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
