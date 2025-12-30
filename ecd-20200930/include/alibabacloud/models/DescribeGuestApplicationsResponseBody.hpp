// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGUESTAPPLICATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGUESTAPPLICATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeGuestApplicationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGuestApplicationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Applications, applications_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGuestApplicationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Applications, applications_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeGuestApplicationsResponseBody() = default ;
    DescribeGuestApplicationsResponseBody(const DescribeGuestApplicationsResponseBody &) = default ;
    DescribeGuestApplicationsResponseBody(DescribeGuestApplicationsResponseBody &&) = default ;
    DescribeGuestApplicationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGuestApplicationsResponseBody() = default ;
    DescribeGuestApplicationsResponseBody& operator=(const DescribeGuestApplicationsResponseBody &) = default ;
    DescribeGuestApplicationsResponseBody& operator=(DescribeGuestApplicationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Applications : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Applications& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Applications& obj) { 
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
      Applications() = default ;
      Applications(const Applications &) = default ;
      Applications(Applications &&) = default ;
      Applications(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Applications() = default ;
      Applications& operator=(const Applications &) = default ;
      Applications& operator=(Applications &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ProcessData : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ProcessData& obj) { 
          DARABONBA_PTR_TO_JSON(ApplicationName, applicationName_);
          DARABONBA_PTR_TO_JSON(ApplicationVersion, applicationVersion_);
          DARABONBA_PTR_TO_JSON(CpuPercent, cpuPercent_);
          DARABONBA_PTR_TO_JSON(GpuPercent, gpuPercent_);
          DARABONBA_PTR_TO_JSON(Iospeed, iospeed_);
          DARABONBA_PTR_TO_JSON(MemPercent, memPercent_);
          DARABONBA_PTR_TO_JSON(Pid, pid_);
          DARABONBA_PTR_TO_JSON(ProcessPath, processPath_);
        };
        friend void from_json(const Darabonba::Json& j, ProcessData& obj) { 
          DARABONBA_PTR_FROM_JSON(ApplicationName, applicationName_);
          DARABONBA_PTR_FROM_JSON(ApplicationVersion, applicationVersion_);
          DARABONBA_PTR_FROM_JSON(CpuPercent, cpuPercent_);
          DARABONBA_PTR_FROM_JSON(GpuPercent, gpuPercent_);
          DARABONBA_PTR_FROM_JSON(Iospeed, iospeed_);
          DARABONBA_PTR_FROM_JSON(MemPercent, memPercent_);
          DARABONBA_PTR_FROM_JSON(Pid, pid_);
          DARABONBA_PTR_FROM_JSON(ProcessPath, processPath_);
        };
        ProcessData() = default ;
        ProcessData(const ProcessData &) = default ;
        ProcessData(ProcessData &&) = default ;
        ProcessData(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ProcessData() = default ;
        ProcessData& operator=(const ProcessData &) = default ;
        ProcessData& operator=(ProcessData &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->applicationName_ == nullptr
        && this->applicationVersion_ == nullptr && this->cpuPercent_ == nullptr && this->gpuPercent_ == nullptr && this->iospeed_ == nullptr && this->memPercent_ == nullptr
        && this->pid_ == nullptr && this->processPath_ == nullptr; };
        // applicationName Field Functions 
        bool hasApplicationName() const { return this->applicationName_ != nullptr;};
        void deleteApplicationName() { this->applicationName_ = nullptr;};
        inline string getApplicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
        inline ProcessData& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


        // applicationVersion Field Functions 
        bool hasApplicationVersion() const { return this->applicationVersion_ != nullptr;};
        void deleteApplicationVersion() { this->applicationVersion_ = nullptr;};
        inline string getApplicationVersion() const { DARABONBA_PTR_GET_DEFAULT(applicationVersion_, "") };
        inline ProcessData& setApplicationVersion(string applicationVersion) { DARABONBA_PTR_SET_VALUE(applicationVersion_, applicationVersion) };


        // cpuPercent Field Functions 
        bool hasCpuPercent() const { return this->cpuPercent_ != nullptr;};
        void deleteCpuPercent() { this->cpuPercent_ = nullptr;};
        inline double getCpuPercent() const { DARABONBA_PTR_GET_DEFAULT(cpuPercent_, 0.0) };
        inline ProcessData& setCpuPercent(double cpuPercent) { DARABONBA_PTR_SET_VALUE(cpuPercent_, cpuPercent) };


        // gpuPercent Field Functions 
        bool hasGpuPercent() const { return this->gpuPercent_ != nullptr;};
        void deleteGpuPercent() { this->gpuPercent_ = nullptr;};
        inline double getGpuPercent() const { DARABONBA_PTR_GET_DEFAULT(gpuPercent_, 0.0) };
        inline ProcessData& setGpuPercent(double gpuPercent) { DARABONBA_PTR_SET_VALUE(gpuPercent_, gpuPercent) };


        // iospeed Field Functions 
        bool hasIospeed() const { return this->iospeed_ != nullptr;};
        void deleteIospeed() { this->iospeed_ = nullptr;};
        inline double getIospeed() const { DARABONBA_PTR_GET_DEFAULT(iospeed_, 0.0) };
        inline ProcessData& setIospeed(double iospeed) { DARABONBA_PTR_SET_VALUE(iospeed_, iospeed) };


        // memPercent Field Functions 
        bool hasMemPercent() const { return this->memPercent_ != nullptr;};
        void deleteMemPercent() { this->memPercent_ = nullptr;};
        inline double getMemPercent() const { DARABONBA_PTR_GET_DEFAULT(memPercent_, 0.0) };
        inline ProcessData& setMemPercent(double memPercent) { DARABONBA_PTR_SET_VALUE(memPercent_, memPercent) };


        // pid Field Functions 
        bool hasPid() const { return this->pid_ != nullptr;};
        void deletePid() { this->pid_ = nullptr;};
        inline int32_t getPid() const { DARABONBA_PTR_GET_DEFAULT(pid_, 0) };
        inline ProcessData& setPid(int32_t pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


        // processPath Field Functions 
        bool hasProcessPath() const { return this->processPath_ != nullptr;};
        void deleteProcessPath() { this->processPath_ = nullptr;};
        inline string getProcessPath() const { DARABONBA_PTR_GET_DEFAULT(processPath_, "") };
        inline ProcessData& setProcessPath(string processPath) { DARABONBA_PTR_SET_VALUE(processPath_, processPath) };


      protected:
        // The application name.
        shared_ptr<string> applicationName_ {};
        // The application version.
        shared_ptr<string> applicationVersion_ {};
        // The CPU utilization (%).
        shared_ptr<double> cpuPercent_ {};
        // The GPU usage (%).
        shared_ptr<double> gpuPercent_ {};
        // The I/O read and write performance. Unit: byte/s.
        shared_ptr<double> iospeed_ {};
        // The memory usage (%).
        shared_ptr<double> memPercent_ {};
        // The PID.
        shared_ptr<int32_t> pid_ {};
        // The path to the process.
        shared_ptr<string> processPath_ {};
      };

      virtual bool empty() const override { return this->applicationName_ == nullptr
        && this->applicationVersion_ == nullptr && this->cpuPercent_ == nullptr && this->gpuPercent_ == nullptr && this->iconUrl_ == nullptr && this->ioSpeed_ == nullptr
        && this->memPercent_ == nullptr && this->pid_ == nullptr && this->processData_ == nullptr && this->processPath_ == nullptr && this->status_ == nullptr; };
      // applicationName Field Functions 
      bool hasApplicationName() const { return this->applicationName_ != nullptr;};
      void deleteApplicationName() { this->applicationName_ = nullptr;};
      inline string getApplicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
      inline Applications& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


      // applicationVersion Field Functions 
      bool hasApplicationVersion() const { return this->applicationVersion_ != nullptr;};
      void deleteApplicationVersion() { this->applicationVersion_ = nullptr;};
      inline string getApplicationVersion() const { DARABONBA_PTR_GET_DEFAULT(applicationVersion_, "") };
      inline Applications& setApplicationVersion(string applicationVersion) { DARABONBA_PTR_SET_VALUE(applicationVersion_, applicationVersion) };


      // cpuPercent Field Functions 
      bool hasCpuPercent() const { return this->cpuPercent_ != nullptr;};
      void deleteCpuPercent() { this->cpuPercent_ = nullptr;};
      inline double getCpuPercent() const { DARABONBA_PTR_GET_DEFAULT(cpuPercent_, 0.0) };
      inline Applications& setCpuPercent(double cpuPercent) { DARABONBA_PTR_SET_VALUE(cpuPercent_, cpuPercent) };


      // gpuPercent Field Functions 
      bool hasGpuPercent() const { return this->gpuPercent_ != nullptr;};
      void deleteGpuPercent() { this->gpuPercent_ = nullptr;};
      inline double getGpuPercent() const { DARABONBA_PTR_GET_DEFAULT(gpuPercent_, 0.0) };
      inline Applications& setGpuPercent(double gpuPercent) { DARABONBA_PTR_SET_VALUE(gpuPercent_, gpuPercent) };


      // iconUrl Field Functions 
      bool hasIconUrl() const { return this->iconUrl_ != nullptr;};
      void deleteIconUrl() { this->iconUrl_ = nullptr;};
      inline string getIconUrl() const { DARABONBA_PTR_GET_DEFAULT(iconUrl_, "") };
      inline Applications& setIconUrl(string iconUrl) { DARABONBA_PTR_SET_VALUE(iconUrl_, iconUrl) };


      // ioSpeed Field Functions 
      bool hasIoSpeed() const { return this->ioSpeed_ != nullptr;};
      void deleteIoSpeed() { this->ioSpeed_ = nullptr;};
      inline double getIoSpeed() const { DARABONBA_PTR_GET_DEFAULT(ioSpeed_, 0.0) };
      inline Applications& setIoSpeed(double ioSpeed) { DARABONBA_PTR_SET_VALUE(ioSpeed_, ioSpeed) };


      // memPercent Field Functions 
      bool hasMemPercent() const { return this->memPercent_ != nullptr;};
      void deleteMemPercent() { this->memPercent_ = nullptr;};
      inline double getMemPercent() const { DARABONBA_PTR_GET_DEFAULT(memPercent_, 0.0) };
      inline Applications& setMemPercent(double memPercent) { DARABONBA_PTR_SET_VALUE(memPercent_, memPercent) };


      // pid Field Functions 
      bool hasPid() const { return this->pid_ != nullptr;};
      void deletePid() { this->pid_ = nullptr;};
      inline int32_t getPid() const { DARABONBA_PTR_GET_DEFAULT(pid_, 0) };
      inline Applications& setPid(int32_t pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


      // processData Field Functions 
      bool hasProcessData() const { return this->processData_ != nullptr;};
      void deleteProcessData() { this->processData_ = nullptr;};
      inline const vector<Applications::ProcessData> & getProcessData() const { DARABONBA_PTR_GET_CONST(processData_, vector<Applications::ProcessData>) };
      inline vector<Applications::ProcessData> getProcessData() { DARABONBA_PTR_GET(processData_, vector<Applications::ProcessData>) };
      inline Applications& setProcessData(const vector<Applications::ProcessData> & processData) { DARABONBA_PTR_SET_VALUE(processData_, processData) };
      inline Applications& setProcessData(vector<Applications::ProcessData> && processData) { DARABONBA_PTR_SET_RVALUE(processData_, processData) };


      // processPath Field Functions 
      bool hasProcessPath() const { return this->processPath_ != nullptr;};
      void deleteProcessPath() { this->processPath_ = nullptr;};
      inline string getProcessPath() const { DARABONBA_PTR_GET_DEFAULT(processPath_, "") };
      inline Applications& setProcessPath(string processPath) { DARABONBA_PTR_SET_VALUE(processPath_, processPath) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Applications& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The application name.
      shared_ptr<string> applicationName_ {};
      // The application version.
      shared_ptr<string> applicationVersion_ {};
      // The CPU utilization (%).
      shared_ptr<double> cpuPercent_ {};
      // The GPU utilization (%).
      shared_ptr<double> gpuPercent_ {};
      // The icon URL of the application.
      shared_ptr<string> iconUrl_ {};
      // The I/O read and write performance. Unit: byte/s.
      shared_ptr<double> ioSpeed_ {};
      // The memory utilization (%).
      shared_ptr<double> memPercent_ {};
      // The process ID (PID).
      shared_ptr<int32_t> pid_ {};
      // The processes.
      shared_ptr<vector<Applications::ProcessData>> processData_ {};
      // The path to the process.
      shared_ptr<string> processPath_ {};
      // The status of the application.
      // 
      // Valid value:
      // 
      // *   Idle: The application is installed in the cloud computer but is not running.
      // *   Running: The application has been installed in the cloud computer and is running.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->applications_ == nullptr
        && this->requestId_ == nullptr; };
    // applications Field Functions 
    bool hasApplications() const { return this->applications_ != nullptr;};
    void deleteApplications() { this->applications_ = nullptr;};
    inline const vector<DescribeGuestApplicationsResponseBody::Applications> & getApplications() const { DARABONBA_PTR_GET_CONST(applications_, vector<DescribeGuestApplicationsResponseBody::Applications>) };
    inline vector<DescribeGuestApplicationsResponseBody::Applications> getApplications() { DARABONBA_PTR_GET(applications_, vector<DescribeGuestApplicationsResponseBody::Applications>) };
    inline DescribeGuestApplicationsResponseBody& setApplications(const vector<DescribeGuestApplicationsResponseBody::Applications> & applications) { DARABONBA_PTR_SET_VALUE(applications_, applications) };
    inline DescribeGuestApplicationsResponseBody& setApplications(vector<DescribeGuestApplicationsResponseBody::Applications> && applications) { DARABONBA_PTR_SET_RVALUE(applications_, applications) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeGuestApplicationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The applications.
    shared_ptr<vector<DescribeGuestApplicationsResponseBody::Applications>> applications_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
