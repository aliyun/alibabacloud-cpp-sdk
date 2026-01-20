// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCESHARESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCESHARESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceSharing20200110
{
namespace Models
{
  class ListResourceSharesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceSharesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceShares, resourceShares_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceSharesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceShares, resourceShares_);
    };
    ListResourceSharesResponseBody() = default ;
    ListResourceSharesResponseBody(const ListResourceSharesResponseBody &) = default ;
    ListResourceSharesResponseBody(ListResourceSharesResponseBody &&) = default ;
    ListResourceSharesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceSharesResponseBody() = default ;
    ListResourceSharesResponseBody& operator=(const ListResourceSharesResponseBody &) = default ;
    ListResourceSharesResponseBody& operator=(ListResourceSharesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResourceShares : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourceShares& obj) { 
        DARABONBA_PTR_TO_JSON(AllowExternalTargets, allowExternalTargets_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(ResourceShareId, resourceShareId_);
        DARABONBA_PTR_TO_JSON(ResourceShareName, resourceShareName_);
        DARABONBA_PTR_TO_JSON(ResourceShareOwner, resourceShareOwner_);
        DARABONBA_PTR_TO_JSON(ResourceShareStatus, resourceShareStatus_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, ResourceShares& obj) { 
        DARABONBA_PTR_FROM_JSON(AllowExternalTargets, allowExternalTargets_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(ResourceShareId, resourceShareId_);
        DARABONBA_PTR_FROM_JSON(ResourceShareName, resourceShareName_);
        DARABONBA_PTR_FROM_JSON(ResourceShareOwner, resourceShareOwner_);
        DARABONBA_PTR_FROM_JSON(ResourceShareStatus, resourceShareStatus_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      ResourceShares() = default ;
      ResourceShares(const ResourceShares &) = default ;
      ResourceShares(ResourceShares &&) = default ;
      ResourceShares(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResourceShares() = default ;
      ResourceShares& operator=(const ResourceShares &) = default ;
      ResourceShares& operator=(ResourceShares &&) = default ;
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

      virtual bool empty() const override { return this->allowExternalTargets_ == nullptr
        && this->createTime_ == nullptr && this->resourceGroupId_ == nullptr && this->resourceShareId_ == nullptr && this->resourceShareName_ == nullptr && this->resourceShareOwner_ == nullptr
        && this->resourceShareStatus_ == nullptr && this->tags_ == nullptr && this->updateTime_ == nullptr; };
      // allowExternalTargets Field Functions 
      bool hasAllowExternalTargets() const { return this->allowExternalTargets_ != nullptr;};
      void deleteAllowExternalTargets() { this->allowExternalTargets_ = nullptr;};
      inline bool getAllowExternalTargets() const { DARABONBA_PTR_GET_DEFAULT(allowExternalTargets_, false) };
      inline ResourceShares& setAllowExternalTargets(bool allowExternalTargets) { DARABONBA_PTR_SET_VALUE(allowExternalTargets_, allowExternalTargets) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline ResourceShares& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline ResourceShares& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // resourceShareId Field Functions 
      bool hasResourceShareId() const { return this->resourceShareId_ != nullptr;};
      void deleteResourceShareId() { this->resourceShareId_ = nullptr;};
      inline string getResourceShareId() const { DARABONBA_PTR_GET_DEFAULT(resourceShareId_, "") };
      inline ResourceShares& setResourceShareId(string resourceShareId) { DARABONBA_PTR_SET_VALUE(resourceShareId_, resourceShareId) };


      // resourceShareName Field Functions 
      bool hasResourceShareName() const { return this->resourceShareName_ != nullptr;};
      void deleteResourceShareName() { this->resourceShareName_ = nullptr;};
      inline string getResourceShareName() const { DARABONBA_PTR_GET_DEFAULT(resourceShareName_, "") };
      inline ResourceShares& setResourceShareName(string resourceShareName) { DARABONBA_PTR_SET_VALUE(resourceShareName_, resourceShareName) };


      // resourceShareOwner Field Functions 
      bool hasResourceShareOwner() const { return this->resourceShareOwner_ != nullptr;};
      void deleteResourceShareOwner() { this->resourceShareOwner_ = nullptr;};
      inline string getResourceShareOwner() const { DARABONBA_PTR_GET_DEFAULT(resourceShareOwner_, "") };
      inline ResourceShares& setResourceShareOwner(string resourceShareOwner) { DARABONBA_PTR_SET_VALUE(resourceShareOwner_, resourceShareOwner) };


      // resourceShareStatus Field Functions 
      bool hasResourceShareStatus() const { return this->resourceShareStatus_ != nullptr;};
      void deleteResourceShareStatus() { this->resourceShareStatus_ = nullptr;};
      inline string getResourceShareStatus() const { DARABONBA_PTR_GET_DEFAULT(resourceShareStatus_, "") };
      inline ResourceShares& setResourceShareStatus(string resourceShareStatus) { DARABONBA_PTR_SET_VALUE(resourceShareStatus_, resourceShareStatus) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<ResourceShares::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<ResourceShares::Tags>) };
      inline vector<ResourceShares::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<ResourceShares::Tags>) };
      inline ResourceShares& setTags(const vector<ResourceShares::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline ResourceShares& setTags(vector<ResourceShares::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline ResourceShares& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // Indicates whether resources in the resource share can be shared with accounts outside the resource directory. Valid values:
      // 
      // *   false: Resources in the resource share can be shared only with accounts in the resource directory.
      // *   true: Resources in the resource share can be shared with both accounts in the resource directory and accounts outside the resource directory.
      shared_ptr<bool> allowExternalTargets_ {};
      // The time when the resource share was created.
      shared_ptr<string> createTime_ {};
      // The ID of the resource group.
      shared_ptr<string> resourceGroupId_ {};
      // The ID of the resource share.
      shared_ptr<string> resourceShareId_ {};
      // The name of the resource share.
      shared_ptr<string> resourceShareName_ {};
      // The owner of the resource share.
      shared_ptr<string> resourceShareOwner_ {};
      // The status of the resource share. Valid values:
      // 
      // *   Active
      // *   Pending
      // *   Deleting
      // *   Deleted
      // 
      // >  The system automatically deletes the records of resource shares in the Deleted state within 48 hours to 96 hours after you delete the resource shares.
      shared_ptr<string> resourceShareStatus_ {};
      // The tags.
      shared_ptr<vector<ResourceShares::Tags>> tags_ {};
      // The time when the resource share was updated.
      shared_ptr<string> updateTime_ {};
    };

    virtual bool empty() const override { return this->nextToken_ == nullptr
        && this->requestId_ == nullptr && this->resourceShares_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListResourceSharesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListResourceSharesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceShares Field Functions 
    bool hasResourceShares() const { return this->resourceShares_ != nullptr;};
    void deleteResourceShares() { this->resourceShares_ = nullptr;};
    inline const vector<ListResourceSharesResponseBody::ResourceShares> & getResourceShares() const { DARABONBA_PTR_GET_CONST(resourceShares_, vector<ListResourceSharesResponseBody::ResourceShares>) };
    inline vector<ListResourceSharesResponseBody::ResourceShares> getResourceShares() { DARABONBA_PTR_GET(resourceShares_, vector<ListResourceSharesResponseBody::ResourceShares>) };
    inline ListResourceSharesResponseBody& setResourceShares(const vector<ListResourceSharesResponseBody::ResourceShares> & resourceShares) { DARABONBA_PTR_SET_VALUE(resourceShares_, resourceShares) };
    inline ListResourceSharesResponseBody& setResourceShares(vector<ListResourceSharesResponseBody::ResourceShares> && resourceShares) { DARABONBA_PTR_SET_RVALUE(resourceShares_, resourceShares) };


  protected:
    // The `token` that is used to initiate the next request if the response of the current request is truncated. You can use the token to initiate another request and obtain the remaining records.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The information about the resource shares.
    shared_ptr<vector<ListResourceSharesResponseBody::ResourceShares>> resourceShares_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceSharing20200110
#endif
