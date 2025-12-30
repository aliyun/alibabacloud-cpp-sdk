// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDESKTOPGROUPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDESKTOPGROUPSREQUEST_HPP_
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
  class DescribeDesktopGroupsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDesktopGroupsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BundleId, bundleId_);
      DARABONBA_PTR_TO_JSON(DesktopGroupId, desktopGroupId_);
      DARABONBA_PTR_TO_JSON(DesktopGroupIds, desktopGroupIds_);
      DARABONBA_PTR_TO_JSON(DesktopGroupName, desktopGroupName_);
      DARABONBA_PTR_TO_JSON(DesktopType, desktopType_);
      DARABONBA_PTR_TO_JSON(EndUserIds, endUserIds_);
      DARABONBA_PTR_TO_JSON(ExcludedEndUserIds, excludedEndUserIds_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(MultiResource, multiResource_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_TO_JSON(OwnType, ownType_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_TO_JSON(PolicyGroupId, policyGroupId_);
      DARABONBA_PTR_TO_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDesktopGroupsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BundleId, bundleId_);
      DARABONBA_PTR_FROM_JSON(DesktopGroupId, desktopGroupId_);
      DARABONBA_PTR_FROM_JSON(DesktopGroupIds, desktopGroupIds_);
      DARABONBA_PTR_FROM_JSON(DesktopGroupName, desktopGroupName_);
      DARABONBA_PTR_FROM_JSON(DesktopType, desktopType_);
      DARABONBA_PTR_FROM_JSON(EndUserIds, endUserIds_);
      DARABONBA_PTR_FROM_JSON(ExcludedEndUserIds, excludedEndUserIds_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(MultiResource, multiResource_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_FROM_JSON(OwnType, ownType_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_FROM_JSON(PolicyGroupId, policyGroupId_);
      DARABONBA_PTR_FROM_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeDesktopGroupsRequest() = default ;
    DescribeDesktopGroupsRequest(const DescribeDesktopGroupsRequest &) = default ;
    DescribeDesktopGroupsRequest(DescribeDesktopGroupsRequest &&) = default ;
    DescribeDesktopGroupsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDesktopGroupsRequest() = default ;
    DescribeDesktopGroupsRequest& operator=(const DescribeDesktopGroupsRequest &) = default ;
    DescribeDesktopGroupsRequest& operator=(DescribeDesktopGroupsRequest &&) = default ;
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
      // The tag key. You cannot specify an empty string as a tag key. A tag key can be up to 128 characters in length and cannot start with `acs:` or `aliyun`. It cannot contain `http://` or `https://`.
      shared_ptr<string> key_ {};
      // The tag value. You can specify an empty string as a tag key. A tag value can be up to 128 characters in length and cannot start with `acs:`. It cannot contain `http://` or `https://`.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->bundleId_ == nullptr
        && this->desktopGroupId_ == nullptr && this->desktopGroupIds_ == nullptr && this->desktopGroupName_ == nullptr && this->desktopType_ == nullptr && this->endUserIds_ == nullptr
        && this->excludedEndUserIds_ == nullptr && this->imageId_ == nullptr && this->maxResults_ == nullptr && this->multiResource_ == nullptr && this->nextToken_ == nullptr
        && this->officeSiteId_ == nullptr && this->ownType_ == nullptr && this->period_ == nullptr && this->periodUnit_ == nullptr && this->policyGroupId_ == nullptr
        && this->protocolType_ == nullptr && this->regionId_ == nullptr && this->status_ == nullptr && this->tag_ == nullptr; };
    // bundleId Field Functions 
    bool hasBundleId() const { return this->bundleId_ != nullptr;};
    void deleteBundleId() { this->bundleId_ = nullptr;};
    inline const vector<string> & getBundleId() const { DARABONBA_PTR_GET_CONST(bundleId_, vector<string>) };
    inline vector<string> getBundleId() { DARABONBA_PTR_GET(bundleId_, vector<string>) };
    inline DescribeDesktopGroupsRequest& setBundleId(const vector<string> & bundleId) { DARABONBA_PTR_SET_VALUE(bundleId_, bundleId) };
    inline DescribeDesktopGroupsRequest& setBundleId(vector<string> && bundleId) { DARABONBA_PTR_SET_RVALUE(bundleId_, bundleId) };


    // desktopGroupId Field Functions 
    bool hasDesktopGroupId() const { return this->desktopGroupId_ != nullptr;};
    void deleteDesktopGroupId() { this->desktopGroupId_ = nullptr;};
    inline string getDesktopGroupId() const { DARABONBA_PTR_GET_DEFAULT(desktopGroupId_, "") };
    inline DescribeDesktopGroupsRequest& setDesktopGroupId(string desktopGroupId) { DARABONBA_PTR_SET_VALUE(desktopGroupId_, desktopGroupId) };


    // desktopGroupIds Field Functions 
    bool hasDesktopGroupIds() const { return this->desktopGroupIds_ != nullptr;};
    void deleteDesktopGroupIds() { this->desktopGroupIds_ = nullptr;};
    inline const vector<string> & getDesktopGroupIds() const { DARABONBA_PTR_GET_CONST(desktopGroupIds_, vector<string>) };
    inline vector<string> getDesktopGroupIds() { DARABONBA_PTR_GET(desktopGroupIds_, vector<string>) };
    inline DescribeDesktopGroupsRequest& setDesktopGroupIds(const vector<string> & desktopGroupIds) { DARABONBA_PTR_SET_VALUE(desktopGroupIds_, desktopGroupIds) };
    inline DescribeDesktopGroupsRequest& setDesktopGroupIds(vector<string> && desktopGroupIds) { DARABONBA_PTR_SET_RVALUE(desktopGroupIds_, desktopGroupIds) };


    // desktopGroupName Field Functions 
    bool hasDesktopGroupName() const { return this->desktopGroupName_ != nullptr;};
    void deleteDesktopGroupName() { this->desktopGroupName_ = nullptr;};
    inline string getDesktopGroupName() const { DARABONBA_PTR_GET_DEFAULT(desktopGroupName_, "") };
    inline DescribeDesktopGroupsRequest& setDesktopGroupName(string desktopGroupName) { DARABONBA_PTR_SET_VALUE(desktopGroupName_, desktopGroupName) };


    // desktopType Field Functions 
    bool hasDesktopType() const { return this->desktopType_ != nullptr;};
    void deleteDesktopType() { this->desktopType_ = nullptr;};
    inline string getDesktopType() const { DARABONBA_PTR_GET_DEFAULT(desktopType_, "") };
    inline DescribeDesktopGroupsRequest& setDesktopType(string desktopType) { DARABONBA_PTR_SET_VALUE(desktopType_, desktopType) };


    // endUserIds Field Functions 
    bool hasEndUserIds() const { return this->endUserIds_ != nullptr;};
    void deleteEndUserIds() { this->endUserIds_ = nullptr;};
    inline const vector<string> & getEndUserIds() const { DARABONBA_PTR_GET_CONST(endUserIds_, vector<string>) };
    inline vector<string> getEndUserIds() { DARABONBA_PTR_GET(endUserIds_, vector<string>) };
    inline DescribeDesktopGroupsRequest& setEndUserIds(const vector<string> & endUserIds) { DARABONBA_PTR_SET_VALUE(endUserIds_, endUserIds) };
    inline DescribeDesktopGroupsRequest& setEndUserIds(vector<string> && endUserIds) { DARABONBA_PTR_SET_RVALUE(endUserIds_, endUserIds) };


    // excludedEndUserIds Field Functions 
    bool hasExcludedEndUserIds() const { return this->excludedEndUserIds_ != nullptr;};
    void deleteExcludedEndUserIds() { this->excludedEndUserIds_ = nullptr;};
    inline const vector<string> & getExcludedEndUserIds() const { DARABONBA_PTR_GET_CONST(excludedEndUserIds_, vector<string>) };
    inline vector<string> getExcludedEndUserIds() { DARABONBA_PTR_GET(excludedEndUserIds_, vector<string>) };
    inline DescribeDesktopGroupsRequest& setExcludedEndUserIds(const vector<string> & excludedEndUserIds) { DARABONBA_PTR_SET_VALUE(excludedEndUserIds_, excludedEndUserIds) };
    inline DescribeDesktopGroupsRequest& setExcludedEndUserIds(vector<string> && excludedEndUserIds) { DARABONBA_PTR_SET_RVALUE(excludedEndUserIds_, excludedEndUserIds) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline const vector<string> & getImageId() const { DARABONBA_PTR_GET_CONST(imageId_, vector<string>) };
    inline vector<string> getImageId() { DARABONBA_PTR_GET(imageId_, vector<string>) };
    inline DescribeDesktopGroupsRequest& setImageId(const vector<string> & imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };
    inline DescribeDesktopGroupsRequest& setImageId(vector<string> && imageId) { DARABONBA_PTR_SET_RVALUE(imageId_, imageId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeDesktopGroupsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // multiResource Field Functions 
    bool hasMultiResource() const { return this->multiResource_ != nullptr;};
    void deleteMultiResource() { this->multiResource_ = nullptr;};
    inline bool getMultiResource() const { DARABONBA_PTR_GET_DEFAULT(multiResource_, false) };
    inline DescribeDesktopGroupsRequest& setMultiResource(bool multiResource) { DARABONBA_PTR_SET_VALUE(multiResource_, multiResource) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeDesktopGroupsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline string getOfficeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
    inline DescribeDesktopGroupsRequest& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


    // ownType Field Functions 
    bool hasOwnType() const { return this->ownType_ != nullptr;};
    void deleteOwnType() { this->ownType_ = nullptr;};
    inline int64_t getOwnType() const { DARABONBA_PTR_GET_DEFAULT(ownType_, 0L) };
    inline DescribeDesktopGroupsRequest& setOwnType(int64_t ownType) { DARABONBA_PTR_SET_VALUE(ownType_, ownType) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline DescribeDesktopGroupsRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string getPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline DescribeDesktopGroupsRequest& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // policyGroupId Field Functions 
    bool hasPolicyGroupId() const { return this->policyGroupId_ != nullptr;};
    void deletePolicyGroupId() { this->policyGroupId_ = nullptr;};
    inline string getPolicyGroupId() const { DARABONBA_PTR_GET_DEFAULT(policyGroupId_, "") };
    inline DescribeDesktopGroupsRequest& setPolicyGroupId(string policyGroupId) { DARABONBA_PTR_SET_VALUE(policyGroupId_, policyGroupId) };


    // protocolType Field Functions 
    bool hasProtocolType() const { return this->protocolType_ != nullptr;};
    void deleteProtocolType() { this->protocolType_ = nullptr;};
    inline string getProtocolType() const { DARABONBA_PTR_GET_DEFAULT(protocolType_, "") };
    inline DescribeDesktopGroupsRequest& setProtocolType(string protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDesktopGroupsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeDesktopGroupsRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<DescribeDesktopGroupsRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<DescribeDesktopGroupsRequest::Tag>) };
    inline vector<DescribeDesktopGroupsRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<DescribeDesktopGroupsRequest::Tag>) };
    inline DescribeDesktopGroupsRequest& setTag(const vector<DescribeDesktopGroupsRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeDesktopGroupsRequest& setTag(vector<DescribeDesktopGroupsRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The IDs of the cloud computer templates.
    shared_ptr<vector<string>> bundleId_ {};
    // The ID of the cloud computer share.
    shared_ptr<string> desktopGroupId_ {};
    // The IDs of the cloud computer shares.
    shared_ptr<vector<string>> desktopGroupIds_ {};
    // The name of the cloud computer share that you want to query. Fuzzy search is supported.
    shared_ptr<string> desktopGroupName_ {};
    shared_ptr<string> desktopType_ {};
    // The IDs of the users who can access the cloud computer share.
    shared_ptr<vector<string>> endUserIds_ {};
    // The authorized users that you want to exclude.
    shared_ptr<vector<string>> excludedEndUserIds_ {};
    // The IDs of the images.
    shared_ptr<vector<string>> imageId_ {};
    // The number of entries to return on each page. Valid values: 1 to 100. Default value: 10.
    shared_ptr<int32_t> maxResults_ {};
    // Specifies whether the cloud computer share is a many-to-many share.
    // 
    // Valid values:
    // 
    // *   true: The cloud computer share is a many-to-many share.
    // *   false: The cloud computer share is a one-to-many share.
    shared_ptr<bool> multiResource_ {};
    // The pagination token that is used in the next request to retrieve a new page of results. If the NextToken parameter is empty, no next page exists.
    shared_ptr<string> nextToken_ {};
    // The ID of the office network in which the cloud computer share resides.
    shared_ptr<string> officeSiteId_ {};
    // The type of the cloud computer share.
    // 
    // >  This parameter is not publicly available.
    // 
    // Valid values:
    // 
    // *   0: a single-session many-to-many share.
    // *   1: a multi-session many-to-many share.
    shared_ptr<int64_t> ownType_ {};
    // The subscription duration of the cloud computer share. The unit is specified by `PeriodUnit`.
    // 
    // *   Valid values if you set `PeriodUnit` to `Month`:
    // 
    //     *   1
    //     *   2
    //     *   3
    //     *   6
    // 
    // *   Valid values if you set `PeriodUnit` to `Year`:
    // 
    //     *   1
    //     *   2
    //     *   3
    //     *   4
    //     *   5
    shared_ptr<int32_t> period_ {};
    // The unit of the subscription duration.
    shared_ptr<string> periodUnit_ {};
    // The ID of the applied policy.
    shared_ptr<string> policyGroupId_ {};
    // The protocol type.
    // 
    // Valid values:
    // 
    // *   High-definition Experience (HDX)
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   Adaptive Streaming Protocol (ASP)
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    shared_ptr<string> protocolType_ {};
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) operation to query the regions supported by WUYING Workspace.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The status of the cloud computer share.
    // 
    // Valid values:
    // 
    // *   0: The cloud computer share is unpaid.
    // *   1: The cloud computer share is normal.
    // *   2: The cloud computer share expired, or your account has an overdue payment.
    shared_ptr<int32_t> status_ {};
    // The tags that you want to add to the cloud computer share. You can specify 1 to 20 tags.
    shared_ptr<vector<DescribeDesktopGroupsRequest::Tag>> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
