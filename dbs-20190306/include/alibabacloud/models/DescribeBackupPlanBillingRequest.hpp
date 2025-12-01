// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPPLANBILLINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPPLANBILLINGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dbs20190306
{
namespace Models
{
  class DescribeBackupPlanBillingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupPlanBillingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackupPlanId, backupPlanId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ShowStorageType, showStorageType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupPlanBillingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupPlanId, backupPlanId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ShowStorageType, showStorageType_);
    };
    DescribeBackupPlanBillingRequest() = default ;
    DescribeBackupPlanBillingRequest(const DescribeBackupPlanBillingRequest &) = default ;
    DescribeBackupPlanBillingRequest(DescribeBackupPlanBillingRequest &&) = default ;
    DescribeBackupPlanBillingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupPlanBillingRequest() = default ;
    DescribeBackupPlanBillingRequest& operator=(const DescribeBackupPlanBillingRequest &) = default ;
    DescribeBackupPlanBillingRequest& operator=(DescribeBackupPlanBillingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupPlanId_ == nullptr
        && return this->clientToken_ == nullptr && return this->ownerId_ == nullptr && return this->showStorageType_ == nullptr; };
    // backupPlanId Field Functions 
    bool hasBackupPlanId() const { return this->backupPlanId_ != nullptr;};
    void deleteBackupPlanId() { this->backupPlanId_ = nullptr;};
    inline string backupPlanId() const { DARABONBA_PTR_GET_DEFAULT(backupPlanId_, "") };
    inline DescribeBackupPlanBillingRequest& setBackupPlanId(string backupPlanId) { DARABONBA_PTR_SET_VALUE(backupPlanId_, backupPlanId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DescribeBackupPlanBillingRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline DescribeBackupPlanBillingRequest& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // showStorageType Field Functions 
    bool hasShowStorageType() const { return this->showStorageType_ != nullptr;};
    void deleteShowStorageType() { this->showStorageType_ = nullptr;};
    inline bool showStorageType() const { DARABONBA_PTR_GET_DEFAULT(showStorageType_, false) };
    inline DescribeBackupPlanBillingRequest& setShowStorageType(bool showStorageType) { DARABONBA_PTR_SET_VALUE(showStorageType_, showStorageType) };


  protected:
    // The ID of the backup gateway.
    // 
    // This parameter is required.
    std::shared_ptr<string> backupPlanId_ = nullptr;
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the value, but you must make sure that it is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    std::shared_ptr<string> clientToken_ = nullptr;
    std::shared_ptr<string> ownerId_ = nullptr;
    // Indicates whether the storage type is displayed.
    std::shared_ptr<bool> showStorageType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dbs20190306
#endif
