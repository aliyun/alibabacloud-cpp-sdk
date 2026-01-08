// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENAMESPACEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATENAMESPACEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Foasconsole20190601
{
namespace Models
{
  class CreateNamespaceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNamespaceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CreateNamespaceRequest, createNamespaceRequest_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNamespaceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateNamespaceRequest, createNamespaceRequest_);
    };
    CreateNamespaceRequest() = default ;
    CreateNamespaceRequest(const CreateNamespaceRequest &) = default ;
    CreateNamespaceRequest(CreateNamespaceRequest &&) = default ;
    CreateNamespaceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNamespaceRequest() = default ;
    CreateNamespaceRequest& operator=(const CreateNamespaceRequest &) = default ;
    CreateNamespaceRequest& operator=(CreateNamespaceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CreateNamespaceRequestItem : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CreateNamespaceRequestItem& obj) { 
        DARABONBA_PTR_TO_JSON(Ha, ha_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(Namespace, namespace_);
        DARABONBA_PTR_TO_JSON(Region, region_);
        DARABONBA_PTR_TO_JSON(ResourceSpec, resourceSpec_);
      };
      friend void from_json(const Darabonba::Json& j, CreateNamespaceRequestItem& obj) { 
        DARABONBA_PTR_FROM_JSON(Ha, ha_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
        DARABONBA_PTR_FROM_JSON(Region, region_);
        DARABONBA_PTR_FROM_JSON(ResourceSpec, resourceSpec_);
      };
      CreateNamespaceRequestItem() = default ;
      CreateNamespaceRequestItem(const CreateNamespaceRequestItem &) = default ;
      CreateNamespaceRequestItem(CreateNamespaceRequestItem &&) = default ;
      CreateNamespaceRequestItem(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CreateNamespaceRequestItem() = default ;
      CreateNamespaceRequestItem& operator=(const CreateNamespaceRequestItem &) = default ;
      CreateNamespaceRequestItem& operator=(CreateNamespaceRequestItem &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ResourceSpec : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ResourceSpec& obj) { 
          DARABONBA_PTR_TO_JSON(Cpu, cpu_);
          DARABONBA_PTR_TO_JSON(MemoryGB, memoryGB_);
        };
        friend void from_json(const Darabonba::Json& j, ResourceSpec& obj) { 
          DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
          DARABONBA_PTR_FROM_JSON(MemoryGB, memoryGB_);
        };
        ResourceSpec() = default ;
        ResourceSpec(const ResourceSpec &) = default ;
        ResourceSpec(ResourceSpec &&) = default ;
        ResourceSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ResourceSpec() = default ;
        ResourceSpec& operator=(const ResourceSpec &) = default ;
        ResourceSpec& operator=(ResourceSpec &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cpu_ == nullptr
        && this->memoryGB_ == nullptr; };
        // cpu Field Functions 
        bool hasCpu() const { return this->cpu_ != nullptr;};
        void deleteCpu() { this->cpu_ = nullptr;};
        inline int32_t getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
        inline ResourceSpec& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


        // memoryGB Field Functions 
        bool hasMemoryGB() const { return this->memoryGB_ != nullptr;};
        void deleteMemoryGB() { this->memoryGB_ = nullptr;};
        inline int32_t getMemoryGB() const { DARABONBA_PTR_GET_DEFAULT(memoryGB_, 0) };
        inline ResourceSpec& setMemoryGB(int32_t memoryGB) { DARABONBA_PTR_SET_VALUE(memoryGB_, memoryGB) };


      protected:
        shared_ptr<int32_t> cpu_ {};
        shared_ptr<int32_t> memoryGB_ {};
      };

      virtual bool empty() const override { return this->ha_ == nullptr
        && this->instanceId_ == nullptr && this->namespace_ == nullptr && this->region_ == nullptr && this->resourceSpec_ == nullptr; };
      // ha Field Functions 
      bool hasHa() const { return this->ha_ != nullptr;};
      void deleteHa() { this->ha_ = nullptr;};
      inline bool getHa() const { DARABONBA_PTR_GET_DEFAULT(ha_, false) };
      inline CreateNamespaceRequestItem& setHa(bool ha) { DARABONBA_PTR_SET_VALUE(ha_, ha) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline CreateNamespaceRequestItem& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // namespace Field Functions 
      bool hasNamespace() const { return this->namespace_ != nullptr;};
      void deleteNamespace() { this->namespace_ = nullptr;};
      inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
      inline CreateNamespaceRequestItem& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline CreateNamespaceRequestItem& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


      // resourceSpec Field Functions 
      bool hasResourceSpec() const { return this->resourceSpec_ != nullptr;};
      void deleteResourceSpec() { this->resourceSpec_ = nullptr;};
      inline const CreateNamespaceRequestItem::ResourceSpec & getResourceSpec() const { DARABONBA_PTR_GET_CONST(resourceSpec_, CreateNamespaceRequestItem::ResourceSpec) };
      inline CreateNamespaceRequestItem::ResourceSpec getResourceSpec() { DARABONBA_PTR_GET(resourceSpec_, CreateNamespaceRequestItem::ResourceSpec) };
      inline CreateNamespaceRequestItem& setResourceSpec(const CreateNamespaceRequestItem::ResourceSpec & resourceSpec) { DARABONBA_PTR_SET_VALUE(resourceSpec_, resourceSpec) };
      inline CreateNamespaceRequestItem& setResourceSpec(CreateNamespaceRequestItem::ResourceSpec && resourceSpec) { DARABONBA_PTR_SET_RVALUE(resourceSpec_, resourceSpec) };


    protected:
      shared_ptr<bool> ha_ {};
      // This parameter is required.
      shared_ptr<string> instanceId_ {};
      // This parameter is required.
      shared_ptr<string> namespace_ {};
      // This parameter is required.
      shared_ptr<string> region_ {};
      shared_ptr<CreateNamespaceRequestItem::ResourceSpec> resourceSpec_ {};
    };

    virtual bool empty() const override { return this->createNamespaceRequest_ == nullptr; };
    // createNamespaceRequest Field Functions 
    bool hasCreateNamespaceRequest() const { return this->createNamespaceRequest_ != nullptr;};
    void deleteCreateNamespaceRequest() { this->createNamespaceRequest_ = nullptr;};
    inline const CreateNamespaceRequest::CreateNamespaceRequestItem & getCreateNamespaceRequest() const { DARABONBA_PTR_GET_CONST(createNamespaceRequest_, CreateNamespaceRequest::CreateNamespaceRequestItem) };
    inline CreateNamespaceRequest::CreateNamespaceRequestItem getCreateNamespaceRequest() { DARABONBA_PTR_GET(createNamespaceRequest_, CreateNamespaceRequest::CreateNamespaceRequestItem) };
    inline CreateNamespaceRequest& setCreateNamespaceRequest(const CreateNamespaceRequest::CreateNamespaceRequestItem & createNamespaceRequest) { DARABONBA_PTR_SET_VALUE(createNamespaceRequest_, createNamespaceRequest) };
    inline CreateNamespaceRequest& setCreateNamespaceRequest(CreateNamespaceRequest::CreateNamespaceRequestItem && createNamespaceRequest) { DARABONBA_PTR_SET_RVALUE(createNamespaceRequest_, createNamespaceRequest) };


  protected:
    // This parameter is required.
    shared_ptr<CreateNamespaceRequest::CreateNamespaceRequestItem> createNamespaceRequest_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Foasconsole20190601
#endif
