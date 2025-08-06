// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCETYPESRESPONSEBODYINSTANCETYPESINSTANCETYPECPUOPTIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCETYPESRESPONSEBODYINSTANCETYPESINSTANCETYPECPUOPTIONS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeCpuOptionsSupportedTopologyTypes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeCpuOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeCpuOptions& obj) { 
      DARABONBA_PTR_TO_JSON(Core, core_);
      DARABONBA_PTR_TO_JSON(CoreFactor, coreFactor_);
      DARABONBA_PTR_TO_JSON(HyperThreadingAdjustable, hyperThreadingAdjustable_);
      DARABONBA_PTR_TO_JSON(SupportedTopologyTypes, supportedTopologyTypes_);
      DARABONBA_PTR_TO_JSON(ThreadsPerCore, threadsPerCore_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeCpuOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(Core, core_);
      DARABONBA_PTR_FROM_JSON(CoreFactor, coreFactor_);
      DARABONBA_PTR_FROM_JSON(HyperThreadingAdjustable, hyperThreadingAdjustable_);
      DARABONBA_PTR_FROM_JSON(SupportedTopologyTypes, supportedTopologyTypes_);
      DARABONBA_PTR_FROM_JSON(ThreadsPerCore, threadsPerCore_);
    };
    DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeCpuOptions() = default ;
    DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeCpuOptions(const DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeCpuOptions &) = default ;
    DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeCpuOptions(DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeCpuOptions &&) = default ;
    DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeCpuOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeCpuOptions() = default ;
    DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeCpuOptions& operator=(const DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeCpuOptions &) = default ;
    DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeCpuOptions& operator=(DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeCpuOptions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->core_ != nullptr
        && this->coreFactor_ != nullptr && this->hyperThreadingAdjustable_ != nullptr && this->supportedTopologyTypes_ != nullptr && this->threadsPerCore_ != nullptr; };
    // core Field Functions 
    bool hasCore() const { return this->core_ != nullptr;};
    void deleteCore() { this->core_ = nullptr;};
    inline int32_t core() const { DARABONBA_PTR_GET_DEFAULT(core_, 0) };
    inline DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeCpuOptions& setCore(int32_t core) { DARABONBA_PTR_SET_VALUE(core_, core) };


    // coreFactor Field Functions 
    bool hasCoreFactor() const { return this->coreFactor_ != nullptr;};
    void deleteCoreFactor() { this->coreFactor_ = nullptr;};
    inline int32_t coreFactor() const { DARABONBA_PTR_GET_DEFAULT(coreFactor_, 0) };
    inline DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeCpuOptions& setCoreFactor(int32_t coreFactor) { DARABONBA_PTR_SET_VALUE(coreFactor_, coreFactor) };


    // hyperThreadingAdjustable Field Functions 
    bool hasHyperThreadingAdjustable() const { return this->hyperThreadingAdjustable_ != nullptr;};
    void deleteHyperThreadingAdjustable() { this->hyperThreadingAdjustable_ = nullptr;};
    inline bool hyperThreadingAdjustable() const { DARABONBA_PTR_GET_DEFAULT(hyperThreadingAdjustable_, false) };
    inline DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeCpuOptions& setHyperThreadingAdjustable(bool hyperThreadingAdjustable) { DARABONBA_PTR_SET_VALUE(hyperThreadingAdjustable_, hyperThreadingAdjustable) };


    // supportedTopologyTypes Field Functions 
    bool hasSupportedTopologyTypes() const { return this->supportedTopologyTypes_ != nullptr;};
    void deleteSupportedTopologyTypes() { this->supportedTopologyTypes_ = nullptr;};
    inline const Models::DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeCpuOptionsSupportedTopologyTypes & supportedTopologyTypes() const { DARABONBA_PTR_GET_CONST(supportedTopologyTypes_, Models::DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeCpuOptionsSupportedTopologyTypes) };
    inline Models::DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeCpuOptionsSupportedTopologyTypes supportedTopologyTypes() { DARABONBA_PTR_GET(supportedTopologyTypes_, Models::DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeCpuOptionsSupportedTopologyTypes) };
    inline DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeCpuOptions& setSupportedTopologyTypes(const Models::DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeCpuOptionsSupportedTopologyTypes & supportedTopologyTypes) { DARABONBA_PTR_SET_VALUE(supportedTopologyTypes_, supportedTopologyTypes) };
    inline DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeCpuOptions& setSupportedTopologyTypes(Models::DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeCpuOptionsSupportedTopologyTypes && supportedTopologyTypes) { DARABONBA_PTR_SET_RVALUE(supportedTopologyTypes_, supportedTopologyTypes) };


    // threadsPerCore Field Functions 
    bool hasThreadsPerCore() const { return this->threadsPerCore_ != nullptr;};
    void deleteThreadsPerCore() { this->threadsPerCore_ = nullptr;};
    inline int32_t threadsPerCore() const { DARABONBA_PTR_GET_DEFAULT(threadsPerCore_, 0) };
    inline DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeCpuOptions& setThreadsPerCore(int32_t threadsPerCore) { DARABONBA_PTR_SET_VALUE(threadsPerCore_, threadsPerCore) };


  protected:
    // The number of CPU cores.
    std::shared_ptr<int32_t> core_ = nullptr;
    // The CPU option step size.
    std::shared_ptr<int32_t> coreFactor_ = nullptr;
    // Indicates whether HT can be enabled or disabled.
    std::shared_ptr<bool> hyperThreadingAdjustable_ = nullptr;
    // The CPU topology types of the instance type.
    std::shared_ptr<Models::DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeCpuOptionsSupportedTopologyTypes> supportedTopologyTypes_ = nullptr;
    // The number of threads per CPU core.
    // 
    // >  `If the value of CpuOptions.ThreadPerCore is 1, Hyper-Threading (HT) is disabled.`
    std::shared_ptr<int32_t> threadsPerCore_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
