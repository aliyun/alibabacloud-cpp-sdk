// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPGATEWAYLISTRESPONSEBODYITEMSBACKUPGATEWAY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPGATEWAYLISTRESPONSEBODYITEMSBACKUPGATEWAY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dbs20190306
{
namespace Models
{
  class DescribeBackupGatewayListResponseBodyItemsBackupGateway : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupGatewayListResponseBodyItemsBackupGateway& obj) { 
      DARABONBA_PTR_TO_JSON(BackupGatewayCreateTime, backupGatewayCreateTime_);
      DARABONBA_PTR_TO_JSON(BackupGatewayId, backupGatewayId_);
      DARABONBA_PTR_TO_JSON(BackupGatewayStatus, backupGatewayStatus_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(Identifier, identifier_);
      DARABONBA_PTR_TO_JSON(LastHeartbeatTime, lastHeartbeatTime_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(SourceEndpointHostname, sourceEndpointHostname_);
      DARABONBA_PTR_TO_JSON(SourceEndpointInternetIP, sourceEndpointInternetIP_);
      DARABONBA_PTR_TO_JSON(SourceEndpointIntranetIP, sourceEndpointIntranetIP_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupGatewayListResponseBodyItemsBackupGateway& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupGatewayCreateTime, backupGatewayCreateTime_);
      DARABONBA_PTR_FROM_JSON(BackupGatewayId, backupGatewayId_);
      DARABONBA_PTR_FROM_JSON(BackupGatewayStatus, backupGatewayStatus_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(Identifier, identifier_);
      DARABONBA_PTR_FROM_JSON(LastHeartbeatTime, lastHeartbeatTime_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(SourceEndpointHostname, sourceEndpointHostname_);
      DARABONBA_PTR_FROM_JSON(SourceEndpointInternetIP, sourceEndpointInternetIP_);
      DARABONBA_PTR_FROM_JSON(SourceEndpointIntranetIP, sourceEndpointIntranetIP_);
    };
    DescribeBackupGatewayListResponseBodyItemsBackupGateway() = default ;
    DescribeBackupGatewayListResponseBodyItemsBackupGateway(const DescribeBackupGatewayListResponseBodyItemsBackupGateway &) = default ;
    DescribeBackupGatewayListResponseBodyItemsBackupGateway(DescribeBackupGatewayListResponseBodyItemsBackupGateway &&) = default ;
    DescribeBackupGatewayListResponseBodyItemsBackupGateway(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupGatewayListResponseBodyItemsBackupGateway() = default ;
    DescribeBackupGatewayListResponseBodyItemsBackupGateway& operator=(const DescribeBackupGatewayListResponseBodyItemsBackupGateway &) = default ;
    DescribeBackupGatewayListResponseBodyItemsBackupGateway& operator=(DescribeBackupGatewayListResponseBodyItemsBackupGateway &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupGatewayCreateTime_ == nullptr
        && return this->backupGatewayId_ == nullptr && return this->backupGatewayStatus_ == nullptr && return this->displayName_ == nullptr && return this->identifier_ == nullptr && return this->lastHeartbeatTime_ == nullptr
        && return this->region_ == nullptr && return this->sourceEndpointHostname_ == nullptr && return this->sourceEndpointInternetIP_ == nullptr && return this->sourceEndpointIntranetIP_ == nullptr; };
    // backupGatewayCreateTime Field Functions 
    bool hasBackupGatewayCreateTime() const { return this->backupGatewayCreateTime_ != nullptr;};
    void deleteBackupGatewayCreateTime() { this->backupGatewayCreateTime_ = nullptr;};
    inline int64_t backupGatewayCreateTime() const { DARABONBA_PTR_GET_DEFAULT(backupGatewayCreateTime_, 0L) };
    inline DescribeBackupGatewayListResponseBodyItemsBackupGateway& setBackupGatewayCreateTime(int64_t backupGatewayCreateTime) { DARABONBA_PTR_SET_VALUE(backupGatewayCreateTime_, backupGatewayCreateTime) };


    // backupGatewayId Field Functions 
    bool hasBackupGatewayId() const { return this->backupGatewayId_ != nullptr;};
    void deleteBackupGatewayId() { this->backupGatewayId_ = nullptr;};
    inline string backupGatewayId() const { DARABONBA_PTR_GET_DEFAULT(backupGatewayId_, "") };
    inline DescribeBackupGatewayListResponseBodyItemsBackupGateway& setBackupGatewayId(string backupGatewayId) { DARABONBA_PTR_SET_VALUE(backupGatewayId_, backupGatewayId) };


    // backupGatewayStatus Field Functions 
    bool hasBackupGatewayStatus() const { return this->backupGatewayStatus_ != nullptr;};
    void deleteBackupGatewayStatus() { this->backupGatewayStatus_ = nullptr;};
    inline string backupGatewayStatus() const { DARABONBA_PTR_GET_DEFAULT(backupGatewayStatus_, "") };
    inline DescribeBackupGatewayListResponseBodyItemsBackupGateway& setBackupGatewayStatus(string backupGatewayStatus) { DARABONBA_PTR_SET_VALUE(backupGatewayStatus_, backupGatewayStatus) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline DescribeBackupGatewayListResponseBodyItemsBackupGateway& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // identifier Field Functions 
    bool hasIdentifier() const { return this->identifier_ != nullptr;};
    void deleteIdentifier() { this->identifier_ = nullptr;};
    inline string identifier() const { DARABONBA_PTR_GET_DEFAULT(identifier_, "") };
    inline DescribeBackupGatewayListResponseBodyItemsBackupGateway& setIdentifier(string identifier) { DARABONBA_PTR_SET_VALUE(identifier_, identifier) };


    // lastHeartbeatTime Field Functions 
    bool hasLastHeartbeatTime() const { return this->lastHeartbeatTime_ != nullptr;};
    void deleteLastHeartbeatTime() { this->lastHeartbeatTime_ = nullptr;};
    inline int64_t lastHeartbeatTime() const { DARABONBA_PTR_GET_DEFAULT(lastHeartbeatTime_, 0L) };
    inline DescribeBackupGatewayListResponseBodyItemsBackupGateway& setLastHeartbeatTime(int64_t lastHeartbeatTime) { DARABONBA_PTR_SET_VALUE(lastHeartbeatTime_, lastHeartbeatTime) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribeBackupGatewayListResponseBodyItemsBackupGateway& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // sourceEndpointHostname Field Functions 
    bool hasSourceEndpointHostname() const { return this->sourceEndpointHostname_ != nullptr;};
    void deleteSourceEndpointHostname() { this->sourceEndpointHostname_ = nullptr;};
    inline string sourceEndpointHostname() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointHostname_, "") };
    inline DescribeBackupGatewayListResponseBodyItemsBackupGateway& setSourceEndpointHostname(string sourceEndpointHostname) { DARABONBA_PTR_SET_VALUE(sourceEndpointHostname_, sourceEndpointHostname) };


    // sourceEndpointInternetIP Field Functions 
    bool hasSourceEndpointInternetIP() const { return this->sourceEndpointInternetIP_ != nullptr;};
    void deleteSourceEndpointInternetIP() { this->sourceEndpointInternetIP_ = nullptr;};
    inline string sourceEndpointInternetIP() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointInternetIP_, "") };
    inline DescribeBackupGatewayListResponseBodyItemsBackupGateway& setSourceEndpointInternetIP(string sourceEndpointInternetIP) { DARABONBA_PTR_SET_VALUE(sourceEndpointInternetIP_, sourceEndpointInternetIP) };


    // sourceEndpointIntranetIP Field Functions 
    bool hasSourceEndpointIntranetIP() const { return this->sourceEndpointIntranetIP_ != nullptr;};
    void deleteSourceEndpointIntranetIP() { this->sourceEndpointIntranetIP_ = nullptr;};
    inline string sourceEndpointIntranetIP() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointIntranetIP_, "") };
    inline DescribeBackupGatewayListResponseBodyItemsBackupGateway& setSourceEndpointIntranetIP(string sourceEndpointIntranetIP) { DARABONBA_PTR_SET_VALUE(sourceEndpointIntranetIP_, sourceEndpointIntranetIP) };


  protected:
    // The time when the backup gateway was created, such as 1554560477000.
    std::shared_ptr<int64_t> backupGatewayCreateTime_ = nullptr;
    // The ID of the backup gateway.
    std::shared_ptr<string> backupGatewayId_ = nullptr;
    // The status of the backup gateway. Valid values:
    // 
    // *   ONLINE: The backup gateway is online.
    // *   OFFLINE: The backup gateway is offline.
    // *   STOPPED: The backup gateway is stopped.
    // *   UPGRADING: The backup gateway is being upgraded.
    std::shared_ptr<string> backupGatewayStatus_ = nullptr;
    // The display name of the backup gateway.
    std::shared_ptr<string> displayName_ = nullptr;
    // The unique identifier of the backup gateway.
    std::shared_ptr<string> identifier_ = nullptr;
    // The last time when a heartbeat message was sent, such as 1554560477000.
    std::shared_ptr<int64_t> lastHeartbeatTime_ = nullptr;
    // The ID of the region.
    std::shared_ptr<string> region_ = nullptr;
    // The name of the host on which the backup gateway is installed.
    std::shared_ptr<string> sourceEndpointHostname_ = nullptr;
    // The public IP address of the host on which the backup gateway is installed.
    std::shared_ptr<string> sourceEndpointInternetIP_ = nullptr;
    // The private IP address of the host on which the backup gateway is installed.
    std::shared_ptr<string> sourceEndpointIntranetIP_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dbs20190306
#endif
