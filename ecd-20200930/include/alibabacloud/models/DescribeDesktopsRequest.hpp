// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDESKTOPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDESKTOPSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeDesktopsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDesktopsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(DesktopGroupId, desktopGroupId_);
      DARABONBA_PTR_TO_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_TO_JSON(DesktopName, desktopName_);
      DARABONBA_PTR_TO_JSON(DesktopStatus, desktopStatus_);
      DARABONBA_PTR_TO_JSON(DesktopStatusList, desktopStatusList_);
      DARABONBA_PTR_TO_JSON(DesktopType, desktopType_);
      DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_TO_JSON(ExcludedEndUserId, excludedEndUserId_);
      DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_TO_JSON(FillResourceGroup, fillResourceGroup_);
      DARABONBA_PTR_TO_JSON(FilterDesktopGroup, filterDesktopGroup_);
      DARABONBA_PTR_TO_JSON(GpuInstanceGroupId, gpuInstanceGroupId_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(IncludeAutoSnapshotPolicy, includeAutoSnapshotPolicy_);
      DARABONBA_PTR_TO_JSON(ManagementFlag, managementFlag_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(MultiResource, multiResource_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_TO_JSON(OfficeSiteName, officeSiteName_);
      DARABONBA_PTR_TO_JSON(OnlyDesktopGroup, onlyDesktopGroup_);
      DARABONBA_PTR_TO_JSON(OsTypes, osTypes_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PolicyGroupId, policyGroupId_);
      DARABONBA_PTR_TO_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_TO_JSON(QosRuleId, qosRuleId_);
      DARABONBA_PTR_TO_JSON(QueryFotaUpdate, queryFotaUpdate_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SnapshotPolicyId, snapshotPolicyId_);
      DARABONBA_PTR_TO_JSON(SubPayType, subPayType_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDesktopsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(DesktopGroupId, desktopGroupId_);
      DARABONBA_PTR_FROM_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_FROM_JSON(DesktopName, desktopName_);
      DARABONBA_PTR_FROM_JSON(DesktopStatus, desktopStatus_);
      DARABONBA_PTR_FROM_JSON(DesktopStatusList, desktopStatusList_);
      DARABONBA_PTR_FROM_JSON(DesktopType, desktopType_);
      DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_FROM_JSON(ExcludedEndUserId, excludedEndUserId_);
      DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_FROM_JSON(FillResourceGroup, fillResourceGroup_);
      DARABONBA_PTR_FROM_JSON(FilterDesktopGroup, filterDesktopGroup_);
      DARABONBA_PTR_FROM_JSON(GpuInstanceGroupId, gpuInstanceGroupId_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(IncludeAutoSnapshotPolicy, includeAutoSnapshotPolicy_);
      DARABONBA_PTR_FROM_JSON(ManagementFlag, managementFlag_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(MultiResource, multiResource_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteName, officeSiteName_);
      DARABONBA_PTR_FROM_JSON(OnlyDesktopGroup, onlyDesktopGroup_);
      DARABONBA_PTR_FROM_JSON(OsTypes, osTypes_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PolicyGroupId, policyGroupId_);
      DARABONBA_PTR_FROM_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_FROM_JSON(QosRuleId, qosRuleId_);
      DARABONBA_PTR_FROM_JSON(QueryFotaUpdate, queryFotaUpdate_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SnapshotPolicyId, snapshotPolicyId_);
      DARABONBA_PTR_FROM_JSON(SubPayType, subPayType_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    DescribeDesktopsRequest() = default ;
    DescribeDesktopsRequest(const DescribeDesktopsRequest &) = default ;
    DescribeDesktopsRequest(DescribeDesktopsRequest &&) = default ;
    DescribeDesktopsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDesktopsRequest() = default ;
    DescribeDesktopsRequest& operator=(const DescribeDesktopsRequest &) = default ;
    DescribeDesktopsRequest& operator=(DescribeDesktopsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The tag key. If you specify the `Tag` parameter, you must also specify the `Key` parameter. The tag key can be up to 128 characters in length and cannot contain `http://` or `https://`. The tag key cannot start with `acs:` or `aliyun` and contain only spaces.
      shared_ptr<string> key_ {};
      // The tag value. The tag value can be up to 128 characters in length and cannot contain `http://` or `https://`. The tag value cannot start with `acs:` or `aliyun`.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->chargeType_ == nullptr
        && this->desktopGroupId_ == nullptr && this->desktopId_ == nullptr && this->desktopName_ == nullptr && this->desktopStatus_ == nullptr && this->desktopStatusList_ == nullptr
        && this->desktopType_ == nullptr && this->directoryId_ == nullptr && this->endUserId_ == nullptr && this->excludedEndUserId_ == nullptr && this->expiredTime_ == nullptr
        && this->fillResourceGroup_ == nullptr && this->filterDesktopGroup_ == nullptr && this->gpuInstanceGroupId_ == nullptr && this->groupId_ == nullptr && this->imageId_ == nullptr
        && this->includeAutoSnapshotPolicy_ == nullptr && this->managementFlag_ == nullptr && this->maxResults_ == nullptr && this->multiResource_ == nullptr && this->nextToken_ == nullptr
        && this->officeSiteId_ == nullptr && this->officeSiteName_ == nullptr && this->onlyDesktopGroup_ == nullptr && this->osTypes_ == nullptr && this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->policyGroupId_ == nullptr && this->protocolType_ == nullptr && this->qosRuleId_ == nullptr && this->queryFotaUpdate_ == nullptr
        && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->snapshotPolicyId_ == nullptr && this->subPayType_ == nullptr && this->tag_ == nullptr
        && this->userName_ == nullptr; };
    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline DescribeDesktopsRequest& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // desktopGroupId Field Functions 
    bool hasDesktopGroupId() const { return this->desktopGroupId_ != nullptr;};
    void deleteDesktopGroupId() { this->desktopGroupId_ = nullptr;};
    inline string getDesktopGroupId() const { DARABONBA_PTR_GET_DEFAULT(desktopGroupId_, "") };
    inline DescribeDesktopsRequest& setDesktopGroupId(string desktopGroupId) { DARABONBA_PTR_SET_VALUE(desktopGroupId_, desktopGroupId) };


    // desktopId Field Functions 
    bool hasDesktopId() const { return this->desktopId_ != nullptr;};
    void deleteDesktopId() { this->desktopId_ = nullptr;};
    inline const vector<string> & getDesktopId() const { DARABONBA_PTR_GET_CONST(desktopId_, vector<string>) };
    inline vector<string> getDesktopId() { DARABONBA_PTR_GET(desktopId_, vector<string>) };
    inline DescribeDesktopsRequest& setDesktopId(const vector<string> & desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };
    inline DescribeDesktopsRequest& setDesktopId(vector<string> && desktopId) { DARABONBA_PTR_SET_RVALUE(desktopId_, desktopId) };


    // desktopName Field Functions 
    bool hasDesktopName() const { return this->desktopName_ != nullptr;};
    void deleteDesktopName() { this->desktopName_ = nullptr;};
    inline string getDesktopName() const { DARABONBA_PTR_GET_DEFAULT(desktopName_, "") };
    inline DescribeDesktopsRequest& setDesktopName(string desktopName) { DARABONBA_PTR_SET_VALUE(desktopName_, desktopName) };


    // desktopStatus Field Functions 
    bool hasDesktopStatus() const { return this->desktopStatus_ != nullptr;};
    void deleteDesktopStatus() { this->desktopStatus_ = nullptr;};
    inline string getDesktopStatus() const { DARABONBA_PTR_GET_DEFAULT(desktopStatus_, "") };
    inline DescribeDesktopsRequest& setDesktopStatus(string desktopStatus) { DARABONBA_PTR_SET_VALUE(desktopStatus_, desktopStatus) };


    // desktopStatusList Field Functions 
    bool hasDesktopStatusList() const { return this->desktopStatusList_ != nullptr;};
    void deleteDesktopStatusList() { this->desktopStatusList_ = nullptr;};
    inline const vector<string> & getDesktopStatusList() const { DARABONBA_PTR_GET_CONST(desktopStatusList_, vector<string>) };
    inline vector<string> getDesktopStatusList() { DARABONBA_PTR_GET(desktopStatusList_, vector<string>) };
    inline DescribeDesktopsRequest& setDesktopStatusList(const vector<string> & desktopStatusList) { DARABONBA_PTR_SET_VALUE(desktopStatusList_, desktopStatusList) };
    inline DescribeDesktopsRequest& setDesktopStatusList(vector<string> && desktopStatusList) { DARABONBA_PTR_SET_RVALUE(desktopStatusList_, desktopStatusList) };


    // desktopType Field Functions 
    bool hasDesktopType() const { return this->desktopType_ != nullptr;};
    void deleteDesktopType() { this->desktopType_ = nullptr;};
    inline string getDesktopType() const { DARABONBA_PTR_GET_DEFAULT(desktopType_, "") };
    inline DescribeDesktopsRequest& setDesktopType(string desktopType) { DARABONBA_PTR_SET_VALUE(desktopType_, desktopType) };


    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline DescribeDesktopsRequest& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // endUserId Field Functions 
    bool hasEndUserId() const { return this->endUserId_ != nullptr;};
    void deleteEndUserId() { this->endUserId_ = nullptr;};
    inline const vector<string> & getEndUserId() const { DARABONBA_PTR_GET_CONST(endUserId_, vector<string>) };
    inline vector<string> getEndUserId() { DARABONBA_PTR_GET(endUserId_, vector<string>) };
    inline DescribeDesktopsRequest& setEndUserId(const vector<string> & endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };
    inline DescribeDesktopsRequest& setEndUserId(vector<string> && endUserId) { DARABONBA_PTR_SET_RVALUE(endUserId_, endUserId) };


    // excludedEndUserId Field Functions 
    bool hasExcludedEndUserId() const { return this->excludedEndUserId_ != nullptr;};
    void deleteExcludedEndUserId() { this->excludedEndUserId_ = nullptr;};
    inline const vector<string> & getExcludedEndUserId() const { DARABONBA_PTR_GET_CONST(excludedEndUserId_, vector<string>) };
    inline vector<string> getExcludedEndUserId() { DARABONBA_PTR_GET(excludedEndUserId_, vector<string>) };
    inline DescribeDesktopsRequest& setExcludedEndUserId(const vector<string> & excludedEndUserId) { DARABONBA_PTR_SET_VALUE(excludedEndUserId_, excludedEndUserId) };
    inline DescribeDesktopsRequest& setExcludedEndUserId(vector<string> && excludedEndUserId) { DARABONBA_PTR_SET_RVALUE(excludedEndUserId_, excludedEndUserId) };


    // expiredTime Field Functions 
    bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
    void deleteExpiredTime() { this->expiredTime_ = nullptr;};
    inline string getExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
    inline DescribeDesktopsRequest& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


    // fillResourceGroup Field Functions 
    bool hasFillResourceGroup() const { return this->fillResourceGroup_ != nullptr;};
    void deleteFillResourceGroup() { this->fillResourceGroup_ = nullptr;};
    inline bool getFillResourceGroup() const { DARABONBA_PTR_GET_DEFAULT(fillResourceGroup_, false) };
    inline DescribeDesktopsRequest& setFillResourceGroup(bool fillResourceGroup) { DARABONBA_PTR_SET_VALUE(fillResourceGroup_, fillResourceGroup) };


    // filterDesktopGroup Field Functions 
    bool hasFilterDesktopGroup() const { return this->filterDesktopGroup_ != nullptr;};
    void deleteFilterDesktopGroup() { this->filterDesktopGroup_ = nullptr;};
    inline bool getFilterDesktopGroup() const { DARABONBA_PTR_GET_DEFAULT(filterDesktopGroup_, false) };
    inline DescribeDesktopsRequest& setFilterDesktopGroup(bool filterDesktopGroup) { DARABONBA_PTR_SET_VALUE(filterDesktopGroup_, filterDesktopGroup) };


    // gpuInstanceGroupId Field Functions 
    bool hasGpuInstanceGroupId() const { return this->gpuInstanceGroupId_ != nullptr;};
    void deleteGpuInstanceGroupId() { this->gpuInstanceGroupId_ = nullptr;};
    inline string getGpuInstanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(gpuInstanceGroupId_, "") };
    inline DescribeDesktopsRequest& setGpuInstanceGroupId(string gpuInstanceGroupId) { DARABONBA_PTR_SET_VALUE(gpuInstanceGroupId_, gpuInstanceGroupId) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DescribeDesktopsRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline const vector<string> & getImageId() const { DARABONBA_PTR_GET_CONST(imageId_, vector<string>) };
    inline vector<string> getImageId() { DARABONBA_PTR_GET(imageId_, vector<string>) };
    inline DescribeDesktopsRequest& setImageId(const vector<string> & imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };
    inline DescribeDesktopsRequest& setImageId(vector<string> && imageId) { DARABONBA_PTR_SET_RVALUE(imageId_, imageId) };


    // includeAutoSnapshotPolicy Field Functions 
    bool hasIncludeAutoSnapshotPolicy() const { return this->includeAutoSnapshotPolicy_ != nullptr;};
    void deleteIncludeAutoSnapshotPolicy() { this->includeAutoSnapshotPolicy_ = nullptr;};
    inline bool getIncludeAutoSnapshotPolicy() const { DARABONBA_PTR_GET_DEFAULT(includeAutoSnapshotPolicy_, false) };
    inline DescribeDesktopsRequest& setIncludeAutoSnapshotPolicy(bool includeAutoSnapshotPolicy) { DARABONBA_PTR_SET_VALUE(includeAutoSnapshotPolicy_, includeAutoSnapshotPolicy) };


    // managementFlag Field Functions 
    bool hasManagementFlag() const { return this->managementFlag_ != nullptr;};
    void deleteManagementFlag() { this->managementFlag_ = nullptr;};
    inline string getManagementFlag() const { DARABONBA_PTR_GET_DEFAULT(managementFlag_, "") };
    inline DescribeDesktopsRequest& setManagementFlag(string managementFlag) { DARABONBA_PTR_SET_VALUE(managementFlag_, managementFlag) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeDesktopsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // multiResource Field Functions 
    bool hasMultiResource() const { return this->multiResource_ != nullptr;};
    void deleteMultiResource() { this->multiResource_ = nullptr;};
    inline bool getMultiResource() const { DARABONBA_PTR_GET_DEFAULT(multiResource_, false) };
    inline DescribeDesktopsRequest& setMultiResource(bool multiResource) { DARABONBA_PTR_SET_VALUE(multiResource_, multiResource) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeDesktopsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline string getOfficeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
    inline DescribeDesktopsRequest& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


    // officeSiteName Field Functions 
    bool hasOfficeSiteName() const { return this->officeSiteName_ != nullptr;};
    void deleteOfficeSiteName() { this->officeSiteName_ = nullptr;};
    inline string getOfficeSiteName() const { DARABONBA_PTR_GET_DEFAULT(officeSiteName_, "") };
    inline DescribeDesktopsRequest& setOfficeSiteName(string officeSiteName) { DARABONBA_PTR_SET_VALUE(officeSiteName_, officeSiteName) };


    // onlyDesktopGroup Field Functions 
    bool hasOnlyDesktopGroup() const { return this->onlyDesktopGroup_ != nullptr;};
    void deleteOnlyDesktopGroup() { this->onlyDesktopGroup_ = nullptr;};
    inline bool getOnlyDesktopGroup() const { DARABONBA_PTR_GET_DEFAULT(onlyDesktopGroup_, false) };
    inline DescribeDesktopsRequest& setOnlyDesktopGroup(bool onlyDesktopGroup) { DARABONBA_PTR_SET_VALUE(onlyDesktopGroup_, onlyDesktopGroup) };


    // osTypes Field Functions 
    bool hasOsTypes() const { return this->osTypes_ != nullptr;};
    void deleteOsTypes() { this->osTypes_ = nullptr;};
    inline const vector<string> & getOsTypes() const { DARABONBA_PTR_GET_CONST(osTypes_, vector<string>) };
    inline vector<string> getOsTypes() { DARABONBA_PTR_GET(osTypes_, vector<string>) };
    inline DescribeDesktopsRequest& setOsTypes(const vector<string> & osTypes) { DARABONBA_PTR_SET_VALUE(osTypes_, osTypes) };
    inline DescribeDesktopsRequest& setOsTypes(vector<string> && osTypes) { DARABONBA_PTR_SET_RVALUE(osTypes_, osTypes) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDesktopsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDesktopsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // policyGroupId Field Functions 
    bool hasPolicyGroupId() const { return this->policyGroupId_ != nullptr;};
    void deletePolicyGroupId() { this->policyGroupId_ = nullptr;};
    inline string getPolicyGroupId() const { DARABONBA_PTR_GET_DEFAULT(policyGroupId_, "") };
    inline DescribeDesktopsRequest& setPolicyGroupId(string policyGroupId) { DARABONBA_PTR_SET_VALUE(policyGroupId_, policyGroupId) };


    // protocolType Field Functions 
    bool hasProtocolType() const { return this->protocolType_ != nullptr;};
    void deleteProtocolType() { this->protocolType_ = nullptr;};
    inline string getProtocolType() const { DARABONBA_PTR_GET_DEFAULT(protocolType_, "") };
    inline DescribeDesktopsRequest& setProtocolType(string protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };


    // qosRuleId Field Functions 
    bool hasQosRuleId() const { return this->qosRuleId_ != nullptr;};
    void deleteQosRuleId() { this->qosRuleId_ = nullptr;};
    inline string getQosRuleId() const { DARABONBA_PTR_GET_DEFAULT(qosRuleId_, "") };
    inline DescribeDesktopsRequest& setQosRuleId(string qosRuleId) { DARABONBA_PTR_SET_VALUE(qosRuleId_, qosRuleId) };


    // queryFotaUpdate Field Functions 
    bool hasQueryFotaUpdate() const { return this->queryFotaUpdate_ != nullptr;};
    void deleteQueryFotaUpdate() { this->queryFotaUpdate_ = nullptr;};
    inline bool getQueryFotaUpdate() const { DARABONBA_PTR_GET_DEFAULT(queryFotaUpdate_, false) };
    inline DescribeDesktopsRequest& setQueryFotaUpdate(bool queryFotaUpdate) { DARABONBA_PTR_SET_VALUE(queryFotaUpdate_, queryFotaUpdate) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDesktopsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeDesktopsRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // snapshotPolicyId Field Functions 
    bool hasSnapshotPolicyId() const { return this->snapshotPolicyId_ != nullptr;};
    void deleteSnapshotPolicyId() { this->snapshotPolicyId_ = nullptr;};
    inline string getSnapshotPolicyId() const { DARABONBA_PTR_GET_DEFAULT(snapshotPolicyId_, "") };
    inline DescribeDesktopsRequest& setSnapshotPolicyId(string snapshotPolicyId) { DARABONBA_PTR_SET_VALUE(snapshotPolicyId_, snapshotPolicyId) };


    // subPayType Field Functions 
    bool hasSubPayType() const { return this->subPayType_ != nullptr;};
    void deleteSubPayType() { this->subPayType_ = nullptr;};
    inline string getSubPayType() const { DARABONBA_PTR_GET_DEFAULT(subPayType_, "") };
    inline DescribeDesktopsRequest& setSubPayType(string subPayType) { DARABONBA_PTR_SET_VALUE(subPayType_, subPayType) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<DescribeDesktopsRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<DescribeDesktopsRequest::Tag>) };
    inline vector<DescribeDesktopsRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<DescribeDesktopsRequest::Tag>) };
    inline DescribeDesktopsRequest& setTag(const vector<DescribeDesktopsRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeDesktopsRequest& setTag(vector<DescribeDesktopsRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline DescribeDesktopsRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // The billing method of the cloud computer.
    // 
    // Valid values:
    // 
    // *   Postpaid (default): pay-as-you-go
    // *   PrePaid: subscription
    shared_ptr<string> chargeType_ {};
    // The ID of the cloud computer pool. If you specify `OnlyDesktopGroup`, ignore `DesktopGroupId`. If you leave `DesktopId` empty, all IDs of the cloud computers in the cloud computer pool are queried.````
    shared_ptr<string> desktopGroupId_ {};
    // The cloud computer IDs. You can specify the IDs of 1 to 100 cloud computers.
    shared_ptr<vector<string>> desktopId_ {};
    // The cloud computer name.
    shared_ptr<string> desktopName_ {};
    // The cloud computer status.
    // 
    // Valid values:
    // 
    // *   Stopped
    // *   Starting
    // *   Rebuilding
    // *   Running
    // *   Stopping
    // *   Expired
    // *   Deleted
    // *   Pending
    shared_ptr<string> desktopStatus_ {};
    // The list of cloud computer status.
    shared_ptr<vector<string>> desktopStatusList_ {};
    // The cloud computer type. You can call the [DescribeDesktopTypes](https://help.aliyun.com/document_detail/188882.html) operation to query the IDs of all supported types.
    shared_ptr<string> desktopType_ {};
    // The directory ID, which is the same as the office network ID.
    shared_ptr<string> directoryId_ {};
    // The authorized users of the cloud computer. You can specify the IDs of 1 to 100 users.
    // 
    // >  During a specific period of time, only one user can connect to and use the cloud computer.
    shared_ptr<vector<string>> endUserId_ {};
    // The list of authorized users that you want to exclude from the cloud computer. You can specify the IDs of 1 to 100 users.
    shared_ptr<vector<string>> excludedEndUserId_ {};
    // The time when a subscription cloud computer expires.
    shared_ptr<string> expiredTime_ {};
    // Specifies whether to query the information about the enterprise resource group.
    shared_ptr<bool> fillResourceGroup_ {};
    // Specifies whether to exclude pooled cloud computers.
    // 
    // Valid values:
    // 
    // *   true (default)
    // *   false
    shared_ptr<bool> filterDesktopGroup_ {};
    // The ID of the elastic GPU pool.
    shared_ptr<string> gpuInstanceGroupId_ {};
    // The ID of the cloud computer pool.
    shared_ptr<string> groupId_ {};
    // The IDs of the images.
    shared_ptr<vector<string>> imageId_ {};
    shared_ptr<bool> includeAutoSnapshotPolicy_ {};
    // The flag that is used to manage the cloud desktops.
    shared_ptr<string> managementFlag_ {};
    // The number of entries per page.
    // 
    // *   Maximum value: 100
    // *   Default value: 10
    shared_ptr<int32_t> maxResults_ {};
    // Specifies whether the shared group is a multi-cloud computer type.
    // 
    // Valid values:
    // 
    // - true: a multi-cloud computer type.
    // - false: a single-cloud computer type.
    shared_ptr<bool> multiResource_ {};
    // The token that determines the start point of the next query. If this parameter is left empty, all results are returned.
    shared_ptr<string> nextToken_ {};
    // The office network ID.
    shared_ptr<string> officeSiteId_ {};
    // The office network name.
    shared_ptr<string> officeSiteName_ {};
    // Specifies whether to query pooled cloud computers.
    shared_ptr<bool> onlyDesktopGroup_ {};
    // The operating systems (OSs).
    shared_ptr<vector<string>> osTypes_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the cloud computer policy.
    shared_ptr<string> policyGroupId_ {};
    // The protocol.
    // 
    // Valid values:
    // 
    // *   HDX: High-definition Experience (HDX) protocol
    // *   ASP: in-house Adaptive Streaming Protocol (ASP) (recommended)
    shared_ptr<string> protocolType_ {};
    // The ID of the network throttling rule.
    shared_ptr<string> qosRuleId_ {};
    // Specifies whether to query the image update information about the cloud computer.
    // 
    // Valid values:
    // 
    // *   true
    // *   false (default)
    shared_ptr<bool> queryFotaUpdate_ {};
    // The region ID. You can call the [DescribeRegions](~~DescribeRegions~~) operation to query the regions supported by Elastic Desktop Service (EDS).
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the enterprise resource group.
    shared_ptr<string> resourceGroupId_ {};
    // The ID of the snapshot policy.
    shared_ptr<string> snapshotPolicyId_ {};
    // The billing method of the cloud computer.
    // 
    // Valid values:
    // 
    // *   duration: hourly plan (available for users in the whitelist)
    // *   postPaid: pay-as-you-go
    // *   monthPackage: monthly subscription (120-hour or 250-hour computing plan)
    // *   prePaid: monthly subscription (unlimited-hour computing plan)
    shared_ptr<string> subPayType_ {};
    // The tags that you want to add to the cloud computer. A tag is a key-value pair that consists of a tag key and a tag value. Tags are used to identify resources. You can use tags to manage cloud computers by group. This facilitates search and batch operations. For more information, see [Use tags to manage cloud computers](https://help.aliyun.com/document_detail/203781.html).
    shared_ptr<vector<DescribeDesktopsRequest::Tag>> tag_ {};
    // The name of the end user.
    shared_ptr<string> userName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
