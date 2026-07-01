// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIPAMRESOURCEDISCOVERIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTIPAMRESOURCEDISCOVERIESREQUEST_HPP_
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
  class ListIpamResourceDiscoveriesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIpamResourceDiscoveriesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IpamResourceDiscoveryIds, ipamResourceDiscoveryIds_);
      DARABONBA_PTR_TO_JSON(IpamResourceDiscoveryName, ipamResourceDiscoveryName_);
      DARABONBA_PTR_TO_JSON(IsShared, isShared_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListIpamResourceDiscoveriesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IpamResourceDiscoveryIds, ipamResourceDiscoveryIds_);
      DARABONBA_PTR_FROM_JSON(IpamResourceDiscoveryName, ipamResourceDiscoveryName_);
      DARABONBA_PTR_FROM_JSON(IsShared, isShared_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListIpamResourceDiscoveriesRequest() = default ;
    ListIpamResourceDiscoveriesRequest(const ListIpamResourceDiscoveriesRequest &) = default ;
    ListIpamResourceDiscoveriesRequest(ListIpamResourceDiscoveriesRequest &&) = default ;
    ListIpamResourceDiscoveriesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIpamResourceDiscoveriesRequest() = default ;
    ListIpamResourceDiscoveriesRequest& operator=(const ListIpamResourceDiscoveriesRequest &) = default ;
    ListIpamResourceDiscoveriesRequest& operator=(ListIpamResourceDiscoveriesRequest &&) = default ;
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
      // The tag key. You can specify up to 20 tag keys. The key cannot be an empty string.
      // 
      // A tag key can be up to 64 characters in length. It must start with a letter or a Chinese character and can contain digits, periods (.), underscores (_), and hyphens (-). The key cannot start with `aliyun` or `acs:` and cannot contain `http://` or `https://`.
      shared_ptr<string> key_ {};
      // The tag value. You can specify up to 20 tag values. The value can be an empty string.
      // 
      // A tag value can be up to 128 characters in length and cannot contain `http://` or `https://`.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->ipamResourceDiscoveryIds_ == nullptr
        && this->ipamResourceDiscoveryName_ == nullptr && this->isShared_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->ownerAccount_ == nullptr
        && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr
        && this->tags_ == nullptr && this->type_ == nullptr; };
    // ipamResourceDiscoveryIds Field Functions 
    bool hasIpamResourceDiscoveryIds() const { return this->ipamResourceDiscoveryIds_ != nullptr;};
    void deleteIpamResourceDiscoveryIds() { this->ipamResourceDiscoveryIds_ = nullptr;};
    inline const vector<string> & getIpamResourceDiscoveryIds() const { DARABONBA_PTR_GET_CONST(ipamResourceDiscoveryIds_, vector<string>) };
    inline vector<string> getIpamResourceDiscoveryIds() { DARABONBA_PTR_GET(ipamResourceDiscoveryIds_, vector<string>) };
    inline ListIpamResourceDiscoveriesRequest& setIpamResourceDiscoveryIds(const vector<string> & ipamResourceDiscoveryIds) { DARABONBA_PTR_SET_VALUE(ipamResourceDiscoveryIds_, ipamResourceDiscoveryIds) };
    inline ListIpamResourceDiscoveriesRequest& setIpamResourceDiscoveryIds(vector<string> && ipamResourceDiscoveryIds) { DARABONBA_PTR_SET_RVALUE(ipamResourceDiscoveryIds_, ipamResourceDiscoveryIds) };


    // ipamResourceDiscoveryName Field Functions 
    bool hasIpamResourceDiscoveryName() const { return this->ipamResourceDiscoveryName_ != nullptr;};
    void deleteIpamResourceDiscoveryName() { this->ipamResourceDiscoveryName_ = nullptr;};
    inline string getIpamResourceDiscoveryName() const { DARABONBA_PTR_GET_DEFAULT(ipamResourceDiscoveryName_, "") };
    inline ListIpamResourceDiscoveriesRequest& setIpamResourceDiscoveryName(string ipamResourceDiscoveryName) { DARABONBA_PTR_SET_VALUE(ipamResourceDiscoveryName_, ipamResourceDiscoveryName) };


    // isShared Field Functions 
    bool hasIsShared() const { return this->isShared_ != nullptr;};
    void deleteIsShared() { this->isShared_ = nullptr;};
    inline bool getIsShared() const { DARABONBA_PTR_GET_DEFAULT(isShared_, false) };
    inline ListIpamResourceDiscoveriesRequest& setIsShared(bool isShared) { DARABONBA_PTR_SET_VALUE(isShared_, isShared) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListIpamResourceDiscoveriesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListIpamResourceDiscoveriesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ListIpamResourceDiscoveriesRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ListIpamResourceDiscoveriesRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListIpamResourceDiscoveriesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListIpamResourceDiscoveriesRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ListIpamResourceDiscoveriesRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ListIpamResourceDiscoveriesRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<ListIpamResourceDiscoveriesRequest::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<ListIpamResourceDiscoveriesRequest::Tags>) };
    inline vector<ListIpamResourceDiscoveriesRequest::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<ListIpamResourceDiscoveriesRequest::Tags>) };
    inline ListIpamResourceDiscoveriesRequest& setTags(const vector<ListIpamResourceDiscoveriesRequest::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListIpamResourceDiscoveriesRequest& setTags(vector<ListIpamResourceDiscoveriesRequest::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListIpamResourceDiscoveriesRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The IDs of the resource discovery instances. You can query up to 100 instances at a time.
    shared_ptr<vector<string>> ipamResourceDiscoveryIds_ {};
    // The name of the resource discovery.
    // 
    // The name must be 1 to 128 characters in length and cannot start with http\\:// or https\\://.
    shared_ptr<string> ipamResourceDiscoveryName_ {};
    // Specifies whether the resource discovery is shared.
    shared_ptr<bool> isShared_ {};
    // The maximum number of entries to return on each page. Valid values: 1 to 100. Default value: 10.
    shared_ptr<int32_t> maxResults_ {};
    // The token for the next page of results. Valid values:
    // 
    // - If **NextToken** is empty, no more results are available.
    // 
    // - If a value is returned for **NextToken**, the value is the token that is used for the next query.
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The ID of the region. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to get the region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the resource group to which the resource discovery belongs.
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The list of tags.
    shared_ptr<vector<ListIpamResourceDiscoveriesRequest::Tags>> tags_ {};
    // The type of the resource discovery.
    // 
    // > The following types are supported:
    // >
    // > - system: a default resource discovery created by the system.
    // >
    // > - custom: a custom resource discovery created by a user.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VpcIpam20230228
#endif
