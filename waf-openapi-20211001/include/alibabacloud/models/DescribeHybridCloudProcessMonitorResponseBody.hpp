// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHYBRIDCLOUDPROCESSMONITORRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHYBRIDCLOUDPROCESSMONITORRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeHybridCloudProcessMonitorResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHybridCloudProcessMonitorResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ProcessMonitors, processMonitors_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHybridCloudProcessMonitorResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ProcessMonitors, processMonitors_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeHybridCloudProcessMonitorResponseBody() = default ;
    DescribeHybridCloudProcessMonitorResponseBody(const DescribeHybridCloudProcessMonitorResponseBody &) = default ;
    DescribeHybridCloudProcessMonitorResponseBody(DescribeHybridCloudProcessMonitorResponseBody &&) = default ;
    DescribeHybridCloudProcessMonitorResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHybridCloudProcessMonitorResponseBody() = default ;
    DescribeHybridCloudProcessMonitorResponseBody& operator=(const DescribeHybridCloudProcessMonitorResponseBody &) = default ;
    DescribeHybridCloudProcessMonitorResponseBody& operator=(DescribeHybridCloudProcessMonitorResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ProcessMonitors : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ProcessMonitors& obj) { 
        DARABONBA_PTR_TO_JSON(Levle, levle_);
        DARABONBA_PTR_TO_JSON(ProcessName, processName_);
        DARABONBA_PTR_TO_JSON(ProcessStatus, processStatus_);
      };
      friend void from_json(const Darabonba::Json& j, ProcessMonitors& obj) { 
        DARABONBA_PTR_FROM_JSON(Levle, levle_);
        DARABONBA_PTR_FROM_JSON(ProcessName, processName_);
        DARABONBA_PTR_FROM_JSON(ProcessStatus, processStatus_);
      };
      ProcessMonitors() = default ;
      ProcessMonitors(const ProcessMonitors &) = default ;
      ProcessMonitors(ProcessMonitors &&) = default ;
      ProcessMonitors(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ProcessMonitors() = default ;
      ProcessMonitors& operator=(const ProcessMonitors &) = default ;
      ProcessMonitors& operator=(ProcessMonitors &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->levle_ == nullptr
        && this->processName_ == nullptr && this->processStatus_ == nullptr; };
      // levle Field Functions 
      bool hasLevle() const { return this->levle_ != nullptr;};
      void deleteLevle() { this->levle_ = nullptr;};
      inline string getLevle() const { DARABONBA_PTR_GET_DEFAULT(levle_, "") };
      inline ProcessMonitors& setLevle(string levle) { DARABONBA_PTR_SET_VALUE(levle_, levle) };


      // processName Field Functions 
      bool hasProcessName() const { return this->processName_ != nullptr;};
      void deleteProcessName() { this->processName_ = nullptr;};
      inline string getProcessName() const { DARABONBA_PTR_GET_DEFAULT(processName_, "") };
      inline ProcessMonitors& setProcessName(string processName) { DARABONBA_PTR_SET_VALUE(processName_, processName) };


      // processStatus Field Functions 
      bool hasProcessStatus() const { return this->processStatus_ != nullptr;};
      void deleteProcessStatus() { this->processStatus_ = nullptr;};
      inline int64_t getProcessStatus() const { DARABONBA_PTR_GET_DEFAULT(processStatus_, 0L) };
      inline ProcessMonitors& setProcessStatus(int64_t processStatus) { DARABONBA_PTR_SET_VALUE(processStatus_, processStatus) };


    protected:
      shared_ptr<string> levle_ {};
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
      shared_ptr<string> processName_ {};
      // The status of the application. Valid values:
      // 
      // *   **0**: abnormal.
      // *   **1**: normal.
      shared_ptr<int64_t> processStatus_ {};
    };

    virtual bool empty() const override { return this->processMonitors_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // processMonitors Field Functions 
    bool hasProcessMonitors() const { return this->processMonitors_ != nullptr;};
    void deleteProcessMonitors() { this->processMonitors_ = nullptr;};
    inline const vector<DescribeHybridCloudProcessMonitorResponseBody::ProcessMonitors> & getProcessMonitors() const { DARABONBA_PTR_GET_CONST(processMonitors_, vector<DescribeHybridCloudProcessMonitorResponseBody::ProcessMonitors>) };
    inline vector<DescribeHybridCloudProcessMonitorResponseBody::ProcessMonitors> getProcessMonitors() { DARABONBA_PTR_GET(processMonitors_, vector<DescribeHybridCloudProcessMonitorResponseBody::ProcessMonitors>) };
    inline DescribeHybridCloudProcessMonitorResponseBody& setProcessMonitors(const vector<DescribeHybridCloudProcessMonitorResponseBody::ProcessMonitors> & processMonitors) { DARABONBA_PTR_SET_VALUE(processMonitors_, processMonitors) };
    inline DescribeHybridCloudProcessMonitorResponseBody& setProcessMonitors(vector<DescribeHybridCloudProcessMonitorResponseBody::ProcessMonitors> && processMonitors) { DARABONBA_PTR_SET_RVALUE(processMonitors_, processMonitors) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeHybridCloudProcessMonitorResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeHybridCloudProcessMonitorResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The status of the applications.
    shared_ptr<vector<DescribeHybridCloudProcessMonitorResponseBody::ProcessMonitors>> processMonitors_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
