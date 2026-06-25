// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWORKSPACERESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEWORKSPACERESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class CreateWorkspaceResourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWorkspaceResourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Option, option_);
      DARABONBA_PTR_TO_JSON(Resources, resources_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWorkspaceResourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Option, option_);
      DARABONBA_PTR_FROM_JSON(Resources, resources_);
    };
    CreateWorkspaceResourceRequest() = default ;
    CreateWorkspaceResourceRequest(const CreateWorkspaceResourceRequest &) = default ;
    CreateWorkspaceResourceRequest(CreateWorkspaceResourceRequest &&) = default ;
    CreateWorkspaceResourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWorkspaceResourceRequest() = default ;
    CreateWorkspaceResourceRequest& operator=(const CreateWorkspaceResourceRequest &) = default ;
    CreateWorkspaceResourceRequest& operator=(CreateWorkspaceResourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Resources : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Resources& obj) { 
        DARABONBA_PTR_TO_JSON(EnvType, envType_);
        DARABONBA_PTR_TO_JSON(GroupName, groupName_);
        DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
        DARABONBA_PTR_TO_JSON(Labels, labels_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(ProductType, productType_);
        DARABONBA_PTR_TO_JSON(Quotas, quotas_);
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
        DARABONBA_ANY_TO_JSON(Spec, spec_);
        DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
      };
      friend void from_json(const Darabonba::Json& j, Resources& obj) { 
        DARABONBA_PTR_FROM_JSON(EnvType, envType_);
        DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
        DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
        DARABONBA_PTR_FROM_JSON(Labels, labels_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(ProductType, productType_);
        DARABONBA_PTR_FROM_JSON(Quotas, quotas_);
        DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
        DARABONBA_ANY_FROM_JSON(Spec, spec_);
        DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
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
      class Quotas : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Quotas& obj) { 
          DARABONBA_PTR_TO_JSON(Id, id_);
        };
        friend void from_json(const Darabonba::Json& j, Quotas& obj) { 
          DARABONBA_PTR_FROM_JSON(Id, id_);
        };
        Quotas() = default ;
        Quotas(const Quotas &) = default ;
        Quotas(Quotas &&) = default ;
        Quotas(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Quotas() = default ;
        Quotas& operator=(const Quotas &) = default ;
        Quotas& operator=(Quotas &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->id_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline Quotas& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      protected:
        // The ID of the resource quota. To obtain the resource quota ID, see [ListQuotas](https://help.aliyun.com/document_detail/449144.html). This parameter is required only for subscription MaxCompute resources.
        // For ECS, Lingjun, and ACS resources, you do not need to specify this parameter. Their quota information is configured in the `Spec` parameter.
        shared_ptr<string> id_ {};
      };

      class Labels : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Labels& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Labels& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Labels() = default ;
        Labels(const Labels &) = default ;
        Labels(Labels &&) = default ;
        Labels(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Labels() = default ;
        Labels& operator=(const Labels &) = default ;
        Labels& operator=(Labels &&) = default ;
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
        inline Labels& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Labels& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The key of the tag.
        shared_ptr<string> key_ {};
        // The value of the tag.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->envType_ == nullptr
        && this->groupName_ == nullptr && this->isDefault_ == nullptr && this->labels_ == nullptr && this->name_ == nullptr && this->productType_ == nullptr
        && this->quotas_ == nullptr && this->resourceType_ == nullptr && this->spec_ == nullptr && this->workspaceId_ == nullptr; };
      // envType Field Functions 
      bool hasEnvType() const { return this->envType_ != nullptr;};
      void deleteEnvType() { this->envType_ = nullptr;};
      inline string getEnvType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
      inline Resources& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


      // groupName Field Functions 
      bool hasGroupName() const { return this->groupName_ != nullptr;};
      void deleteGroupName() { this->groupName_ = nullptr;};
      inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
      inline Resources& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


      // isDefault Field Functions 
      bool hasIsDefault() const { return this->isDefault_ != nullptr;};
      void deleteIsDefault() { this->isDefault_ = nullptr;};
      inline bool getIsDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
      inline Resources& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


      // labels Field Functions 
      bool hasLabels() const { return this->labels_ != nullptr;};
      void deleteLabels() { this->labels_ = nullptr;};
      inline const vector<Resources::Labels> & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, vector<Resources::Labels>) };
      inline vector<Resources::Labels> getLabels() { DARABONBA_PTR_GET(labels_, vector<Resources::Labels>) };
      inline Resources& setLabels(const vector<Resources::Labels> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
      inline Resources& setLabels(vector<Resources::Labels> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Resources& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // productType Field Functions 
      bool hasProductType() const { return this->productType_ != nullptr;};
      void deleteProductType() { this->productType_ = nullptr;};
      inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
      inline Resources& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


      // quotas Field Functions 
      bool hasQuotas() const { return this->quotas_ != nullptr;};
      void deleteQuotas() { this->quotas_ = nullptr;};
      inline const vector<Resources::Quotas> & getQuotas() const { DARABONBA_PTR_GET_CONST(quotas_, vector<Resources::Quotas>) };
      inline vector<Resources::Quotas> getQuotas() { DARABONBA_PTR_GET(quotas_, vector<Resources::Quotas>) };
      inline Resources& setQuotas(const vector<Resources::Quotas> & quotas) { DARABONBA_PTR_SET_VALUE(quotas_, quotas) };
      inline Resources& setQuotas(vector<Resources::Quotas> && quotas) { DARABONBA_PTR_SET_RVALUE(quotas_, quotas) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline Resources& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      // spec Field Functions 
      bool hasSpec() const { return this->spec_ != nullptr;};
      void deleteSpec() { this->spec_ = nullptr;};
      inline       const Darabonba::Json & getSpec() const { DARABONBA_GET(spec_) };
      Darabonba::Json & getSpec() { DARABONBA_GET(spec_) };
      inline Resources& setSpec(const Darabonba::Json & spec) { DARABONBA_SET_VALUE(spec_, spec) };
      inline Resources& setSpec(Darabonba::Json && spec) { DARABONBA_SET_RVALUE(spec_, spec) };


      // workspaceId Field Functions 
      bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
      void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
      inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
      inline Resources& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    protected:
      // The environment type. Valid values:
      // 
      // - `dev`: development environment
      // 
      // - `prod`: production environment
      // 
      // This parameter is required.
      shared_ptr<string> envType_ {};
      // The name of the resource group. The name must be unique within an Alibaba Cloud account. This parameter is required for MaxCompute, ECS, Lingjun, ACS, and Flink resources.
      shared_ptr<string> groupName_ {};
      // Indicates whether this is the default resource for its type. Each resource type can have only one default resource.
      // 
      // - `false` (default): The resource is not the default resource.
      // 
      // - `true`: The resource is the default resource.
      shared_ptr<bool> isDefault_ {};
      // An array of resource tags.
      shared_ptr<vector<Resources::Labels>> labels_ {};
      // The resource name. The name must meet the following requirements:
      // 
      // - Must be 3 to 28 characters long, start with a letter, and can contain only letters, digits, and underscores (_).
      // 
      // - Must be unique within the same region.
      // 
      // - If `Option` is set to `Attach` and `ResourceType` is set to `MaxCompute`, this parameter specifies the project name.
      // 
      // This parameter is required.
      shared_ptr<string> name_ {};
      // **[Deprecated]** This parameter is deprecated and will be removed in a future version. Use the `ResourceType` parameter instead.
      shared_ptr<string> productType_ {};
      // The resource quotas. Currently, only MaxCompute resources have resource quotas.
      shared_ptr<vector<Resources::Quotas>> quotas_ {};
      // The resource type. Valid values:
      // 
      // - `MaxCompute`: MaxCompute resources
      // 
      // - `ECS`: general-purpose computing resources
      // 
      // - `Lingjun`: Lingjun intelligent computing resources
      // 
      // - `ACS`: ACS computing resources
      // 
      // - `Flink`: Flink resources
      // 
      // - `SelfManagedAckPro`: unified managed cluster resource (AckPro)
      // 
      // - `SelfManagedAckLingjun`: unified managed cluster resource (AckLingjun)
      // 
      // - `SelfManagedASI`: unified managed cluster resource for third-party clouds (ASI)
      shared_ptr<string> resourceType_ {};
      // The resource specification in JSON format. For ECS and Lingjun resources, the format is as follows:
      // {<br>
      // "clusterType": "The type of the cluster",
      // "resourceId": "The ID of the quota",
      // "resourceName": "The name of the quota"
      // }
      // The `clusterType` parameter can have the following values:<br>
      // 
      // - `share`: shared resource group
      // 
      // - `private`: dedicated resource group
      // 
      // - `FullyManaged`: fully managed ACS resource
      Darabonba::Json spec_ {};
      // The ID of the workspace to which the resource belongs. To obtain the workspace ID, see [ListWorkspaces](https://help.aliyun.com/document_detail/449124.html).
      // 
      // This parameter is required.
      shared_ptr<string> workspaceId_ {};
    };

    virtual bool empty() const override { return this->option_ == nullptr
        && this->resources_ == nullptr; };
    // option Field Functions 
    bool hasOption() const { return this->option_ != nullptr;};
    void deleteOption() { this->option_ = nullptr;};
    inline string getOption() const { DARABONBA_PTR_GET_DEFAULT(option_, "") };
    inline CreateWorkspaceResourceRequest& setOption(string option) { DARABONBA_PTR_SET_VALUE(option_, option) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline const vector<CreateWorkspaceResourceRequest::Resources> & getResources() const { DARABONBA_PTR_GET_CONST(resources_, vector<CreateWorkspaceResourceRequest::Resources>) };
    inline vector<CreateWorkspaceResourceRequest::Resources> getResources() { DARABONBA_PTR_GET(resources_, vector<CreateWorkspaceResourceRequest::Resources>) };
    inline CreateWorkspaceResourceRequest& setResources(const vector<CreateWorkspaceResourceRequest::Resources> & resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };
    inline CreateWorkspaceResourceRequest& setResources(vector<CreateWorkspaceResourceRequest::Resources> && resources) { DARABONBA_PTR_SET_RVALUE(resources_, resources) };


  protected:
    // The creation behavior. Valid values:
    // 
    // - `CreateAndAttach`: Creates a resource and attaches it to the workspace.
    // 
    // - `Attach`: Attaches an existing resource to the workspace. This option requires you to specify the `Name`, `ResourceType`, `GroupName`, and `EnvType` parameters.
    // 
    // > MaxCompute resources only support the `Attach` option.
    shared_ptr<string> option_ {};
    // The list of resources.
    // 
    // This parameter is required.
    shared_ptr<vector<CreateWorkspaceResourceRequest::Resources>> resources_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
