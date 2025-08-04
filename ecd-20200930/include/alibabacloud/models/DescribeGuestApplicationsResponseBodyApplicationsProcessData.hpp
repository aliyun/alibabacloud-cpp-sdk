// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGUESTAPPLICATIONSRESPONSEBODYAPPLICATIONSPROCESSDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGUESTAPPLICATIONSRESPONSEBODYAPPLICATIONSPROCESSDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeGuestApplicationsResponseBodyApplicationsProcessData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGuestApplicationsResponseBodyApplicationsProcessData& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_TO_JSON(ApplicationVersion, applicationVersion_);
      DARABONBA_PTR_TO_JSON(CpuPercent, cpuPercent_);
      DARABONBA_PTR_TO_JSON(GpuPercent, gpuPercent_);
      DARABONBA_PTR_TO_JSON(Iospeed, iospeed_);
      DARABONBA_PTR_TO_JSON(MemPercent, memPercent_);
      DARABONBA_PTR_TO_JSON(Pid, pid_);
      DARABONBA_PTR_TO_JSON(ProcessPath, processPath_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGuestApplicationsResponseBodyApplicationsProcessData& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_FROM_JSON(ApplicationVersion, applicationVersion_);
      DARABONBA_PTR_FROM_JSON(CpuPercent, cpuPercent_);
      DARABONBA_PTR_FROM_JSON(GpuPercent, gpuPercent_);
      DARABONBA_PTR_FROM_JSON(Iospeed, iospeed_);
      DARABONBA_PTR_FROM_JSON(MemPercent, memPercent_);
      DARABONBA_PTR_FROM_JSON(Pid, pid_);
      DARABONBA_PTR_FROM_JSON(ProcessPath, processPath_);
    };
    DescribeGuestApplicationsResponseBodyApplicationsProcessData() = default ;
    DescribeGuestApplicationsResponseBodyApplicationsProcessData(const DescribeGuestApplicationsResponseBodyApplicationsProcessData &) = default ;
    DescribeGuestApplicationsResponseBodyApplicationsProcessData(DescribeGuestApplicationsResponseBodyApplicationsProcessData &&) = default ;
    DescribeGuestApplicationsResponseBodyApplicationsProcessData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGuestApplicationsResponseBodyApplicationsProcessData() = default ;
    DescribeGuestApplicationsResponseBodyApplicationsProcessData& operator=(const DescribeGuestApplicationsResponseBodyApplicationsProcessData &) = default ;
    DescribeGuestApplicationsResponseBodyApplicationsProcessData& operator=(DescribeGuestApplicationsResponseBodyApplicationsProcessData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applicationName_ != nullptr
        && this->applicationVersion_ != nullptr && this->cpuPercent_ != nullptr && this->gpuPercent_ != nullptr && this->iospeed_ != nullptr && this->memPercent_ != nullptr
        && this->pid_ != nullptr && this->processPath_ != nullptr; };
    // applicationName Field Functions 
    bool hasApplicationName() const { return this->applicationName_ != nullptr;};
    void deleteApplicationName() { this->applicationName_ = nullptr;};
    inline string applicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
    inline DescribeGuestApplicationsResponseBodyApplicationsProcessData& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


    // applicationVersion Field Functions 
    bool hasApplicationVersion() const { return this->applicationVersion_ != nullptr;};
    void deleteApplicationVersion() { this->applicationVersion_ = nullptr;};
    inline string applicationVersion() const { DARABONBA_PTR_GET_DEFAULT(applicationVersion_, "") };
    inline DescribeGuestApplicationsResponseBodyApplicationsProcessData& setApplicationVersion(string applicationVersion) { DARABONBA_PTR_SET_VALUE(applicationVersion_, applicationVersion) };


    // cpuPercent Field Functions 
    bool hasCpuPercent() const { return this->cpuPercent_ != nullptr;};
    void deleteCpuPercent() { this->cpuPercent_ = nullptr;};
    inline double cpuPercent() const { DARABONBA_PTR_GET_DEFAULT(cpuPercent_, 0.0) };
    inline DescribeGuestApplicationsResponseBodyApplicationsProcessData& setCpuPercent(double cpuPercent) { DARABONBA_PTR_SET_VALUE(cpuPercent_, cpuPercent) };


    // gpuPercent Field Functions 
    bool hasGpuPercent() const { return this->gpuPercent_ != nullptr;};
    void deleteGpuPercent() { this->gpuPercent_ = nullptr;};
    inline double gpuPercent() const { DARABONBA_PTR_GET_DEFAULT(gpuPercent_, 0.0) };
    inline DescribeGuestApplicationsResponseBodyApplicationsProcessData& setGpuPercent(double gpuPercent) { DARABONBA_PTR_SET_VALUE(gpuPercent_, gpuPercent) };


    // iospeed Field Functions 
    bool hasIospeed() const { return this->iospeed_ != nullptr;};
    void deleteIospeed() { this->iospeed_ = nullptr;};
    inline double iospeed() const { DARABONBA_PTR_GET_DEFAULT(iospeed_, 0.0) };
    inline DescribeGuestApplicationsResponseBodyApplicationsProcessData& setIospeed(double iospeed) { DARABONBA_PTR_SET_VALUE(iospeed_, iospeed) };


    // memPercent Field Functions 
    bool hasMemPercent() const { return this->memPercent_ != nullptr;};
    void deleteMemPercent() { this->memPercent_ = nullptr;};
    inline double memPercent() const { DARABONBA_PTR_GET_DEFAULT(memPercent_, 0.0) };
    inline DescribeGuestApplicationsResponseBodyApplicationsProcessData& setMemPercent(double memPercent) { DARABONBA_PTR_SET_VALUE(memPercent_, memPercent) };


    // pid Field Functions 
    bool hasPid() const { return this->pid_ != nullptr;};
    void deletePid() { this->pid_ = nullptr;};
    inline int32_t pid() const { DARABONBA_PTR_GET_DEFAULT(pid_, 0) };
    inline DescribeGuestApplicationsResponseBodyApplicationsProcessData& setPid(int32_t pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


    // processPath Field Functions 
    bool hasProcessPath() const { return this->processPath_ != nullptr;};
    void deleteProcessPath() { this->processPath_ = nullptr;};
    inline string processPath() const { DARABONBA_PTR_GET_DEFAULT(processPath_, "") };
    inline DescribeGuestApplicationsResponseBodyApplicationsProcessData& setProcessPath(string processPath) { DARABONBA_PTR_SET_VALUE(processPath_, processPath) };


  protected:
    // The application name.
    std::shared_ptr<string> applicationName_ = nullptr;
    // The application version.
    std::shared_ptr<string> applicationVersion_ = nullptr;
    // The CPU utilization (%).
    std::shared_ptr<double> cpuPercent_ = nullptr;
    // The GPU usage (%).
    std::shared_ptr<double> gpuPercent_ = nullptr;
    // The I/O read and write performance. Unit: byte/s.
    std::shared_ptr<double> iospeed_ = nullptr;
    // The memory usage (%).
    std::shared_ptr<double> memPercent_ = nullptr;
    // The PID.
    std::shared_ptr<int32_t> pid_ = nullptr;
    // The path to the process.
    std::shared_ptr<string> processPath_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
