// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPXFSUSERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPXFSUSERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class CreatePxfsUserRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePxfsUserRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(IdentityName, identityName_);
      DARABONBA_PTR_TO_JSON(PosixGid, posixGid_);
      DARABONBA_PTR_TO_JSON(PosixUid, posixUid_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Role, role_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePxfsUserRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(IdentityName, identityName_);
      DARABONBA_PTR_FROM_JSON(PosixGid, posixGid_);
      DARABONBA_PTR_FROM_JSON(PosixUid, posixUid_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Role, role_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
    };
    CreatePxfsUserRequest() = default ;
    CreatePxfsUserRequest(const CreatePxfsUserRequest &) = default ;
    CreatePxfsUserRequest(CreatePxfsUserRequest &&) = default ;
    CreatePxfsUserRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePxfsUserRequest() = default ;
    CreatePxfsUserRequest& operator=(const CreatePxfsUserRequest &) = default ;
    CreatePxfsUserRequest& operator=(CreatePxfsUserRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceName_ == nullptr
        && this->identityName_ == nullptr && this->posixGid_ == nullptr && this->posixUid_ == nullptr && this->regionId_ == nullptr && this->role_ == nullptr
        && this->tenantId_ == nullptr; };
    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline CreatePxfsUserRequest& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // identityName Field Functions 
    bool hasIdentityName() const { return this->identityName_ != nullptr;};
    void deleteIdentityName() { this->identityName_ = nullptr;};
    inline string getIdentityName() const { DARABONBA_PTR_GET_DEFAULT(identityName_, "") };
    inline CreatePxfsUserRequest& setIdentityName(string identityName) { DARABONBA_PTR_SET_VALUE(identityName_, identityName) };


    // posixGid Field Functions 
    bool hasPosixGid() const { return this->posixGid_ != nullptr;};
    void deletePosixGid() { this->posixGid_ = nullptr;};
    inline int64_t getPosixGid() const { DARABONBA_PTR_GET_DEFAULT(posixGid_, 0L) };
    inline CreatePxfsUserRequest& setPosixGid(int64_t posixGid) { DARABONBA_PTR_SET_VALUE(posixGid_, posixGid) };


    // posixUid Field Functions 
    bool hasPosixUid() const { return this->posixUid_ != nullptr;};
    void deletePosixUid() { this->posixUid_ = nullptr;};
    inline int64_t getPosixUid() const { DARABONBA_PTR_GET_DEFAULT(posixUid_, 0L) };
    inline CreatePxfsUserRequest& setPosixUid(int64_t posixUid) { DARABONBA_PTR_SET_VALUE(posixUid_, posixUid) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreatePxfsUserRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline CreatePxfsUserRequest& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline CreatePxfsUserRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The PolarDB-X instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceName_ {};
    // The name of the identity.
    // 
    // This parameter is required.
    shared_ptr<string> identityName_ {};
    // POSIX GID
    // 
    // This parameter is required.
    shared_ptr<int64_t> posixGid_ {};
    // POSIX UID
    // 
    // This parameter is required.
    shared_ptr<int64_t> posixUid_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The role of the identity.
    // 
    // This parameter is required.
    shared_ptr<string> role_ {};
    // The ID of the tenant.
    // 
    // This parameter is required.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
