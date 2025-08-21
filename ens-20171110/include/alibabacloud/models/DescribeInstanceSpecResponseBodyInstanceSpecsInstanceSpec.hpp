// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESPECRESPONSEBODYINSTANCESPECSINSTANCESPEC_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESPECRESPONSEBODYINSTANCESPECSINSTANCESPEC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeInstanceSpecResponseBodyInstanceSpecsInstanceSpec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceSpecResponseBodyInstanceSpecsInstanceSpec& obj) { 
      DARABONBA_PTR_TO_JSON(Core, core_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceSpecResponseBodyInstanceSpecsInstanceSpec& obj) { 
      DARABONBA_PTR_FROM_JSON(Core, core_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
    };
    DescribeInstanceSpecResponseBodyInstanceSpecsInstanceSpec() = default ;
    DescribeInstanceSpecResponseBodyInstanceSpecsInstanceSpec(const DescribeInstanceSpecResponseBodyInstanceSpecsInstanceSpec &) = default ;
    DescribeInstanceSpecResponseBodyInstanceSpecsInstanceSpec(DescribeInstanceSpecResponseBodyInstanceSpecsInstanceSpec &&) = default ;
    DescribeInstanceSpecResponseBodyInstanceSpecsInstanceSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceSpecResponseBodyInstanceSpecsInstanceSpec() = default ;
    DescribeInstanceSpecResponseBodyInstanceSpecsInstanceSpec& operator=(const DescribeInstanceSpecResponseBodyInstanceSpecsInstanceSpec &) = default ;
    DescribeInstanceSpecResponseBodyInstanceSpecsInstanceSpec& operator=(DescribeInstanceSpecResponseBodyInstanceSpecsInstanceSpec &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->core_ != nullptr
        && this->displayName_ != nullptr && this->instanceType_ != nullptr && this->memory_ != nullptr; };
    // core Field Functions 
    bool hasCore() const { return this->core_ != nullptr;};
    void deleteCore() { this->core_ = nullptr;};
    inline string core() const { DARABONBA_PTR_GET_DEFAULT(core_, "") };
    inline DescribeInstanceSpecResponseBodyInstanceSpecsInstanceSpec& setCore(string core) { DARABONBA_PTR_SET_VALUE(core_, core) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline DescribeInstanceSpecResponseBodyInstanceSpecsInstanceSpec& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline DescribeInstanceSpecResponseBodyInstanceSpecsInstanceSpec& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline string memory() const { DARABONBA_PTR_GET_DEFAULT(memory_, "") };
    inline DescribeInstanceSpecResponseBodyInstanceSpecsInstanceSpec& setMemory(string memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


  protected:
    // The number of CPU cores.
    std::shared_ptr<string> core_ = nullptr;
    // The display name of the instance type.
    std::shared_ptr<string> displayName_ = nullptr;
    // The type of the instance.
    std::shared_ptr<string> instanceType_ = nullptr;
    // The memory size. Unit: MB.
    std::shared_ptr<string> memory_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
