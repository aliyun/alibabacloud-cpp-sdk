// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKKMSAUTHORIZEDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKKMSAUTHORIZEDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class CheckKMSAuthorizedResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckKMSAuthorizedResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorizationState, authorizationState_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RoleArn, roleArn_);
    };
    friend void from_json(const Darabonba::Json& j, CheckKMSAuthorizedResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorizationState, authorizationState_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RoleArn, roleArn_);
    };
    CheckKMSAuthorizedResponseBody() = default ;
    CheckKMSAuthorizedResponseBody(const CheckKMSAuthorizedResponseBody &) = default ;
    CheckKMSAuthorizedResponseBody(CheckKMSAuthorizedResponseBody &&) = default ;
    CheckKMSAuthorizedResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckKMSAuthorizedResponseBody() = default ;
    CheckKMSAuthorizedResponseBody& operator=(const CheckKMSAuthorizedResponseBody &) = default ;
    CheckKMSAuthorizedResponseBody& operator=(CheckKMSAuthorizedResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authorizationState_ == nullptr
        && return this->DBClusterId_ == nullptr && return this->requestId_ == nullptr && return this->roleArn_ == nullptr; };
    // authorizationState Field Functions 
    bool hasAuthorizationState() const { return this->authorizationState_ != nullptr;};
    void deleteAuthorizationState() { this->authorizationState_ = nullptr;};
    inline int32_t authorizationState() const { DARABONBA_PTR_GET_DEFAULT(authorizationState_, 0) };
    inline CheckKMSAuthorizedResponseBody& setAuthorizationState(int32_t authorizationState) { DARABONBA_PTR_SET_VALUE(authorizationState_, authorizationState) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline CheckKMSAuthorizedResponseBody& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CheckKMSAuthorizedResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // roleArn Field Functions 
    bool hasRoleArn() const { return this->roleArn_ != nullptr;};
    void deleteRoleArn() { this->roleArn_ = nullptr;};
    inline string roleArn() const { DARABONBA_PTR_GET_DEFAULT(roleArn_, "") };
    inline CheckKMSAuthorizedResponseBody& setRoleArn(string roleArn) { DARABONBA_PTR_SET_VALUE(roleArn_, roleArn) };


  protected:
    // Indicates whether the cluster is authorized to use KMS. Valid values:
    // 
    // *   **0**: no.
    // *   **1**: yes.
    std::shared_ptr<int32_t> authorizationState_ = nullptr;
    // The cluster ID.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The Alibaba Cloud Resource Name (ARN) of the RAM role. A RAM role is a virtual identity that you can create within your Alibaba Cloud account. For more information, see [RAM role overview](https://help.aliyun.com/document_detail/93689.html).
    std::shared_ptr<string> roleArn_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
