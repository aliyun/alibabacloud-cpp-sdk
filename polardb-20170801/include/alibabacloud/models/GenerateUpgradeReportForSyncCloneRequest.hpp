// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEUPGRADEREPORTFORSYNCCLONEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATEUPGRADEREPORTFORSYNCCLONEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class GenerateUpgradeReportForSyncCloneRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateUpgradeReportForSyncCloneRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CreationCategory, creationCategory_);
      DARABONBA_PTR_TO_JSON(CreationOption, creationOption_);
      DARABONBA_PTR_TO_JSON(DBName, DBName_);
      DARABONBA_PTR_TO_JSON(DBType, DBType_);
      DARABONBA_PTR_TO_JSON(DBVersion, DBVersion_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Reserve, reserve_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SourceDBClusterId, sourceDBClusterId_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateUpgradeReportForSyncCloneRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CreationCategory, creationCategory_);
      DARABONBA_PTR_FROM_JSON(CreationOption, creationOption_);
      DARABONBA_PTR_FROM_JSON(DBName, DBName_);
      DARABONBA_PTR_FROM_JSON(DBType, DBType_);
      DARABONBA_PTR_FROM_JSON(DBVersion, DBVersion_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Reserve, reserve_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SourceDBClusterId, sourceDBClusterId_);
    };
    GenerateUpgradeReportForSyncCloneRequest() = default ;
    GenerateUpgradeReportForSyncCloneRequest(const GenerateUpgradeReportForSyncCloneRequest &) = default ;
    GenerateUpgradeReportForSyncCloneRequest(GenerateUpgradeReportForSyncCloneRequest &&) = default ;
    GenerateUpgradeReportForSyncCloneRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateUpgradeReportForSyncCloneRequest() = default ;
    GenerateUpgradeReportForSyncCloneRequest& operator=(const GenerateUpgradeReportForSyncCloneRequest &) = default ;
    GenerateUpgradeReportForSyncCloneRequest& operator=(GenerateUpgradeReportForSyncCloneRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->creationCategory_ == nullptr
        && return this->creationOption_ == nullptr && return this->DBName_ == nullptr && return this->DBType_ == nullptr && return this->DBVersion_ == nullptr && return this->ownerAccount_ == nullptr
        && return this->ownerId_ == nullptr && return this->regionId_ == nullptr && return this->reserve_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr
        && return this->sourceDBClusterId_ == nullptr; };
    // creationCategory Field Functions 
    bool hasCreationCategory() const { return this->creationCategory_ != nullptr;};
    void deleteCreationCategory() { this->creationCategory_ = nullptr;};
    inline string creationCategory() const { DARABONBA_PTR_GET_DEFAULT(creationCategory_, "") };
    inline GenerateUpgradeReportForSyncCloneRequest& setCreationCategory(string creationCategory) { DARABONBA_PTR_SET_VALUE(creationCategory_, creationCategory) };


    // creationOption Field Functions 
    bool hasCreationOption() const { return this->creationOption_ != nullptr;};
    void deleteCreationOption() { this->creationOption_ = nullptr;};
    inline string creationOption() const { DARABONBA_PTR_GET_DEFAULT(creationOption_, "") };
    inline GenerateUpgradeReportForSyncCloneRequest& setCreationOption(string creationOption) { DARABONBA_PTR_SET_VALUE(creationOption_, creationOption) };


    // DBName Field Functions 
    bool hasDBName() const { return this->DBName_ != nullptr;};
    void deleteDBName() { this->DBName_ = nullptr;};
    inline string DBName() const { DARABONBA_PTR_GET_DEFAULT(DBName_, "") };
    inline GenerateUpgradeReportForSyncCloneRequest& setDBName(string DBName) { DARABONBA_PTR_SET_VALUE(DBName_, DBName) };


    // DBType Field Functions 
    bool hasDBType() const { return this->DBType_ != nullptr;};
    void deleteDBType() { this->DBType_ = nullptr;};
    inline string DBType() const { DARABONBA_PTR_GET_DEFAULT(DBType_, "") };
    inline GenerateUpgradeReportForSyncCloneRequest& setDBType(string DBType) { DARABONBA_PTR_SET_VALUE(DBType_, DBType) };


    // DBVersion Field Functions 
    bool hasDBVersion() const { return this->DBVersion_ != nullptr;};
    void deleteDBVersion() { this->DBVersion_ = nullptr;};
    inline string DBVersion() const { DARABONBA_PTR_GET_DEFAULT(DBVersion_, "") };
    inline GenerateUpgradeReportForSyncCloneRequest& setDBVersion(string DBVersion) { DARABONBA_PTR_SET_VALUE(DBVersion_, DBVersion) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline GenerateUpgradeReportForSyncCloneRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline GenerateUpgradeReportForSyncCloneRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GenerateUpgradeReportForSyncCloneRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // reserve Field Functions 
    bool hasReserve() const { return this->reserve_ != nullptr;};
    void deleteReserve() { this->reserve_ = nullptr;};
    inline string reserve() const { DARABONBA_PTR_GET_DEFAULT(reserve_, "") };
    inline GenerateUpgradeReportForSyncCloneRequest& setReserve(string reserve) { DARABONBA_PTR_SET_VALUE(reserve_, reserve) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline GenerateUpgradeReportForSyncCloneRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline GenerateUpgradeReportForSyncCloneRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // sourceDBClusterId Field Functions 
    bool hasSourceDBClusterId() const { return this->sourceDBClusterId_ != nullptr;};
    void deleteSourceDBClusterId() { this->sourceDBClusterId_ = nullptr;};
    inline string sourceDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(sourceDBClusterId_, "") };
    inline GenerateUpgradeReportForSyncCloneRequest& setSourceDBClusterId(string sourceDBClusterId) { DARABONBA_PTR_SET_VALUE(sourceDBClusterId_, sourceDBClusterId) };


  protected:
    std::shared_ptr<string> creationCategory_ = nullptr;
    std::shared_ptr<string> creationOption_ = nullptr;
    std::shared_ptr<string> DBName_ = nullptr;
    std::shared_ptr<string> DBType_ = nullptr;
    std::shared_ptr<string> DBVersion_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> reserve_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    std::shared_ptr<string> sourceDBClusterId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
