// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONVERTINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONVERTINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Foasconsole20190601
{
namespace Models
{
  class ConvertInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConvertInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConvertPostpayInstanceRequest, convertPostpayInstanceRequest_);
    };
    friend void from_json(const Darabonba::Json& j, ConvertInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConvertPostpayInstanceRequest, convertPostpayInstanceRequest_);
    };
    ConvertInstanceRequest() = default ;
    ConvertInstanceRequest(const ConvertInstanceRequest &) = default ;
    ConvertInstanceRequest(ConvertInstanceRequest &&) = default ;
    ConvertInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConvertInstanceRequest() = default ;
    ConvertInstanceRequest& operator=(const ConvertInstanceRequest &) = default ;
    ConvertInstanceRequest& operator=(ConvertInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ConvertPostpayInstanceRequest : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ConvertPostpayInstanceRequest& obj) { 
        DARABONBA_PTR_TO_JSON(Duration, duration_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(IsAutoRenew, isAutoRenew_);
        DARABONBA_PTR_TO_JSON(NamespaceResourceSpecs, namespaceResourceSpecs_);
        DARABONBA_PTR_TO_JSON(PricingCycle, pricingCycle_);
        DARABONBA_PTR_TO_JSON(Region, region_);
      };
      friend void from_json(const Darabonba::Json& j, ConvertPostpayInstanceRequest& obj) { 
        DARABONBA_PTR_FROM_JSON(Duration, duration_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(IsAutoRenew, isAutoRenew_);
        DARABONBA_PTR_FROM_JSON(NamespaceResourceSpecs, namespaceResourceSpecs_);
        DARABONBA_PTR_FROM_JSON(PricingCycle, pricingCycle_);
        DARABONBA_PTR_FROM_JSON(Region, region_);
      };
      ConvertPostpayInstanceRequest() = default ;
      ConvertPostpayInstanceRequest(const ConvertPostpayInstanceRequest &) = default ;
      ConvertPostpayInstanceRequest(ConvertPostpayInstanceRequest &&) = default ;
      ConvertPostpayInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ConvertPostpayInstanceRequest() = default ;
      ConvertPostpayInstanceRequest& operator=(const ConvertPostpayInstanceRequest &) = default ;
      ConvertPostpayInstanceRequest& operator=(ConvertPostpayInstanceRequest &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class NamespaceResourceSpecs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NamespaceResourceSpecs& obj) { 
          DARABONBA_PTR_TO_JSON(Namespace, namespace_);
          DARABONBA_PTR_TO_JSON(ResourceSpec, resourceSpec_);
        };
        friend void from_json(const Darabonba::Json& j, NamespaceResourceSpecs& obj) { 
          DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
          DARABONBA_PTR_FROM_JSON(ResourceSpec, resourceSpec_);
        };
        NamespaceResourceSpecs() = default ;
        NamespaceResourceSpecs(const NamespaceResourceSpecs &) = default ;
        NamespaceResourceSpecs(NamespaceResourceSpecs &&) = default ;
        NamespaceResourceSpecs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NamespaceResourceSpecs() = default ;
        NamespaceResourceSpecs& operator=(const NamespaceResourceSpecs &) = default ;
        NamespaceResourceSpecs& operator=(NamespaceResourceSpecs &&) = default ;
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
          // This parameter is required.
          shared_ptr<int32_t> cpu_ {};
          // This parameter is required.
          shared_ptr<int32_t> memoryGB_ {};
        };

        virtual bool empty() const override { return this->namespace_ == nullptr
        && this->resourceSpec_ == nullptr; };
        // namespace Field Functions 
        bool hasNamespace() const { return this->namespace_ != nullptr;};
        void deleteNamespace() { this->namespace_ = nullptr;};
        inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
        inline NamespaceResourceSpecs& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


        // resourceSpec Field Functions 
        bool hasResourceSpec() const { return this->resourceSpec_ != nullptr;};
        void deleteResourceSpec() { this->resourceSpec_ = nullptr;};
        inline const NamespaceResourceSpecs::ResourceSpec & getResourceSpec() const { DARABONBA_PTR_GET_CONST(resourceSpec_, NamespaceResourceSpecs::ResourceSpec) };
        inline NamespaceResourceSpecs::ResourceSpec getResourceSpec() { DARABONBA_PTR_GET(resourceSpec_, NamespaceResourceSpecs::ResourceSpec) };
        inline NamespaceResourceSpecs& setResourceSpec(const NamespaceResourceSpecs::ResourceSpec & resourceSpec) { DARABONBA_PTR_SET_VALUE(resourceSpec_, resourceSpec) };
        inline NamespaceResourceSpecs& setResourceSpec(NamespaceResourceSpecs::ResourceSpec && resourceSpec) { DARABONBA_PTR_SET_RVALUE(resourceSpec_, resourceSpec) };


      protected:
        // This parameter is required.
        shared_ptr<string> namespace_ {};
        // This parameter is required.
        shared_ptr<NamespaceResourceSpecs::ResourceSpec> resourceSpec_ {};
      };

      virtual bool empty() const override { return this->duration_ == nullptr
        && this->instanceId_ == nullptr && this->isAutoRenew_ == nullptr && this->namespaceResourceSpecs_ == nullptr && this->pricingCycle_ == nullptr && this->region_ == nullptr; };
      // duration Field Functions 
      bool hasDuration() const { return this->duration_ != nullptr;};
      void deleteDuration() { this->duration_ = nullptr;};
      inline int32_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
      inline ConvertPostpayInstanceRequest& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline ConvertPostpayInstanceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // isAutoRenew Field Functions 
      bool hasIsAutoRenew() const { return this->isAutoRenew_ != nullptr;};
      void deleteIsAutoRenew() { this->isAutoRenew_ = nullptr;};
      inline bool getIsAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(isAutoRenew_, false) };
      inline ConvertPostpayInstanceRequest& setIsAutoRenew(bool isAutoRenew) { DARABONBA_PTR_SET_VALUE(isAutoRenew_, isAutoRenew) };


      // namespaceResourceSpecs Field Functions 
      bool hasNamespaceResourceSpecs() const { return this->namespaceResourceSpecs_ != nullptr;};
      void deleteNamespaceResourceSpecs() { this->namespaceResourceSpecs_ = nullptr;};
      inline const vector<ConvertPostpayInstanceRequest::NamespaceResourceSpecs> & getNamespaceResourceSpecs() const { DARABONBA_PTR_GET_CONST(namespaceResourceSpecs_, vector<ConvertPostpayInstanceRequest::NamespaceResourceSpecs>) };
      inline vector<ConvertPostpayInstanceRequest::NamespaceResourceSpecs> getNamespaceResourceSpecs() { DARABONBA_PTR_GET(namespaceResourceSpecs_, vector<ConvertPostpayInstanceRequest::NamespaceResourceSpecs>) };
      inline ConvertPostpayInstanceRequest& setNamespaceResourceSpecs(const vector<ConvertPostpayInstanceRequest::NamespaceResourceSpecs> & namespaceResourceSpecs) { DARABONBA_PTR_SET_VALUE(namespaceResourceSpecs_, namespaceResourceSpecs) };
      inline ConvertPostpayInstanceRequest& setNamespaceResourceSpecs(vector<ConvertPostpayInstanceRequest::NamespaceResourceSpecs> && namespaceResourceSpecs) { DARABONBA_PTR_SET_RVALUE(namespaceResourceSpecs_, namespaceResourceSpecs) };


      // pricingCycle Field Functions 
      bool hasPricingCycle() const { return this->pricingCycle_ != nullptr;};
      void deletePricingCycle() { this->pricingCycle_ = nullptr;};
      inline string getPricingCycle() const { DARABONBA_PTR_GET_DEFAULT(pricingCycle_, "") };
      inline ConvertPostpayInstanceRequest& setPricingCycle(string pricingCycle) { DARABONBA_PTR_SET_VALUE(pricingCycle_, pricingCycle) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline ConvertPostpayInstanceRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    protected:
      // This parameter is required.
      shared_ptr<int32_t> duration_ {};
      // This parameter is required.
      shared_ptr<string> instanceId_ {};
      // This parameter is required.
      shared_ptr<bool> isAutoRenew_ {};
      // This parameter is required.
      shared_ptr<vector<ConvertPostpayInstanceRequest::NamespaceResourceSpecs>> namespaceResourceSpecs_ {};
      // This parameter is required.
      shared_ptr<string> pricingCycle_ {};
      // This parameter is required.
      shared_ptr<string> region_ {};
    };

    virtual bool empty() const override { return this->convertPostpayInstanceRequest_ == nullptr; };
    // convertPostpayInstanceRequest Field Functions 
    bool hasConvertPostpayInstanceRequest() const { return this->convertPostpayInstanceRequest_ != nullptr;};
    void deleteConvertPostpayInstanceRequest() { this->convertPostpayInstanceRequest_ = nullptr;};
    inline const ConvertInstanceRequest::ConvertPostpayInstanceRequest & getConvertPostpayInstanceRequest() const { DARABONBA_PTR_GET_CONST(convertPostpayInstanceRequest_, ConvertInstanceRequest::ConvertPostpayInstanceRequest) };
    inline ConvertInstanceRequest::ConvertPostpayInstanceRequest getConvertPostpayInstanceRequest() { DARABONBA_PTR_GET(convertPostpayInstanceRequest_, ConvertInstanceRequest::ConvertPostpayInstanceRequest) };
    inline ConvertInstanceRequest& setConvertPostpayInstanceRequest(const ConvertInstanceRequest::ConvertPostpayInstanceRequest & convertPostpayInstanceRequest) { DARABONBA_PTR_SET_VALUE(convertPostpayInstanceRequest_, convertPostpayInstanceRequest) };
    inline ConvertInstanceRequest& setConvertPostpayInstanceRequest(ConvertInstanceRequest::ConvertPostpayInstanceRequest && convertPostpayInstanceRequest) { DARABONBA_PTR_SET_RVALUE(convertPostpayInstanceRequest_, convertPostpayInstanceRequest) };


  protected:
    // This parameter is required.
    shared_ptr<ConvertInstanceRequest::ConvertPostpayInstanceRequest> convertPostpayInstanceRequest_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Foasconsole20190601
#endif
