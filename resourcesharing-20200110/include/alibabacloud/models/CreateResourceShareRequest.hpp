// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERESOURCESHAREREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATERESOURCESHAREREQUEST_HPP_
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
  class CreateResourceShareRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateResourceShareRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AllowExternalTargets, allowExternalTargets_);
      DARABONBA_PTR_TO_JSON(PermissionNames, permissionNames_);
      DARABONBA_PTR_TO_JSON(ResourceArns, resourceArns_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceProperties, resourceProperties_);
      DARABONBA_PTR_TO_JSON(ResourceShareName, resourceShareName_);
      DARABONBA_PTR_TO_JSON(Resources, resources_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(TargetProperties, targetProperties_);
      DARABONBA_PTR_TO_JSON(Targets, targets_);
    };
    friend void from_json(const Darabonba::Json& j, CreateResourceShareRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowExternalTargets, allowExternalTargets_);
      DARABONBA_PTR_FROM_JSON(PermissionNames, permissionNames_);
      DARABONBA_PTR_FROM_JSON(ResourceArns, resourceArns_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceProperties, resourceProperties_);
      DARABONBA_PTR_FROM_JSON(ResourceShareName, resourceShareName_);
      DARABONBA_PTR_FROM_JSON(Resources, resources_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(TargetProperties, targetProperties_);
      DARABONBA_PTR_FROM_JSON(Targets, targets_);
    };
    CreateResourceShareRequest() = default ;
    CreateResourceShareRequest(const CreateResourceShareRequest &) = default ;
    CreateResourceShareRequest(CreateResourceShareRequest &&) = default ;
    CreateResourceShareRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateResourceShareRequest() = default ;
    CreateResourceShareRequest& operator=(const CreateResourceShareRequest &) = default ;
    CreateResourceShareRequest& operator=(CreateResourceShareRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TargetProperties : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TargetProperties& obj) { 
        DARABONBA_PTR_TO_JSON(Property, property_);
        DARABONBA_PTR_TO_JSON(TargetId, targetId_);
      };
      friend void from_json(const Darabonba::Json& j, TargetProperties& obj) { 
        DARABONBA_PTR_FROM_JSON(Property, property_);
        DARABONBA_PTR_FROM_JSON(TargetId, targetId_);
      };
      TargetProperties() = default ;
      TargetProperties(const TargetProperties &) = default ;
      TargetProperties(TargetProperties &&) = default ;
      TargetProperties(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TargetProperties() = default ;
      TargetProperties& operator=(const TargetProperties &) = default ;
      TargetProperties& operator=(TargetProperties &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->property_ == nullptr
        && this->targetId_ == nullptr; };
      // property Field Functions 
      bool hasProperty() const { return this->property_ != nullptr;};
      void deleteProperty() { this->property_ = nullptr;};
      inline string getProperty() const { DARABONBA_PTR_GET_DEFAULT(property_, "") };
      inline TargetProperties& setProperty(string property) { DARABONBA_PTR_SET_VALUE(property_, property) };


      // targetId Field Functions 
      bool hasTargetId() const { return this->targetId_ != nullptr;};
      void deleteTargetId() { this->targetId_ = nullptr;};
      inline string getTargetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, "") };
      inline TargetProperties& setTargetId(string targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


    protected:
      // The property parameter of the principal. For example, you can specify a parameter that indicates the time range for resource sharing. Valid values of `timeRangeType`:
      // 
      // *   timeRange: a specific time range
      // *   day: all day
      // 
      // >  `TargetProperties.N.TargetId` and `TargetProperties.N.Property` must be used in pairs.
      shared_ptr<string> property_ {};
      // The ID of the principal.
      // 
      // >  `TargetProperties.N.TargetId` and `TargetProperties.N.Property` must be used in pairs.
      shared_ptr<string> targetId_ {};
    };

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
      // The tag key.
      // 
      // >  The tag key can be up to 128 characters in length and cannot start with `acs:` or `aliyun`. The tag key cannot contain `http://` or `https://`.
      shared_ptr<string> key_ {};
      // The tag value.
      // 
      // >  The tag value can be up to 128 characters in length and cannot start with `acs:`. The tag value cannot contain `http://` or `https://`.
      shared_ptr<string> value_ {};
    };

    class Resources : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Resources& obj) { 
        DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      };
      friend void from_json(const Darabonba::Json& j, Resources& obj) { 
        DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
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
      virtual bool empty() const override { return this->resourceId_ == nullptr
        && this->resourceType_ == nullptr; };
      // resourceId Field Functions 
      bool hasResourceId() const { return this->resourceId_ != nullptr;};
      void deleteResourceId() { this->resourceId_ = nullptr;};
      inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
      inline Resources& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline Resources& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    protected:
      // The ID of a shared resource.
      // 
      // Valid values of N: 1 to 5. This indicates that a maximum of five shared resources can be specified at a time.
      // 
      // >  `Resources.N.ResourceId` and `Resources.N.ResourceType` must be used in pairs.
      shared_ptr<string> resourceId_ {};
      // The type of a shared resource.
      // 
      // Valid values of N: 1 to 5. This indicates that a maximum of five shared resources can be specified at a time.
      // 
      // For more information about the types of resources that can be shared, see [Services that work with Resource Sharing](https://help.aliyun.com/document_detail/450526.html).
      // 
      // >  `Resources.N.ResourceId` and `Resources.N.ResourceType` must be used in pairs.
      shared_ptr<string> resourceType_ {};
    };

    class ResourceProperties : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourceProperties& obj) { 
        DARABONBA_PTR_TO_JSON(Property, property_);
        DARABONBA_PTR_TO_JSON(ResourceArn, resourceArn_);
      };
      friend void from_json(const Darabonba::Json& j, ResourceProperties& obj) { 
        DARABONBA_PTR_FROM_JSON(Property, property_);
        DARABONBA_PTR_FROM_JSON(ResourceArn, resourceArn_);
      };
      ResourceProperties() = default ;
      ResourceProperties(const ResourceProperties &) = default ;
      ResourceProperties(ResourceProperties &&) = default ;
      ResourceProperties(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResourceProperties() = default ;
      ResourceProperties& operator=(const ResourceProperties &) = default ;
      ResourceProperties& operator=(ResourceProperties &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->property_ == nullptr
        && this->resourceArn_ == nullptr; };
      // property Field Functions 
      bool hasProperty() const { return this->property_ != nullptr;};
      void deleteProperty() { this->property_ = nullptr;};
      inline string getProperty() const { DARABONBA_PTR_GET_DEFAULT(property_, "") };
      inline ResourceProperties& setProperty(string property) { DARABONBA_PTR_SET_VALUE(property_, property) };


      // resourceArn Field Functions 
      bool hasResourceArn() const { return this->resourceArn_ != nullptr;};
      void deleteResourceArn() { this->resourceArn_ = nullptr;};
      inline string getResourceArn() const { DARABONBA_PTR_GET_DEFAULT(resourceArn_, "") };
      inline ResourceProperties& setResourceArn(string resourceArn) { DARABONBA_PTR_SET_VALUE(resourceArn_, resourceArn) };


    protected:
      shared_ptr<string> property_ {};
      shared_ptr<string> resourceArn_ {};
    };

    virtual bool empty() const override { return this->allowExternalTargets_ == nullptr
        && this->permissionNames_ == nullptr && this->resourceArns_ == nullptr && this->resourceGroupId_ == nullptr && this->resourceProperties_ == nullptr && this->resourceShareName_ == nullptr
        && this->resources_ == nullptr && this->tag_ == nullptr && this->targetProperties_ == nullptr && this->targets_ == nullptr; };
    // allowExternalTargets Field Functions 
    bool hasAllowExternalTargets() const { return this->allowExternalTargets_ != nullptr;};
    void deleteAllowExternalTargets() { this->allowExternalTargets_ = nullptr;};
    inline bool getAllowExternalTargets() const { DARABONBA_PTR_GET_DEFAULT(allowExternalTargets_, false) };
    inline CreateResourceShareRequest& setAllowExternalTargets(bool allowExternalTargets) { DARABONBA_PTR_SET_VALUE(allowExternalTargets_, allowExternalTargets) };


    // permissionNames Field Functions 
    bool hasPermissionNames() const { return this->permissionNames_ != nullptr;};
    void deletePermissionNames() { this->permissionNames_ = nullptr;};
    inline const vector<string> & getPermissionNames() const { DARABONBA_PTR_GET_CONST(permissionNames_, vector<string>) };
    inline vector<string> getPermissionNames() { DARABONBA_PTR_GET(permissionNames_, vector<string>) };
    inline CreateResourceShareRequest& setPermissionNames(const vector<string> & permissionNames) { DARABONBA_PTR_SET_VALUE(permissionNames_, permissionNames) };
    inline CreateResourceShareRequest& setPermissionNames(vector<string> && permissionNames) { DARABONBA_PTR_SET_RVALUE(permissionNames_, permissionNames) };


    // resourceArns Field Functions 
    bool hasResourceArns() const { return this->resourceArns_ != nullptr;};
    void deleteResourceArns() { this->resourceArns_ = nullptr;};
    inline const vector<string> & getResourceArns() const { DARABONBA_PTR_GET_CONST(resourceArns_, vector<string>) };
    inline vector<string> getResourceArns() { DARABONBA_PTR_GET(resourceArns_, vector<string>) };
    inline CreateResourceShareRequest& setResourceArns(const vector<string> & resourceArns) { DARABONBA_PTR_SET_VALUE(resourceArns_, resourceArns) };
    inline CreateResourceShareRequest& setResourceArns(vector<string> && resourceArns) { DARABONBA_PTR_SET_RVALUE(resourceArns_, resourceArns) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateResourceShareRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceProperties Field Functions 
    bool hasResourceProperties() const { return this->resourceProperties_ != nullptr;};
    void deleteResourceProperties() { this->resourceProperties_ = nullptr;};
    inline const vector<CreateResourceShareRequest::ResourceProperties> & getResourceProperties() const { DARABONBA_PTR_GET_CONST(resourceProperties_, vector<CreateResourceShareRequest::ResourceProperties>) };
    inline vector<CreateResourceShareRequest::ResourceProperties> getResourceProperties() { DARABONBA_PTR_GET(resourceProperties_, vector<CreateResourceShareRequest::ResourceProperties>) };
    inline CreateResourceShareRequest& setResourceProperties(const vector<CreateResourceShareRequest::ResourceProperties> & resourceProperties) { DARABONBA_PTR_SET_VALUE(resourceProperties_, resourceProperties) };
    inline CreateResourceShareRequest& setResourceProperties(vector<CreateResourceShareRequest::ResourceProperties> && resourceProperties) { DARABONBA_PTR_SET_RVALUE(resourceProperties_, resourceProperties) };


    // resourceShareName Field Functions 
    bool hasResourceShareName() const { return this->resourceShareName_ != nullptr;};
    void deleteResourceShareName() { this->resourceShareName_ = nullptr;};
    inline string getResourceShareName() const { DARABONBA_PTR_GET_DEFAULT(resourceShareName_, "") };
    inline CreateResourceShareRequest& setResourceShareName(string resourceShareName) { DARABONBA_PTR_SET_VALUE(resourceShareName_, resourceShareName) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline const vector<CreateResourceShareRequest::Resources> & getResources() const { DARABONBA_PTR_GET_CONST(resources_, vector<CreateResourceShareRequest::Resources>) };
    inline vector<CreateResourceShareRequest::Resources> getResources() { DARABONBA_PTR_GET(resources_, vector<CreateResourceShareRequest::Resources>) };
    inline CreateResourceShareRequest& setResources(const vector<CreateResourceShareRequest::Resources> & resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };
    inline CreateResourceShareRequest& setResources(vector<CreateResourceShareRequest::Resources> && resources) { DARABONBA_PTR_SET_RVALUE(resources_, resources) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateResourceShareRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateResourceShareRequest::Tag>) };
    inline vector<CreateResourceShareRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateResourceShareRequest::Tag>) };
    inline CreateResourceShareRequest& setTag(const vector<CreateResourceShareRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateResourceShareRequest& setTag(vector<CreateResourceShareRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // targetProperties Field Functions 
    bool hasTargetProperties() const { return this->targetProperties_ != nullptr;};
    void deleteTargetProperties() { this->targetProperties_ = nullptr;};
    inline const vector<CreateResourceShareRequest::TargetProperties> & getTargetProperties() const { DARABONBA_PTR_GET_CONST(targetProperties_, vector<CreateResourceShareRequest::TargetProperties>) };
    inline vector<CreateResourceShareRequest::TargetProperties> getTargetProperties() { DARABONBA_PTR_GET(targetProperties_, vector<CreateResourceShareRequest::TargetProperties>) };
    inline CreateResourceShareRequest& setTargetProperties(const vector<CreateResourceShareRequest::TargetProperties> & targetProperties) { DARABONBA_PTR_SET_VALUE(targetProperties_, targetProperties) };
    inline CreateResourceShareRequest& setTargetProperties(vector<CreateResourceShareRequest::TargetProperties> && targetProperties) { DARABONBA_PTR_SET_RVALUE(targetProperties_, targetProperties) };


    // targets Field Functions 
    bool hasTargets() const { return this->targets_ != nullptr;};
    void deleteTargets() { this->targets_ = nullptr;};
    inline const vector<string> & getTargets() const { DARABONBA_PTR_GET_CONST(targets_, vector<string>) };
    inline vector<string> getTargets() { DARABONBA_PTR_GET(targets_, vector<string>) };
    inline CreateResourceShareRequest& setTargets(const vector<string> & targets) { DARABONBA_PTR_SET_VALUE(targets_, targets) };
    inline CreateResourceShareRequest& setTargets(vector<string> && targets) { DARABONBA_PTR_SET_RVALUE(targets_, targets) };


  protected:
    // Specifies whether resources in the resource share can be shared with accounts outside the resource directory. Valid values:
    // 
    // *   false (default): Resources in the resource share can be shared only with accounts in the resource directory.
    // *   true: Resources in the resource share can be shared with both accounts in the resource directory and accounts outside the resource directory.
    shared_ptr<bool> allowExternalTargets_ {};
    // The information about the permissions. If you do not configure this parameter, the system automatically associates the default permission for the specified resource type with the resource share. For more information, see [Permission library](https://help.aliyun.com/document_detail/465474.html).
    shared_ptr<vector<string>> permissionNames_ {};
    shared_ptr<vector<string>> resourceArns_ {};
    // The resource group ID.
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<vector<CreateResourceShareRequest::ResourceProperties>> resourceProperties_ {};
    // The name of the resource share.
    // 
    // The name must be 1 to 50 characters in length.
    // 
    // The name can contain letters, digits, periods (.), underscores (_), and hyphens (-).
    // 
    // This parameter is required.
    shared_ptr<string> resourceShareName_ {};
    // The information about the shared resources.
    shared_ptr<vector<CreateResourceShareRequest::Resources>> resources_ {};
    // The tags. You can specify up to 20 tags.
    shared_ptr<vector<CreateResourceShareRequest::Tag>> tag_ {};
    // The properties of the principal.
    // 
    // >  This parameter is available only when you specify an Alibaba Cloud service as a principal.
    shared_ptr<vector<CreateResourceShareRequest::TargetProperties>> targetProperties_ {};
    // The information about the principals.
    shared_ptr<vector<string>> targets_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceSharing20200110
#endif
