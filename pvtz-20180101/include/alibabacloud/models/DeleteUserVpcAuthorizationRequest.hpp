// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEUSERVPCAUTHORIZATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEUSERVPCAUTHORIZATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Pvtz20180101
{
namespace Models
{
  class DeleteUserVpcAuthorizationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteUserVpcAuthorizationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthType, authType_);
      DARABONBA_PTR_TO_JSON(AuthorizedUserId, authorizedUserId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteUserVpcAuthorizationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthType, authType_);
      DARABONBA_PTR_FROM_JSON(AuthorizedUserId, authorizedUserId_);
    };
    DeleteUserVpcAuthorizationRequest() = default ;
    DeleteUserVpcAuthorizationRequest(const DeleteUserVpcAuthorizationRequest &) = default ;
    DeleteUserVpcAuthorizationRequest(DeleteUserVpcAuthorizationRequest &&) = default ;
    DeleteUserVpcAuthorizationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteUserVpcAuthorizationRequest() = default ;
    DeleteUserVpcAuthorizationRequest& operator=(const DeleteUserVpcAuthorizationRequest &) = default ;
    DeleteUserVpcAuthorizationRequest& operator=(DeleteUserVpcAuthorizationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authType_ == nullptr
        && this->authorizedUserId_ == nullptr; };
    // authType Field Functions 
    bool hasAuthType() const { return this->authType_ != nullptr;};
    void deleteAuthType() { this->authType_ = nullptr;};
    inline string getAuthType() const { DARABONBA_PTR_GET_DEFAULT(authType_, "") };
    inline DeleteUserVpcAuthorizationRequest& setAuthType(string authType) { DARABONBA_PTR_SET_VALUE(authType_, authType) };


    // authorizedUserId Field Functions 
    bool hasAuthorizedUserId() const { return this->authorizedUserId_ != nullptr;};
    void deleteAuthorizedUserId() { this->authorizedUserId_ = nullptr;};
    inline int64_t getAuthorizedUserId() const { DARABONBA_PTR_GET_DEFAULT(authorizedUserId_, 0L) };
    inline DeleteUserVpcAuthorizationRequest& setAuthorizedUserId(int64_t authorizedUserId) { DARABONBA_PTR_SET_VALUE(authorizedUserId_, authorizedUserId) };


  protected:
    // The authorization scope. Valid values:
    // 
    // *   NORMAL: general authorization
    // *   NORMAL: cloud service-related authorization
    // 
    // Default value: NORMAL.
    shared_ptr<string> authType_ {};
    // The ID of the Alibaba Cloud account.
    // 
    // This parameter is required.
    shared_ptr<int64_t> authorizedUserId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Pvtz20180101
#endif
