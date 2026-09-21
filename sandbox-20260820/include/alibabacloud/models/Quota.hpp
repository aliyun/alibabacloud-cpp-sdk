// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUOTA_HPP_
#define ALIBABACLOUD_MODELS_QUOTA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sandbox20260820
{
namespace Models
{
  class Quota : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Quota& obj) { 
      DARABONBA_PTR_TO_JSON(cpuCores, cpuCores_);
      DARABONBA_PTR_TO_JSON(instanceCount, instanceCount_);
      DARABONBA_PTR_TO_JSON(memoryGB, memoryGB_);
      DARABONBA_PTR_TO_JSON(tagValue, tagValue_);
    };
    friend void from_json(const Darabonba::Json& j, Quota& obj) { 
      DARABONBA_PTR_FROM_JSON(cpuCores, cpuCores_);
      DARABONBA_PTR_FROM_JSON(instanceCount, instanceCount_);
      DARABONBA_PTR_FROM_JSON(memoryGB, memoryGB_);
      DARABONBA_PTR_FROM_JSON(tagValue, tagValue_);
    };
    Quota() = default ;
    Quota(const Quota &) = default ;
    Quota(Quota &&) = default ;
    Quota(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Quota() = default ;
    Quota& operator=(const Quota &) = default ;
    Quota& operator=(Quota &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cpuCores_ == nullptr
        && this->instanceCount_ == nullptr && this->memoryGB_ == nullptr && this->tagValue_ == nullptr; };
    // cpuCores Field Functions 
    bool hasCpuCores() const { return this->cpuCores_ != nullptr;};
    void deleteCpuCores() { this->cpuCores_ = nullptr;};
    inline int32_t getCpuCores() const { DARABONBA_PTR_GET_DEFAULT(cpuCores_, 0) };
    inline Quota& setCpuCores(int32_t cpuCores) { DARABONBA_PTR_SET_VALUE(cpuCores_, cpuCores) };


    // instanceCount Field Functions 
    bool hasInstanceCount() const { return this->instanceCount_ != nullptr;};
    void deleteInstanceCount() { this->instanceCount_ = nullptr;};
    inline int32_t getInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(instanceCount_, 0) };
    inline Quota& setInstanceCount(int32_t instanceCount) { DARABONBA_PTR_SET_VALUE(instanceCount_, instanceCount) };


    // memoryGB Field Functions 
    bool hasMemoryGB() const { return this->memoryGB_ != nullptr;};
    void deleteMemoryGB() { this->memoryGB_ = nullptr;};
    inline int32_t getMemoryGB() const { DARABONBA_PTR_GET_DEFAULT(memoryGB_, 0) };
    inline Quota& setMemoryGB(int32_t memoryGB) { DARABONBA_PTR_SET_VALUE(memoryGB_, memoryGB) };


    // tagValue Field Functions 
    bool hasTagValue() const { return this->tagValue_ != nullptr;};
    void deleteTagValue() { this->tagValue_ = nullptr;};
    inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
    inline Quota& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


  protected:
    shared_ptr<int32_t> cpuCores_ {};
    shared_ptr<int32_t> instanceCount_ {};
    shared_ptr<int32_t> memoryGB_ {};
    shared_ptr<string> tagValue_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sandbox20260820
#endif
