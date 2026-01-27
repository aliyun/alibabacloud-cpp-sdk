// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDBLOCKSTORAGECLUSTERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDBLOCKSTORAGECLUSTERSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class DescribeDedicatedBlockStorageClustersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDedicatedBlockStorageClustersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AzoneId, azoneId_);
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DedicatedBlockStorageClusterId, dedicatedBlockStorageClusterId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDedicatedBlockStorageClustersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AzoneId, azoneId_);
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DedicatedBlockStorageClusterId, dedicatedBlockStorageClusterId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeDedicatedBlockStorageClustersRequest() = default ;
    DescribeDedicatedBlockStorageClustersRequest(const DescribeDedicatedBlockStorageClustersRequest &) = default ;
    DescribeDedicatedBlockStorageClustersRequest(DescribeDedicatedBlockStorageClustersRequest &&) = default ;
    DescribeDedicatedBlockStorageClustersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDedicatedBlockStorageClustersRequest() = default ;
    DescribeDedicatedBlockStorageClustersRequest& operator=(const DescribeDedicatedBlockStorageClustersRequest &) = default ;
    DescribeDedicatedBlockStorageClustersRequest& operator=(DescribeDedicatedBlockStorageClustersRequest &&) = default ;
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
      // The tag key of the dedicated block storage cluster.
      shared_ptr<string> key_ {};
      // The tag value of the dedicated block storage cluster.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->azoneId_ == nullptr
        && this->category_ == nullptr && this->clientToken_ == nullptr && this->dedicatedBlockStorageClusterId_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->status_ == nullptr
        && this->tag_ == nullptr; };
    // azoneId Field Functions 
    bool hasAzoneId() const { return this->azoneId_ != nullptr;};
    void deleteAzoneId() { this->azoneId_ = nullptr;};
    inline string getAzoneId() const { DARABONBA_PTR_GET_DEFAULT(azoneId_, "") };
    inline DescribeDedicatedBlockStorageClustersRequest& setAzoneId(string azoneId) { DARABONBA_PTR_SET_VALUE(azoneId_, azoneId) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline DescribeDedicatedBlockStorageClustersRequest& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DescribeDedicatedBlockStorageClustersRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dedicatedBlockStorageClusterId Field Functions 
    bool hasDedicatedBlockStorageClusterId() const { return this->dedicatedBlockStorageClusterId_ != nullptr;};
    void deleteDedicatedBlockStorageClusterId() { this->dedicatedBlockStorageClusterId_ = nullptr;};
    inline const vector<string> & getDedicatedBlockStorageClusterId() const { DARABONBA_PTR_GET_CONST(dedicatedBlockStorageClusterId_, vector<string>) };
    inline vector<string> getDedicatedBlockStorageClusterId() { DARABONBA_PTR_GET(dedicatedBlockStorageClusterId_, vector<string>) };
    inline DescribeDedicatedBlockStorageClustersRequest& setDedicatedBlockStorageClusterId(const vector<string> & dedicatedBlockStorageClusterId) { DARABONBA_PTR_SET_VALUE(dedicatedBlockStorageClusterId_, dedicatedBlockStorageClusterId) };
    inline DescribeDedicatedBlockStorageClustersRequest& setDedicatedBlockStorageClusterId(vector<string> && dedicatedBlockStorageClusterId) { DARABONBA_PTR_SET_RVALUE(dedicatedBlockStorageClusterId_, dedicatedBlockStorageClusterId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeDedicatedBlockStorageClustersRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeDedicatedBlockStorageClustersRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDedicatedBlockStorageClustersRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDedicatedBlockStorageClustersRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDedicatedBlockStorageClustersRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeDedicatedBlockStorageClustersRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline const vector<string> & getStatus() const { DARABONBA_PTR_GET_CONST(status_, vector<string>) };
    inline vector<string> getStatus() { DARABONBA_PTR_GET(status_, vector<string>) };
    inline DescribeDedicatedBlockStorageClustersRequest& setStatus(const vector<string> & status) { DARABONBA_PTR_SET_VALUE(status_, status) };
    inline DescribeDedicatedBlockStorageClustersRequest& setStatus(vector<string> && status) { DARABONBA_PTR_SET_RVALUE(status_, status) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<DescribeDedicatedBlockStorageClustersRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<DescribeDedicatedBlockStorageClustersRequest::Tag>) };
    inline vector<DescribeDedicatedBlockStorageClustersRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<DescribeDedicatedBlockStorageClustersRequest::Tag>) };
    inline DescribeDedicatedBlockStorageClustersRequest& setTag(const vector<DescribeDedicatedBlockStorageClustersRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeDedicatedBlockStorageClustersRequest& setTag(vector<DescribeDedicatedBlockStorageClustersRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The zone ID of the dedicated block storage cluster. You can call the [DescribeZones](https://help.aliyun.com/document_detail/25610.html) operation to query the most recent zone list.
    shared_ptr<string> azoneId_ {};
    // The category of disks that can be created in the dedicated block storage cluster.
    // 
    // Set the value to cloud_essd. Only enhanced SSDs (ESSDs) can be created in dedicated block storage clusters.
    shared_ptr<string> category_ {};
    shared_ptr<string> clientToken_ {};
    shared_ptr<vector<string>> dedicatedBlockStorageClusterId_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Valid values: 1 to 100.
    shared_ptr<int32_t> pageSize_ {};
    // The region ID of the dedicated block storage cluster. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the resource group to which the dedicated block storage cluster belongs.
    shared_ptr<string> resourceGroupId_ {};
    // The states of dedicated block storage clusters. Valid values:
    // 
    // *   Preparing
    // *   Running
    // *   Expired
    // *   Offline
    // 
    // Multiple states can be specified. Valid values of N: 1, 2, 3, and 4.
    shared_ptr<vector<string>> status_ {};
    // The tags. Up to 20 tags are supported.
    shared_ptr<vector<DescribeDedicatedBlockStorageClustersRequest::Tag>> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
