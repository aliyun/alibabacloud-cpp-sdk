// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DIAGNOSEVPNCONNECTIONSRESPONSEBODYVPNCONNECTIONS_HPP_
#define ALIBABACLOUD_MODELS_DIAGNOSEVPNCONNECTIONSRESPONSEBODYVPNCONNECTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DiagnoseVpnConnectionsResponseBodyVpnConnections : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DiagnoseVpnConnectionsResponseBodyVpnConnections& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DiagnoseVpnConnectionsResponseBodyVpnConnections& obj) { 
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
    DiagnoseVpnConnectionsResponseBodyVpnConnections() = default ;
    DiagnoseVpnConnectionsResponseBodyVpnConnections(const DiagnoseVpnConnectionsResponseBodyVpnConnections &) = default ;
    DiagnoseVpnConnectionsResponseBodyVpnConnections(DiagnoseVpnConnectionsResponseBodyVpnConnections &&) = default ;
    DiagnoseVpnConnectionsResponseBodyVpnConnections(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DiagnoseVpnConnectionsResponseBodyVpnConnections() = default ;
    DiagnoseVpnConnectionsResponseBodyVpnConnections& operator=(const DiagnoseVpnConnectionsResponseBodyVpnConnections &) = default ;
    DiagnoseVpnConnectionsResponseBodyVpnConnections& operator=(DiagnoseVpnConnectionsResponseBodyVpnConnections &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->failedReason_ != nullptr
        && this->failedReasonCode_ != nullptr && this->failedTime_ != nullptr && this->mismatchLocalParam_ != nullptr && this->mismatchRemoteParam_ != nullptr && this->severity_ != nullptr
        && this->sourceLog_ != nullptr && this->tunnelId_ != nullptr && this->vpnConnectionId_ != nullptr; };
    // failedReason Field Functions 
    bool hasFailedReason() const { return this->failedReason_ != nullptr;};
    void deleteFailedReason() { this->failedReason_ = nullptr;};
    inline string failedReason() const { DARABONBA_PTR_GET_DEFAULT(failedReason_, "") };
    inline DiagnoseVpnConnectionsResponseBodyVpnConnections& setFailedReason(string failedReason) { DARABONBA_PTR_SET_VALUE(failedReason_, failedReason) };


    // failedReasonCode Field Functions 
    bool hasFailedReasonCode() const { return this->failedReasonCode_ != nullptr;};
    void deleteFailedReasonCode() { this->failedReasonCode_ = nullptr;};
    inline string failedReasonCode() const { DARABONBA_PTR_GET_DEFAULT(failedReasonCode_, "") };
    inline DiagnoseVpnConnectionsResponseBodyVpnConnections& setFailedReasonCode(string failedReasonCode) { DARABONBA_PTR_SET_VALUE(failedReasonCode_, failedReasonCode) };


    // failedTime Field Functions 
    bool hasFailedTime() const { return this->failedTime_ != nullptr;};
    void deleteFailedTime() { this->failedTime_ = nullptr;};
    inline int64_t failedTime() const { DARABONBA_PTR_GET_DEFAULT(failedTime_, 0L) };
    inline DiagnoseVpnConnectionsResponseBodyVpnConnections& setFailedTime(int64_t failedTime) { DARABONBA_PTR_SET_VALUE(failedTime_, failedTime) };


    // mismatchLocalParam Field Functions 
    bool hasMismatchLocalParam() const { return this->mismatchLocalParam_ != nullptr;};
    void deleteMismatchLocalParam() { this->mismatchLocalParam_ = nullptr;};
    inline string mismatchLocalParam() const { DARABONBA_PTR_GET_DEFAULT(mismatchLocalParam_, "") };
    inline DiagnoseVpnConnectionsResponseBodyVpnConnections& setMismatchLocalParam(string mismatchLocalParam) { DARABONBA_PTR_SET_VALUE(mismatchLocalParam_, mismatchLocalParam) };


    // mismatchRemoteParam Field Functions 
    bool hasMismatchRemoteParam() const { return this->mismatchRemoteParam_ != nullptr;};
    void deleteMismatchRemoteParam() { this->mismatchRemoteParam_ = nullptr;};
    inline string mismatchRemoteParam() const { DARABONBA_PTR_GET_DEFAULT(mismatchRemoteParam_, "") };
    inline DiagnoseVpnConnectionsResponseBodyVpnConnections& setMismatchRemoteParam(string mismatchRemoteParam) { DARABONBA_PTR_SET_VALUE(mismatchRemoteParam_, mismatchRemoteParam) };


    // severity Field Functions 
    bool hasSeverity() const { return this->severity_ != nullptr;};
    void deleteSeverity() { this->severity_ = nullptr;};
    inline string severity() const { DARABONBA_PTR_GET_DEFAULT(severity_, "") };
    inline DiagnoseVpnConnectionsResponseBodyVpnConnections& setSeverity(string severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


    // sourceLog Field Functions 
    bool hasSourceLog() const { return this->sourceLog_ != nullptr;};
    void deleteSourceLog() { this->sourceLog_ = nullptr;};
    inline string sourceLog() const { DARABONBA_PTR_GET_DEFAULT(sourceLog_, "") };
    inline DiagnoseVpnConnectionsResponseBodyVpnConnections& setSourceLog(string sourceLog) { DARABONBA_PTR_SET_VALUE(sourceLog_, sourceLog) };


    // tunnelId Field Functions 
    bool hasTunnelId() const { return this->tunnelId_ != nullptr;};
    void deleteTunnelId() { this->tunnelId_ = nullptr;};
    inline string tunnelId() const { DARABONBA_PTR_GET_DEFAULT(tunnelId_, "") };
    inline DiagnoseVpnConnectionsResponseBodyVpnConnections& setTunnelId(string tunnelId) { DARABONBA_PTR_SET_VALUE(tunnelId_, tunnelId) };


    // vpnConnectionId Field Functions 
    bool hasVpnConnectionId() const { return this->vpnConnectionId_ != nullptr;};
    void deleteVpnConnectionId() { this->vpnConnectionId_ = nullptr;};
    inline string vpnConnectionId() const { DARABONBA_PTR_GET_DEFAULT(vpnConnectionId_, "") };
    inline DiagnoseVpnConnectionsResponseBodyVpnConnections& setVpnConnectionId(string vpnConnectionId) { DARABONBA_PTR_SET_VALUE(vpnConnectionId_, vpnConnectionId) };


  protected:
    // The cause of the error.
    std::shared_ptr<string> failedReason_ = nullptr;
    // The error code.
    std::shared_ptr<string> failedReasonCode_ = nullptr;
    // The timestamp when the current error occurred on the IPsec-VPN connection. Unit: millisecond.
    // 
    // This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> failedTime_ = nullptr;
    // If the values of the parameters configured for the IPsec-VPN connection and the peer gateway device do not match, this parameter indicates the value of the parameters configured for the IPsec-VPN connection.
    std::shared_ptr<string> mismatchLocalParam_ = nullptr;
    // If the parameter values configured for the IPsec-VPN connection and the peer gateway device do not match, this parameter indicates the value of the parameter configured for the peer gateway device.
    std::shared_ptr<string> mismatchRemoteParam_ = nullptr;
    // The error level. Valid values:
    // 
    // *   **Critical**
    // *   **Warn**
    // *   **Normal**
    std::shared_ptr<string> severity_ = nullptr;
    // The log information about the error.
    std::shared_ptr<string> sourceLog_ = nullptr;
    // The tunnel ID.
    std::shared_ptr<string> tunnelId_ = nullptr;
    // The ID of the IPsec-VPN connection.
    std::shared_ptr<string> vpnConnectionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
