// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKCLOUDRESOURCEAUTHORIZEDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKCLOUDRESOURCEAUTHORIZEDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dds20151201
{
namespace Models
{
  class CheckCloudResourceAuthorizedResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckCloudResourceAuthorizedResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorizationState, authorizationState_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RoleArn, roleArn_);
    };
    friend void from_json(const Darabonba::Json& j, CheckCloudResourceAuthorizedResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorizationState, authorizationState_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RoleArn, roleArn_);
    };
    CheckCloudResourceAuthorizedResponseBody() = default ;
    CheckCloudResourceAuthorizedResponseBody(const CheckCloudResourceAuthorizedResponseBody &) = default ;
    CheckCloudResourceAuthorizedResponseBody(CheckCloudResourceAuthorizedResponseBody &&) = default ;
    CheckCloudResourceAuthorizedResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckCloudResourceAuthorizedResponseBody() = default ;
    CheckCloudResourceAuthorizedResponseBody& operator=(const CheckCloudResourceAuthorizedResponseBody &) = default ;
    CheckCloudResourceAuthorizedResponseBody& operator=(CheckCloudResourceAuthorizedResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authorizationState_ == nullptr
        && this->requestId_ == nullptr && this->roleArn_ == nullptr; };
    // authorizationState Field Functions 
    bool hasAuthorizationState() const { return this->authorizationState_ != nullptr;};
    void deleteAuthorizationState() { this->authorizationState_ = nullptr;};
    inline int32_t getAuthorizationState() const { DARABONBA_PTR_GET_DEFAULT(authorizationState_, 0) };
    inline CheckCloudResourceAuthorizedResponseBody& setAuthorizationState(int32_t authorizationState) { DARABONBA_PTR_SET_VALUE(authorizationState_, authorizationState) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CheckCloudResourceAuthorizedResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // roleArn Field Functions 
    bool hasRoleArn() const { return this->roleArn_ != nullptr;};
    void deleteRoleArn() { this->roleArn_ = nullptr;};
    inline string getRoleArn() const { DARABONBA_PTR_GET_DEFAULT(roleArn_, "") };
    inline CheckCloudResourceAuthorizedResponseBody& setRoleArn(string roleArn) { DARABONBA_PTR_SET_VALUE(roleArn_, roleArn) };


  protected:
    // Indicates whether KMS keys are authorized to ApsaraDB for MongoDB instances. Valid values:
    // 
    // *   **0**: KMS keys are not authorized.
    // *   **1**: KMS keys are authorized.
    // *   **2**: KMS is not enabled.
    shared_ptr<int32_t> authorizationState_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The role information of the authorized Alibaba Resource Name (ARN).
    // 
    // >  This parameter is returned only when the value of the **AuthorizationState** parameter is **1**.
    shared_ptr<string> roleArn_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dds20151201
#endif
