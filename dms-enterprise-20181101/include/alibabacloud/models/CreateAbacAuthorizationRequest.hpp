// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEABACAUTHORIZATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEABACAUTHORIZATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class CreateAbacAuthorizationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAbacAuthorizationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IdentityType, identityType_);
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
      DARABONBA_PTR_TO_JSON(RoleId, roleId_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAbacAuthorizationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IdentityType, identityType_);
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
      DARABONBA_PTR_FROM_JSON(RoleId, roleId_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    CreateAbacAuthorizationRequest() = default ;
    CreateAbacAuthorizationRequest(const CreateAbacAuthorizationRequest &) = default ;
    CreateAbacAuthorizationRequest(CreateAbacAuthorizationRequest &&) = default ;
    CreateAbacAuthorizationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAbacAuthorizationRequest() = default ;
    CreateAbacAuthorizationRequest& operator=(const CreateAbacAuthorizationRequest &) = default ;
    CreateAbacAuthorizationRequest& operator=(CreateAbacAuthorizationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->identityType_ != nullptr
        && this->policyId_ != nullptr && this->roleId_ != nullptr && this->tid_ != nullptr && this->userId_ != nullptr; };
    // identityType Field Functions 
    bool hasIdentityType() const { return this->identityType_ != nullptr;};
    void deleteIdentityType() { this->identityType_ = nullptr;};
    inline string identityType() const { DARABONBA_PTR_GET_DEFAULT(identityType_, "") };
    inline CreateAbacAuthorizationRequest& setIdentityType(string identityType) { DARABONBA_PTR_SET_VALUE(identityType_, identityType) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline int64_t policyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, 0L) };
    inline CreateAbacAuthorizationRequest& setPolicyId(int64_t policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // roleId Field Functions 
    bool hasRoleId() const { return this->roleId_ != nullptr;};
    void deleteRoleId() { this->roleId_ = nullptr;};
    inline int64_t roleId() const { DARABONBA_PTR_GET_DEFAULT(roleId_, 0L) };
    inline CreateAbacAuthorizationRequest& setRoleId(int64_t roleId) { DARABONBA_PTR_SET_VALUE(roleId_, roleId) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline CreateAbacAuthorizationRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline int64_t userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
    inline CreateAbacAuthorizationRequest& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> identityType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> policyId_ = nullptr;
    std::shared_ptr<int64_t> roleId_ = nullptr;
    std::shared_ptr<int64_t> tid_ = nullptr;
    std::shared_ptr<int64_t> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
