// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DIAGNOSEVPNCONNECTIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DIAGNOSEVPNCONNECTIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DiagnoseVpnConnectionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DiagnoseVpnConnectionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(VpnConnections, vpnConnections_);
    };
    friend void from_json(const Darabonba::Json& j, DiagnoseVpnConnectionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(VpnConnections, vpnConnections_);
    };
    DiagnoseVpnConnectionsResponseBody() = default ;
    DiagnoseVpnConnectionsResponseBody(const DiagnoseVpnConnectionsResponseBody &) = default ;
    DiagnoseVpnConnectionsResponseBody(DiagnoseVpnConnectionsResponseBody &&) = default ;
    DiagnoseVpnConnectionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DiagnoseVpnConnectionsResponseBody() = default ;
    DiagnoseVpnConnectionsResponseBody& operator=(const DiagnoseVpnConnectionsResponseBody &) = default ;
    DiagnoseVpnConnectionsResponseBody& operator=(DiagnoseVpnConnectionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VpnConnections : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VpnConnections& obj) { 
        DARABONBA_PTR_TO_JSON(FailedReason, failedReason_);
        DARABONBA_PTR_TO_JSON(FailedReasonCode, failedReasonCode_);
        DARABONBA_PTR_TO_JSON(FailedTime, failedTime_);
        DARABONBA_PTR_TO_JSON(MismatchLocalParam, mismatchLocalParam_);
        DARABONBA_PTR_TO_JSON(MismatchRemoteParam, mismatchRemoteParam_);
        DARABONBA_PTR_TO_JSON(Severity, severity_);
        DARABONBA_PTR_TO_JSON(SourceLog, sourceLog_);
        DARABONBA_PTR_TO_JSON(TunnelId, tunnelId_);
        DARABONBA_PTR_TO_JSON(VpnConnectionId, vpnConnectionId_);
      };
      friend void from_json(const Darabonba::Json& j, VpnConnections& obj) { 
        DARABONBA_PTR_FROM_JSON(FailedReason, failedReason_);
        DARABONBA_PTR_FROM_JSON(FailedReasonCode, failedReasonCode_);
        DARABONBA_PTR_FROM_JSON(FailedTime, failedTime_);
        DARABONBA_PTR_FROM_JSON(MismatchLocalParam, mismatchLocalParam_);
        DARABONBA_PTR_FROM_JSON(MismatchRemoteParam, mismatchRemoteParam_);
        DARABONBA_PTR_FROM_JSON(Severity, severity_);
        DARABONBA_PTR_FROM_JSON(SourceLog, sourceLog_);
        DARABONBA_PTR_FROM_JSON(TunnelId, tunnelId_);
        DARABONBA_PTR_FROM_JSON(VpnConnectionId, vpnConnectionId_);
      };
      VpnConnections() = default ;
      VpnConnections(const VpnConnections &) = default ;
      VpnConnections(VpnConnections &&) = default ;
      VpnConnections(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VpnConnections() = default ;
      VpnConnections& operator=(const VpnConnections &) = default ;
      VpnConnections& operator=(VpnConnections &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->failedReason_ == nullptr
        && this->failedReasonCode_ == nullptr && this->failedTime_ == nullptr && this->mismatchLocalParam_ == nullptr && this->mismatchRemoteParam_ == nullptr && this->severity_ == nullptr
        && this->sourceLog_ == nullptr && this->tunnelId_ == nullptr && this->vpnConnectionId_ == nullptr; };
      // failedReason Field Functions 
      bool hasFailedReason() const { return this->failedReason_ != nullptr;};
      void deleteFailedReason() { this->failedReason_ = nullptr;};
      inline string getFailedReason() const { DARABONBA_PTR_GET_DEFAULT(failedReason_, "") };
      inline VpnConnections& setFailedReason(string failedReason) { DARABONBA_PTR_SET_VALUE(failedReason_, failedReason) };


      // failedReasonCode Field Functions 
      bool hasFailedReasonCode() const { return this->failedReasonCode_ != nullptr;};
      void deleteFailedReasonCode() { this->failedReasonCode_ = nullptr;};
      inline string getFailedReasonCode() const { DARABONBA_PTR_GET_DEFAULT(failedReasonCode_, "") };
      inline VpnConnections& setFailedReasonCode(string failedReasonCode) { DARABONBA_PTR_SET_VALUE(failedReasonCode_, failedReasonCode) };


      // failedTime Field Functions 
      bool hasFailedTime() const { return this->failedTime_ != nullptr;};
      void deleteFailedTime() { this->failedTime_ = nullptr;};
      inline int64_t getFailedTime() const { DARABONBA_PTR_GET_DEFAULT(failedTime_, 0L) };
      inline VpnConnections& setFailedTime(int64_t failedTime) { DARABONBA_PTR_SET_VALUE(failedTime_, failedTime) };


      // mismatchLocalParam Field Functions 
      bool hasMismatchLocalParam() const { return this->mismatchLocalParam_ != nullptr;};
      void deleteMismatchLocalParam() { this->mismatchLocalParam_ = nullptr;};
      inline string getMismatchLocalParam() const { DARABONBA_PTR_GET_DEFAULT(mismatchLocalParam_, "") };
      inline VpnConnections& setMismatchLocalParam(string mismatchLocalParam) { DARABONBA_PTR_SET_VALUE(mismatchLocalParam_, mismatchLocalParam) };


      // mismatchRemoteParam Field Functions 
      bool hasMismatchRemoteParam() const { return this->mismatchRemoteParam_ != nullptr;};
      void deleteMismatchRemoteParam() { this->mismatchRemoteParam_ = nullptr;};
      inline string getMismatchRemoteParam() const { DARABONBA_PTR_GET_DEFAULT(mismatchRemoteParam_, "") };
      inline VpnConnections& setMismatchRemoteParam(string mismatchRemoteParam) { DARABONBA_PTR_SET_VALUE(mismatchRemoteParam_, mismatchRemoteParam) };


      // severity Field Functions 
      bool hasSeverity() const { return this->severity_ != nullptr;};
      void deleteSeverity() { this->severity_ = nullptr;};
      inline string getSeverity() const { DARABONBA_PTR_GET_DEFAULT(severity_, "") };
      inline VpnConnections& setSeverity(string severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


      // sourceLog Field Functions 
      bool hasSourceLog() const { return this->sourceLog_ != nullptr;};
      void deleteSourceLog() { this->sourceLog_ = nullptr;};
      inline string getSourceLog() const { DARABONBA_PTR_GET_DEFAULT(sourceLog_, "") };
      inline VpnConnections& setSourceLog(string sourceLog) { DARABONBA_PTR_SET_VALUE(sourceLog_, sourceLog) };


      // tunnelId Field Functions 
      bool hasTunnelId() const { return this->tunnelId_ != nullptr;};
      void deleteTunnelId() { this->tunnelId_ = nullptr;};
      inline string getTunnelId() const { DARABONBA_PTR_GET_DEFAULT(tunnelId_, "") };
      inline VpnConnections& setTunnelId(string tunnelId) { DARABONBA_PTR_SET_VALUE(tunnelId_, tunnelId) };


      // vpnConnectionId Field Functions 
      bool hasVpnConnectionId() const { return this->vpnConnectionId_ != nullptr;};
      void deleteVpnConnectionId() { this->vpnConnectionId_ = nullptr;};
      inline string getVpnConnectionId() const { DARABONBA_PTR_GET_DEFAULT(vpnConnectionId_, "") };
      inline VpnConnections& setVpnConnectionId(string vpnConnectionId) { DARABONBA_PTR_SET_VALUE(vpnConnectionId_, vpnConnectionId) };


    protected:
      // The cause of the error.
      shared_ptr<string> failedReason_ {};
      // The error code.
      shared_ptr<string> failedReasonCode_ {};
      // The timestamp when the current error occurred on the IPsec-VPN connection. Unit: millisecond.
      // 
      // This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
      shared_ptr<int64_t> failedTime_ {};
      // If the values of the parameters configured for the IPsec-VPN connection and the peer gateway device do not match, this parameter indicates the value of the parameters configured for the IPsec-VPN connection.
      shared_ptr<string> mismatchLocalParam_ {};
      // If the parameter values configured for the IPsec-VPN connection and the peer gateway device do not match, this parameter indicates the value of the parameter configured for the peer gateway device.
      shared_ptr<string> mismatchRemoteParam_ {};
      // The error level. Valid values:
      // 
      // *   **Critical**
      // *   **Warn**
      // *   **Normal**
      shared_ptr<string> severity_ {};
      // The log information about the error.
      shared_ptr<string> sourceLog_ {};
      // The tunnel ID.
      shared_ptr<string> tunnelId_ {};
      // The ID of the IPsec-VPN connection.
      shared_ptr<string> vpnConnectionId_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->vpnConnections_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DiagnoseVpnConnectionsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DiagnoseVpnConnectionsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DiagnoseVpnConnectionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DiagnoseVpnConnectionsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // vpnConnections Field Functions 
    bool hasVpnConnections() const { return this->vpnConnections_ != nullptr;};
    void deleteVpnConnections() { this->vpnConnections_ = nullptr;};
    inline const vector<DiagnoseVpnConnectionsResponseBody::VpnConnections> & getVpnConnections() const { DARABONBA_PTR_GET_CONST(vpnConnections_, vector<DiagnoseVpnConnectionsResponseBody::VpnConnections>) };
    inline vector<DiagnoseVpnConnectionsResponseBody::VpnConnections> getVpnConnections() { DARABONBA_PTR_GET(vpnConnections_, vector<DiagnoseVpnConnectionsResponseBody::VpnConnections>) };
    inline DiagnoseVpnConnectionsResponseBody& setVpnConnections(const vector<DiagnoseVpnConnectionsResponseBody::VpnConnections> & vpnConnections) { DARABONBA_PTR_SET_VALUE(vpnConnections_, vpnConnections) };
    inline DiagnoseVpnConnectionsResponseBody& setVpnConnections(vector<DiagnoseVpnConnectionsResponseBody::VpnConnections> && vpnConnections) { DARABONBA_PTR_SET_RVALUE(vpnConnections_, vpnConnections) };


  protected:
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
    // The diagnostic information.
    shared_ptr<vector<DiagnoseVpnConnectionsResponseBody::VpnConnections>> vpnConnections_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
