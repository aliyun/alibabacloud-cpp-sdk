// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STOPBACKUPPLANREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STOPBACKUPPLANREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dbs20190306
{
namespace Models
{
  class StopBackupPlanRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StopBackupPlanRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackupPlanId, backupPlanId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(StopMethod, stopMethod_);
    };
    friend void from_json(const Darabonba::Json& j, StopBackupPlanRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupPlanId, backupPlanId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(StopMethod, stopMethod_);
    };
    StopBackupPlanRequest() = default ;
    StopBackupPlanRequest(const StopBackupPlanRequest &) = default ;
    StopBackupPlanRequest(StopBackupPlanRequest &&) = default ;
    StopBackupPlanRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StopBackupPlanRequest() = default ;
    StopBackupPlanRequest& operator=(const StopBackupPlanRequest &) = default ;
    StopBackupPlanRequest& operator=(StopBackupPlanRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupPlanId_ == nullptr
        && this->clientToken_ == nullptr && this->ownerId_ == nullptr && this->stopMethod_ == nullptr; };
    // backupPlanId Field Functions 
    bool hasBackupPlanId() const { return this->backupPlanId_ != nullptr;};
    void deleteBackupPlanId() { this->backupPlanId_ = nullptr;};
    inline string getBackupPlanId() const { DARABONBA_PTR_GET_DEFAULT(backupPlanId_, "") };
    inline StopBackupPlanRequest& setBackupPlanId(string backupPlanId) { DARABONBA_PTR_SET_VALUE(backupPlanId_, backupPlanId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline StopBackupPlanRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline StopBackupPlanRequest& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // stopMethod Field Functions 
    bool hasStopMethod() const { return this->stopMethod_ != nullptr;};
    void deleteStopMethod() { this->stopMethod_ = nullptr;};
    inline string getStopMethod() const { DARABONBA_PTR_GET_DEFAULT(stopMethod_, "") };
    inline StopBackupPlanRequest& setStopMethod(string stopMethod) { DARABONBA_PTR_SET_VALUE(stopMethod_, stopMethod) };


  protected:
    // The ID of the backup plan.
    // 
    // This parameter is required.
    shared_ptr<string> backupPlanId_ {};
    // A client token to ensure the idempotence of the request. This prevents the same request from being sent repeatedly.
    shared_ptr<string> clientToken_ {};
    shared_ptr<string> ownerId_ {};
    // The method used to pause the backup plan. Valid values:
    // 
    // - ALL: Pauses the backup schedule, full data backup jobs, incremental log backup jobs, and restore jobs.
    // 
    // - PLAN: Pauses only the backup schedule.
    // 
    // This parameter is required.
    shared_ptr<string> stopMethod_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dbs20190306
#endif
