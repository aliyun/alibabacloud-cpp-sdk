// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERBASELINEAUTHORIZATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERBASELINEAUTHORIZATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeUserBaselineAuthorizationResponseBodyUserBaselineAuthorization.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeUserBaselineAuthorizationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserBaselineAuthorizationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UserBaselineAuthorization, userBaselineAuthorization_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserBaselineAuthorizationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UserBaselineAuthorization, userBaselineAuthorization_);
    };
    DescribeUserBaselineAuthorizationResponseBody() = default ;
    DescribeUserBaselineAuthorizationResponseBody(const DescribeUserBaselineAuthorizationResponseBody &) = default ;
    DescribeUserBaselineAuthorizationResponseBody(DescribeUserBaselineAuthorizationResponseBody &&) = default ;
    DescribeUserBaselineAuthorizationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserBaselineAuthorizationResponseBody() = default ;
    DescribeUserBaselineAuthorizationResponseBody& operator=(const DescribeUserBaselineAuthorizationResponseBody &) = default ;
    DescribeUserBaselineAuthorizationResponseBody& operator=(DescribeUserBaselineAuthorizationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->userBaselineAuthorization_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUserBaselineAuthorizationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // userBaselineAuthorization Field Functions 
    bool hasUserBaselineAuthorization() const { return this->userBaselineAuthorization_ != nullptr;};
    void deleteUserBaselineAuthorization() { this->userBaselineAuthorization_ = nullptr;};
    inline const DescribeUserBaselineAuthorizationResponseBodyUserBaselineAuthorization & userBaselineAuthorization() const { DARABONBA_PTR_GET_CONST(userBaselineAuthorization_, DescribeUserBaselineAuthorizationResponseBodyUserBaselineAuthorization) };
    inline DescribeUserBaselineAuthorizationResponseBodyUserBaselineAuthorization userBaselineAuthorization() { DARABONBA_PTR_GET(userBaselineAuthorization_, DescribeUserBaselineAuthorizationResponseBodyUserBaselineAuthorization) };
    inline DescribeUserBaselineAuthorizationResponseBody& setUserBaselineAuthorization(const DescribeUserBaselineAuthorizationResponseBodyUserBaselineAuthorization & userBaselineAuthorization) { DARABONBA_PTR_SET_VALUE(userBaselineAuthorization_, userBaselineAuthorization) };
    inline DescribeUserBaselineAuthorizationResponseBody& setUserBaselineAuthorization(DescribeUserBaselineAuthorizationResponseBodyUserBaselineAuthorization && userBaselineAuthorization) { DARABONBA_PTR_SET_RVALUE(userBaselineAuthorization_, userBaselineAuthorization) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about whether Security Center is authorized to run configuration checks on cloud services.
    std::shared_ptr<DescribeUserBaselineAuthorizationResponseBodyUserBaselineAuthorization> userBaselineAuthorization_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
