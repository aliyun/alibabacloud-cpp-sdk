// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERBASELINEAUTHORIZATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERBASELINEAUTHORIZATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
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
    class UserBaselineAuthorization : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UserBaselineAuthorization& obj) { 
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, UserBaselineAuthorization& obj) { 
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      UserBaselineAuthorization() = default ;
      UserBaselineAuthorization(const UserBaselineAuthorization &) = default ;
      UserBaselineAuthorization(UserBaselineAuthorization &&) = default ;
      UserBaselineAuthorization(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UserBaselineAuthorization() = default ;
      UserBaselineAuthorization& operator=(const UserBaselineAuthorization &) = default ;
      UserBaselineAuthorization& operator=(UserBaselineAuthorization &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->status_ == nullptr; };
      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline UserBaselineAuthorization& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // Indicates whether Security Center is authorized to run configuration checks on cloud services.
      // 
      // *   **0**: no. Security Center is not authorized to run configuration checks on cloud services.
      // *   **1**: yes. Security Center is authorized to run configuration checks on cloud services.
      shared_ptr<int32_t> status_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->userBaselineAuthorization_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUserBaselineAuthorizationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // userBaselineAuthorization Field Functions 
    bool hasUserBaselineAuthorization() const { return this->userBaselineAuthorization_ != nullptr;};
    void deleteUserBaselineAuthorization() { this->userBaselineAuthorization_ = nullptr;};
    inline const DescribeUserBaselineAuthorizationResponseBody::UserBaselineAuthorization & getUserBaselineAuthorization() const { DARABONBA_PTR_GET_CONST(userBaselineAuthorization_, DescribeUserBaselineAuthorizationResponseBody::UserBaselineAuthorization) };
    inline DescribeUserBaselineAuthorizationResponseBody::UserBaselineAuthorization getUserBaselineAuthorization() { DARABONBA_PTR_GET(userBaselineAuthorization_, DescribeUserBaselineAuthorizationResponseBody::UserBaselineAuthorization) };
    inline DescribeUserBaselineAuthorizationResponseBody& setUserBaselineAuthorization(const DescribeUserBaselineAuthorizationResponseBody::UserBaselineAuthorization & userBaselineAuthorization) { DARABONBA_PTR_SET_VALUE(userBaselineAuthorization_, userBaselineAuthorization) };
    inline DescribeUserBaselineAuthorizationResponseBody& setUserBaselineAuthorization(DescribeUserBaselineAuthorizationResponseBody::UserBaselineAuthorization && userBaselineAuthorization) { DARABONBA_PTR_SET_RVALUE(userBaselineAuthorization_, userBaselineAuthorization) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The information about whether Security Center is authorized to run configuration checks on cloud services.
    shared_ptr<DescribeUserBaselineAuthorizationResponseBody::UserBaselineAuthorization> userBaselineAuthorization_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
