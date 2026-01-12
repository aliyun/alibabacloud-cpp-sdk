// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYINSTANCESPECREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYINSTANCESPECREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Foasconsole20211028
{
namespace Models
{
  class ModifyInstanceSpecRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyInstanceSpecRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Ha, ha_);
      DARABONBA_PTR_TO_JSON(HaResourceSpec, haResourceSpec_);
      DARABONBA_PTR_TO_JSON(HaVSwitchIds, haVSwitchIds_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PromotionCode, promotionCode_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(ResourceSpec, resourceSpec_);
      DARABONBA_PTR_TO_JSON(UsePromotionCode, usePromotionCode_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyInstanceSpecRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Ha, ha_);
      DARABONBA_PTR_FROM_JSON(HaResourceSpec, haResourceSpec_);
      DARABONBA_PTR_FROM_JSON(HaVSwitchIds, haVSwitchIds_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PromotionCode, promotionCode_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(ResourceSpec, resourceSpec_);
      DARABONBA_PTR_FROM_JSON(UsePromotionCode, usePromotionCode_);
    };
    ModifyInstanceSpecRequest() = default ;
    ModifyInstanceSpecRequest(const ModifyInstanceSpecRequest &) = default ;
    ModifyInstanceSpecRequest(ModifyInstanceSpecRequest &&) = default ;
    ModifyInstanceSpecRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyInstanceSpecRequest() = default ;
    ModifyInstanceSpecRequest& operator=(const ModifyInstanceSpecRequest &) = default ;
    ModifyInstanceSpecRequest& operator=(ModifyInstanceSpecRequest &&) = default ;
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

    class HaResourceSpec : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const HaResourceSpec& obj) { 
        DARABONBA_PTR_TO_JSON(Cpu, cpu_);
        DARABONBA_PTR_TO_JSON(MemoryGB, memoryGB_);
      };
      friend void from_json(const Darabonba::Json& j, HaResourceSpec& obj) { 
        DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
        DARABONBA_PTR_FROM_JSON(MemoryGB, memoryGB_);
      };
      HaResourceSpec() = default ;
      HaResourceSpec(const HaResourceSpec &) = default ;
      HaResourceSpec(HaResourceSpec &&) = default ;
      HaResourceSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~HaResourceSpec() = default ;
      HaResourceSpec& operator=(const HaResourceSpec &) = default ;
      HaResourceSpec& operator=(HaResourceSpec &&) = default ;
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
      inline HaResourceSpec& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


      // memoryGB Field Functions 
      bool hasMemoryGB() const { return this->memoryGB_ != nullptr;};
      void deleteMemoryGB() { this->memoryGB_ = nullptr;};
      inline int32_t getMemoryGB() const { DARABONBA_PTR_GET_DEFAULT(memoryGB_, 0) };
      inline HaResourceSpec& setMemoryGB(int32_t memoryGB) { DARABONBA_PTR_SET_VALUE(memoryGB_, memoryGB) };


    protected:
      shared_ptr<int32_t> cpu_ {};
      shared_ptr<int32_t> memoryGB_ {};
    };

    virtual bool empty() const override { return this->ha_ == nullptr
        && this->haResourceSpec_ == nullptr && this->haVSwitchIds_ == nullptr && this->instanceId_ == nullptr && this->promotionCode_ == nullptr && this->region_ == nullptr
        && this->resourceSpec_ == nullptr && this->usePromotionCode_ == nullptr; };
    // ha Field Functions 
    bool hasHa() const { return this->ha_ != nullptr;};
    void deleteHa() { this->ha_ = nullptr;};
    inline bool getHa() const { DARABONBA_PTR_GET_DEFAULT(ha_, false) };
    inline ModifyInstanceSpecRequest& setHa(bool ha) { DARABONBA_PTR_SET_VALUE(ha_, ha) };


    // haResourceSpec Field Functions 
    bool hasHaResourceSpec() const { return this->haResourceSpec_ != nullptr;};
    void deleteHaResourceSpec() { this->haResourceSpec_ = nullptr;};
    inline const ModifyInstanceSpecRequest::HaResourceSpec & getHaResourceSpec() const { DARABONBA_PTR_GET_CONST(haResourceSpec_, ModifyInstanceSpecRequest::HaResourceSpec) };
    inline ModifyInstanceSpecRequest::HaResourceSpec getHaResourceSpec() { DARABONBA_PTR_GET(haResourceSpec_, ModifyInstanceSpecRequest::HaResourceSpec) };
    inline ModifyInstanceSpecRequest& setHaResourceSpec(const ModifyInstanceSpecRequest::HaResourceSpec & haResourceSpec) { DARABONBA_PTR_SET_VALUE(haResourceSpec_, haResourceSpec) };
    inline ModifyInstanceSpecRequest& setHaResourceSpec(ModifyInstanceSpecRequest::HaResourceSpec && haResourceSpec) { DARABONBA_PTR_SET_RVALUE(haResourceSpec_, haResourceSpec) };


    // haVSwitchIds Field Functions 
    bool hasHaVSwitchIds() const { return this->haVSwitchIds_ != nullptr;};
    void deleteHaVSwitchIds() { this->haVSwitchIds_ = nullptr;};
    inline const vector<string> & getHaVSwitchIds() const { DARABONBA_PTR_GET_CONST(haVSwitchIds_, vector<string>) };
    inline vector<string> getHaVSwitchIds() { DARABONBA_PTR_GET(haVSwitchIds_, vector<string>) };
    inline ModifyInstanceSpecRequest& setHaVSwitchIds(const vector<string> & haVSwitchIds) { DARABONBA_PTR_SET_VALUE(haVSwitchIds_, haVSwitchIds) };
    inline ModifyInstanceSpecRequest& setHaVSwitchIds(vector<string> && haVSwitchIds) { DARABONBA_PTR_SET_RVALUE(haVSwitchIds_, haVSwitchIds) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyInstanceSpecRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // promotionCode Field Functions 
    bool hasPromotionCode() const { return this->promotionCode_ != nullptr;};
    void deletePromotionCode() { this->promotionCode_ = nullptr;};
    inline string getPromotionCode() const { DARABONBA_PTR_GET_DEFAULT(promotionCode_, "") };
    inline ModifyInstanceSpecRequest& setPromotionCode(string promotionCode) { DARABONBA_PTR_SET_VALUE(promotionCode_, promotionCode) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline ModifyInstanceSpecRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // resourceSpec Field Functions 
    bool hasResourceSpec() const { return this->resourceSpec_ != nullptr;};
    void deleteResourceSpec() { this->resourceSpec_ = nullptr;};
    inline const ModifyInstanceSpecRequest::ResourceSpec & getResourceSpec() const { DARABONBA_PTR_GET_CONST(resourceSpec_, ModifyInstanceSpecRequest::ResourceSpec) };
    inline ModifyInstanceSpecRequest::ResourceSpec getResourceSpec() { DARABONBA_PTR_GET(resourceSpec_, ModifyInstanceSpecRequest::ResourceSpec) };
    inline ModifyInstanceSpecRequest& setResourceSpec(const ModifyInstanceSpecRequest::ResourceSpec & resourceSpec) { DARABONBA_PTR_SET_VALUE(resourceSpec_, resourceSpec) };
    inline ModifyInstanceSpecRequest& setResourceSpec(ModifyInstanceSpecRequest::ResourceSpec && resourceSpec) { DARABONBA_PTR_SET_RVALUE(resourceSpec_, resourceSpec) };


    // usePromotionCode Field Functions 
    bool hasUsePromotionCode() const { return this->usePromotionCode_ != nullptr;};
    void deleteUsePromotionCode() { this->usePromotionCode_ = nullptr;};
    inline bool getUsePromotionCode() const { DARABONBA_PTR_GET_DEFAULT(usePromotionCode_, false) };
    inline ModifyInstanceSpecRequest& setUsePromotionCode(bool usePromotionCode) { DARABONBA_PTR_SET_VALUE(usePromotionCode_, usePromotionCode) };


  protected:
    shared_ptr<bool> ha_ {};
    shared_ptr<ModifyInstanceSpecRequest::HaResourceSpec> haResourceSpec_ {};
    shared_ptr<vector<string>> haVSwitchIds_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> promotionCode_ {};
    // This parameter is required.
    shared_ptr<string> region_ {};
    // This parameter is required.
    shared_ptr<ModifyInstanceSpecRequest::ResourceSpec> resourceSpec_ {};
    shared_ptr<bool> usePromotionCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Foasconsole20211028
#endif
