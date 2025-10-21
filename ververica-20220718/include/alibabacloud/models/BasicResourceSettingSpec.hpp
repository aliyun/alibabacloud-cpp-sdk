// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BASICRESOURCESETTINGSPEC_HPP_
#define ALIBABACLOUD_MODELS_BASICRESOURCESETTINGSPEC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class BasicResourceSettingSpec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BasicResourceSettingSpec& obj) { 
      DARABONBA_PTR_TO_JSON(cpu, cpu_);
      DARABONBA_PTR_TO_JSON(memory, memory_);
    };
    friend void from_json(const Darabonba::Json& j, BasicResourceSettingSpec& obj) { 
      DARABONBA_PTR_FROM_JSON(cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(memory, memory_);
    };
    BasicResourceSettingSpec() = default ;
    BasicResourceSettingSpec(const BasicResourceSettingSpec &) = default ;
    BasicResourceSettingSpec(BasicResourceSettingSpec &&) = default ;
    BasicResourceSettingSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BasicResourceSettingSpec() = default ;
    BasicResourceSettingSpec& operator=(const BasicResourceSettingSpec &) = default ;
    BasicResourceSettingSpec& operator=(BasicResourceSettingSpec &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cpu_ == nullptr
        && return this->memory_ == nullptr; };
    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline double cpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0.0) };
    inline BasicResourceSettingSpec& setCpu(double cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline string memory() const { DARABONBA_PTR_GET_DEFAULT(memory_, "") };
    inline BasicResourceSettingSpec& setMemory(string memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


  protected:
    std::shared_ptr<double> cpu_ = nullptr;
    std::shared_ptr<string> memory_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
