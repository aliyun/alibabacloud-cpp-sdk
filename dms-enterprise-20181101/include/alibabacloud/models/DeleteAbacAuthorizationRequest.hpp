// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEABACAUTHORIZATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEABACAUTHORIZATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class DeleteAbacAuthorizationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAbacAuthorizationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorizationId, authorizationId_);
      DARABONBA_PTR_TO_JSON(IdentityType, identityType_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAbacAuthorizationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorizationId, authorizationId_);
      DARABONBA_PTR_FROM_JSON(IdentityType, identityType_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    DeleteAbacAuthorizationRequest() = default ;
    DeleteAbacAuthorizationRequest(const DeleteAbacAuthorizationRequest &) = default ;
    DeleteAbacAuthorizationRequest(DeleteAbacAuthorizationRequest &&) = default ;
    DeleteAbacAuthorizationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAbacAuthorizationRequest() = default ;
    DeleteAbacAuthorizationRequest& operator=(const DeleteAbacAuthorizationRequest &) = default ;
    DeleteAbacAuthorizationRequest& operator=(DeleteAbacAuthorizationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authorizationId_ == nullptr
        && return this->identityType_ == nullptr && return this->tid_ == nullptr; };
    // authorizationId Field Functions 
    bool hasAuthorizationId() const { return this->authorizationId_ != nullptr;};
    void deleteAuthorizationId() { this->authorizationId_ = nullptr;};
    inline int64_t authorizationId() const { DARABONBA_PTR_GET_DEFAULT(authorizationId_, 0L) };
    inline DeleteAbacAuthorizationRequest& setAuthorizationId(int64_t authorizationId) { DARABONBA_PTR_SET_VALUE(authorizationId_, authorizationId) };


    // identityType Field Functions 
    bool hasIdentityType() const { return this->identityType_ != nullptr;};
    void deleteIdentityType() { this->identityType_ = nullptr;};
    inline string identityType() const { DARABONBA_PTR_GET_DEFAULT(identityType_, "") };
    inline DeleteAbacAuthorizationRequest& setIdentityType(string identityType) { DARABONBA_PTR_SET_VALUE(identityType_, identityType) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline DeleteAbacAuthorizationRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The authorization ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> authorizationId_ = nullptr;
    // The type of object to which you want to attach the policy.********
    // 
    // Valid values:
    // 
    // *   USER
    // *   ROLE
    // 
    // This parameter is required.
    std::shared_ptr<string> identityType_ = nullptr;
    // The ID of the tenant.
    // 
    // > To view the ID of the tenant, go to the Data Management (DMS) console and move the pointer over the profile picture in the upper-right corner. For more information, see the [View information about the current tenant](https://help.aliyun.com/document_detail/181330.html) section of the "Manage DMS tenants" topic.
    std::shared_ptr<int64_t> tid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
