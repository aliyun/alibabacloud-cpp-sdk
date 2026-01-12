// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYNAMESPACESPECV2REQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYNAMESPACESPECV2REQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Foasconsole20211028
{
namespace Models
{
  class ModifyNamespaceSpecV2Request : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyNamespaceSpecV2Request& obj) { 
      DARABONBA_PTR_TO_JSON(ElasticResourceSpec, elasticResourceSpec_);
      DARABONBA_PTR_TO_JSON(GuaranteedResourceSpec, guaranteedResourceSpec_);
      DARABONBA_PTR_TO_JSON(Ha, ha_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(Region, region_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyNamespaceSpecV2Request& obj) { 
      DARABONBA_PTR_FROM_JSON(ElasticResourceSpec, elasticResourceSpec_);
      DARABONBA_PTR_FROM_JSON(GuaranteedResourceSpec, guaranteedResourceSpec_);
      DARABONBA_PTR_FROM_JSON(Ha, ha_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
    };
    ModifyNamespaceSpecV2Request() = default ;
    ModifyNamespaceSpecV2Request(const ModifyNamespaceSpecV2Request &) = default ;
    ModifyNamespaceSpecV2Request(ModifyNamespaceSpecV2Request &&) = default ;
    ModifyNamespaceSpecV2Request(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyNamespaceSpecV2Request() = default ;
    ModifyNamespaceSpecV2Request& operator=(const ModifyNamespaceSpecV2Request &) = default ;
    ModifyNamespaceSpecV2Request& operator=(ModifyNamespaceSpecV2Request &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class GuaranteedResourceSpec : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const GuaranteedResourceSpec& obj) { 
        DARABONBA_PTR_TO_JSON(Cpu, cpu_);
        DARABONBA_PTR_TO_JSON(MemoryGB, memoryGB_);
      };
      friend void from_json(const Darabonba::Json& j, GuaranteedResourceSpec& obj) { 
        DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
        DARABONBA_PTR_FROM_JSON(MemoryGB, memoryGB_);
      };
      GuaranteedResourceSpec() = default ;
      GuaranteedResourceSpec(const GuaranteedResourceSpec &) = default ;
      GuaranteedResourceSpec(GuaranteedResourceSpec &&) = default ;
      GuaranteedResourceSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~GuaranteedResourceSpec() = default ;
      GuaranteedResourceSpec& operator=(const GuaranteedResourceSpec &) = default ;
      GuaranteedResourceSpec& operator=(GuaranteedResourceSpec &&) = default ;
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
      inline GuaranteedResourceSpec& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


      // memoryGB Field Functions 
      bool hasMemoryGB() const { return this->memoryGB_ != nullptr;};
      void deleteMemoryGB() { this->memoryGB_ = nullptr;};
      inline int32_t getMemoryGB() const { DARABONBA_PTR_GET_DEFAULT(memoryGB_, 0) };
      inline GuaranteedResourceSpec& setMemoryGB(int32_t memoryGB) { DARABONBA_PTR_SET_VALUE(memoryGB_, memoryGB) };


    protected:
      // This parameter is required.
      shared_ptr<int32_t> cpu_ {};
      // This parameter is required.
      shared_ptr<int32_t> memoryGB_ {};
    };

    class ElasticResourceSpec : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ElasticResourceSpec& obj) { 
        DARABONBA_PTR_TO_JSON(Cpu, cpu_);
        DARABONBA_PTR_TO_JSON(MemoryGB, memoryGB_);
      };
      friend void from_json(const Darabonba::Json& j, ElasticResourceSpec& obj) { 
        DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
        DARABONBA_PTR_FROM_JSON(MemoryGB, memoryGB_);
      };
      ElasticResourceSpec() = default ;
      ElasticResourceSpec(const ElasticResourceSpec &) = default ;
      ElasticResourceSpec(ElasticResourceSpec &&) = default ;
      ElasticResourceSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ElasticResourceSpec() = default ;
      ElasticResourceSpec& operator=(const ElasticResourceSpec &) = default ;
      ElasticResourceSpec& operator=(ElasticResourceSpec &&) = default ;
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
      inline ElasticResourceSpec& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


      // memoryGB Field Functions 
      bool hasMemoryGB() const { return this->memoryGB_ != nullptr;};
      void deleteMemoryGB() { this->memoryGB_ = nullptr;};
      inline int32_t getMemoryGB() const { DARABONBA_PTR_GET_DEFAULT(memoryGB_, 0) };
      inline ElasticResourceSpec& setMemoryGB(int32_t memoryGB) { DARABONBA_PTR_SET_VALUE(memoryGB_, memoryGB) };


    protected:
      // This parameter is required.
      shared_ptr<int32_t> cpu_ {};
      // This parameter is required.
      shared_ptr<int32_t> memoryGB_ {};
    };

    virtual bool empty() const override { return this->elasticResourceSpec_ == nullptr
        && this->guaranteedResourceSpec_ == nullptr && this->ha_ == nullptr && this->instanceId_ == nullptr && this->namespace_ == nullptr && this->region_ == nullptr; };
    // elasticResourceSpec Field Functions 
    bool hasElasticResourceSpec() const { return this->elasticResourceSpec_ != nullptr;};
    void deleteElasticResourceSpec() { this->elasticResourceSpec_ = nullptr;};
    inline const ModifyNamespaceSpecV2Request::ElasticResourceSpec & getElasticResourceSpec() const { DARABONBA_PTR_GET_CONST(elasticResourceSpec_, ModifyNamespaceSpecV2Request::ElasticResourceSpec) };
    inline ModifyNamespaceSpecV2Request::ElasticResourceSpec getElasticResourceSpec() { DARABONBA_PTR_GET(elasticResourceSpec_, ModifyNamespaceSpecV2Request::ElasticResourceSpec) };
    inline ModifyNamespaceSpecV2Request& setElasticResourceSpec(const ModifyNamespaceSpecV2Request::ElasticResourceSpec & elasticResourceSpec) { DARABONBA_PTR_SET_VALUE(elasticResourceSpec_, elasticResourceSpec) };
    inline ModifyNamespaceSpecV2Request& setElasticResourceSpec(ModifyNamespaceSpecV2Request::ElasticResourceSpec && elasticResourceSpec) { DARABONBA_PTR_SET_RVALUE(elasticResourceSpec_, elasticResourceSpec) };


    // guaranteedResourceSpec Field Functions 
    bool hasGuaranteedResourceSpec() const { return this->guaranteedResourceSpec_ != nullptr;};
    void deleteGuaranteedResourceSpec() { this->guaranteedResourceSpec_ = nullptr;};
    inline const ModifyNamespaceSpecV2Request::GuaranteedResourceSpec & getGuaranteedResourceSpec() const { DARABONBA_PTR_GET_CONST(guaranteedResourceSpec_, ModifyNamespaceSpecV2Request::GuaranteedResourceSpec) };
    inline ModifyNamespaceSpecV2Request::GuaranteedResourceSpec getGuaranteedResourceSpec() { DARABONBA_PTR_GET(guaranteedResourceSpec_, ModifyNamespaceSpecV2Request::GuaranteedResourceSpec) };
    inline ModifyNamespaceSpecV2Request& setGuaranteedResourceSpec(const ModifyNamespaceSpecV2Request::GuaranteedResourceSpec & guaranteedResourceSpec) { DARABONBA_PTR_SET_VALUE(guaranteedResourceSpec_, guaranteedResourceSpec) };
    inline ModifyNamespaceSpecV2Request& setGuaranteedResourceSpec(ModifyNamespaceSpecV2Request::GuaranteedResourceSpec && guaranteedResourceSpec) { DARABONBA_PTR_SET_RVALUE(guaranteedResourceSpec_, guaranteedResourceSpec) };


    // ha Field Functions 
    bool hasHa() const { return this->ha_ != nullptr;};
    void deleteHa() { this->ha_ = nullptr;};
    inline bool getHa() const { DARABONBA_PTR_GET_DEFAULT(ha_, false) };
    inline ModifyNamespaceSpecV2Request& setHa(bool ha) { DARABONBA_PTR_SET_VALUE(ha_, ha) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyNamespaceSpecV2Request& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline ModifyNamespaceSpecV2Request& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline ModifyNamespaceSpecV2Request& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


  protected:
    shared_ptr<ModifyNamespaceSpecV2Request::ElasticResourceSpec> elasticResourceSpec_ {};
    shared_ptr<ModifyNamespaceSpecV2Request::GuaranteedResourceSpec> guaranteedResourceSpec_ {};
    // This parameter is required.
    shared_ptr<bool> ha_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // This parameter is required.
    shared_ptr<string> namespace_ {};
    // This parameter is required.
    shared_ptr<string> region_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Foasconsole20211028
#endif
