// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTANYCASTEIPADDRESSESRESPONSEBODYANYCASTLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTANYCASTEIPADDRESSESRESPONSEBODYANYCASTLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAnycastEipAddressesResponseBodyAnycastListAnycastEipBindInfoList.hpp>
#include <alibabacloud/models/ListAnycastEipAddressesResponseBodyAnycastListTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eipanycast20200309
{
namespace Models
{
  class ListAnycastEipAddressesResponseBodyAnycastList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAnycastEipAddressesResponseBodyAnycastList& obj) { 
      DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
      DARABONBA_PTR_TO_JSON(AnycastEipBindInfoList, anycastEipBindInfoList_);
      DARABONBA_PTR_TO_JSON(AnycastId, anycastId_);
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(BusinessStatus, businessStatus_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_TO_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_TO_JSON(IpAddress, ipAddress_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ServiceLocation, serviceLocation_);
      DARABONBA_PTR_TO_JSON(ServiceManaged, serviceManaged_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, ListAnycastEipAddressesResponseBodyAnycastList& obj) { 
      DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
      DARABONBA_PTR_FROM_JSON(AnycastEipBindInfoList, anycastEipBindInfoList_);
      DARABONBA_PTR_FROM_JSON(AnycastId, anycastId_);
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(BusinessStatus, businessStatus_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_FROM_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_FROM_JSON(IpAddress, ipAddress_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ServiceLocation, serviceLocation_);
      DARABONBA_PTR_FROM_JSON(ServiceManaged, serviceManaged_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    ListAnycastEipAddressesResponseBodyAnycastList() = default ;
    ListAnycastEipAddressesResponseBodyAnycastList(const ListAnycastEipAddressesResponseBodyAnycastList &) = default ;
    ListAnycastEipAddressesResponseBodyAnycastList(ListAnycastEipAddressesResponseBodyAnycastList &&) = default ;
    ListAnycastEipAddressesResponseBodyAnycastList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAnycastEipAddressesResponseBodyAnycastList() = default ;
    ListAnycastEipAddressesResponseBodyAnycastList& operator=(const ListAnycastEipAddressesResponseBodyAnycastList &) = default ;
    ListAnycastEipAddressesResponseBodyAnycastList& operator=(ListAnycastEipAddressesResponseBodyAnycastList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aliUid_ != nullptr
        && this->anycastEipBindInfoList_ != nullptr && this->anycastId_ != nullptr && this->bandwidth_ != nullptr && this->businessStatus_ != nullptr && this->createTime_ != nullptr
        && this->description_ != nullptr && this->instanceChargeType_ != nullptr && this->internetChargeType_ != nullptr && this->ipAddress_ != nullptr && this->name_ != nullptr
        && this->resourceGroupId_ != nullptr && this->serviceLocation_ != nullptr && this->serviceManaged_ != nullptr && this->status_ != nullptr && this->tags_ != nullptr; };
    // aliUid Field Functions 
    bool hasAliUid() const { return this->aliUid_ != nullptr;};
    void deleteAliUid() { this->aliUid_ = nullptr;};
    inline int64_t aliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
    inline ListAnycastEipAddressesResponseBodyAnycastList& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


    // anycastEipBindInfoList Field Functions 
    bool hasAnycastEipBindInfoList() const { return this->anycastEipBindInfoList_ != nullptr;};
    void deleteAnycastEipBindInfoList() { this->anycastEipBindInfoList_ = nullptr;};
    inline const vector<Models::ListAnycastEipAddressesResponseBodyAnycastListAnycastEipBindInfoList> & anycastEipBindInfoList() const { DARABONBA_PTR_GET_CONST(anycastEipBindInfoList_, vector<Models::ListAnycastEipAddressesResponseBodyAnycastListAnycastEipBindInfoList>) };
    inline vector<Models::ListAnycastEipAddressesResponseBodyAnycastListAnycastEipBindInfoList> anycastEipBindInfoList() { DARABONBA_PTR_GET(anycastEipBindInfoList_, vector<Models::ListAnycastEipAddressesResponseBodyAnycastListAnycastEipBindInfoList>) };
    inline ListAnycastEipAddressesResponseBodyAnycastList& setAnycastEipBindInfoList(const vector<Models::ListAnycastEipAddressesResponseBodyAnycastListAnycastEipBindInfoList> & anycastEipBindInfoList) { DARABONBA_PTR_SET_VALUE(anycastEipBindInfoList_, anycastEipBindInfoList) };
    inline ListAnycastEipAddressesResponseBodyAnycastList& setAnycastEipBindInfoList(vector<Models::ListAnycastEipAddressesResponseBodyAnycastListAnycastEipBindInfoList> && anycastEipBindInfoList) { DARABONBA_PTR_SET_RVALUE(anycastEipBindInfoList_, anycastEipBindInfoList) };


    // anycastId Field Functions 
    bool hasAnycastId() const { return this->anycastId_ != nullptr;};
    void deleteAnycastId() { this->anycastId_ = nullptr;};
    inline string anycastId() const { DARABONBA_PTR_GET_DEFAULT(anycastId_, "") };
    inline ListAnycastEipAddressesResponseBodyAnycastList& setAnycastId(string anycastId) { DARABONBA_PTR_SET_VALUE(anycastId_, anycastId) };


    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline int32_t bandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
    inline ListAnycastEipAddressesResponseBodyAnycastList& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // businessStatus Field Functions 
    bool hasBusinessStatus() const { return this->businessStatus_ != nullptr;};
    void deleteBusinessStatus() { this->businessStatus_ = nullptr;};
    inline string businessStatus() const { DARABONBA_PTR_GET_DEFAULT(businessStatus_, "") };
    inline ListAnycastEipAddressesResponseBodyAnycastList& setBusinessStatus(string businessStatus) { DARABONBA_PTR_SET_VALUE(businessStatus_, businessStatus) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListAnycastEipAddressesResponseBodyAnycastList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListAnycastEipAddressesResponseBodyAnycastList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // instanceChargeType Field Functions 
    bool hasInstanceChargeType() const { return this->instanceChargeType_ != nullptr;};
    void deleteInstanceChargeType() { this->instanceChargeType_ = nullptr;};
    inline string instanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(instanceChargeType_, "") };
    inline ListAnycastEipAddressesResponseBodyAnycastList& setInstanceChargeType(string instanceChargeType) { DARABONBA_PTR_SET_VALUE(instanceChargeType_, instanceChargeType) };


    // internetChargeType Field Functions 
    bool hasInternetChargeType() const { return this->internetChargeType_ != nullptr;};
    void deleteInternetChargeType() { this->internetChargeType_ = nullptr;};
    inline string internetChargeType() const { DARABONBA_PTR_GET_DEFAULT(internetChargeType_, "") };
    inline ListAnycastEipAddressesResponseBodyAnycastList& setInternetChargeType(string internetChargeType) { DARABONBA_PTR_SET_VALUE(internetChargeType_, internetChargeType) };


    // ipAddress Field Functions 
    bool hasIpAddress() const { return this->ipAddress_ != nullptr;};
    void deleteIpAddress() { this->ipAddress_ = nullptr;};
    inline string ipAddress() const { DARABONBA_PTR_GET_DEFAULT(ipAddress_, "") };
    inline ListAnycastEipAddressesResponseBodyAnycastList& setIpAddress(string ipAddress) { DARABONBA_PTR_SET_VALUE(ipAddress_, ipAddress) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListAnycastEipAddressesResponseBodyAnycastList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListAnycastEipAddressesResponseBodyAnycastList& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // serviceLocation Field Functions 
    bool hasServiceLocation() const { return this->serviceLocation_ != nullptr;};
    void deleteServiceLocation() { this->serviceLocation_ = nullptr;};
    inline string serviceLocation() const { DARABONBA_PTR_GET_DEFAULT(serviceLocation_, "") };
    inline ListAnycastEipAddressesResponseBodyAnycastList& setServiceLocation(string serviceLocation) { DARABONBA_PTR_SET_VALUE(serviceLocation_, serviceLocation) };


    // serviceManaged Field Functions 
    bool hasServiceManaged() const { return this->serviceManaged_ != nullptr;};
    void deleteServiceManaged() { this->serviceManaged_ = nullptr;};
    inline int32_t serviceManaged() const { DARABONBA_PTR_GET_DEFAULT(serviceManaged_, 0) };
    inline ListAnycastEipAddressesResponseBodyAnycastList& setServiceManaged(int32_t serviceManaged) { DARABONBA_PTR_SET_VALUE(serviceManaged_, serviceManaged) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListAnycastEipAddressesResponseBodyAnycastList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::ListAnycastEipAddressesResponseBodyAnycastListTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::ListAnycastEipAddressesResponseBodyAnycastListTags>) };
    inline vector<Models::ListAnycastEipAddressesResponseBodyAnycastListTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::ListAnycastEipAddressesResponseBodyAnycastListTags>) };
    inline ListAnycastEipAddressesResponseBodyAnycastList& setTags(const vector<Models::ListAnycastEipAddressesResponseBodyAnycastListTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListAnycastEipAddressesResponseBodyAnycastList& setTags(vector<Models::ListAnycastEipAddressesResponseBodyAnycastListTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The ID of the account to which the Anycast EIP belongs.
    std::shared_ptr<int64_t> aliUid_ = nullptr;
    // The list of cloud resources with which the Anycast EIPs are associated.
    std::shared_ptr<vector<Models::ListAnycastEipAddressesResponseBodyAnycastListAnycastEipBindInfoList>> anycastEipBindInfoList_ = nullptr;
    // The ID of the Anycast EIP.
    std::shared_ptr<string> anycastId_ = nullptr;
    // The maximum bandwidth of the Anycast EIP. Unit: Mbit/s.
    std::shared_ptr<int32_t> bandwidth_ = nullptr;
    // The service status of the Anycast EIP. Valid values:
    // 
    // *   **Normal**
    // *   **FinancialLocked**
    std::shared_ptr<string> businessStatus_ = nullptr;
    // The time when the Anycast EIP was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The description of the Anycast EIP.
    std::shared_ptr<string> description_ = nullptr;
    // The billing method of the Anycast EIP.
    // 
    // **PostPaid**: pay-as-you-go
    std::shared_ptr<string> instanceChargeType_ = nullptr;
    // The metering method of the Anycast EIP.
    // 
    // **PayByTraffic**: pay-by-data-transfer
    std::shared_ptr<string> internetChargeType_ = nullptr;
    // The IP address of the Anycast EIP.
    std::shared_ptr<string> ipAddress_ = nullptr;
    // The name of the Anycast EIP.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the resource group to which the instance belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The access area of the Anycast EIP.
    // 
    // **international**: regions outside the Chinese mainland
    std::shared_ptr<string> serviceLocation_ = nullptr;
    // Indicates whether the resource is created by the service account.
    // 
    // *   **0**: no
    // *   **1**: yes
    std::shared_ptr<int32_t> serviceManaged_ = nullptr;
    // The status of the Anycast EIP.
    // 
    // *   **Associating**
    // *   **Unassociating**
    // *   **Allocated**
    // *   **Associated**
    // *   **Modifying**
    // *   **Releasing**
    // *   **Released**
    std::shared_ptr<string> status_ = nullptr;
    // The information about the tags.
    std::shared_ptr<vector<Models::ListAnycastEipAddressesResponseBodyAnycastListTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eipanycast20200309
#endif
