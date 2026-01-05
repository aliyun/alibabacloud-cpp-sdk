// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EVALUATEREGIONRESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EVALUATEREGIONRESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class EvaluateRegionResourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EvaluateRegionResourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceConnType, DBInstanceConnType_);
      DARABONBA_PTR_TO_JSON(DBNodeClass, DBNodeClass_);
      DARABONBA_PTR_TO_JSON(DBType, DBType_);
      DARABONBA_PTR_TO_JSON(DBVersion, DBVersion_);
      DARABONBA_PTR_TO_JSON(DispenseMode, dispenseMode_);
      DARABONBA_PTR_TO_JSON(NeedMaxScaleLink, needMaxScaleLink_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SubDomain, subDomain_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, EvaluateRegionResourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceConnType, DBInstanceConnType_);
      DARABONBA_PTR_FROM_JSON(DBNodeClass, DBNodeClass_);
      DARABONBA_PTR_FROM_JSON(DBType, DBType_);
      DARABONBA_PTR_FROM_JSON(DBVersion, DBVersion_);
      DARABONBA_PTR_FROM_JSON(DispenseMode, dispenseMode_);
      DARABONBA_PTR_FROM_JSON(NeedMaxScaleLink, needMaxScaleLink_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SubDomain, subDomain_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    EvaluateRegionResourceRequest() = default ;
    EvaluateRegionResourceRequest(const EvaluateRegionResourceRequest &) = default ;
    EvaluateRegionResourceRequest(EvaluateRegionResourceRequest &&) = default ;
    EvaluateRegionResourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EvaluateRegionResourceRequest() = default ;
    EvaluateRegionResourceRequest& operator=(const EvaluateRegionResourceRequest &) = default ;
    EvaluateRegionResourceRequest& operator=(EvaluateRegionResourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceConnType_ == nullptr
        && this->DBNodeClass_ == nullptr && this->DBType_ == nullptr && this->DBVersion_ == nullptr && this->dispenseMode_ == nullptr && this->needMaxScaleLink_ == nullptr
        && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->resourceOwnerId_ == nullptr && this->subDomain_ == nullptr && this->zoneId_ == nullptr; };
    // DBInstanceConnType Field Functions 
    bool hasDBInstanceConnType() const { return this->DBInstanceConnType_ != nullptr;};
    void deleteDBInstanceConnType() { this->DBInstanceConnType_ = nullptr;};
    inline string getDBInstanceConnType() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceConnType_, "") };
    inline EvaluateRegionResourceRequest& setDBInstanceConnType(string DBInstanceConnType) { DARABONBA_PTR_SET_VALUE(DBInstanceConnType_, DBInstanceConnType) };


    // DBNodeClass Field Functions 
    bool hasDBNodeClass() const { return this->DBNodeClass_ != nullptr;};
    void deleteDBNodeClass() { this->DBNodeClass_ = nullptr;};
    inline string getDBNodeClass() const { DARABONBA_PTR_GET_DEFAULT(DBNodeClass_, "") };
    inline EvaluateRegionResourceRequest& setDBNodeClass(string DBNodeClass) { DARABONBA_PTR_SET_VALUE(DBNodeClass_, DBNodeClass) };


    // DBType Field Functions 
    bool hasDBType() const { return this->DBType_ != nullptr;};
    void deleteDBType() { this->DBType_ = nullptr;};
    inline string getDBType() const { DARABONBA_PTR_GET_DEFAULT(DBType_, "") };
    inline EvaluateRegionResourceRequest& setDBType(string DBType) { DARABONBA_PTR_SET_VALUE(DBType_, DBType) };


    // DBVersion Field Functions 
    bool hasDBVersion() const { return this->DBVersion_ != nullptr;};
    void deleteDBVersion() { this->DBVersion_ = nullptr;};
    inline string getDBVersion() const { DARABONBA_PTR_GET_DEFAULT(DBVersion_, "") };
    inline EvaluateRegionResourceRequest& setDBVersion(string DBVersion) { DARABONBA_PTR_SET_VALUE(DBVersion_, DBVersion) };


    // dispenseMode Field Functions 
    bool hasDispenseMode() const { return this->dispenseMode_ != nullptr;};
    void deleteDispenseMode() { this->dispenseMode_ = nullptr;};
    inline string getDispenseMode() const { DARABONBA_PTR_GET_DEFAULT(dispenseMode_, "") };
    inline EvaluateRegionResourceRequest& setDispenseMode(string dispenseMode) { DARABONBA_PTR_SET_VALUE(dispenseMode_, dispenseMode) };


    // needMaxScaleLink Field Functions 
    bool hasNeedMaxScaleLink() const { return this->needMaxScaleLink_ != nullptr;};
    void deleteNeedMaxScaleLink() { this->needMaxScaleLink_ = nullptr;};
    inline string getNeedMaxScaleLink() const { DARABONBA_PTR_GET_DEFAULT(needMaxScaleLink_, "") };
    inline EvaluateRegionResourceRequest& setNeedMaxScaleLink(string needMaxScaleLink) { DARABONBA_PTR_SET_VALUE(needMaxScaleLink_, needMaxScaleLink) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline EvaluateRegionResourceRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline EvaluateRegionResourceRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline EvaluateRegionResourceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline EvaluateRegionResourceRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline EvaluateRegionResourceRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline EvaluateRegionResourceRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // subDomain Field Functions 
    bool hasSubDomain() const { return this->subDomain_ != nullptr;};
    void deleteSubDomain() { this->subDomain_ = nullptr;};
    inline string getSubDomain() const { DARABONBA_PTR_GET_DEFAULT(subDomain_, "") };
    inline EvaluateRegionResourceRequest& setSubDomain(string subDomain) { DARABONBA_PTR_SET_VALUE(subDomain_, subDomain) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline EvaluateRegionResourceRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The cluster link type. The backend randomly selects the default value. Valid values:
    // 
    // *   **lvs**: Linux virtual server.
    // *   **proxy**: proxy server.
    // *   **dns**: domain name system.
    shared_ptr<string> DBInstanceConnType_ {};
    // The specifications of the node. For information about node specifications, see the following topics:
    // 
    // *   PolarDB for MySQL: [Specifications of compute nodes](https://help.aliyun.com/document_detail/102542.html)
    // *   PolarDB for Oracle: [Specifications of compute nodes](https://help.aliyun.com/document_detail/207921.html)
    // *   PolarDB for PostgreSQL: [Specifications of compute nodes](https://help.aliyun.com/document_detail/209380.html)
    // 
    // This parameter is required.
    shared_ptr<string> DBNodeClass_ {};
    // The type of the database engine. Valid values:
    // 
    // *   **MySQL**
    // *   **PostgreSQL**
    // *   **Oracle**
    // 
    // This parameter is required.
    shared_ptr<string> DBType_ {};
    // The version of the database engine
    // 
    // *   Valid values for the MySQL database engine:
    // 
    //     *   **5.6**
    //     *   **5.7**
    //     *   **8.0**
    // 
    // *   Valid values for the PostgreSQL database engine:
    // 
    //     *   **11**
    //     *   **14**
    // 
    // *   Valid value for the Oracle database engine: **11**
    // 
    // This parameter is required.
    shared_ptr<string> DBVersion_ {};
    // Specifies whether to return the zones in which the single-zone deployment method is supported. Default value: 0. Valid values:
    // 
    // *   **0**: no value returned
    // *   **1**: returns the zones.
    shared_ptr<string> dispenseMode_ {};
    // Specifies whether to create Maxscale. Valid values:
    // 
    // *   **true** (default)
    // *   **false**
    // 
    // This parameter is required.
    shared_ptr<string> needMaxScaleLink_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID.
    // 
    // > You can call the [DescribeRegions](https://help.aliyun.com/document_detail/98041.html) operation to query available regions.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the resource group.
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The subdomain. It is the child domain of the top-level domain name or parent domain. For example, if the parent domain name is cn-beijing, its child domain can be cn-beijing-i-aliyun.
    shared_ptr<string> subDomain_ {};
    // The zone ID.
    // 
    // > You can call the [DescribeRegions](https://help.aliyun.com/document_detail/98041.html) operation to query available zones.
    // 
    // This parameter is required.
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
