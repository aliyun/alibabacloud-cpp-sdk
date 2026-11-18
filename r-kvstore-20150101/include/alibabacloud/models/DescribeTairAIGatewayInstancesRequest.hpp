// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETAIRAIGATEWAYINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETAIRAIGATEWAYINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RKvstore20150101
{
namespace Models
{
  class DescribeTairAIGatewayInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTairAIGatewayInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(Expired, expired_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(InstanceStatus, instanceStatus_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SearchKey, searchKey_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTairAIGatewayInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(Expired, expired_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(InstanceStatus, instanceStatus_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SearchKey, searchKey_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeTairAIGatewayInstancesRequest() = default ;
    DescribeTairAIGatewayInstancesRequest(const DescribeTairAIGatewayInstancesRequest &) = default ;
    DescribeTairAIGatewayInstancesRequest(DescribeTairAIGatewayInstancesRequest &&) = default ;
    DescribeTairAIGatewayInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTairAIGatewayInstancesRequest() = default ;
    DescribeTairAIGatewayInstancesRequest& operator=(const DescribeTairAIGatewayInstancesRequest &) = default ;
    DescribeTairAIGatewayInstancesRequest& operator=(DescribeTairAIGatewayInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->chargeType_ == nullptr
        && this->expired_ == nullptr && this->instanceIds_ == nullptr && this->instanceStatus_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr
        && this->regionId_ == nullptr && this->searchKey_ == nullptr && this->securityToken_ == nullptr && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr
        && this->zoneId_ == nullptr; };
    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline DescribeTairAIGatewayInstancesRequest& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // expired Field Functions 
    bool hasExpired() const { return this->expired_ != nullptr;};
    void deleteExpired() { this->expired_ = nullptr;};
    inline string getExpired() const { DARABONBA_PTR_GET_DEFAULT(expired_, "") };
    inline DescribeTairAIGatewayInstancesRequest& setExpired(string expired) { DARABONBA_PTR_SET_VALUE(expired_, expired) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline string getInstanceIds() const { DARABONBA_PTR_GET_DEFAULT(instanceIds_, "") };
    inline DescribeTairAIGatewayInstancesRequest& setInstanceIds(string instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };


    // instanceStatus Field Functions 
    bool hasInstanceStatus() const { return this->instanceStatus_ != nullptr;};
    void deleteInstanceStatus() { this->instanceStatus_ = nullptr;};
    inline string getInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(instanceStatus_, "") };
    inline DescribeTairAIGatewayInstancesRequest& setInstanceStatus(string instanceStatus) { DARABONBA_PTR_SET_VALUE(instanceStatus_, instanceStatus) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeTairAIGatewayInstancesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeTairAIGatewayInstancesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeTairAIGatewayInstancesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // searchKey Field Functions 
    bool hasSearchKey() const { return this->searchKey_ != nullptr;};
    void deleteSearchKey() { this->searchKey_ = nullptr;};
    inline string getSearchKey() const { DARABONBA_PTR_GET_DEFAULT(searchKey_, "") };
    inline DescribeTairAIGatewayInstancesRequest& setSearchKey(string searchKey) { DARABONBA_PTR_SET_VALUE(searchKey_, searchKey) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline DescribeTairAIGatewayInstancesRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeTairAIGatewayInstancesRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeTairAIGatewayInstancesRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeTairAIGatewayInstancesRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The billing method. Valid values:
    // - **PostPaid**: pay-as-you-go
    shared_ptr<string> chargeType_ {};
    // The expiration status of the instance. Valid values:
    // 
    // * **true**: The instance has expired.
    // * **false**: The instance has not expired.
    shared_ptr<string> expired_ {};
    // The IDs of the instances to query.
    // > Separate multiple instance IDs with commas (,). You can specify up to 30 instance IDs in a single request.
    shared_ptr<string> instanceIds_ {};
    // The instance status. Valid values:
    // * **Normal**: The instance is running.
    // * **Creating**: The instance is being created.
    // * **Changing**: The instance is being modified.
    // * **Inactive**: The instance is disabled.
    // * **Flushing**: The instance data is being purged.
    // * **Released**: The instance is released.
    // * **Transforming**: The instance is being transformed.
    // * **Migrating**: The instance is being migrated.
    // * **BackupRecovering**: The instance is recovering from a backup.
    // * **MinorVersionUpgrading**: The minor version of the instance is being upgraded.
    // * **NetworkModifying**: The network of the instance is being modified.
    // * **SSLModifying**: The SSL configuration of the instance is being modified.
    // * **MajorVersionUpgrading**: A major engine version upgrade is in progress. The instance remains accessible.
    // 
    // > For more information about instance statuses and impacts, see [Instance statuses and impacts](https://help.aliyun.com/document_detail/200740.html).
    shared_ptr<string> instanceStatus_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The search keyword. Fuzzy search is supported for instance names or instance IDs.
    shared_ptr<string> searchKey_ {};
    shared_ptr<string> securityToken_ {};
    // The ID of the vSwitch in the VPC. You can call the [DescribeVpcs](https://help.aliyun.com/document_detail/35739.html) operation to query the vSwitch ID.
    shared_ptr<string> vSwitchId_ {};
    // The ID of the virtual private cloud (VPC).
    shared_ptr<string> vpcId_ {};
    // The zone ID.
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RKvstore20150101
#endif
