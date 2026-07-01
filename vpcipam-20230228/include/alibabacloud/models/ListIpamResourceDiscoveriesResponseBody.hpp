// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIPAMRESOURCEDISCOVERIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTIPAMRESOURCEDISCOVERIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VpcIpam20230228
{
namespace Models
{
  class ListIpamResourceDiscoveriesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIpamResourceDiscoveriesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(IpamResourceDiscoveries, ipamResourceDiscoveries_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListIpamResourceDiscoveriesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(IpamResourceDiscoveries, ipamResourceDiscoveries_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListIpamResourceDiscoveriesResponseBody() = default ;
    ListIpamResourceDiscoveriesResponseBody(const ListIpamResourceDiscoveriesResponseBody &) = default ;
    ListIpamResourceDiscoveriesResponseBody(ListIpamResourceDiscoveriesResponseBody &&) = default ;
    ListIpamResourceDiscoveriesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIpamResourceDiscoveriesResponseBody() = default ;
    ListIpamResourceDiscoveriesResponseBody& operator=(const ListIpamResourceDiscoveriesResponseBody &) = default ;
    ListIpamResourceDiscoveriesResponseBody& operator=(ListIpamResourceDiscoveriesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class IpamResourceDiscoveries : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const IpamResourceDiscoveries& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(IpamResourceDiscoveryDescription, ipamResourceDiscoveryDescription_);
        DARABONBA_PTR_TO_JSON(IpamResourceDiscoveryId, ipamResourceDiscoveryId_);
        DARABONBA_PTR_TO_JSON(IpamResourceDiscoveryName, ipamResourceDiscoveryName_);
        DARABONBA_PTR_TO_JSON(IpamResourceDiscoveryStatus, ipamResourceDiscoveryStatus_);
        DARABONBA_PTR_TO_JSON(OperatingRegionList, operatingRegionList_);
        DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(ShareType, shareType_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, IpamResourceDiscoveries& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(IpamResourceDiscoveryDescription, ipamResourceDiscoveryDescription_);
        DARABONBA_PTR_FROM_JSON(IpamResourceDiscoveryId, ipamResourceDiscoveryId_);
        DARABONBA_PTR_FROM_JSON(IpamResourceDiscoveryName, ipamResourceDiscoveryName_);
        DARABONBA_PTR_FROM_JSON(IpamResourceDiscoveryStatus, ipamResourceDiscoveryStatus_);
        DARABONBA_PTR_FROM_JSON(OperatingRegionList, operatingRegionList_);
        DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(ShareType, shareType_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      IpamResourceDiscoveries() = default ;
      IpamResourceDiscoveries(const IpamResourceDiscoveries &) = default ;
      IpamResourceDiscoveries(IpamResourceDiscoveries &&) = default ;
      IpamResourceDiscoveries(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~IpamResourceDiscoveries() = default ;
      IpamResourceDiscoveries& operator=(const IpamResourceDiscoveries &) = default ;
      IpamResourceDiscoveries& operator=(IpamResourceDiscoveries &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Tags() = default ;
        Tags(const Tags &) = default ;
        Tags(Tags &&) = default ;
        Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tags() = default ;
        Tags& operator=(const Tags &) = default ;
        Tags& operator=(Tags &&) = default ;
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
        inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The tag key.
        shared_ptr<string> key_ {};
        // The tag value.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->ipamResourceDiscoveryDescription_ == nullptr && this->ipamResourceDiscoveryId_ == nullptr && this->ipamResourceDiscoveryName_ == nullptr && this->ipamResourceDiscoveryStatus_ == nullptr && this->operatingRegionList_ == nullptr
        && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->shareType_ == nullptr && this->tags_ == nullptr
        && this->type_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline IpamResourceDiscoveries& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // ipamResourceDiscoveryDescription Field Functions 
      bool hasIpamResourceDiscoveryDescription() const { return this->ipamResourceDiscoveryDescription_ != nullptr;};
      void deleteIpamResourceDiscoveryDescription() { this->ipamResourceDiscoveryDescription_ = nullptr;};
      inline string getIpamResourceDiscoveryDescription() const { DARABONBA_PTR_GET_DEFAULT(ipamResourceDiscoveryDescription_, "") };
      inline IpamResourceDiscoveries& setIpamResourceDiscoveryDescription(string ipamResourceDiscoveryDescription) { DARABONBA_PTR_SET_VALUE(ipamResourceDiscoveryDescription_, ipamResourceDiscoveryDescription) };


      // ipamResourceDiscoveryId Field Functions 
      bool hasIpamResourceDiscoveryId() const { return this->ipamResourceDiscoveryId_ != nullptr;};
      void deleteIpamResourceDiscoveryId() { this->ipamResourceDiscoveryId_ = nullptr;};
      inline string getIpamResourceDiscoveryId() const { DARABONBA_PTR_GET_DEFAULT(ipamResourceDiscoveryId_, "") };
      inline IpamResourceDiscoveries& setIpamResourceDiscoveryId(string ipamResourceDiscoveryId) { DARABONBA_PTR_SET_VALUE(ipamResourceDiscoveryId_, ipamResourceDiscoveryId) };


      // ipamResourceDiscoveryName Field Functions 
      bool hasIpamResourceDiscoveryName() const { return this->ipamResourceDiscoveryName_ != nullptr;};
      void deleteIpamResourceDiscoveryName() { this->ipamResourceDiscoveryName_ = nullptr;};
      inline string getIpamResourceDiscoveryName() const { DARABONBA_PTR_GET_DEFAULT(ipamResourceDiscoveryName_, "") };
      inline IpamResourceDiscoveries& setIpamResourceDiscoveryName(string ipamResourceDiscoveryName) { DARABONBA_PTR_SET_VALUE(ipamResourceDiscoveryName_, ipamResourceDiscoveryName) };


      // ipamResourceDiscoveryStatus Field Functions 
      bool hasIpamResourceDiscoveryStatus() const { return this->ipamResourceDiscoveryStatus_ != nullptr;};
      void deleteIpamResourceDiscoveryStatus() { this->ipamResourceDiscoveryStatus_ = nullptr;};
      inline string getIpamResourceDiscoveryStatus() const { DARABONBA_PTR_GET_DEFAULT(ipamResourceDiscoveryStatus_, "") };
      inline IpamResourceDiscoveries& setIpamResourceDiscoveryStatus(string ipamResourceDiscoveryStatus) { DARABONBA_PTR_SET_VALUE(ipamResourceDiscoveryStatus_, ipamResourceDiscoveryStatus) };


      // operatingRegionList Field Functions 
      bool hasOperatingRegionList() const { return this->operatingRegionList_ != nullptr;};
      void deleteOperatingRegionList() { this->operatingRegionList_ = nullptr;};
      inline const vector<string> & getOperatingRegionList() const { DARABONBA_PTR_GET_CONST(operatingRegionList_, vector<string>) };
      inline vector<string> getOperatingRegionList() { DARABONBA_PTR_GET(operatingRegionList_, vector<string>) };
      inline IpamResourceDiscoveries& setOperatingRegionList(const vector<string> & operatingRegionList) { DARABONBA_PTR_SET_VALUE(operatingRegionList_, operatingRegionList) };
      inline IpamResourceDiscoveries& setOperatingRegionList(vector<string> && operatingRegionList) { DARABONBA_PTR_SET_RVALUE(operatingRegionList_, operatingRegionList) };


      // ownerId Field Functions 
      bool hasOwnerId() const { return this->ownerId_ != nullptr;};
      void deleteOwnerId() { this->ownerId_ = nullptr;};
      inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
      inline IpamResourceDiscoveries& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline IpamResourceDiscoveries& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline IpamResourceDiscoveries& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // shareType Field Functions 
      bool hasShareType() const { return this->shareType_ != nullptr;};
      void deleteShareType() { this->shareType_ = nullptr;};
      inline string getShareType() const { DARABONBA_PTR_GET_DEFAULT(shareType_, "") };
      inline IpamResourceDiscoveries& setShareType(string shareType) { DARABONBA_PTR_SET_VALUE(shareType_, shareType) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<IpamResourceDiscoveries::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<IpamResourceDiscoveries::Tags>) };
      inline vector<IpamResourceDiscoveries::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<IpamResourceDiscoveries::Tags>) };
      inline IpamResourceDiscoveries& setTags(const vector<IpamResourceDiscoveries::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline IpamResourceDiscoveries& setTags(vector<IpamResourceDiscoveries::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline IpamResourceDiscoveries& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The time when the resource discovery was created.
      shared_ptr<string> createTime_ {};
      // The description of the resource discovery.
      shared_ptr<string> ipamResourceDiscoveryDescription_ {};
      // The ID of the resource discovery instance.
      shared_ptr<string> ipamResourceDiscoveryId_ {};
      // The name of the resource discovery.
      shared_ptr<string> ipamResourceDiscoveryName_ {};
      // The status of the resource discovery instance. Valid values:
      // 
      // - **Creating**: The instance is being created.
      // 
      // - **Created**: The instance is created.
      // 
      // - **Modifying**: The instance is being modified.
      // 
      // - **Deleting**: The instance is being deleted.
      // 
      // - **Deleted**: The instance is deleted.
      shared_ptr<string> ipamResourceDiscoveryStatus_ {};
      // The list of operating regions of the resource discovery.
      shared_ptr<vector<string>> operatingRegionList_ {};
      // The Alibaba Cloud account of the owner of the resource discovery instance.
      shared_ptr<int64_t> ownerId_ {};
      // The ID of the region where the resource discovery instance is located.
      shared_ptr<string> regionId_ {};
      // The ID of the resource group to which the resource discovery belongs.
      shared_ptr<string> resourceGroupId_ {};
      // The sharing status of the resource.
      // 
      // - If this parameter is empty, the resource discovery is a regular instance.
      // 
      // - If this parameter is set to Shared, the resource discovery is a shared resource.
      // 
      // - If this parameter is set to Sharing, the resource discovery is being shared.
      shared_ptr<string> shareType_ {};
      // The list of tags.
      shared_ptr<vector<IpamResourceDiscoveries::Tags>> tags_ {};
      // The type of the resource discovery.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->count_ == nullptr
        && this->ipamResourceDiscoveries_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline ListIpamResourceDiscoveriesResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // ipamResourceDiscoveries Field Functions 
    bool hasIpamResourceDiscoveries() const { return this->ipamResourceDiscoveries_ != nullptr;};
    void deleteIpamResourceDiscoveries() { this->ipamResourceDiscoveries_ = nullptr;};
    inline const vector<ListIpamResourceDiscoveriesResponseBody::IpamResourceDiscoveries> & getIpamResourceDiscoveries() const { DARABONBA_PTR_GET_CONST(ipamResourceDiscoveries_, vector<ListIpamResourceDiscoveriesResponseBody::IpamResourceDiscoveries>) };
    inline vector<ListIpamResourceDiscoveriesResponseBody::IpamResourceDiscoveries> getIpamResourceDiscoveries() { DARABONBA_PTR_GET(ipamResourceDiscoveries_, vector<ListIpamResourceDiscoveriesResponseBody::IpamResourceDiscoveries>) };
    inline ListIpamResourceDiscoveriesResponseBody& setIpamResourceDiscoveries(const vector<ListIpamResourceDiscoveriesResponseBody::IpamResourceDiscoveries> & ipamResourceDiscoveries) { DARABONBA_PTR_SET_VALUE(ipamResourceDiscoveries_, ipamResourceDiscoveries) };
    inline ListIpamResourceDiscoveriesResponseBody& setIpamResourceDiscoveries(vector<ListIpamResourceDiscoveriesResponseBody::IpamResourceDiscoveries> && ipamResourceDiscoveries) { DARABONBA_PTR_SET_RVALUE(ipamResourceDiscoveries_, ipamResourceDiscoveries) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListIpamResourceDiscoveriesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListIpamResourceDiscoveriesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListIpamResourceDiscoveriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListIpamResourceDiscoveriesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The number of entries returned on the current page.
    shared_ptr<int32_t> count_ {};
    // The list of resource discovery instances.
    shared_ptr<vector<ListIpamResourceDiscoveriesResponseBody::IpamResourceDiscoveries>> ipamResourceDiscoveries_ {};
    // The maximum number of entries returned on each page. Valid values: 1 to 100. Default value: 10.
    shared_ptr<int32_t> maxResults_ {};
    // The token for the next page of results. Valid values:
    // 
    // - If **NextToken** is empty, no more results are available.
    // 
    // - If a value is returned for **NextToken**, the value is the token that is used for the next query.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries that match the query conditions.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VpcIpam20230228
#endif
