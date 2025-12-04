// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVPDRESPONSEBODYCONTENT_HPP_
#define ALIBABACLOUD_MODELS_GETVPDRESPONSEBODYCONTENT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetVpdResponseBodyContentErInfos.hpp>
#include <alibabacloud/models/GetVpdResponseBodyContentTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class GetVpdResponseBodyContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVpdResponseBodyContent& obj) { 
      DARABONBA_PTR_TO_JSON(AttachErStatus, attachErStatus_);
      DARABONBA_PTR_TO_JSON(Cidr, cidr_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(ErInfos, erInfos_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NcCount, ncCount_);
      DARABONBA_PTR_TO_JSON(NetworkInterfaceCount, networkInterfaceCount_);
      DARABONBA_PTR_TO_JSON(PrivateIpCount, privateIpCount_);
      DARABONBA_PTR_TO_JSON(Quota, quota_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SecondaryCidrBlocks, secondaryCidrBlocks_);
      DARABONBA_PTR_TO_JSON(ServiceCidr, serviceCidr_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SubnetCount, subnetCount_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(VpdId, vpdId_);
      DARABONBA_PTR_TO_JSON(VpdName, vpdName_);
    };
    friend void from_json(const Darabonba::Json& j, GetVpdResponseBodyContent& obj) { 
      DARABONBA_PTR_FROM_JSON(AttachErStatus, attachErStatus_);
      DARABONBA_PTR_FROM_JSON(Cidr, cidr_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(ErInfos, erInfos_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NcCount, ncCount_);
      DARABONBA_PTR_FROM_JSON(NetworkInterfaceCount, networkInterfaceCount_);
      DARABONBA_PTR_FROM_JSON(PrivateIpCount, privateIpCount_);
      DARABONBA_PTR_FROM_JSON(Quota, quota_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SecondaryCidrBlocks, secondaryCidrBlocks_);
      DARABONBA_PTR_FROM_JSON(ServiceCidr, serviceCidr_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SubnetCount, subnetCount_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(VpdId, vpdId_);
      DARABONBA_PTR_FROM_JSON(VpdName, vpdName_);
    };
    GetVpdResponseBodyContent() = default ;
    GetVpdResponseBodyContent(const GetVpdResponseBodyContent &) = default ;
    GetVpdResponseBodyContent(GetVpdResponseBodyContent &&) = default ;
    GetVpdResponseBodyContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVpdResponseBodyContent() = default ;
    GetVpdResponseBodyContent& operator=(const GetVpdResponseBodyContent &) = default ;
    GetVpdResponseBodyContent& operator=(GetVpdResponseBodyContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attachErStatus_ == nullptr
        && return this->cidr_ == nullptr && return this->createTime_ == nullptr && return this->erInfos_ == nullptr && return this->gmtModified_ == nullptr && return this->message_ == nullptr
        && return this->ncCount_ == nullptr && return this->networkInterfaceCount_ == nullptr && return this->privateIpCount_ == nullptr && return this->quota_ == nullptr && return this->regionId_ == nullptr
        && return this->resourceGroupId_ == nullptr && return this->secondaryCidrBlocks_ == nullptr && return this->serviceCidr_ == nullptr && return this->status_ == nullptr && return this->subnetCount_ == nullptr
        && return this->tags_ == nullptr && return this->tenantId_ == nullptr && return this->vpdId_ == nullptr && return this->vpdName_ == nullptr; };
    // attachErStatus Field Functions 
    bool hasAttachErStatus() const { return this->attachErStatus_ != nullptr;};
    void deleteAttachErStatus() { this->attachErStatus_ = nullptr;};
    inline bool attachErStatus() const { DARABONBA_PTR_GET_DEFAULT(attachErStatus_, false) };
    inline GetVpdResponseBodyContent& setAttachErStatus(bool attachErStatus) { DARABONBA_PTR_SET_VALUE(attachErStatus_, attachErStatus) };


    // cidr Field Functions 
    bool hasCidr() const { return this->cidr_ != nullptr;};
    void deleteCidr() { this->cidr_ = nullptr;};
    inline string cidr() const { DARABONBA_PTR_GET_DEFAULT(cidr_, "") };
    inline GetVpdResponseBodyContent& setCidr(string cidr) { DARABONBA_PTR_SET_VALUE(cidr_, cidr) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetVpdResponseBodyContent& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // erInfos Field Functions 
    bool hasErInfos() const { return this->erInfos_ != nullptr;};
    void deleteErInfos() { this->erInfos_ = nullptr;};
    inline const vector<Models::GetVpdResponseBodyContentErInfos> & erInfos() const { DARABONBA_PTR_GET_CONST(erInfos_, vector<Models::GetVpdResponseBodyContentErInfos>) };
    inline vector<Models::GetVpdResponseBodyContentErInfos> erInfos() { DARABONBA_PTR_GET(erInfos_, vector<Models::GetVpdResponseBodyContentErInfos>) };
    inline GetVpdResponseBodyContent& setErInfos(const vector<Models::GetVpdResponseBodyContentErInfos> & erInfos) { DARABONBA_PTR_SET_VALUE(erInfos_, erInfos) };
    inline GetVpdResponseBodyContent& setErInfos(vector<Models::GetVpdResponseBodyContentErInfos> && erInfos) { DARABONBA_PTR_SET_RVALUE(erInfos_, erInfos) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline GetVpdResponseBodyContent& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetVpdResponseBodyContent& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // ncCount Field Functions 
    bool hasNcCount() const { return this->ncCount_ != nullptr;};
    void deleteNcCount() { this->ncCount_ = nullptr;};
    inline int32_t ncCount() const { DARABONBA_PTR_GET_DEFAULT(ncCount_, 0) };
    inline GetVpdResponseBodyContent& setNcCount(int32_t ncCount) { DARABONBA_PTR_SET_VALUE(ncCount_, ncCount) };


    // networkInterfaceCount Field Functions 
    bool hasNetworkInterfaceCount() const { return this->networkInterfaceCount_ != nullptr;};
    void deleteNetworkInterfaceCount() { this->networkInterfaceCount_ = nullptr;};
    inline int32_t networkInterfaceCount() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceCount_, 0) };
    inline GetVpdResponseBodyContent& setNetworkInterfaceCount(int32_t networkInterfaceCount) { DARABONBA_PTR_SET_VALUE(networkInterfaceCount_, networkInterfaceCount) };


    // privateIpCount Field Functions 
    bool hasPrivateIpCount() const { return this->privateIpCount_ != nullptr;};
    void deletePrivateIpCount() { this->privateIpCount_ = nullptr;};
    inline int64_t privateIpCount() const { DARABONBA_PTR_GET_DEFAULT(privateIpCount_, 0L) };
    inline GetVpdResponseBodyContent& setPrivateIpCount(int64_t privateIpCount) { DARABONBA_PTR_SET_VALUE(privateIpCount_, privateIpCount) };


    // quota Field Functions 
    bool hasQuota() const { return this->quota_ != nullptr;};
    void deleteQuota() { this->quota_ = nullptr;};
    inline int32_t quota() const { DARABONBA_PTR_GET_DEFAULT(quota_, 0) };
    inline GetVpdResponseBodyContent& setQuota(int32_t quota) { DARABONBA_PTR_SET_VALUE(quota_, quota) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetVpdResponseBodyContent& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetVpdResponseBodyContent& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // secondaryCidrBlocks Field Functions 
    bool hasSecondaryCidrBlocks() const { return this->secondaryCidrBlocks_ != nullptr;};
    void deleteSecondaryCidrBlocks() { this->secondaryCidrBlocks_ = nullptr;};
    inline const vector<string> & secondaryCidrBlocks() const { DARABONBA_PTR_GET_CONST(secondaryCidrBlocks_, vector<string>) };
    inline vector<string> secondaryCidrBlocks() { DARABONBA_PTR_GET(secondaryCidrBlocks_, vector<string>) };
    inline GetVpdResponseBodyContent& setSecondaryCidrBlocks(const vector<string> & secondaryCidrBlocks) { DARABONBA_PTR_SET_VALUE(secondaryCidrBlocks_, secondaryCidrBlocks) };
    inline GetVpdResponseBodyContent& setSecondaryCidrBlocks(vector<string> && secondaryCidrBlocks) { DARABONBA_PTR_SET_RVALUE(secondaryCidrBlocks_, secondaryCidrBlocks) };


    // serviceCidr Field Functions 
    bool hasServiceCidr() const { return this->serviceCidr_ != nullptr;};
    void deleteServiceCidr() { this->serviceCidr_ = nullptr;};
    inline string serviceCidr() const { DARABONBA_PTR_GET_DEFAULT(serviceCidr_, "") };
    inline GetVpdResponseBodyContent& setServiceCidr(string serviceCidr) { DARABONBA_PTR_SET_VALUE(serviceCidr_, serviceCidr) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetVpdResponseBodyContent& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // subnetCount Field Functions 
    bool hasSubnetCount() const { return this->subnetCount_ != nullptr;};
    void deleteSubnetCount() { this->subnetCount_ = nullptr;};
    inline int64_t subnetCount() const { DARABONBA_PTR_GET_DEFAULT(subnetCount_, 0L) };
    inline GetVpdResponseBodyContent& setSubnetCount(int64_t subnetCount) { DARABONBA_PTR_SET_VALUE(subnetCount_, subnetCount) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::GetVpdResponseBodyContentTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::GetVpdResponseBodyContentTags>) };
    inline vector<Models::GetVpdResponseBodyContentTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::GetVpdResponseBodyContentTags>) };
    inline GetVpdResponseBodyContent& setTags(const vector<Models::GetVpdResponseBodyContentTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetVpdResponseBodyContent& setTags(vector<Models::GetVpdResponseBodyContentTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline GetVpdResponseBodyContent& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // vpdId Field Functions 
    bool hasVpdId() const { return this->vpdId_ != nullptr;};
    void deleteVpdId() { this->vpdId_ = nullptr;};
    inline string vpdId() const { DARABONBA_PTR_GET_DEFAULT(vpdId_, "") };
    inline GetVpdResponseBodyContent& setVpdId(string vpdId) { DARABONBA_PTR_SET_VALUE(vpdId_, vpdId) };


    // vpdName Field Functions 
    bool hasVpdName() const { return this->vpdName_ != nullptr;};
    void deleteVpdName() { this->vpdName_ = nullptr;};
    inline string vpdName() const { DARABONBA_PTR_GET_DEFAULT(vpdName_, "") };
    inline GetVpdResponseBodyContent& setVpdName(string vpdName) { DARABONBA_PTR_SET_VALUE(vpdName_, vpdName) };


  protected:
    // Whether the Lingjun HUB(ER) has been bound.
    // 
    // *   **true**: ER is bound.
    // *   **false**: No ER is bound.
    std::shared_ptr<bool> attachErStatus_ = nullptr;
    // The CIDR block.
    std::shared_ptr<string> cidr_ = nullptr;
    // The time when the activation code was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The information of the bound Lingjun HUB(ER).
    std::shared_ptr<vector<Models::GetVpdResponseBodyContentErInfos>> erInfos_ = nullptr;
    // The time when the O\\&M task was modified.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The error message. (If the instance is in the Exception state, the exception cause is prompted.)
    std::shared_ptr<string> message_ = nullptr;
    // The number of NCs.
    std::shared_ptr<int32_t> ncCount_ = nullptr;
    // Number of Lingjun network interface controller.
    std::shared_ptr<int32_t> networkInterfaceCount_ = nullptr;
    // The total number of secondary private IP addresses.
    std::shared_ptr<int64_t> privateIpCount_ = nullptr;
    // The total quota information.
    std::shared_ptr<int32_t> quota_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of your Alibaba Cloud resource group.
    // 
    // For more information about resource groups, see [Resource groups](https://help.aliyun.com/document_detail/94475.htm?spm=a2c4g.11186623.0.0.29e15d7akXhpuu).
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The list of additional CIDR blocks.
    std::shared_ptr<vector<string>> secondaryCidrBlocks_ = nullptr;
    // Internal Service CIDR block.
    std::shared_ptr<string> serviceCidr_ = nullptr;
    // The current state of the instance.
    // 
    // Valid value:
    // 
    // *   Not Available: Not Available.
    // *   Available: Normal: Available: Normal.
    // *   Deleting: Deleting: Deleting: Deleting.
    // *   Executing: executing: Executing: executing.
    std::shared_ptr<string> status_ = nullptr;
    // The number of subnets.
    std::shared_ptr<int64_t> subnetCount_ = nullptr;
    // The tag information.
    // 
    // You can specify up to 20 tags.
    std::shared_ptr<vector<Models::GetVpdResponseBodyContentTags>> tags_ = nullptr;
    // The tenant ID.
    std::shared_ptr<string> tenantId_ = nullptr;
    // The ID of the VPD instance.
    std::shared_ptr<string> vpdId_ = nullptr;
    // The name of the Lingjun CIDR block.
    std::shared_ptr<string> vpdName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
