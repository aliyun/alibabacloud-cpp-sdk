// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODYINSTANCESINSTANCECPUOPTIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODYINSTANCESINSTANCECPUOPTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeInstancesResponseBodyInstancesInstanceCpuOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstancesResponseBodyInstancesInstanceCpuOptions& obj) { 
      DARABONBA_PTR_TO_JSON(CoreCount, coreCount_);
      DARABONBA_PTR_TO_JSON(EnableVISST, enableVISST_);
      DARABONBA_PTR_TO_JSON(EnableVRDT, enableVRDT_);
      DARABONBA_PTR_TO_JSON(Numa, numa_);
      DARABONBA_PTR_TO_JSON(ThreadsPerCore, threadsPerCore_);
      DARABONBA_PTR_TO_JSON(TopologyType, topologyType_);
      DARABONBA_PTR_TO_JSON(TurboMode, turboMode_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstancesResponseBodyInstancesInstanceCpuOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(CoreCount, coreCount_);
      DARABONBA_PTR_FROM_JSON(EnableVISST, enableVISST_);
      DARABONBA_PTR_FROM_JSON(EnableVRDT, enableVRDT_);
      DARABONBA_PTR_FROM_JSON(Numa, numa_);
      DARABONBA_PTR_FROM_JSON(ThreadsPerCore, threadsPerCore_);
      DARABONBA_PTR_FROM_JSON(TopologyType, topologyType_);
      DARABONBA_PTR_FROM_JSON(TurboMode, turboMode_);
    };
    DescribeInstancesResponseBodyInstancesInstanceCpuOptions() = default ;
    DescribeInstancesResponseBodyInstancesInstanceCpuOptions(const DescribeInstancesResponseBodyInstancesInstanceCpuOptions &) = default ;
    DescribeInstancesResponseBodyInstancesInstanceCpuOptions(DescribeInstancesResponseBodyInstancesInstanceCpuOptions &&) = default ;
    DescribeInstancesResponseBodyInstancesInstanceCpuOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstancesResponseBodyInstancesInstanceCpuOptions() = default ;
    DescribeInstancesResponseBodyInstancesInstanceCpuOptions& operator=(const DescribeInstancesResponseBodyInstancesInstanceCpuOptions &) = default ;
    DescribeInstancesResponseBodyInstancesInstanceCpuOptions& operator=(DescribeInstancesResponseBodyInstancesInstanceCpuOptions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->coreCount_ != nullptr
        && this->enableVISST_ != nullptr && this->enableVRDT_ != nullptr && this->numa_ != nullptr && this->threadsPerCore_ != nullptr && this->topologyType_ != nullptr
        && this->turboMode_ != nullptr; };
    // coreCount Field Functions 
    bool hasCoreCount() const { return this->coreCount_ != nullptr;};
    void deleteCoreCount() { this->coreCount_ = nullptr;};
    inline int32_t coreCount() const { DARABONBA_PTR_GET_DEFAULT(coreCount_, 0) };
    inline DescribeInstancesResponseBodyInstancesInstanceCpuOptions& setCoreCount(int32_t coreCount) { DARABONBA_PTR_SET_VALUE(coreCount_, coreCount) };


    // enableVISST Field Functions 
    bool hasEnableVISST() const { return this->enableVISST_ != nullptr;};
    void deleteEnableVISST() { this->enableVISST_ = nullptr;};
    inline bool enableVISST() const { DARABONBA_PTR_GET_DEFAULT(enableVISST_, false) };
    inline DescribeInstancesResponseBodyInstancesInstanceCpuOptions& setEnableVISST(bool enableVISST) { DARABONBA_PTR_SET_VALUE(enableVISST_, enableVISST) };


    // enableVRDT Field Functions 
    bool hasEnableVRDT() const { return this->enableVRDT_ != nullptr;};
    void deleteEnableVRDT() { this->enableVRDT_ = nullptr;};
    inline bool enableVRDT() const { DARABONBA_PTR_GET_DEFAULT(enableVRDT_, false) };
    inline DescribeInstancesResponseBodyInstancesInstanceCpuOptions& setEnableVRDT(bool enableVRDT) { DARABONBA_PTR_SET_VALUE(enableVRDT_, enableVRDT) };


    // numa Field Functions 
    bool hasNuma() const { return this->numa_ != nullptr;};
    void deleteNuma() { this->numa_ = nullptr;};
    inline string numa() const { DARABONBA_PTR_GET_DEFAULT(numa_, "") };
    inline DescribeInstancesResponseBodyInstancesInstanceCpuOptions& setNuma(string numa) { DARABONBA_PTR_SET_VALUE(numa_, numa) };


    // threadsPerCore Field Functions 
    bool hasThreadsPerCore() const { return this->threadsPerCore_ != nullptr;};
    void deleteThreadsPerCore() { this->threadsPerCore_ = nullptr;};
    inline int32_t threadsPerCore() const { DARABONBA_PTR_GET_DEFAULT(threadsPerCore_, 0) };
    inline DescribeInstancesResponseBodyInstancesInstanceCpuOptions& setThreadsPerCore(int32_t threadsPerCore) { DARABONBA_PTR_SET_VALUE(threadsPerCore_, threadsPerCore) };


    // topologyType Field Functions 
    bool hasTopologyType() const { return this->topologyType_ != nullptr;};
    void deleteTopologyType() { this->topologyType_ = nullptr;};
    inline string topologyType() const { DARABONBA_PTR_GET_DEFAULT(topologyType_, "") };
    inline DescribeInstancesResponseBodyInstancesInstanceCpuOptions& setTopologyType(string topologyType) { DARABONBA_PTR_SET_VALUE(topologyType_, topologyType) };


    // turboMode Field Functions 
    bool hasTurboMode() const { return this->turboMode_ != nullptr;};
    void deleteTurboMode() { this->turboMode_ = nullptr;};
    inline string turboMode() const { DARABONBA_PTR_GET_DEFAULT(turboMode_, "") };
    inline DescribeInstancesResponseBodyInstancesInstanceCpuOptions& setTurboMode(string turboMode) { DARABONBA_PTR_SET_VALUE(turboMode_, turboMode) };


  protected:
    // The number of physical CPU cores.
    std::shared_ptr<int32_t> coreCount_ = nullptr;
    std::shared_ptr<bool> enableVISST_ = nullptr;
    std::shared_ptr<bool> enableVRDT_ = nullptr;
    // >  This parameter is deprecated.
    std::shared_ptr<string> numa_ = nullptr;
    // The number of threads per CPU core.
    std::shared_ptr<int32_t> threadsPerCore_ = nullptr;
    // The CPU topology type of the instance. Valid values:
    // 
    // *   ContinuousCoreToHTMapping: Hyper-Threading (HT) continuous CPU topology
    // *   DiscreteCoreToHTMapping: HT discrete CPU topology
    std::shared_ptr<string> topologyType_ = nullptr;
    std::shared_ptr<string> turboMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
