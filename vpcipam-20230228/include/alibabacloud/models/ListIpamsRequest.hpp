// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIPAMSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTIPAMSREQUEST_HPP_
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
  class ListIpamsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIpamsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IpamIds, ipamIds_);
      DARABONBA_PTR_TO_JSON(IpamName, ipamName_);
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
    friend void from_json(const Darabonba::Json& j, ListIpamsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IpamIds, ipamIds_);
      DARABONBA_PTR_FROM_JSON(IpamName, ipamName_);
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
    ListIpamsRequest() = default ;
    ListIpamsRequest(const ListIpamsRequest &) = default ;
    ListIpamsRequest(ListIpamsRequest &&) = default ;
    ListIpamsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIpamsRequest() = default ;
    ListIpamsRequest& operator=(const ListIpamsRequest &) = default ;
    ListIpamsRequest& operator=(ListIpamsRequest &&) = default ;
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
      // The tag key. You can specify up to 20 tag keys. The tag key cannot be an empty string.
      // 
      // The tag key can be up to 64 characters in length. It must start with a letter or a Chinese character. It can contain digits, periods (.), underscores (_), and hyphens (-). It cannot start with `aliyun` or `acs:`, and cannot contain `http://` or `https://`.
      shared_ptr<string> key_ {};
      // The tag value. You can specify up to 20 tag values. The tag value can be an empty string.
      // 
      // The tag value can be up to 128 characters in length and cannot contain `http://` or `https://`.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->ipamIds_ == nullptr
        && this->ipamName_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr
        && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->tags_ == nullptr; };
    // ipamIds Field Functions 
    bool hasIpamIds() const { return this->ipamIds_ != nullptr;};
    void deleteIpamIds() { this->ipamIds_ = nullptr;};
    inline const vector<string> & getIpamIds() const { DARABONBA_PTR_GET_CONST(ipamIds_, vector<string>) };
    inline vector<string> getIpamIds() { DARABONBA_PTR_GET(ipamIds_, vector<string>) };
    inline ListIpamsRequest& setIpamIds(const vector<string> & ipamIds) { DARABONBA_PTR_SET_VALUE(ipamIds_, ipamIds) };
    inline ListIpamsRequest& setIpamIds(vector<string> && ipamIds) { DARABONBA_PTR_SET_RVALUE(ipamIds_, ipamIds) };


    // ipamName Field Functions 
    bool hasIpamName() const { return this->ipamName_ != nullptr;};
    void deleteIpamName() { this->ipamName_ = nullptr;};
    inline string getIpamName() const { DARABONBA_PTR_GET_DEFAULT(ipamName_, "") };
    inline ListIpamsRequest& setIpamName(string ipamName) { DARABONBA_PTR_SET_VALUE(ipamName_, ipamName) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline ListIpamsRequest& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListIpamsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ListIpamsRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ListIpamsRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListIpamsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListIpamsRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ListIpamsRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ListIpamsRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<ListIpamsRequest::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<ListIpamsRequest::Tags>) };
    inline vector<ListIpamsRequest::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<ListIpamsRequest::Tags>) };
    inline ListIpamsRequest& setTags(const vector<ListIpamsRequest::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListIpamsRequest& setTags(vector<ListIpamsRequest::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The IDs of the IPAMs. You can specify up to 100 IPAM IDs.
    shared_ptr<vector<string>> ipamIds_ {};
    // The name of the IPAM.
    // 
    // The name must be 1 to 128 characters in length and cannot start with `http://` or `https://`.
    shared_ptr<string> ipamName_ {};
    // The maximum number of entries to return on each page. Valid values: 1 to 100. Default value: 10.
    shared_ptr<int64_t> maxResults_ {};
    // The pagination token that is used in the next request to retrieve a new page of results. Valid values:
    // 
    // - You do not need to specify this parameter for the first request or when no next page exists.
    // 
    // - If a next page exists, set the value to the NextToken value returned in the last API call.
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The ID of the hosted region of the IPAM. You can call [DescribeRegions](https://help.aliyun.com/document_detail/448570.html) to get the region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the resource group to which the IPAM belongs.
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The tags.
    shared_ptr<vector<ListIpamsRequest::Tags>> tags_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VpcIpam20230228
#endif
