// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGECOMPONENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGECOMPONENTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeImageComponentsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageComponentsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ComponentType, componentType_);
      DARABONBA_PTR_TO_JSON(ComponentVersion, componentVersion_);
      DARABONBA_PTR_TO_JSON(ImageComponentId, imageComponentId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SystemType, systemType_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageComponentsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ComponentType, componentType_);
      DARABONBA_PTR_FROM_JSON(ComponentVersion, componentVersion_);
      DARABONBA_PTR_FROM_JSON(ImageComponentId, imageComponentId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SystemType, systemType_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeImageComponentsRequest() = default ;
    DescribeImageComponentsRequest(const DescribeImageComponentsRequest &) = default ;
    DescribeImageComponentsRequest(DescribeImageComponentsRequest &&) = default ;
    DescribeImageComponentsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageComponentsRequest() = default ;
    DescribeImageComponentsRequest& operator=(const DescribeImageComponentsRequest &) = default ;
    DescribeImageComponentsRequest& operator=(DescribeImageComponentsRequest &&) = default ;
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
      // The tag key. Valid values of N: 1 to 20.
      shared_ptr<string> key_ {};
      // The tag value. Valid values of N: 1 to 20.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->componentType_ == nullptr
        && this->componentVersion_ == nullptr && this->imageComponentId_ == nullptr && this->maxResults_ == nullptr && this->name_ == nullptr && this->nextToken_ == nullptr
        && this->owner_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->systemType_ == nullptr && this->tag_ == nullptr; };
    // componentType Field Functions 
    bool hasComponentType() const { return this->componentType_ != nullptr;};
    void deleteComponentType() { this->componentType_ = nullptr;};
    inline string getComponentType() const { DARABONBA_PTR_GET_DEFAULT(componentType_, "") };
    inline DescribeImageComponentsRequest& setComponentType(string componentType) { DARABONBA_PTR_SET_VALUE(componentType_, componentType) };


    // componentVersion Field Functions 
    bool hasComponentVersion() const { return this->componentVersion_ != nullptr;};
    void deleteComponentVersion() { this->componentVersion_ = nullptr;};
    inline string getComponentVersion() const { DARABONBA_PTR_GET_DEFAULT(componentVersion_, "") };
    inline DescribeImageComponentsRequest& setComponentVersion(string componentVersion) { DARABONBA_PTR_SET_VALUE(componentVersion_, componentVersion) };


    // imageComponentId Field Functions 
    bool hasImageComponentId() const { return this->imageComponentId_ != nullptr;};
    void deleteImageComponentId() { this->imageComponentId_ = nullptr;};
    inline const vector<string> & getImageComponentId() const { DARABONBA_PTR_GET_CONST(imageComponentId_, vector<string>) };
    inline vector<string> getImageComponentId() { DARABONBA_PTR_GET(imageComponentId_, vector<string>) };
    inline DescribeImageComponentsRequest& setImageComponentId(const vector<string> & imageComponentId) { DARABONBA_PTR_SET_VALUE(imageComponentId_, imageComponentId) };
    inline DescribeImageComponentsRequest& setImageComponentId(vector<string> && imageComponentId) { DARABONBA_PTR_SET_RVALUE(imageComponentId_, imageComponentId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeImageComponentsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeImageComponentsRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeImageComponentsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline DescribeImageComponentsRequest& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DescribeImageComponentsRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeImageComponentsRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeImageComponentsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeImageComponentsRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribeImageComponentsRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeImageComponentsRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // systemType Field Functions 
    bool hasSystemType() const { return this->systemType_ != nullptr;};
    void deleteSystemType() { this->systemType_ = nullptr;};
    inline string getSystemType() const { DARABONBA_PTR_GET_DEFAULT(systemType_, "") };
    inline DescribeImageComponentsRequest& setSystemType(string systemType) { DARABONBA_PTR_SET_VALUE(systemType_, systemType) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<DescribeImageComponentsRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<DescribeImageComponentsRequest::Tag>) };
    inline vector<DescribeImageComponentsRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<DescribeImageComponentsRequest::Tag>) };
    inline DescribeImageComponentsRequest& setTag(const vector<DescribeImageComponentsRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeImageComponentsRequest& setTag(vector<DescribeImageComponentsRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The component type.
    // 
    // Valid values:
    // - Build
    // - Test.
    shared_ptr<string> componentType_ {};
    // The component version number in the major.minor.patch format. Each part must be a non-negative integer. You can also use the wildcard character (*) to replace one part for fuzzy matching.
    // >This parameter takes effect only when Name is specified.
    shared_ptr<string> componentVersion_ {};
    // The ID of the image component to query. Valid values of N: 1 to 20.
    shared_ptr<vector<string>> imageComponentId_ {};
    // The maximum number of entries per page for paging. Valid values: 1 to 500.
    // 
    // Default value: 50.
    shared_ptr<int32_t> maxResults_ {};
    // The image component name. Only exact match is supported.
    shared_ptr<string> name_ {};
    // The pagination token. Set this parameter to the value of NextToken returned by the previous call. You do not need to set this parameter for the first request.
    shared_ptr<string> nextToken_ {};
    // The image component type. Valid values:
    // 
    // - SELF: custom image components that you created.
    // - ALIYUN: system components provided by Alibaba Cloud.
    shared_ptr<string> owner_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID. You can call [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The resource group ID. If you use this parameter to filter resources, the resource count cannot exceed 1,000.
    // 
    // >Filtering by the default resource group is not supported.
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The operating system supported by the component.
    // 
    // Valid values:
    // - Linux
    // - Windows.
    shared_ptr<string> systemType_ {};
    // The tags.
    shared_ptr<vector<DescribeImageComponentsRequest::Tag>> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
