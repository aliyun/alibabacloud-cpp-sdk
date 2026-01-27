// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDISKREPLICAGROUPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDISKREPLICAGROUPSREQUEST_HPP_
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
  class DescribeDiskReplicaGroupsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDiskReplicaGroupsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GroupIds, groupIds_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Site, site_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDiskReplicaGroupsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupIds, groupIds_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Site, site_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeDiskReplicaGroupsRequest() = default ;
    DescribeDiskReplicaGroupsRequest(const DescribeDiskReplicaGroupsRequest &) = default ;
    DescribeDiskReplicaGroupsRequest(DescribeDiskReplicaGroupsRequest &&) = default ;
    DescribeDiskReplicaGroupsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDiskReplicaGroupsRequest() = default ;
    DescribeDiskReplicaGroupsRequest& operator=(const DescribeDiskReplicaGroupsRequest &) = default ;
    DescribeDiskReplicaGroupsRequest& operator=(DescribeDiskReplicaGroupsRequest &&) = default ;
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
      // The key of tag N of the replication pair-consistent group.
      shared_ptr<string> key_ {};
      // The value of tag N of the replication pair-consistent group.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->groupIds_ == nullptr
        && this->maxResults_ == nullptr && this->name_ == nullptr && this->nextToken_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr
        && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->site_ == nullptr && this->tag_ == nullptr; };
    // groupIds Field Functions 
    bool hasGroupIds() const { return this->groupIds_ != nullptr;};
    void deleteGroupIds() { this->groupIds_ = nullptr;};
    inline string getGroupIds() const { DARABONBA_PTR_GET_DEFAULT(groupIds_, "") };
    inline DescribeDiskReplicaGroupsRequest& setGroupIds(string groupIds) { DARABONBA_PTR_SET_VALUE(groupIds_, groupIds) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline DescribeDiskReplicaGroupsRequest& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeDiskReplicaGroupsRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeDiskReplicaGroupsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDiskReplicaGroupsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDiskReplicaGroupsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDiskReplicaGroupsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeDiskReplicaGroupsRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // site Field Functions 
    bool hasSite() const { return this->site_ != nullptr;};
    void deleteSite() { this->site_ = nullptr;};
    inline string getSite() const { DARABONBA_PTR_GET_DEFAULT(site_, "") };
    inline DescribeDiskReplicaGroupsRequest& setSite(string site) { DARABONBA_PTR_SET_VALUE(site_, site) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<DescribeDiskReplicaGroupsRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<DescribeDiskReplicaGroupsRequest::Tag>) };
    inline vector<DescribeDiskReplicaGroupsRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<DescribeDiskReplicaGroupsRequest::Tag>) };
    inline DescribeDiskReplicaGroupsRequest& setTag(const vector<DescribeDiskReplicaGroupsRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeDiskReplicaGroupsRequest& setTag(vector<DescribeDiskReplicaGroupsRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The IDs of the replication pair-consistent groups. You can specify the IDs of one or more replication pair-consistent groups. Separate the IDs with commas (,).
    // 
    // This parameter is empty by default, which indicates that all replication pair-consistent groups in the specified region are queried. You can specify up to the IDs of 100 replication pair-consistent groups.
    shared_ptr<string> groupIds_ {};
    // The maximum number of entries per page. You can use this parameter together with NextToken.
    // 
    // Valid values: 1 to 500.
    // 
    // Default value: 10.
    shared_ptr<int64_t> maxResults_ {};
    // The name of the replication pair-consistent group. You can perform a fuzzy search.
    shared_ptr<string> name_ {};
    // The pagination token that is used in the next request to retrieve a new page of results. You do not need to specify this parameter for the first request. You must specify the token that is obtained from the previous query as the value of NextToken. If you specify NextToken, the PageSize and PageNumber request parameters do not take effect, and the TotalCount response parameter is invalid.
    shared_ptr<string> nextToken_ {};
    // The number of the page to return.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries to return on each page. Valid values: 1 to 100.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the region to which the replication pair-consistent group belongs.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the resource group to which the replication pair-consistent group belongs.
    shared_ptr<string> resourceGroupId_ {};
    // The type of the site from which the information of replication pair-consistent groups is retrieved. This parameter is used for scenarios where data is replicated across zones in replication pairs.
    // 
    // *   If this parameter is not specified, information such as the status of replication pair-consistent groups at the primary site is queried and returned.
    // 
    // *   Otherwise, information such as the state of replication pairs at the site specified by the Site parameter is queried and returned. Valid values:
    // 
    //     *   production: primary site
    //     *   backup: secondary site
    shared_ptr<string> site_ {};
    // The tags to add to the replication pair-consistent group. You can specify up to 20 tags.
    shared_ptr<vector<DescribeDiskReplicaGroupsRequest::Tag>> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
