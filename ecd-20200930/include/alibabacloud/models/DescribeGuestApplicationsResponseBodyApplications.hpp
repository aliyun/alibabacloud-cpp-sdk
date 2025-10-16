// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGUESTAPPLICATIONSRESPONSEBODYAPPLICATIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGUESTAPPLICATIONSRESPONSEBODYAPPLICATIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeGuestApplicationsResponseBodyApplicationsProcessData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeGuestApplicationsResponseBodyApplications : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGuestApplicationsResponseBodyApplications& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_TO_JSON(ApplicationVersion, applicationVersion_);
      DARABONBA_PTR_TO_JSON(CpuPercent, cpuPercent_);
      DARABONBA_PTR_TO_JSON(GpuPercent, gpuPercent_);
      DARABONBA_PTR_TO_JSON(IconUrl, iconUrl_);
      DARABONBA_PTR_TO_JSON(IoSpeed, ioSpeed_);
      DARABONBA_PTR_TO_JSON(MemPercent, memPercent_);
      DARABONBA_PTR_TO_JSON(Pid, pid_);
      DARABONBA_PTR_TO_JSON(ProcessData, processData_);
      DARABONBA_PTR_TO_JSON(ProcessPath, processPath_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGuestApplicationsResponseBodyApplications& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_FROM_JSON(ApplicationVersion, applicationVersion_);
      DARABONBA_PTR_FROM_JSON(CpuPercent, cpuPercent_);
      DARABONBA_PTR_FROM_JSON(GpuPercent, gpuPercent_);
      DARABONBA_PTR_FROM_JSON(IconUrl, iconUrl_);
      DARABONBA_PTR_FROM_JSON(IoSpeed, ioSpeed_);
      DARABONBA_PTR_FROM_JSON(MemPercent, memPercent_);
      DARABONBA_PTR_FROM_JSON(Pid, pid_);
      DARABONBA_PTR_FROM_JSON(ProcessData, processData_);
      DARABONBA_PTR_FROM_JSON(ProcessPath, processPath_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeGuestApplicationsResponseBodyApplications() = default ;
    DescribeGuestApplicationsResponseBodyApplications(const DescribeGuestApplicationsResponseBodyApplications &) = default ;
    DescribeGuestApplicationsResponseBodyApplications(DescribeGuestApplicationsResponseBodyApplications &&) = default ;
    DescribeGuestApplicationsResponseBodyApplications(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGuestApplicationsResponseBodyApplications() = default ;
    DescribeGuestApplicationsResponseBodyApplications& operator=(const DescribeGuestApplicationsResponseBodyApplications &) = default ;
    DescribeGuestApplicationsResponseBodyApplications& operator=(DescribeGuestApplicationsResponseBodyApplications &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationName_ == nullptr
        && return this->applicationVersion_ == nullptr && return this->cpuPercent_ == nullptr && return this->gpuPercent_ == nullptr && return this->iconUrl_ == nullptr && return this->ioSpeed_ == nullptr
        && return this->memPercent_ == nullptr && return this->pid_ == nullptr && return this->processData_ == nullptr && return this->processPath_ == nullptr && return this->status_ == nullptr; };
    // applicationName Field Functions 
    bool hasApplicationName() const { return this->applicationName_ != nullptr;};
    void deleteApplicationName() { this->applicationName_ = nullptr;};
    inline string applicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
    inline DescribeGuestApplicationsResponseBodyApplications& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


    // applicationVersion Field Functions 
    bool hasApplicationVersion() const { return this->applicationVersion_ != nullptr;};
    void deleteApplicationVersion() { this->applicationVersion_ = nullptr;};
    inline string applicationVersion() const { DARABONBA_PTR_GET_DEFAULT(applicationVersion_, "") };
    inline DescribeGuestApplicationsResponseBodyApplications& setApplicationVersion(string applicationVersion) { DARABONBA_PTR_SET_VALUE(applicationVersion_, applicationVersion) };


    // cpuPercent Field Functions 
    bool hasCpuPercent() const { return this->cpuPercent_ != nullptr;};
    void deleteCpuPercent() { this->cpuPercent_ = nullptr;};
    inline double cpuPercent() const { DARABONBA_PTR_GET_DEFAULT(cpuPercent_, 0.0) };
    inline DescribeGuestApplicationsResponseBodyApplications& setCpuPercent(double cpuPercent) { DARABONBA_PTR_SET_VALUE(cpuPercent_, cpuPercent) };


    // gpuPercent Field Functions 
    bool hasGpuPercent() const { return this->gpuPercent_ != nullptr;};
    void deleteGpuPercent() { this->gpuPercent_ = nullptr;};
    inline double gpuPercent() const { DARABONBA_PTR_GET_DEFAULT(gpuPercent_, 0.0) };
    inline DescribeGuestApplicationsResponseBodyApplications& setGpuPercent(double gpuPercent) { DARABONBA_PTR_SET_VALUE(gpuPercent_, gpuPercent) };


    // iconUrl Field Functions 
    bool hasIconUrl() const { return this->iconUrl_ != nullptr;};
    void deleteIconUrl() { this->iconUrl_ = nullptr;};
    inline string iconUrl() const { DARABONBA_PTR_GET_DEFAULT(iconUrl_, "") };
    inline DescribeGuestApplicationsResponseBodyApplications& setIconUrl(string iconUrl) { DARABONBA_PTR_SET_VALUE(iconUrl_, iconUrl) };


    // ioSpeed Field Functions 
    bool hasIoSpeed() const { return this->ioSpeed_ != nullptr;};
    void deleteIoSpeed() { this->ioSpeed_ = nullptr;};
    inline double ioSpeed() const { DARABONBA_PTR_GET_DEFAULT(ioSpeed_, 0.0) };
    inline DescribeGuestApplicationsResponseBodyApplications& setIoSpeed(double ioSpeed) { DARABONBA_PTR_SET_VALUE(ioSpeed_, ioSpeed) };


    // memPercent Field Functions 
    bool hasMemPercent() const { return this->memPercent_ != nullptr;};
    void deleteMemPercent() { this->memPercent_ = nullptr;};
    inline double memPercent() const { DARABONBA_PTR_GET_DEFAULT(memPercent_, 0.0) };
    inline DescribeGuestApplicationsResponseBodyApplications& setMemPercent(double memPercent) { DARABONBA_PTR_SET_VALUE(memPercent_, memPercent) };


    // pid Field Functions 
    bool hasPid() const { return this->pid_ != nullptr;};
    void deletePid() { this->pid_ = nullptr;};
    inline int32_t pid() const { DARABONBA_PTR_GET_DEFAULT(pid_, 0) };
    inline DescribeGuestApplicationsResponseBodyApplications& setPid(int32_t pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


    // processData Field Functions 
    bool hasProcessData() const { return this->processData_ != nullptr;};
    void deleteProcessData() { this->processData_ = nullptr;};
    inline const vector<Models::DescribeGuestApplicationsResponseBodyApplicationsProcessData> & processData() const { DARABONBA_PTR_GET_CONST(processData_, vector<Models::DescribeGuestApplicationsResponseBodyApplicationsProcessData>) };
    inline vector<Models::DescribeGuestApplicationsResponseBodyApplicationsProcessData> processData() { DARABONBA_PTR_GET(processData_, vector<Models::DescribeGuestApplicationsResponseBodyApplicationsProcessData>) };
    inline DescribeGuestApplicationsResponseBodyApplications& setProcessData(const vector<Models::DescribeGuestApplicationsResponseBodyApplicationsProcessData> & processData) { DARABONBA_PTR_SET_VALUE(processData_, processData) };
    inline DescribeGuestApplicationsResponseBodyApplications& setProcessData(vector<Models::DescribeGuestApplicationsResponseBodyApplicationsProcessData> && processData) { DARABONBA_PTR_SET_RVALUE(processData_, processData) };


    // processPath Field Functions 
    bool hasProcessPath() const { return this->processPath_ != nullptr;};
    void deleteProcessPath() { this->processPath_ = nullptr;};
    inline string processPath() const { DARABONBA_PTR_GET_DEFAULT(processPath_, "") };
    inline DescribeGuestApplicationsResponseBodyApplications& setProcessPath(string processPath) { DARABONBA_PTR_SET_VALUE(processPath_, processPath) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeGuestApplicationsResponseBodyApplications& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The application name.
    std::shared_ptr<string> applicationName_ = nullptr;
    // The application version.
    std::shared_ptr<string> applicationVersion_ = nullptr;
    // The CPU utilization (%).
    std::shared_ptr<double> cpuPercent_ = nullptr;
    // The GPU utilization (%).
    std::shared_ptr<double> gpuPercent_ = nullptr;
    // The icon URL of the application.
    std::shared_ptr<string> iconUrl_ = nullptr;
    // The I/O read and write performance. Unit: byte/s.
    std::shared_ptr<double> ioSpeed_ = nullptr;
    // The memory utilization (%).
    std::shared_ptr<double> memPercent_ = nullptr;
    // The process ID (PID).
    std::shared_ptr<int32_t> pid_ = nullptr;
    // The processes.
    std::shared_ptr<vector<Models::DescribeGuestApplicationsResponseBodyApplicationsProcessData>> processData_ = nullptr;
    // The path to the process.
    std::shared_ptr<string> processPath_ = nullptr;
    // The status of the application.
    // 
    // Valid value:
    // 
    // *   Idle: The application is installed in the cloud computer but is not running.
    // *   Running: The application has been installed in the cloud computer and is running.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
