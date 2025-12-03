// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RELATEDBFORHBASEHAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RELATEDBFORHBASEHAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20170115
{
namespace Models
{
  class RelateDbForHBaseHaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RelateDbForHBaseHaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(HaActive, haActive_);
      DARABONBA_PTR_TO_JSON(HaActiveClusterKey, haActiveClusterKey_);
      DARABONBA_PTR_TO_JSON(HaActiveDBType, haActiveDBType_);
      DARABONBA_PTR_TO_JSON(HaActiveHbaseFsDir, haActiveHbaseFsDir_);
      DARABONBA_PTR_TO_JSON(HaActiveHdfsUri, haActiveHdfsUri_);
      DARABONBA_PTR_TO_JSON(HaActivePassword, haActivePassword_);
      DARABONBA_PTR_TO_JSON(HaActiveUser, haActiveUser_);
      DARABONBA_PTR_TO_JSON(HaActiveVersion, haActiveVersion_);
      DARABONBA_PTR_TO_JSON(HaMigrateType, haMigrateType_);
      DARABONBA_PTR_TO_JSON(HaStandby, haStandby_);
      DARABONBA_PTR_TO_JSON(HaStandbyClusterKey, haStandbyClusterKey_);
      DARABONBA_PTR_TO_JSON(HaStandbyDBType, haStandbyDBType_);
      DARABONBA_PTR_TO_JSON(HaStandbyHbaseFsDir, haStandbyHbaseFsDir_);
      DARABONBA_PTR_TO_JSON(HaStandbyHdfsUri, haStandbyHdfsUri_);
      DARABONBA_PTR_TO_JSON(HaStandbyPassword, haStandbyPassword_);
      DARABONBA_PTR_TO_JSON(HaStandbyUser, haStandbyUser_);
      DARABONBA_PTR_TO_JSON(HaStandbyVersion, haStandbyVersion_);
      DARABONBA_PTR_TO_JSON(HaTables, haTables_);
      DARABONBA_PTR_TO_JSON(IsActiveStandard, isActiveStandard_);
      DARABONBA_PTR_TO_JSON(IsStandbyStandard, isStandbyStandard_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, RelateDbForHBaseHaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(HaActive, haActive_);
      DARABONBA_PTR_FROM_JSON(HaActiveClusterKey, haActiveClusterKey_);
      DARABONBA_PTR_FROM_JSON(HaActiveDBType, haActiveDBType_);
      DARABONBA_PTR_FROM_JSON(HaActiveHbaseFsDir, haActiveHbaseFsDir_);
      DARABONBA_PTR_FROM_JSON(HaActiveHdfsUri, haActiveHdfsUri_);
      DARABONBA_PTR_FROM_JSON(HaActivePassword, haActivePassword_);
      DARABONBA_PTR_FROM_JSON(HaActiveUser, haActiveUser_);
      DARABONBA_PTR_FROM_JSON(HaActiveVersion, haActiveVersion_);
      DARABONBA_PTR_FROM_JSON(HaMigrateType, haMigrateType_);
      DARABONBA_PTR_FROM_JSON(HaStandby, haStandby_);
      DARABONBA_PTR_FROM_JSON(HaStandbyClusterKey, haStandbyClusterKey_);
      DARABONBA_PTR_FROM_JSON(HaStandbyDBType, haStandbyDBType_);
      DARABONBA_PTR_FROM_JSON(HaStandbyHbaseFsDir, haStandbyHbaseFsDir_);
      DARABONBA_PTR_FROM_JSON(HaStandbyHdfsUri, haStandbyHdfsUri_);
      DARABONBA_PTR_FROM_JSON(HaStandbyPassword, haStandbyPassword_);
      DARABONBA_PTR_FROM_JSON(HaStandbyUser, haStandbyUser_);
      DARABONBA_PTR_FROM_JSON(HaStandbyVersion, haStandbyVersion_);
      DARABONBA_PTR_FROM_JSON(HaTables, haTables_);
      DARABONBA_PTR_FROM_JSON(IsActiveStandard, isActiveStandard_);
      DARABONBA_PTR_FROM_JSON(IsStandbyStandard, isStandbyStandard_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    RelateDbForHBaseHaRequest() = default ;
    RelateDbForHBaseHaRequest(const RelateDbForHBaseHaRequest &) = default ;
    RelateDbForHBaseHaRequest(RelateDbForHBaseHaRequest &&) = default ;
    RelateDbForHBaseHaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RelateDbForHBaseHaRequest() = default ;
    RelateDbForHBaseHaRequest& operator=(const RelateDbForHBaseHaRequest &) = default ;
    RelateDbForHBaseHaRequest& operator=(RelateDbForHBaseHaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->haActive_ == nullptr && return this->haActiveClusterKey_ == nullptr && return this->haActiveDBType_ == nullptr && return this->haActiveHbaseFsDir_ == nullptr && return this->haActiveHdfsUri_ == nullptr
        && return this->haActivePassword_ == nullptr && return this->haActiveUser_ == nullptr && return this->haActiveVersion_ == nullptr && return this->haMigrateType_ == nullptr && return this->haStandby_ == nullptr
        && return this->haStandbyClusterKey_ == nullptr && return this->haStandbyDBType_ == nullptr && return this->haStandbyHbaseFsDir_ == nullptr && return this->haStandbyHdfsUri_ == nullptr && return this->haStandbyPassword_ == nullptr
        && return this->haStandbyUser_ == nullptr && return this->haStandbyVersion_ == nullptr && return this->haTables_ == nullptr && return this->isActiveStandard_ == nullptr && return this->isStandbyStandard_ == nullptr
        && return this->ownerId_ == nullptr && return this->regionId_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->zoneId_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline RelateDbForHBaseHaRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // haActive Field Functions 
    bool hasHaActive() const { return this->haActive_ != nullptr;};
    void deleteHaActive() { this->haActive_ = nullptr;};
    inline string haActive() const { DARABONBA_PTR_GET_DEFAULT(haActive_, "") };
    inline RelateDbForHBaseHaRequest& setHaActive(string haActive) { DARABONBA_PTR_SET_VALUE(haActive_, haActive) };


    // haActiveClusterKey Field Functions 
    bool hasHaActiveClusterKey() const { return this->haActiveClusterKey_ != nullptr;};
    void deleteHaActiveClusterKey() { this->haActiveClusterKey_ = nullptr;};
    inline string haActiveClusterKey() const { DARABONBA_PTR_GET_DEFAULT(haActiveClusterKey_, "") };
    inline RelateDbForHBaseHaRequest& setHaActiveClusterKey(string haActiveClusterKey) { DARABONBA_PTR_SET_VALUE(haActiveClusterKey_, haActiveClusterKey) };


    // haActiveDBType Field Functions 
    bool hasHaActiveDBType() const { return this->haActiveDBType_ != nullptr;};
    void deleteHaActiveDBType() { this->haActiveDBType_ = nullptr;};
    inline string haActiveDBType() const { DARABONBA_PTR_GET_DEFAULT(haActiveDBType_, "") };
    inline RelateDbForHBaseHaRequest& setHaActiveDBType(string haActiveDBType) { DARABONBA_PTR_SET_VALUE(haActiveDBType_, haActiveDBType) };


    // haActiveHbaseFsDir Field Functions 
    bool hasHaActiveHbaseFsDir() const { return this->haActiveHbaseFsDir_ != nullptr;};
    void deleteHaActiveHbaseFsDir() { this->haActiveHbaseFsDir_ = nullptr;};
    inline string haActiveHbaseFsDir() const { DARABONBA_PTR_GET_DEFAULT(haActiveHbaseFsDir_, "") };
    inline RelateDbForHBaseHaRequest& setHaActiveHbaseFsDir(string haActiveHbaseFsDir) { DARABONBA_PTR_SET_VALUE(haActiveHbaseFsDir_, haActiveHbaseFsDir) };


    // haActiveHdfsUri Field Functions 
    bool hasHaActiveHdfsUri() const { return this->haActiveHdfsUri_ != nullptr;};
    void deleteHaActiveHdfsUri() { this->haActiveHdfsUri_ = nullptr;};
    inline string haActiveHdfsUri() const { DARABONBA_PTR_GET_DEFAULT(haActiveHdfsUri_, "") };
    inline RelateDbForHBaseHaRequest& setHaActiveHdfsUri(string haActiveHdfsUri) { DARABONBA_PTR_SET_VALUE(haActiveHdfsUri_, haActiveHdfsUri) };


    // haActivePassword Field Functions 
    bool hasHaActivePassword() const { return this->haActivePassword_ != nullptr;};
    void deleteHaActivePassword() { this->haActivePassword_ = nullptr;};
    inline string haActivePassword() const { DARABONBA_PTR_GET_DEFAULT(haActivePassword_, "") };
    inline RelateDbForHBaseHaRequest& setHaActivePassword(string haActivePassword) { DARABONBA_PTR_SET_VALUE(haActivePassword_, haActivePassword) };


    // haActiveUser Field Functions 
    bool hasHaActiveUser() const { return this->haActiveUser_ != nullptr;};
    void deleteHaActiveUser() { this->haActiveUser_ = nullptr;};
    inline string haActiveUser() const { DARABONBA_PTR_GET_DEFAULT(haActiveUser_, "") };
    inline RelateDbForHBaseHaRequest& setHaActiveUser(string haActiveUser) { DARABONBA_PTR_SET_VALUE(haActiveUser_, haActiveUser) };


    // haActiveVersion Field Functions 
    bool hasHaActiveVersion() const { return this->haActiveVersion_ != nullptr;};
    void deleteHaActiveVersion() { this->haActiveVersion_ = nullptr;};
    inline string haActiveVersion() const { DARABONBA_PTR_GET_DEFAULT(haActiveVersion_, "") };
    inline RelateDbForHBaseHaRequest& setHaActiveVersion(string haActiveVersion) { DARABONBA_PTR_SET_VALUE(haActiveVersion_, haActiveVersion) };


    // haMigrateType Field Functions 
    bool hasHaMigrateType() const { return this->haMigrateType_ != nullptr;};
    void deleteHaMigrateType() { this->haMigrateType_ = nullptr;};
    inline string haMigrateType() const { DARABONBA_PTR_GET_DEFAULT(haMigrateType_, "") };
    inline RelateDbForHBaseHaRequest& setHaMigrateType(string haMigrateType) { DARABONBA_PTR_SET_VALUE(haMigrateType_, haMigrateType) };


    // haStandby Field Functions 
    bool hasHaStandby() const { return this->haStandby_ != nullptr;};
    void deleteHaStandby() { this->haStandby_ = nullptr;};
    inline string haStandby() const { DARABONBA_PTR_GET_DEFAULT(haStandby_, "") };
    inline RelateDbForHBaseHaRequest& setHaStandby(string haStandby) { DARABONBA_PTR_SET_VALUE(haStandby_, haStandby) };


    // haStandbyClusterKey Field Functions 
    bool hasHaStandbyClusterKey() const { return this->haStandbyClusterKey_ != nullptr;};
    void deleteHaStandbyClusterKey() { this->haStandbyClusterKey_ = nullptr;};
    inline string haStandbyClusterKey() const { DARABONBA_PTR_GET_DEFAULT(haStandbyClusterKey_, "") };
    inline RelateDbForHBaseHaRequest& setHaStandbyClusterKey(string haStandbyClusterKey) { DARABONBA_PTR_SET_VALUE(haStandbyClusterKey_, haStandbyClusterKey) };


    // haStandbyDBType Field Functions 
    bool hasHaStandbyDBType() const { return this->haStandbyDBType_ != nullptr;};
    void deleteHaStandbyDBType() { this->haStandbyDBType_ = nullptr;};
    inline string haStandbyDBType() const { DARABONBA_PTR_GET_DEFAULT(haStandbyDBType_, "") };
    inline RelateDbForHBaseHaRequest& setHaStandbyDBType(string haStandbyDBType) { DARABONBA_PTR_SET_VALUE(haStandbyDBType_, haStandbyDBType) };


    // haStandbyHbaseFsDir Field Functions 
    bool hasHaStandbyHbaseFsDir() const { return this->haStandbyHbaseFsDir_ != nullptr;};
    void deleteHaStandbyHbaseFsDir() { this->haStandbyHbaseFsDir_ = nullptr;};
    inline string haStandbyHbaseFsDir() const { DARABONBA_PTR_GET_DEFAULT(haStandbyHbaseFsDir_, "") };
    inline RelateDbForHBaseHaRequest& setHaStandbyHbaseFsDir(string haStandbyHbaseFsDir) { DARABONBA_PTR_SET_VALUE(haStandbyHbaseFsDir_, haStandbyHbaseFsDir) };


    // haStandbyHdfsUri Field Functions 
    bool hasHaStandbyHdfsUri() const { return this->haStandbyHdfsUri_ != nullptr;};
    void deleteHaStandbyHdfsUri() { this->haStandbyHdfsUri_ = nullptr;};
    inline string haStandbyHdfsUri() const { DARABONBA_PTR_GET_DEFAULT(haStandbyHdfsUri_, "") };
    inline RelateDbForHBaseHaRequest& setHaStandbyHdfsUri(string haStandbyHdfsUri) { DARABONBA_PTR_SET_VALUE(haStandbyHdfsUri_, haStandbyHdfsUri) };


    // haStandbyPassword Field Functions 
    bool hasHaStandbyPassword() const { return this->haStandbyPassword_ != nullptr;};
    void deleteHaStandbyPassword() { this->haStandbyPassword_ = nullptr;};
    inline string haStandbyPassword() const { DARABONBA_PTR_GET_DEFAULT(haStandbyPassword_, "") };
    inline RelateDbForHBaseHaRequest& setHaStandbyPassword(string haStandbyPassword) { DARABONBA_PTR_SET_VALUE(haStandbyPassword_, haStandbyPassword) };


    // haStandbyUser Field Functions 
    bool hasHaStandbyUser() const { return this->haStandbyUser_ != nullptr;};
    void deleteHaStandbyUser() { this->haStandbyUser_ = nullptr;};
    inline string haStandbyUser() const { DARABONBA_PTR_GET_DEFAULT(haStandbyUser_, "") };
    inline RelateDbForHBaseHaRequest& setHaStandbyUser(string haStandbyUser) { DARABONBA_PTR_SET_VALUE(haStandbyUser_, haStandbyUser) };


    // haStandbyVersion Field Functions 
    bool hasHaStandbyVersion() const { return this->haStandbyVersion_ != nullptr;};
    void deleteHaStandbyVersion() { this->haStandbyVersion_ = nullptr;};
    inline string haStandbyVersion() const { DARABONBA_PTR_GET_DEFAULT(haStandbyVersion_, "") };
    inline RelateDbForHBaseHaRequest& setHaStandbyVersion(string haStandbyVersion) { DARABONBA_PTR_SET_VALUE(haStandbyVersion_, haStandbyVersion) };


    // haTables Field Functions 
    bool hasHaTables() const { return this->haTables_ != nullptr;};
    void deleteHaTables() { this->haTables_ = nullptr;};
    inline string haTables() const { DARABONBA_PTR_GET_DEFAULT(haTables_, "") };
    inline RelateDbForHBaseHaRequest& setHaTables(string haTables) { DARABONBA_PTR_SET_VALUE(haTables_, haTables) };


    // isActiveStandard Field Functions 
    bool hasIsActiveStandard() const { return this->isActiveStandard_ != nullptr;};
    void deleteIsActiveStandard() { this->isActiveStandard_ = nullptr;};
    inline bool isActiveStandard() const { DARABONBA_PTR_GET_DEFAULT(isActiveStandard_, false) };
    inline RelateDbForHBaseHaRequest& setIsActiveStandard(bool isActiveStandard) { DARABONBA_PTR_SET_VALUE(isActiveStandard_, isActiveStandard) };


    // isStandbyStandard Field Functions 
    bool hasIsStandbyStandard() const { return this->isStandbyStandard_ != nullptr;};
    void deleteIsStandbyStandard() { this->isStandbyStandard_ = nullptr;};
    inline bool isStandbyStandard() const { DARABONBA_PTR_GET_DEFAULT(isStandbyStandard_, false) };
    inline RelateDbForHBaseHaRequest& setIsStandbyStandard(bool isStandbyStandard) { DARABONBA_PTR_SET_VALUE(isStandbyStandard_, isStandbyStandard) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline RelateDbForHBaseHaRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline RelateDbForHBaseHaRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline RelateDbForHBaseHaRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline RelateDbForHBaseHaRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline RelateDbForHBaseHaRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> haActive_ = nullptr;
    std::shared_ptr<string> haActiveClusterKey_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> haActiveDBType_ = nullptr;
    std::shared_ptr<string> haActiveHbaseFsDir_ = nullptr;
    std::shared_ptr<string> haActiveHdfsUri_ = nullptr;
    std::shared_ptr<string> haActivePassword_ = nullptr;
    std::shared_ptr<string> haActiveUser_ = nullptr;
    std::shared_ptr<string> haActiveVersion_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> haMigrateType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> haStandby_ = nullptr;
    std::shared_ptr<string> haStandbyClusterKey_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> haStandbyDBType_ = nullptr;
    std::shared_ptr<string> haStandbyHbaseFsDir_ = nullptr;
    std::shared_ptr<string> haStandbyHdfsUri_ = nullptr;
    std::shared_ptr<string> haStandbyPassword_ = nullptr;
    std::shared_ptr<string> haStandbyUser_ = nullptr;
    std::shared_ptr<string> haStandbyVersion_ = nullptr;
    std::shared_ptr<string> haTables_ = nullptr;
    // This parameter is required.
    std::shared_ptr<bool> isActiveStandard_ = nullptr;
    // This parameter is required.
    std::shared_ptr<bool> isStandbyStandard_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20170115
#endif
