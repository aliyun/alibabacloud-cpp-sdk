// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHYBRIDCLOUDBASICMONITORRESPONSEBODYBASICMONITORS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHYBRIDCLOUDBASICMONITORRESPONSEBODYBASICMONITORS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeHybridCloudBasicMonitorResponseBodyBasicMonitors : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHybridCloudBasicMonitorResponseBodyBasicMonitors& obj) { 
      DARABONBA_PTR_TO_JSON(Levle, levle_);
      DARABONBA_PTR_TO_JSON(MonitorName, monitorName_);
      DARABONBA_PTR_TO_JSON(UseRatio, useRatio_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHybridCloudBasicMonitorResponseBodyBasicMonitors& obj) { 
      DARABONBA_PTR_FROM_JSON(Levle, levle_);
      DARABONBA_PTR_FROM_JSON(MonitorName, monitorName_);
      DARABONBA_PTR_FROM_JSON(UseRatio, useRatio_);
    };
    DescribeHybridCloudBasicMonitorResponseBodyBasicMonitors() = default ;
    DescribeHybridCloudBasicMonitorResponseBodyBasicMonitors(const DescribeHybridCloudBasicMonitorResponseBodyBasicMonitors &) = default ;
    DescribeHybridCloudBasicMonitorResponseBodyBasicMonitors(DescribeHybridCloudBasicMonitorResponseBodyBasicMonitors &&) = default ;
    DescribeHybridCloudBasicMonitorResponseBodyBasicMonitors(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHybridCloudBasicMonitorResponseBodyBasicMonitors() = default ;
    DescribeHybridCloudBasicMonitorResponseBodyBasicMonitors& operator=(const DescribeHybridCloudBasicMonitorResponseBodyBasicMonitors &) = default ;
    DescribeHybridCloudBasicMonitorResponseBodyBasicMonitors& operator=(DescribeHybridCloudBasicMonitorResponseBodyBasicMonitors &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->levle_ != nullptr
        && this->monitorName_ != nullptr && this->useRatio_ != nullptr; };
    // levle Field Functions 
    bool hasLevle() const { return this->levle_ != nullptr;};
    void deleteLevle() { this->levle_ = nullptr;};
    inline string levle() const { DARABONBA_PTR_GET_DEFAULT(levle_, "") };
    inline DescribeHybridCloudBasicMonitorResponseBodyBasicMonitors& setLevle(string levle) { DARABONBA_PTR_SET_VALUE(levle_, levle) };


    // monitorName Field Functions 
    bool hasMonitorName() const { return this->monitorName_ != nullptr;};
    void deleteMonitorName() { this->monitorName_ = nullptr;};
    inline string monitorName() const { DARABONBA_PTR_GET_DEFAULT(monitorName_, "") };
    inline DescribeHybridCloudBasicMonitorResponseBodyBasicMonitors& setMonitorName(string monitorName) { DARABONBA_PTR_SET_VALUE(monitorName_, monitorName) };


    // useRatio Field Functions 
    bool hasUseRatio() const { return this->useRatio_ != nullptr;};
    void deleteUseRatio() { this->useRatio_ = nullptr;};
    inline int64_t useRatio() const { DARABONBA_PTR_GET_DEFAULT(useRatio_, 0L) };
    inline DescribeHybridCloudBasicMonitorResponseBodyBasicMonitors& setUseRatio(int64_t useRatio) { DARABONBA_PTR_SET_VALUE(useRatio_, useRatio) };


  protected:
    std::shared_ptr<string> levle_ = nullptr;
    // The metric. Valid values:
    // 
    // *   **basic_monitor_cpu_usage**: the CPU.
    // *   **basic_monitor_memory_usage**: the memory.
    // *   **basic_monitor_disk_usage**: the disk.
    std::shared_ptr<string> monitorName_ = nullptr;
    // The resource usage.
    std::shared_ptr<int64_t> useRatio_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
