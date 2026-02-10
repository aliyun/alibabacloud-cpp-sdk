// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESASPMAGENTLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESASPMAGENTLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeSasPmAgentListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSasPmAgentListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SasPmAgentList, sasPmAgentList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSasPmAgentListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SasPmAgentList, sasPmAgentList_);
    };
    DescribeSasPmAgentListResponseBody() = default ;
    DescribeSasPmAgentListResponseBody(const DescribeSasPmAgentListResponseBody &) = default ;
    DescribeSasPmAgentListResponseBody(DescribeSasPmAgentListResponseBody &&) = default ;
    DescribeSasPmAgentListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSasPmAgentListResponseBody() = default ;
    DescribeSasPmAgentListResponseBody& operator=(const DescribeSasPmAgentListResponseBody &) = default ;
    DescribeSasPmAgentListResponseBody& operator=(DescribeSasPmAgentListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SasPmAgentList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SasPmAgentList& obj) { 
        DARABONBA_PTR_TO_JSON(AliyunAssistId, aliyunAssistId_);
        DARABONBA_PTR_TO_JSON(AliyunMonitorId, aliyunMonitorId_);
        DARABONBA_PTR_TO_JSON(AssistInstallResult, assistInstallResult_);
        DARABONBA_PTR_TO_JSON(AssistInstallStatus, assistInstallStatus_);
        DARABONBA_PTR_TO_JSON(MonitorInstallResult, monitorInstallResult_);
        DARABONBA_PTR_TO_JSON(MonitorInstallStatus, monitorInstallStatus_);
        DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      };
      friend void from_json(const Darabonba::Json& j, SasPmAgentList& obj) { 
        DARABONBA_PTR_FROM_JSON(AliyunAssistId, aliyunAssistId_);
        DARABONBA_PTR_FROM_JSON(AliyunMonitorId, aliyunMonitorId_);
        DARABONBA_PTR_FROM_JSON(AssistInstallResult, assistInstallResult_);
        DARABONBA_PTR_FROM_JSON(AssistInstallStatus, assistInstallStatus_);
        DARABONBA_PTR_FROM_JSON(MonitorInstallResult, monitorInstallResult_);
        DARABONBA_PTR_FROM_JSON(MonitorInstallStatus, monitorInstallStatus_);
        DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
      };
      SasPmAgentList() = default ;
      SasPmAgentList(const SasPmAgentList &) = default ;
      SasPmAgentList(SasPmAgentList &&) = default ;
      SasPmAgentList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SasPmAgentList() = default ;
      SasPmAgentList& operator=(const SasPmAgentList &) = default ;
      SasPmAgentList& operator=(SasPmAgentList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->aliyunAssistId_ == nullptr
        && this->aliyunMonitorId_ == nullptr && this->assistInstallResult_ == nullptr && this->assistInstallStatus_ == nullptr && this->monitorInstallResult_ == nullptr && this->monitorInstallStatus_ == nullptr
        && this->uuid_ == nullptr; };
      // aliyunAssistId Field Functions 
      bool hasAliyunAssistId() const { return this->aliyunAssistId_ != nullptr;};
      void deleteAliyunAssistId() { this->aliyunAssistId_ = nullptr;};
      inline string getAliyunAssistId() const { DARABONBA_PTR_GET_DEFAULT(aliyunAssistId_, "") };
      inline SasPmAgentList& setAliyunAssistId(string aliyunAssistId) { DARABONBA_PTR_SET_VALUE(aliyunAssistId_, aliyunAssistId) };


      // aliyunMonitorId Field Functions 
      bool hasAliyunMonitorId() const { return this->aliyunMonitorId_ != nullptr;};
      void deleteAliyunMonitorId() { this->aliyunMonitorId_ = nullptr;};
      inline string getAliyunMonitorId() const { DARABONBA_PTR_GET_DEFAULT(aliyunMonitorId_, "") };
      inline SasPmAgentList& setAliyunMonitorId(string aliyunMonitorId) { DARABONBA_PTR_SET_VALUE(aliyunMonitorId_, aliyunMonitorId) };


      // assistInstallResult Field Functions 
      bool hasAssistInstallResult() const { return this->assistInstallResult_ != nullptr;};
      void deleteAssistInstallResult() { this->assistInstallResult_ = nullptr;};
      inline int32_t getAssistInstallResult() const { DARABONBA_PTR_GET_DEFAULT(assistInstallResult_, 0) };
      inline SasPmAgentList& setAssistInstallResult(int32_t assistInstallResult) { DARABONBA_PTR_SET_VALUE(assistInstallResult_, assistInstallResult) };


      // assistInstallStatus Field Functions 
      bool hasAssistInstallStatus() const { return this->assistInstallStatus_ != nullptr;};
      void deleteAssistInstallStatus() { this->assistInstallStatus_ = nullptr;};
      inline int32_t getAssistInstallStatus() const { DARABONBA_PTR_GET_DEFAULT(assistInstallStatus_, 0) };
      inline SasPmAgentList& setAssistInstallStatus(int32_t assistInstallStatus) { DARABONBA_PTR_SET_VALUE(assistInstallStatus_, assistInstallStatus) };


      // monitorInstallResult Field Functions 
      bool hasMonitorInstallResult() const { return this->monitorInstallResult_ != nullptr;};
      void deleteMonitorInstallResult() { this->monitorInstallResult_ = nullptr;};
      inline int32_t getMonitorInstallResult() const { DARABONBA_PTR_GET_DEFAULT(monitorInstallResult_, 0) };
      inline SasPmAgentList& setMonitorInstallResult(int32_t monitorInstallResult) { DARABONBA_PTR_SET_VALUE(monitorInstallResult_, monitorInstallResult) };


      // monitorInstallStatus Field Functions 
      bool hasMonitorInstallStatus() const { return this->monitorInstallStatus_ != nullptr;};
      void deleteMonitorInstallStatus() { this->monitorInstallStatus_ = nullptr;};
      inline int32_t getMonitorInstallStatus() const { DARABONBA_PTR_GET_DEFAULT(monitorInstallStatus_, 0) };
      inline SasPmAgentList& setMonitorInstallStatus(int32_t monitorInstallStatus) { DARABONBA_PTR_SET_VALUE(monitorInstallStatus_, monitorInstallStatus) };


      // uuid Field Functions 
      bool hasUuid() const { return this->uuid_ != nullptr;};
      void deleteUuid() { this->uuid_ = nullptr;};
      inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
      inline SasPmAgentList& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    protected:
      // The ID of Cloud Assistant.
      shared_ptr<string> aliyunAssistId_ {};
      // The ID of the CloudMonitor agent.
      shared_ptr<string> aliyunMonitorId_ {};
      // The installation result of Cloud Assistant. Valid values:
      // 
      // *   **0**: SUCCESS
      // *   **1**: MISSING_PARAM
      // *   **2**: UNKNOWN_SYSTEM
      // *   **3**: DOWNLOAD_FAILED
      // *   **4**: INSTALL_FAILED
      shared_ptr<int32_t> assistInstallResult_ {};
      // The status of Cloud Assistant. Valid values:
      // 
      // *   **0**: installing
      // *   **1**: installed
      // *   **2**: installation failed
      // *   **3**: installation timed out
      shared_ptr<int32_t> assistInstallStatus_ {};
      // The installation result of the CloudMonitor agent. Valid values:
      // 
      // *   **0**: failed
      // *   **1**: successful
      shared_ptr<int32_t> monitorInstallResult_ {};
      // The status of the CloudMonitor agent. Valid values:
      // 
      // *   **0**: installation failed
      // *   **1**: installed
      shared_ptr<int32_t> monitorInstallStatus_ {};
      // The UUID of the server.
      shared_ptr<string> uuid_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->sasPmAgentList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSasPmAgentListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sasPmAgentList Field Functions 
    bool hasSasPmAgentList() const { return this->sasPmAgentList_ != nullptr;};
    void deleteSasPmAgentList() { this->sasPmAgentList_ = nullptr;};
    inline const vector<DescribeSasPmAgentListResponseBody::SasPmAgentList> & getSasPmAgentList() const { DARABONBA_PTR_GET_CONST(sasPmAgentList_, vector<DescribeSasPmAgentListResponseBody::SasPmAgentList>) };
    inline vector<DescribeSasPmAgentListResponseBody::SasPmAgentList> getSasPmAgentList() { DARABONBA_PTR_GET(sasPmAgentList_, vector<DescribeSasPmAgentListResponseBody::SasPmAgentList>) };
    inline DescribeSasPmAgentListResponseBody& setSasPmAgentList(const vector<DescribeSasPmAgentListResponseBody::SasPmAgentList> & sasPmAgentList) { DARABONBA_PTR_SET_VALUE(sasPmAgentList_, sasPmAgentList) };
    inline DescribeSasPmAgentListResponseBody& setSasPmAgentList(vector<DescribeSasPmAgentListResponseBody::SasPmAgentList> && sasPmAgentList) { DARABONBA_PTR_SET_RVALUE(sasPmAgentList_, sasPmAgentList) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // An array that consists of the information about servers.
    shared_ptr<vector<DescribeSasPmAgentListResponseBody::SasPmAgentList>> sasPmAgentList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
