// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIPAMSCOPESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTIPAMSCOPESREQUEST_HPP_
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
  class ListIpamScopesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIpamScopesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IpamId, ipamId_);
      DARABONBA_PTR_TO_JSON(IpamScopeIds, ipamScopeIds_);
      DARABONBA_PTR_TO_JSON(IpamScopeName, ipamScopeName_);
      DARABONBA_PTR_TO_JSON(IpamScopeType, ipamScopeType_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, ListIpamScopesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IpamId, ipamId_);
      DARABONBA_PTR_FROM_JSON(IpamScopeIds, ipamScopeIds_);
      DARABONBA_PTR_FROM_JSON(IpamScopeName, ipamScopeName_);
      DARABONBA_PTR_FROM_JSON(IpamScopeType, ipamScopeType_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    ListIpamScopesRequest() = default ;
    ListIpamScopesRequest(const ListIpamScopesRequest &) = default ;
    ListIpamScopesRequest(ListIpamScopesRequest &&) = default ;
    ListIpamScopesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIpamScopesRequest() = default ;
    ListIpamScopesRequest& operator=(const ListIpamScopesRequest &) = default ;
    ListIpamScopesRequest& operator=(ListIpamScopesRequest &&) = default ;
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
      // The tag key. You can specify at most 20 tag keys. The tag key cannot be an empty string.
      // 
      // The tag key can be up to 64 characters in length and can contain letters, digits, periods (.), underscores (_), and hyphens (-). The tag key must start with a letter but cannot start with `aliyun` or `acs:`. The tag key cannot contain `http://` or `https://`.
      shared_ptr<string> key_ {};
      // The tag value. You can specify up to 20 tag values. The tag value can be an empty string.
      // 
      // The tag value can be up to 128 characters in length and can contain letters, digits, periods (.), underscores (_), and hyphens (-). It cannot start with a `aliyun` or `acs:`, and cannot contain `http://` or `https://`.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->ipamId_ == nullptr
        && this->ipamScopeIds_ == nullptr && this->ipamScopeName_ == nullptr && this->ipamScopeType_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr
        && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->resourceOwnerId_ == nullptr && this->tags_ == nullptr; };
    // ipamId Field Functions 
    bool hasIpamId() const { return this->ipamId_ != nullptr;};
    void deleteIpamId() { this->ipamId_ = nullptr;};
    inline string getIpamId() const { DARABONBA_PTR_GET_DEFAULT(ipamId_, "") };
    inline ListIpamScopesRequest& setIpamId(string ipamId) { DARABONBA_PTR_SET_VALUE(ipamId_, ipamId) };


    // ipamScopeIds Field Functions 
    bool hasIpamScopeIds() const { return this->ipamScopeIds_ != nullptr;};
    void deleteIpamScopeIds() { this->ipamScopeIds_ = nullptr;};
    inline const vector<string> & getIpamScopeIds() const { DARABONBA_PTR_GET_CONST(ipamScopeIds_, vector<string>) };
    inline vector<string> getIpamScopeIds() { DARABONBA_PTR_GET(ipamScopeIds_, vector<string>) };
    inline ListIpamScopesRequest& setIpamScopeIds(const vector<string> & ipamScopeIds) { DARABONBA_PTR_SET_VALUE(ipamScopeIds_, ipamScopeIds) };
    inline ListIpamScopesRequest& setIpamScopeIds(vector<string> && ipamScopeIds) { DARABONBA_PTR_SET_RVALUE(ipamScopeIds_, ipamScopeIds) };


    // ipamScopeName Field Functions 
    bool hasIpamScopeName() const { return this->ipamScopeName_ != nullptr;};
    void deleteIpamScopeName() { this->ipamScopeName_ = nullptr;};
    inline string getIpamScopeName() const { DARABONBA_PTR_GET_DEFAULT(ipamScopeName_, "") };
    inline ListIpamScopesRequest& setIpamScopeName(string ipamScopeName) { DARABONBA_PTR_SET_VALUE(ipamScopeName_, ipamScopeName) };


    // ipamScopeType Field Functions 
    bool hasIpamScopeType() const { return this->ipamScopeType_ != nullptr;};
    void deleteIpamScopeType() { this->ipamScopeType_ = nullptr;};
    inline string getIpamScopeType() const { DARABONBA_PTR_GET_DEFAULT(ipamScopeType_, "") };
    inline ListIpamScopesRequest& setIpamScopeType(string ipamScopeType) { DARABONBA_PTR_SET_VALUE(ipamScopeType_, ipamScopeType) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline ListIpamScopesRequest& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListIpamScopesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ListIpamScopesRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ListIpamScopesRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListIpamScopesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListIpamScopesRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ListIpamScopesRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ListIpamScopesRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<ListIpamScopesRequest::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<ListIpamScopesRequest::Tags>) };
    inline vector<ListIpamScopesRequest::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<ListIpamScopesRequest::Tags>) };
    inline ListIpamScopesRequest& setTags(const vector<ListIpamScopesRequest::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListIpamScopesRequest& setTags(vector<ListIpamScopesRequest::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The ID of the IPAM.
    shared_ptr<string> ipamId_ {};
    // The IDs of IPAM scopes.
    shared_ptr<vector<string>> ipamScopeIds_ {};
    // The name of the IPAM scope.
    // 
    // It must be 1 to 128 characters in length and cannot start with `http://` or `https://`.
    shared_ptr<string> ipamScopeName_ {};
    // The type of the IPAM scope. Valid values:
    // 
    // *   **public**
    // *   **private**
    shared_ptr<string> ipamScopeType_ {};
    // The number of entries per page. Valid values: **1** to **100**. Default value: **10**.
    shared_ptr<int64_t> maxResults_ {};
    // The pagination token that is used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   You do not need to specify this parameter for the first request.
    // *   You must specify the token that is obtained from the previous query as the value of NextToken.
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The ID of the region where the IPAM instance is hosted. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The resource group ID of the IPAM scope.
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The tag list.
    shared_ptr<vector<ListIpamScopesRequest::Tags>> tags_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VpcIpam20230228
#endif
