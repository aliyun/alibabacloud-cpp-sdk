// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNINSTALLBACKUPCLIENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UNINSTALLBACKUPCLIENTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class UninstallBackupClientsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UninstallBackupClientsRequest& obj) { 
      DARABONBA_ANY_TO_JSON(ClientIds, clientIds_);
      DARABONBA_PTR_TO_JSON(CrossAccountRoleName, crossAccountRoleName_);
      DARABONBA_PTR_TO_JSON(CrossAccountType, crossAccountType_);
      DARABONBA_PTR_TO_JSON(CrossAccountUserId, crossAccountUserId_);
      DARABONBA_ANY_TO_JSON(InstanceIds, instanceIds_);
    };
    friend void from_json(const Darabonba::Json& j, UninstallBackupClientsRequest& obj) { 
      DARABONBA_ANY_FROM_JSON(ClientIds, clientIds_);
      DARABONBA_PTR_FROM_JSON(CrossAccountRoleName, crossAccountRoleName_);
      DARABONBA_PTR_FROM_JSON(CrossAccountType, crossAccountType_);
      DARABONBA_PTR_FROM_JSON(CrossAccountUserId, crossAccountUserId_);
      DARABONBA_ANY_FROM_JSON(InstanceIds, instanceIds_);
    };
    UninstallBackupClientsRequest() = default ;
    UninstallBackupClientsRequest(const UninstallBackupClientsRequest &) = default ;
    UninstallBackupClientsRequest(UninstallBackupClientsRequest &&) = default ;
    UninstallBackupClientsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UninstallBackupClientsRequest() = default ;
    UninstallBackupClientsRequest& operator=(const UninstallBackupClientsRequest &) = default ;
    UninstallBackupClientsRequest& operator=(UninstallBackupClientsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientIds_ == nullptr
        && this->crossAccountRoleName_ == nullptr && this->crossAccountType_ == nullptr && this->crossAccountUserId_ == nullptr && this->instanceIds_ == nullptr; };
    // clientIds Field Functions 
    bool hasClientIds() const { return this->clientIds_ != nullptr;};
    void deleteClientIds() { this->clientIds_ = nullptr;};
    inline     const Darabonba::Json & getClientIds() const { DARABONBA_GET(clientIds_) };
    Darabonba::Json & getClientIds() { DARABONBA_GET(clientIds_) };
    inline UninstallBackupClientsRequest& setClientIds(const Darabonba::Json & clientIds) { DARABONBA_SET_VALUE(clientIds_, clientIds) };
    inline UninstallBackupClientsRequest& setClientIds(Darabonba::Json && clientIds) { DARABONBA_SET_RVALUE(clientIds_, clientIds) };


    // crossAccountRoleName Field Functions 
    bool hasCrossAccountRoleName() const { return this->crossAccountRoleName_ != nullptr;};
    void deleteCrossAccountRoleName() { this->crossAccountRoleName_ = nullptr;};
    inline string getCrossAccountRoleName() const { DARABONBA_PTR_GET_DEFAULT(crossAccountRoleName_, "") };
    inline UninstallBackupClientsRequest& setCrossAccountRoleName(string crossAccountRoleName) { DARABONBA_PTR_SET_VALUE(crossAccountRoleName_, crossAccountRoleName) };


    // crossAccountType Field Functions 
    bool hasCrossAccountType() const { return this->crossAccountType_ != nullptr;};
    void deleteCrossAccountType() { this->crossAccountType_ = nullptr;};
    inline string getCrossAccountType() const { DARABONBA_PTR_GET_DEFAULT(crossAccountType_, "") };
    inline UninstallBackupClientsRequest& setCrossAccountType(string crossAccountType) { DARABONBA_PTR_SET_VALUE(crossAccountType_, crossAccountType) };


    // crossAccountUserId Field Functions 
    bool hasCrossAccountUserId() const { return this->crossAccountUserId_ != nullptr;};
    void deleteCrossAccountUserId() { this->crossAccountUserId_ = nullptr;};
    inline int64_t getCrossAccountUserId() const { DARABONBA_PTR_GET_DEFAULT(crossAccountUserId_, 0L) };
    inline UninstallBackupClientsRequest& setCrossAccountUserId(int64_t crossAccountUserId) { DARABONBA_PTR_SET_VALUE(crossAccountUserId_, crossAccountUserId) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline     const Darabonba::Json & getInstanceIds() const { DARABONBA_GET(instanceIds_) };
    Darabonba::Json & getInstanceIds() { DARABONBA_GET(instanceIds_) };
    inline UninstallBackupClientsRequest& setInstanceIds(const Darabonba::Json & instanceIds) { DARABONBA_SET_VALUE(instanceIds_, instanceIds) };
    inline UninstallBackupClientsRequest& setInstanceIds(Darabonba::Json && instanceIds) { DARABONBA_SET_RVALUE(instanceIds_, instanceIds) };


  protected:
    // The IDs of Cloud Backup clients. The sum of the number of Cloud Backup client IDs and the number of ECS instance IDs cannot exceed 20. Otherwise, an error occurs.
    Darabonba::Json clientIds_ {};
    // The name of the RAM role that is created within the source Alibaba Cloud account and assigned to the current Alibaba Cloud account to authorize the current Alibaba Cloud account to back up and restore data across Alibaba Cloud accounts.
    shared_ptr<string> crossAccountRoleName_ {};
    // Specifies whether data is backed up and restored within the same Alibaba Cloud account or across Alibaba Cloud accounts. Valid values:
    // 
    // *   SELF_ACCOUNT: Data is backed up and restored within the same Alibaba Cloud account.
    // *   CROSS_ACCOUNT: Data is backed up and restored across Alibaba Cloud accounts.
    shared_ptr<string> crossAccountType_ {};
    // The ID of the source Alibaba Cloud account that authorizes the current Alibaba Cloud account to back up and restore data across Alibaba Cloud accounts.
    shared_ptr<int64_t> crossAccountUserId_ {};
    // The IDs of Elastic Compute Service (ECS) instances. You can specify a maximum of 20 ECS instances.
    Darabonba::Json instanceIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
