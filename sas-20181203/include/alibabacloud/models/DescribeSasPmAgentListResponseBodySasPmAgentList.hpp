// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESASPMAGENTLISTRESPONSEBODYSASPMAGENTLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESASPMAGENTLISTRESPONSEBODYSASPMAGENTLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeSasPmAgentListResponseBodySasPmAgentList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSasPmAgentListResponseBodySasPmAgentList& obj) { 
      DARABONBA_PTR_TO_JSON(AliyunAssistId, aliyunAssistId_);
      DARABONBA_PTR_TO_JSON(AliyunMonitorId, aliyunMonitorId_);
      DARABONBA_PTR_TO_JSON(AssistInstallResult, assistInstallResult_);
      DARABONBA_PTR_TO_JSON(AssistInstallStatus, assistInstallStatus_);
      DARABONBA_PTR_TO_JSON(MonitorInstallResult, monitorInstallResult_);
      DARABONBA_PTR_TO_JSON(MonitorInstallStatus, monitorInstallStatus_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSasPmAgentListResponseBodySasPmAgentList& obj) { 
      DARABONBA_PTR_FROM_JSON(AliyunAssistId, aliyunAssistId_);
      DARABONBA_PTR_FROM_JSON(AliyunMonitorId, aliyunMonitorId_);
      DARABONBA_PTR_FROM_JSON(AssistInstallResult, assistInstallResult_);
      DARABONBA_PTR_FROM_JSON(AssistInstallStatus, assistInstallStatus_);
      DARABONBA_PTR_FROM_JSON(MonitorInstallResult, monitorInstallResult_);
      DARABONBA_PTR_FROM_JSON(MonitorInstallStatus, monitorInstallStatus_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    DescribeSasPmAgentListResponseBodySasPmAgentList() = default ;
    DescribeSasPmAgentListResponseBodySasPmAgentList(const DescribeSasPmAgentListResponseBodySasPmAgentList &) = default ;
    DescribeSasPmAgentListResponseBodySasPmAgentList(DescribeSasPmAgentListResponseBodySasPmAgentList &&) = default ;
    DescribeSasPmAgentListResponseBodySasPmAgentList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSasPmAgentListResponseBodySasPmAgentList() = default ;
    DescribeSasPmAgentListResponseBodySasPmAgentList& operator=(const DescribeSasPmAgentListResponseBodySasPmAgentList &) = default ;
    DescribeSasPmAgentListResponseBodySasPmAgentList& operator=(DescribeSasPmAgentListResponseBodySasPmAgentList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aliyunAssistId_ != nullptr
        && this->aliyunMonitorId_ != nullptr && this->assistInstallResult_ != nullptr && this->assistInstallStatus_ != nullptr && this->monitorInstallResult_ != nullptr && this->monitorInstallStatus_ != nullptr
        && this->uuid_ != nullptr; };
    // aliyunAssistId Field Functions 
    bool hasAliyunAssistId() const { return this->aliyunAssistId_ != nullptr;};
    void deleteAliyunAssistId() { this->aliyunAssistId_ = nullptr;};
    inline string aliyunAssistId() const { DARABONBA_PTR_GET_DEFAULT(aliyunAssistId_, "") };
    inline DescribeSasPmAgentListResponseBodySasPmAgentList& setAliyunAssistId(string aliyunAssistId) { DARABONBA_PTR_SET_VALUE(aliyunAssistId_, aliyunAssistId) };


    // aliyunMonitorId Field Functions 
    bool hasAliyunMonitorId() const { return this->aliyunMonitorId_ != nullptr;};
    void deleteAliyunMonitorId() { this->aliyunMonitorId_ = nullptr;};
    inline string aliyunMonitorId() const { DARABONBA_PTR_GET_DEFAULT(aliyunMonitorId_, "") };
    inline DescribeSasPmAgentListResponseBodySasPmAgentList& setAliyunMonitorId(string aliyunMonitorId) { DARABONBA_PTR_SET_VALUE(aliyunMonitorId_, aliyunMonitorId) };


    // assistInstallResult Field Functions 
    bool hasAssistInstallResult() const { return this->assistInstallResult_ != nullptr;};
    void deleteAssistInstallResult() { this->assistInstallResult_ = nullptr;};
    inline int32_t assistInstallResult() const { DARABONBA_PTR_GET_DEFAULT(assistInstallResult_, 0) };
    inline DescribeSasPmAgentListResponseBodySasPmAgentList& setAssistInstallResult(int32_t assistInstallResult) { DARABONBA_PTR_SET_VALUE(assistInstallResult_, assistInstallResult) };


    // assistInstallStatus Field Functions 
    bool hasAssistInstallStatus() const { return this->assistInstallStatus_ != nullptr;};
    void deleteAssistInstallStatus() { this->assistInstallStatus_ = nullptr;};
    inline int32_t assistInstallStatus() const { DARABONBA_PTR_GET_DEFAULT(assistInstallStatus_, 0) };
    inline DescribeSasPmAgentListResponseBodySasPmAgentList& setAssistInstallStatus(int32_t assistInstallStatus) { DARABONBA_PTR_SET_VALUE(assistInstallStatus_, assistInstallStatus) };


    // monitorInstallResult Field Functions 
    bool hasMonitorInstallResult() const { return this->monitorInstallResult_ != nullptr;};
    void deleteMonitorInstallResult() { this->monitorInstallResult_ = nullptr;};
    inline int32_t monitorInstallResult() const { DARABONBA_PTR_GET_DEFAULT(monitorInstallResult_, 0) };
    inline DescribeSasPmAgentListResponseBodySasPmAgentList& setMonitorInstallResult(int32_t monitorInstallResult) { DARABONBA_PTR_SET_VALUE(monitorInstallResult_, monitorInstallResult) };


    // monitorInstallStatus Field Functions 
    bool hasMonitorInstallStatus() const { return this->monitorInstallStatus_ != nullptr;};
    void deleteMonitorInstallStatus() { this->monitorInstallStatus_ = nullptr;};
    inline int32_t monitorInstallStatus() const { DARABONBA_PTR_GET_DEFAULT(monitorInstallStatus_, 0) };
    inline DescribeSasPmAgentListResponseBodySasPmAgentList& setMonitorInstallStatus(int32_t monitorInstallStatus) { DARABONBA_PTR_SET_VALUE(monitorInstallStatus_, monitorInstallStatus) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline DescribeSasPmAgentListResponseBodySasPmAgentList& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The ID of Cloud Assistant.
    std::shared_ptr<string> aliyunAssistId_ = nullptr;
    // The ID of the CloudMonitor agent.
    std::shared_ptr<string> aliyunMonitorId_ = nullptr;
    // The installation result of Cloud Assistant. Valid values:
    // 
    // *   **0**: SUCCESS
    // *   **1**: MISSING_PARAM
    // *   **2**: UNKNOWN_SYSTEM
    // *   **3**: DOWNLOAD_FAILED
    // *   **4**: INSTALL_FAILED
    std::shared_ptr<int32_t> assistInstallResult_ = nullptr;
    // The status of Cloud Assistant. Valid values:
    // 
    // *   **0**: installing
    // *   **1**: installed
    // *   **2**: installation failed
    // *   **3**: installation timed out
    std::shared_ptr<int32_t> assistInstallStatus_ = nullptr;
    // The installation result of the CloudMonitor agent. Valid values:
    // 
    // *   **0**: failed
    // *   **1**: successful
    std::shared_ptr<int32_t> monitorInstallResult_ = nullptr;
    // The status of the CloudMonitor agent. Valid values:
    // 
    // *   **0**: installation failed
    // *   **1**: installed
    std::shared_ptr<int32_t> monitorInstallStatus_ = nullptr;
    // The UUID of the server.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
