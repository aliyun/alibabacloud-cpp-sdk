// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHRESOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SEARCHRESOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceCenter20221201
{
namespace Models
{
  class SearchResourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchResourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Filters, filters_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Resources, resources_);
    };
    friend void from_json(const Darabonba::Json& j, SearchResourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Filters, filters_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Resources, resources_);
    };
    SearchResourcesResponseBody() = default ;
    SearchResourcesResponseBody(const SearchResourcesResponseBody &) = default ;
    SearchResourcesResponseBody(SearchResourcesResponseBody &&) = default ;
    SearchResourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchResourcesResponseBody() = default ;
    SearchResourcesResponseBody& operator=(const SearchResourcesResponseBody &) = default ;
    SearchResourcesResponseBody& operator=(SearchResourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Resources : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Resources& obj) { 
        DARABONBA_PTR_TO_JSON(AccountId, accountId_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Deleted, deleted_);
        DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_TO_JSON(IpAddressAttributes, ipAddressAttributes_);
        DARABONBA_PTR_TO_JSON(IpAddresses, ipAddresses_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, Resources& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Deleted, deleted_);
        DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_FROM_JSON(IpAddressAttributes, ipAddressAttributes_);
        DARABONBA_PTR_FROM_JSON(IpAddresses, ipAddresses_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
        DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
      };
      Resources() = default ;
      Resources(const Resources &) = default ;
      Resources(Resources &&) = default ;
      Resources(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Resources() = default ;
      Resources& operator=(const Resources &) = default ;
      Resources& operator=(Resources &&) = default ;
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
        // The key of tag N.
        shared_ptr<string> key_ {};
        // The value of tag N.
        shared_ptr<string> value_ {};
      };

      class IpAddressAttributes : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const IpAddressAttributes& obj) { 
          DARABONBA_PTR_TO_JSON(IpAddress, ipAddress_);
          DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
          DARABONBA_PTR_TO_JSON(Version, version_);
        };
        friend void from_json(const Darabonba::Json& j, IpAddressAttributes& obj) { 
          DARABONBA_PTR_FROM_JSON(IpAddress, ipAddress_);
          DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
          DARABONBA_PTR_FROM_JSON(Version, version_);
        };
        IpAddressAttributes() = default ;
        IpAddressAttributes(const IpAddressAttributes &) = default ;
        IpAddressAttributes(IpAddressAttributes &&) = default ;
        IpAddressAttributes(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~IpAddressAttributes() = default ;
        IpAddressAttributes& operator=(const IpAddressAttributes &) = default ;
        IpAddressAttributes& operator=(IpAddressAttributes &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->ipAddress_ == nullptr
        && this->networkType_ == nullptr && this->version_ == nullptr; };
        // ipAddress Field Functions 
        bool hasIpAddress() const { return this->ipAddress_ != nullptr;};
        void deleteIpAddress() { this->ipAddress_ = nullptr;};
        inline string getIpAddress() const { DARABONBA_PTR_GET_DEFAULT(ipAddress_, "") };
        inline IpAddressAttributes& setIpAddress(string ipAddress) { DARABONBA_PTR_SET_VALUE(ipAddress_, ipAddress) };


        // networkType Field Functions 
        bool hasNetworkType() const { return this->networkType_ != nullptr;};
        void deleteNetworkType() { this->networkType_ = nullptr;};
        inline string getNetworkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
        inline IpAddressAttributes& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
        inline IpAddressAttributes& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      protected:
        // The IP address.
        shared_ptr<string> ipAddress_ {};
        // The network type. Valid values:
        // 
        // *   **Public**: the Internet
        // *   **Private**: internal network
        shared_ptr<string> networkType_ {};
        // The version.
        shared_ptr<string> version_ {};
      };

      virtual bool empty() const override { return this->accountId_ == nullptr
        && this->createTime_ == nullptr && this->deleted_ == nullptr && this->expireTime_ == nullptr && this->ipAddressAttributes_ == nullptr && this->ipAddresses_ == nullptr
        && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->resourceId_ == nullptr && this->resourceName_ == nullptr && this->resourceType_ == nullptr
        && this->tags_ == nullptr && this->zoneId_ == nullptr; };
      // accountId Field Functions 
      bool hasAccountId() const { return this->accountId_ != nullptr;};
      void deleteAccountId() { this->accountId_ = nullptr;};
      inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
      inline Resources& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Resources& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // deleted Field Functions 
      bool hasDeleted() const { return this->deleted_ != nullptr;};
      void deleteDeleted() { this->deleted_ = nullptr;};
      inline bool getDeleted() const { DARABONBA_PTR_GET_DEFAULT(deleted_, false) };
      inline Resources& setDeleted(bool deleted) { DARABONBA_PTR_SET_VALUE(deleted_, deleted) };


      // expireTime Field Functions 
      bool hasExpireTime() const { return this->expireTime_ != nullptr;};
      void deleteExpireTime() { this->expireTime_ = nullptr;};
      inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
      inline Resources& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


      // ipAddressAttributes Field Functions 
      bool hasIpAddressAttributes() const { return this->ipAddressAttributes_ != nullptr;};
      void deleteIpAddressAttributes() { this->ipAddressAttributes_ = nullptr;};
      inline const vector<Resources::IpAddressAttributes> & getIpAddressAttributes() const { DARABONBA_PTR_GET_CONST(ipAddressAttributes_, vector<Resources::IpAddressAttributes>) };
      inline vector<Resources::IpAddressAttributes> getIpAddressAttributes() { DARABONBA_PTR_GET(ipAddressAttributes_, vector<Resources::IpAddressAttributes>) };
      inline Resources& setIpAddressAttributes(const vector<Resources::IpAddressAttributes> & ipAddressAttributes) { DARABONBA_PTR_SET_VALUE(ipAddressAttributes_, ipAddressAttributes) };
      inline Resources& setIpAddressAttributes(vector<Resources::IpAddressAttributes> && ipAddressAttributes) { DARABONBA_PTR_SET_RVALUE(ipAddressAttributes_, ipAddressAttributes) };


      // ipAddresses Field Functions 
      bool hasIpAddresses() const { return this->ipAddresses_ != nullptr;};
      void deleteIpAddresses() { this->ipAddresses_ = nullptr;};
      inline const vector<string> & getIpAddresses() const { DARABONBA_PTR_GET_CONST(ipAddresses_, vector<string>) };
      inline vector<string> getIpAddresses() { DARABONBA_PTR_GET(ipAddresses_, vector<string>) };
      inline Resources& setIpAddresses(const vector<string> & ipAddresses) { DARABONBA_PTR_SET_VALUE(ipAddresses_, ipAddresses) };
      inline Resources& setIpAddresses(vector<string> && ipAddresses) { DARABONBA_PTR_SET_RVALUE(ipAddresses_, ipAddresses) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Resources& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline Resources& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // resourceId Field Functions 
      bool hasResourceId() const { return this->resourceId_ != nullptr;};
      void deleteResourceId() { this->resourceId_ = nullptr;};
      inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
      inline Resources& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


      // resourceName Field Functions 
      bool hasResourceName() const { return this->resourceName_ != nullptr;};
      void deleteResourceName() { this->resourceName_ = nullptr;};
      inline string getResourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
      inline Resources& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline Resources& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<Resources::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Resources::Tags>) };
      inline vector<Resources::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<Resources::Tags>) };
      inline Resources& setTags(const vector<Resources::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline Resources& setTags(vector<Resources::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline Resources& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      // The ID of the Alibaba Cloud account.
      shared_ptr<string> accountId_ {};
      // The time when the resource was created.
      // 
      // >  Whether this parameter is returned is determined by the Alibaba Cloud service to which the resource belongs.
      shared_ptr<string> createTime_ {};
      shared_ptr<bool> deleted_ {};
      // The time when the resource expires.
      shared_ptr<string> expireTime_ {};
      // The attributes of the IP address.
      shared_ptr<vector<Resources::IpAddressAttributes>> ipAddressAttributes_ {};
      // The IP addresses.
      // 
      // >  Whether this parameter is returned is determined by the Alibaba Cloud service to which the resource belongs.
      shared_ptr<vector<string>> ipAddresses_ {};
      // The region ID.
      shared_ptr<string> regionId_ {};
      // The resource group ID.
      shared_ptr<string> resourceGroupId_ {};
      // The resource ID.
      shared_ptr<string> resourceId_ {};
      // The resource name.
      shared_ptr<string> resourceName_ {};
      // The resource type.
      shared_ptr<string> resourceType_ {};
      // The tags.
      shared_ptr<vector<Resources::Tags>> tags_ {};
      // The zone ID.
      // 
      // >  Whether this parameter is returned is determined by the Alibaba Cloud service to which the resource belongs.
      shared_ptr<string> zoneId_ {};
    };

    class Filters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Filters& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(MatchType, matchType_);
        DARABONBA_PTR_TO_JSON(Values, values_);
      };
      friend void from_json(const Darabonba::Json& j, Filters& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(MatchType, matchType_);
        DARABONBA_PTR_FROM_JSON(Values, values_);
      };
      Filters() = default ;
      Filters(const Filters &) = default ;
      Filters(Filters &&) = default ;
      Filters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Filters() = default ;
      Filters& operator=(const Filters &) = default ;
      Filters& operator=(Filters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->matchType_ == nullptr && this->values_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Filters& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // matchType Field Functions 
      bool hasMatchType() const { return this->matchType_ != nullptr;};
      void deleteMatchType() { this->matchType_ = nullptr;};
      inline string getMatchType() const { DARABONBA_PTR_GET_DEFAULT(matchType_, "") };
      inline Filters& setMatchType(string matchType) { DARABONBA_PTR_SET_VALUE(matchType_, matchType) };


      // values Field Functions 
      bool hasValues() const { return this->values_ != nullptr;};
      void deleteValues() { this->values_ = nullptr;};
      inline const vector<string> & getValues() const { DARABONBA_PTR_GET_CONST(values_, vector<string>) };
      inline vector<string> getValues() { DARABONBA_PTR_GET(values_, vector<string>) };
      inline Filters& setValues(const vector<string> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
      inline Filters& setValues(vector<string> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


    protected:
      // The key of the filter condition.
      shared_ptr<string> key_ {};
      // The matching mode.
      shared_ptr<string> matchType_ {};
      // The values of the filter condition.
      shared_ptr<vector<string>> values_ {};
    };

    virtual bool empty() const override { return this->filters_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->resources_ == nullptr; };
    // filters Field Functions 
    bool hasFilters() const { return this->filters_ != nullptr;};
    void deleteFilters() { this->filters_ = nullptr;};
    inline const vector<SearchResourcesResponseBody::Filters> & getFilters() const { DARABONBA_PTR_GET_CONST(filters_, vector<SearchResourcesResponseBody::Filters>) };
    inline vector<SearchResourcesResponseBody::Filters> getFilters() { DARABONBA_PTR_GET(filters_, vector<SearchResourcesResponseBody::Filters>) };
    inline SearchResourcesResponseBody& setFilters(const vector<SearchResourcesResponseBody::Filters> & filters) { DARABONBA_PTR_SET_VALUE(filters_, filters) };
    inline SearchResourcesResponseBody& setFilters(vector<SearchResourcesResponseBody::Filters> && filters) { DARABONBA_PTR_SET_RVALUE(filters_, filters) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline SearchResourcesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline SearchResourcesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SearchResourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline const vector<SearchResourcesResponseBody::Resources> & getResources() const { DARABONBA_PTR_GET_CONST(resources_, vector<SearchResourcesResponseBody::Resources>) };
    inline vector<SearchResourcesResponseBody::Resources> getResources() { DARABONBA_PTR_GET(resources_, vector<SearchResourcesResponseBody::Resources>) };
    inline SearchResourcesResponseBody& setResources(const vector<SearchResourcesResponseBody::Resources> & resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };
    inline SearchResourcesResponseBody& setResources(vector<SearchResourcesResponseBody::Resources> && resources) { DARABONBA_PTR_SET_RVALUE(resources_, resources) };


  protected:
    // The filter conditions.
    shared_ptr<vector<SearchResourcesResponseBody::Filters>> filters_ {};
    // The maximum number of entries returned per page.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token that is used in the next request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The information about the resources.
    shared_ptr<vector<SearchResourcesResponseBody::Resources>> resources_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceCenter20221201
#endif
