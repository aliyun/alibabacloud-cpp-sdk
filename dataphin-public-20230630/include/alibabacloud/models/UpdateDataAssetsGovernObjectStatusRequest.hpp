// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDATAASSETSGOVERNOBJECTSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDATAASSETSGOVERNOBJECTSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class UpdateDataAssetsGovernObjectStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDataAssetsGovernObjectStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(OpUserId, opUserId_);
      DARABONBA_PTR_TO_JSON(UpdateCommand, updateCommand_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDataAssetsGovernObjectStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(OpUserId, opUserId_);
      DARABONBA_PTR_FROM_JSON(UpdateCommand, updateCommand_);
    };
    UpdateDataAssetsGovernObjectStatusRequest() = default ;
    UpdateDataAssetsGovernObjectStatusRequest(const UpdateDataAssetsGovernObjectStatusRequest &) = default ;
    UpdateDataAssetsGovernObjectStatusRequest(UpdateDataAssetsGovernObjectStatusRequest &&) = default ;
    UpdateDataAssetsGovernObjectStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDataAssetsGovernObjectStatusRequest() = default ;
    UpdateDataAssetsGovernObjectStatusRequest& operator=(const UpdateDataAssetsGovernObjectStatusRequest &) = default ;
    UpdateDataAssetsGovernObjectStatusRequest& operator=(UpdateDataAssetsGovernObjectStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UpdateCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UpdateCommand& obj) { 
        DARABONBA_PTR_TO_JSON(AlertOwners, alertOwners_);
        DARABONBA_PTR_TO_JSON(GovernObjectIds, governObjectIds_);
        DARABONBA_PTR_TO_JSON(Remark, remark_);
        DARABONBA_PTR_TO_JSON(TargetStatus, targetStatus_);
      };
      friend void from_json(const Darabonba::Json& j, UpdateCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(AlertOwners, alertOwners_);
        DARABONBA_PTR_FROM_JSON(GovernObjectIds, governObjectIds_);
        DARABONBA_PTR_FROM_JSON(Remark, remark_);
        DARABONBA_PTR_FROM_JSON(TargetStatus, targetStatus_);
      };
      UpdateCommand() = default ;
      UpdateCommand(const UpdateCommand &) = default ;
      UpdateCommand(UpdateCommand &&) = default ;
      UpdateCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UpdateCommand() = default ;
      UpdateCommand& operator=(const UpdateCommand &) = default ;
      UpdateCommand& operator=(UpdateCommand &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->alertOwners_ == nullptr
        && this->governObjectIds_ == nullptr && this->remark_ == nullptr && this->targetStatus_ == nullptr; };
      // alertOwners Field Functions 
      bool hasAlertOwners() const { return this->alertOwners_ != nullptr;};
      void deleteAlertOwners() { this->alertOwners_ = nullptr;};
      inline bool getAlertOwners() const { DARABONBA_PTR_GET_DEFAULT(alertOwners_, false) };
      inline UpdateCommand& setAlertOwners(bool alertOwners) { DARABONBA_PTR_SET_VALUE(alertOwners_, alertOwners) };


      // governObjectIds Field Functions 
      bool hasGovernObjectIds() const { return this->governObjectIds_ != nullptr;};
      void deleteGovernObjectIds() { this->governObjectIds_ = nullptr;};
      inline const vector<int64_t> & getGovernObjectIds() const { DARABONBA_PTR_GET_CONST(governObjectIds_, vector<int64_t>) };
      inline vector<int64_t> getGovernObjectIds() { DARABONBA_PTR_GET(governObjectIds_, vector<int64_t>) };
      inline UpdateCommand& setGovernObjectIds(const vector<int64_t> & governObjectIds) { DARABONBA_PTR_SET_VALUE(governObjectIds_, governObjectIds) };
      inline UpdateCommand& setGovernObjectIds(vector<int64_t> && governObjectIds) { DARABONBA_PTR_SET_RVALUE(governObjectIds_, governObjectIds) };


      // remark Field Functions 
      bool hasRemark() const { return this->remark_ != nullptr;};
      void deleteRemark() { this->remark_ = nullptr;};
      inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
      inline UpdateCommand& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


      // targetStatus Field Functions 
      bool hasTargetStatus() const { return this->targetStatus_ != nullptr;};
      void deleteTargetStatus() { this->targetStatus_ = nullptr;};
      inline string getTargetStatus() const { DARABONBA_PTR_GET_DEFAULT(targetStatus_, "") };
      inline UpdateCommand& setTargetStatus(string targetStatus) { DARABONBA_PTR_SET_VALUE(targetStatus_, targetStatus) };


    protected:
      shared_ptr<bool> alertOwners_ {};
      // This parameter is required.
      shared_ptr<vector<int64_t>> governObjectIds_ {};
      shared_ptr<string> remark_ {};
      // This parameter is required.
      shared_ptr<string> targetStatus_ {};
    };

    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && this->opUserId_ == nullptr && this->updateCommand_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline UpdateDataAssetsGovernObjectStatusRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // opUserId Field Functions 
    bool hasOpUserId() const { return this->opUserId_ != nullptr;};
    void deleteOpUserId() { this->opUserId_ = nullptr;};
    inline string getOpUserId() const { DARABONBA_PTR_GET_DEFAULT(opUserId_, "") };
    inline UpdateDataAssetsGovernObjectStatusRequest& setOpUserId(string opUserId) { DARABONBA_PTR_SET_VALUE(opUserId_, opUserId) };


    // updateCommand Field Functions 
    bool hasUpdateCommand() const { return this->updateCommand_ != nullptr;};
    void deleteUpdateCommand() { this->updateCommand_ = nullptr;};
    inline const UpdateDataAssetsGovernObjectStatusRequest::UpdateCommand & getUpdateCommand() const { DARABONBA_PTR_GET_CONST(updateCommand_, UpdateDataAssetsGovernObjectStatusRequest::UpdateCommand) };
    inline UpdateDataAssetsGovernObjectStatusRequest::UpdateCommand getUpdateCommand() { DARABONBA_PTR_GET(updateCommand_, UpdateDataAssetsGovernObjectStatusRequest::UpdateCommand) };
    inline UpdateDataAssetsGovernObjectStatusRequest& setUpdateCommand(const UpdateDataAssetsGovernObjectStatusRequest::UpdateCommand & updateCommand) { DARABONBA_PTR_SET_VALUE(updateCommand_, updateCommand) };
    inline UpdateDataAssetsGovernObjectStatusRequest& setUpdateCommand(UpdateDataAssetsGovernObjectStatusRequest::UpdateCommand && updateCommand) { DARABONBA_PTR_SET_RVALUE(updateCommand_, updateCommand) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    shared_ptr<string> opUserId_ {};
    // This parameter is required.
    shared_ptr<UpdateDataAssetsGovernObjectStatusRequest::UpdateCommand> updateCommand_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
