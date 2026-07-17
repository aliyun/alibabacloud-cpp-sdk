// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLINDORMINSTANCELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETLINDORMINSTANCELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hitsdb20200615
{
namespace Models
{
  class GetLindormInstanceListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLindormInstanceListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(QueryStr, queryStr_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(ServiceType, serviceType_);
      DARABONBA_PTR_TO_JSON(SupportEngine, supportEngine_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, GetLindormInstanceListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(QueryStr, queryStr_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(ServiceType, serviceType_);
      DARABONBA_PTR_FROM_JSON(SupportEngine, supportEngine_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    GetLindormInstanceListRequest() = default ;
    GetLindormInstanceListRequest(const GetLindormInstanceListRequest &) = default ;
    GetLindormInstanceListRequest(GetLindormInstanceListRequest &&) = default ;
    GetLindormInstanceListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLindormInstanceListRequest() = default ;
    GetLindormInstanceListRequest& operator=(const GetLindormInstanceListRequest &) = default ;
    GetLindormInstanceListRequest& operator=(GetLindormInstanceListRequest &&) = default ;
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
      // The key of the tag.
      // 
      // > You can pass in keys for multiple tags. For example, the Key in the first pair represents the key for the first tag. The Key in the second pair represents the key for the second tag.
      shared_ptr<string> key_ {};
      // The value of the tag.
      // 
      // > You can provide values for multiple tags. For example, the Value in the first pair is the value for the first tag. The Value in the second pair is the value for the second tag.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->ownerAccount_ == nullptr
        && this->ownerId_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->queryStr_ == nullptr && this->regionId_ == nullptr
        && this->resourceGroupId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->securityToken_ == nullptr && this->serviceType_ == nullptr
        && this->supportEngine_ == nullptr && this->tag_ == nullptr; };
    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline GetLindormInstanceListRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline GetLindormInstanceListRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline GetLindormInstanceListRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetLindormInstanceListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // queryStr Field Functions 
    bool hasQueryStr() const { return this->queryStr_ != nullptr;};
    void deleteQueryStr() { this->queryStr_ = nullptr;};
    inline string getQueryStr() const { DARABONBA_PTR_GET_DEFAULT(queryStr_, "") };
    inline GetLindormInstanceListRequest& setQueryStr(string queryStr) { DARABONBA_PTR_SET_VALUE(queryStr_, queryStr) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetLindormInstanceListRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetLindormInstanceListRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline GetLindormInstanceListRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline GetLindormInstanceListRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline GetLindormInstanceListRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // serviceType Field Functions 
    bool hasServiceType() const { return this->serviceType_ != nullptr;};
    void deleteServiceType() { this->serviceType_ = nullptr;};
    inline string getServiceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, "") };
    inline GetLindormInstanceListRequest& setServiceType(string serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


    // supportEngine Field Functions 
    bool hasSupportEngine() const { return this->supportEngine_ != nullptr;};
    void deleteSupportEngine() { this->supportEngine_ = nullptr;};
    inline int32_t getSupportEngine() const { DARABONBA_PTR_GET_DEFAULT(supportEngine_, 0) };
    inline GetLindormInstanceListRequest& setSupportEngine(int32_t supportEngine) { DARABONBA_PTR_SET_VALUE(supportEngine_, supportEngine) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<GetLindormInstanceListRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<GetLindormInstanceListRequest::Tag>) };
    inline vector<GetLindormInstanceListRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<GetLindormInstanceListRequest::Tag>) };
    inline GetLindormInstanceListRequest& setTag(const vector<GetLindormInstanceListRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline GetLindormInstanceListRequest& setTag(vector<GetLindormInstanceListRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The page number to return.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries to return on each page for a paged query.
    shared_ptr<int32_t> pageSize_ {};
    // A keyword for a fuzzy search on instance names.
    shared_ptr<string> queryStr_ {};
    // The ID of the region where the instance is located. Call [DescribeRegions](https://help.aliyun.com/document_detail/426062.html) to obtain the region ID.
    shared_ptr<string> regionId_ {};
    // The ID of the resource group.
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    shared_ptr<string> securityToken_ {};
    // The type of the instance. Valid values:
    // 
    // - **lindorm**: a single-zone Lindorm instance.
    // 
    // - **lindorm_multizone**: a multi-zone Lindorm instance.
    // 
    // - **serverless_lindorm**: a Lindorm Serverless instance.
    // 
    // - **lindorm_standalone**: a Lindorm standalone instance.
    // 
    // - **lts**: the Lindorm Tunnel Service (LTS) type.
    shared_ptr<string> serviceType_ {};
    // The type of the engine supported by the instance that you want to query. Valid values:
    // 
    // - **1**: search engine.
    // 
    // - **2**: LindormTSDB.
    // 
    // - **4**: LindormTable.
    // 
    // - **8**: file engine.
    // 
    // > For example, a value of 15 (8 + 4 + 2 + 1) indicates that the instance supports the file engine, LindormTable, LindormTSDB, and the search engine. A value of 6 (4 + 2) indicates that the instance supports LindormTSDB and LindormTable.
    shared_ptr<int32_t> supportEngine_ {};
    // A list of tags. You can specify up to 20 tags.
    shared_ptr<vector<GetLindormInstanceListRequest::Tag>> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hitsdb20200615
#endif
