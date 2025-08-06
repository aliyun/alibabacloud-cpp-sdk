// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNINSTANCESREQUESTCPUOPTIONS_HPP_
#define ALIBABACLOUD_MODELS_RUNINSTANCESREQUESTCPUOPTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class RunInstancesRequestCpuOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunInstancesRequestCpuOptions& obj) { 
      DARABONBA_PTR_TO_JSON(Core, core_);
      DARABONBA_PTR_TO_JSON(Numa, numa_);
      DARABONBA_PTR_TO_JSON(ThreadsPerCore, threadsPerCore_);
      DARABONBA_PTR_TO_JSON(TopologyType, topologyType_);
    };
    friend void from_json(const Darabonba::Json& j, RunInstancesRequestCpuOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(Core, core_);
      DARABONBA_PTR_FROM_JSON(Numa, numa_);
      DARABONBA_PTR_FROM_JSON(ThreadsPerCore, threadsPerCore_);
      DARABONBA_PTR_FROM_JSON(TopologyType, topologyType_);
    };
    RunInstancesRequestCpuOptions() = default ;
    RunInstancesRequestCpuOptions(const RunInstancesRequestCpuOptions &) = default ;
    RunInstancesRequestCpuOptions(RunInstancesRequestCpuOptions &&) = default ;
    RunInstancesRequestCpuOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunInstancesRequestCpuOptions() = default ;
    RunInstancesRequestCpuOptions& operator=(const RunInstancesRequestCpuOptions &) = default ;
    RunInstancesRequestCpuOptions& operator=(RunInstancesRequestCpuOptions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->core_ != nullptr
        && this->numa_ != nullptr && this->threadsPerCore_ != nullptr && this->topologyType_ != nullptr; };
    // core Field Functions 
    bool hasCore() const { return this->core_ != nullptr;};
    void deleteCore() { this->core_ = nullptr;};
    inline int32_t core() const { DARABONBA_PTR_GET_DEFAULT(core_, 0) };
    inline RunInstancesRequestCpuOptions& setCore(int32_t core) { DARABONBA_PTR_SET_VALUE(core_, core) };


    // numa Field Functions 
    bool hasNuma() const { return this->numa_ != nullptr;};
    void deleteNuma() { this->numa_ = nullptr;};
    inline string numa() const { DARABONBA_PTR_GET_DEFAULT(numa_, "") };
    inline RunInstancesRequestCpuOptions& setNuma(string numa) { DARABONBA_PTR_SET_VALUE(numa_, numa) };


    // threadsPerCore Field Functions 
    bool hasThreadsPerCore() const { return this->threadsPerCore_ != nullptr;};
    void deleteThreadsPerCore() { this->threadsPerCore_ = nullptr;};
    inline int32_t threadsPerCore() const { DARABONBA_PTR_GET_DEFAULT(threadsPerCore_, 0) };
    inline RunInstancesRequestCpuOptions& setThreadsPerCore(int32_t threadsPerCore) { DARABONBA_PTR_SET_VALUE(threadsPerCore_, threadsPerCore) };


    // topologyType Field Functions 
    bool hasTopologyType() const { return this->topologyType_ != nullptr;};
    void deleteTopologyType() { this->topologyType_ = nullptr;};
    inline string topologyType() const { DARABONBA_PTR_GET_DEFAULT(topologyType_, "") };
    inline RunInstancesRequestCpuOptions& setTopologyType(string topologyType) { DARABONBA_PTR_SET_VALUE(topologyType_, topologyType) };


  protected:
    // The number of CPU cores.
    std::shared_ptr<int32_t> core_ = nullptr;
    // This parameter is no longer used.
    std::shared_ptr<string> numa_ = nullptr;
    // The number of threads per CPU core. The following formula is used to calculate the number of vCPUs of the instance: `CpuOptions.Core` value × `CpuOptions.ThreadsPerCore` value.
    // 
    // *   If `CpuOptionsThreadPerCore` is set to 1, Hyper-Threading (HT) is disabled.
    // *   This parameter is applicable only to specific instance types.
    std::shared_ptr<int32_t> threadsPerCore_ = nullptr;
    // The CPU topology type of the instance. Valid values:
    // 
    // *   ContinuousCoreToHTMapping: The HT technology allows continuous threads to run on the same core in the CPU topology of the instance.``
    // *   DiscreteCoreToHTMapping: The HT technology allows discrete threads to run on the same core in the CPU topology of the instance.``
    // 
    // This parameter is empty by default.
    // 
    // >  This parameter is supported only for specific instance families. For more information about the supported instance families, see [View and modify the CPU topology](https://help.aliyun.com/document_detail/2636059.html).
    std::shared_ptr<string> topologyType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
