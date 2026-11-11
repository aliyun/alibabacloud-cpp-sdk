// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDBLISTFROMAGENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDBLISTFROMAGENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dbs20190306
{
namespace Models
{
  class GetDBListFromAgentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDBListFromAgentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackupGatewayId, backupGatewayId_);
      DARABONBA_PTR_TO_JSON(BackupGatewayIdentifier, backupGatewayIdentifier_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(SourceEndpointRegion, sourceEndpointRegion_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDBListFromAgentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupGatewayId, backupGatewayId_);
      DARABONBA_PTR_FROM_JSON(BackupGatewayIdentifier, backupGatewayIdentifier_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(SourceEndpointRegion, sourceEndpointRegion_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    GetDBListFromAgentRequest() = default ;
    GetDBListFromAgentRequest(const GetDBListFromAgentRequest &) = default ;
    GetDBListFromAgentRequest(GetDBListFromAgentRequest &&) = default ;
    GetDBListFromAgentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDBListFromAgentRequest() = default ;
    GetDBListFromAgentRequest& operator=(const GetDBListFromAgentRequest &) = default ;
    GetDBListFromAgentRequest& operator=(GetDBListFromAgentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupGatewayId_ == nullptr
        && this->backupGatewayIdentifier_ == nullptr && this->clientToken_ == nullptr && this->ownerId_ == nullptr && this->sourceEndpointRegion_ == nullptr && this->taskId_ == nullptr; };
    // backupGatewayId Field Functions 
    bool hasBackupGatewayId() const { return this->backupGatewayId_ != nullptr;};
    void deleteBackupGatewayId() { this->backupGatewayId_ = nullptr;};
    inline int64_t getBackupGatewayId() const { DARABONBA_PTR_GET_DEFAULT(backupGatewayId_, 0L) };
    inline GetDBListFromAgentRequest& setBackupGatewayId(int64_t backupGatewayId) { DARABONBA_PTR_SET_VALUE(backupGatewayId_, backupGatewayId) };


    // backupGatewayIdentifier Field Functions 
    bool hasBackupGatewayIdentifier() const { return this->backupGatewayIdentifier_ != nullptr;};
    void deleteBackupGatewayIdentifier() { this->backupGatewayIdentifier_ = nullptr;};
    inline string getBackupGatewayIdentifier() const { DARABONBA_PTR_GET_DEFAULT(backupGatewayIdentifier_, "") };
    inline GetDBListFromAgentRequest& setBackupGatewayIdentifier(string backupGatewayIdentifier) { DARABONBA_PTR_SET_VALUE(backupGatewayIdentifier_, backupGatewayIdentifier) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline GetDBListFromAgentRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline GetDBListFromAgentRequest& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // sourceEndpointRegion Field Functions 
    bool hasSourceEndpointRegion() const { return this->sourceEndpointRegion_ != nullptr;};
    void deleteSourceEndpointRegion() { this->sourceEndpointRegion_ = nullptr;};
    inline string getSourceEndpointRegion() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointRegion_, "") };
    inline GetDBListFromAgentRequest& setSourceEndpointRegion(string sourceEndpointRegion) { DARABONBA_PTR_SET_VALUE(sourceEndpointRegion_, sourceEndpointRegion) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline GetDBListFromAgentRequest& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The ID of the backup gateway. You can call the [DescribeBackupGatewayList](https://help.aliyun.com/document_detail/2869840.html) operation to obtain the value of this parameter.
    // 
    // > This parameter is required.
    shared_ptr<int64_t> backupGatewayId_ {};
    // The unique identifier of the backup gateway.
    shared_ptr<string> backupGatewayIdentifier_ {};
    // The client token that is used to ensure the idempotence of the request and prevent duplicate submissions. The token is generated by the client and must be unique across different requests. It can be up to 64 ASCII characters in length and cannot contain non-ASCII characters.
    shared_ptr<string> clientToken_ {};
    shared_ptr<string> ownerId_ {};
    // The region ID of the backup gateway.
    shared_ptr<string> sourceEndpointRegion_ {};
    // The ID of the asynchronous task. Call the [CreateGetDBListFromAgentTask](https://help.aliyun.com/document_detail/2869847.html) operation to obtain the value of this parameter.
    shared_ptr<int64_t> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dbs20190306
#endif
