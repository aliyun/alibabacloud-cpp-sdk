// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHYBRIDCLOUDPROCESSMONITORRESPONSEBODYPROCESSMONITORS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHYBRIDCLOUDPROCESSMONITORRESPONSEBODYPROCESSMONITORS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeHybridCloudProcessMonitorResponseBodyProcessMonitors : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHybridCloudProcessMonitorResponseBodyProcessMonitors& obj) { 
      DARABONBA_PTR_TO_JSON(Levle, levle_);
      DARABONBA_PTR_TO_JSON(ProcessName, processName_);
      DARABONBA_PTR_TO_JSON(ProcessStatus, processStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHybridCloudProcessMonitorResponseBodyProcessMonitors& obj) { 
      DARABONBA_PTR_FROM_JSON(Levle, levle_);
      DARABONBA_PTR_FROM_JSON(ProcessName, processName_);
      DARABONBA_PTR_FROM_JSON(ProcessStatus, processStatus_);
    };
    DescribeHybridCloudProcessMonitorResponseBodyProcessMonitors() = default ;
    DescribeHybridCloudProcessMonitorResponseBodyProcessMonitors(const DescribeHybridCloudProcessMonitorResponseBodyProcessMonitors &) = default ;
    DescribeHybridCloudProcessMonitorResponseBodyProcessMonitors(DescribeHybridCloudProcessMonitorResponseBodyProcessMonitors &&) = default ;
    DescribeHybridCloudProcessMonitorResponseBodyProcessMonitors(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHybridCloudProcessMonitorResponseBodyProcessMonitors() = default ;
    DescribeHybridCloudProcessMonitorResponseBodyProcessMonitors& operator=(const DescribeHybridCloudProcessMonitorResponseBodyProcessMonitors &) = default ;
    DescribeHybridCloudProcessMonitorResponseBodyProcessMonitors& operator=(DescribeHybridCloudProcessMonitorResponseBodyProcessMonitors &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->levle_ != nullptr
        && this->processName_ != nullptr && this->processStatus_ != nullptr; };
    // levle Field Functions 
    bool hasLevle() const { return this->levle_ != nullptr;};
    void deleteLevle() { this->levle_ = nullptr;};
    inline string levle() const { DARABONBA_PTR_GET_DEFAULT(levle_, "") };
    inline DescribeHybridCloudProcessMonitorResponseBodyProcessMonitors& setLevle(string levle) { DARABONBA_PTR_SET_VALUE(levle_, levle) };


    // processName Field Functions 
    bool hasProcessName() const { return this->processName_ != nullptr;};
    void deleteProcessName() { this->processName_ = nullptr;};
    inline string processName() const { DARABONBA_PTR_GET_DEFAULT(processName_, "") };
    inline DescribeHybridCloudProcessMonitorResponseBodyProcessMonitors& setProcessName(string processName) { DARABONBA_PTR_SET_VALUE(processName_, processName) };


    // processStatus Field Functions 
    bool hasProcessStatus() const { return this->processStatus_ != nullptr;};
    void deleteProcessStatus() { this->processStatus_ = nullptr;};
    inline int64_t processStatus() const { DARABONBA_PTR_GET_DEFAULT(processStatus_, 0L) };
    inline DescribeHybridCloudProcessMonitorResponseBodyProcessMonitors& setProcessStatus(int64_t processStatus) { DARABONBA_PTR_SET_VALUE(processStatus_, processStatus) };


  protected:
    std::shared_ptr<string> levle_ = nullptr;
    // The service that the application provides. Valid values:
    // 
    // *   **tianqingproxy**: centralized management service.
    // *   **redis**: storage service.
    // *   **scc**: traffic calculation service.
    // *   **keeper**: threat intelligence service.
    // *   **node_exporter**: application log upload service.
    // *   **xagent**: traffic detection service.
    // *   **noproxy**: traffic forwarding service.
    // *   **xloge**: attack log upload service.
    // *   **ilogtail**: log collection service.
    // *   **xlogd**: log analysis service.
    std::shared_ptr<string> processName_ = nullptr;
    // The status of the application. Valid values:
    // 
    // *   **0**: abnormal.
    // *   **1**: normal.
    std::shared_ptr<int64_t> processStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
