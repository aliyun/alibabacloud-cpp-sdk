// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEQUALITYWATCHSWITCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEQUALITYWATCHSWITCHREQUEST_HPP_
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
  class UpdateQualityWatchSwitchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateQualityWatchSwitchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(UpdateCommand, updateCommand_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateQualityWatchSwitchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(UpdateCommand, updateCommand_);
    };
    UpdateQualityWatchSwitchRequest() = default ;
    UpdateQualityWatchSwitchRequest(const UpdateQualityWatchSwitchRequest &) = default ;
    UpdateQualityWatchSwitchRequest(UpdateQualityWatchSwitchRequest &&) = default ;
    UpdateQualityWatchSwitchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateQualityWatchSwitchRequest() = default ;
    UpdateQualityWatchSwitchRequest& operator=(const UpdateQualityWatchSwitchRequest &) = default ;
    UpdateQualityWatchSwitchRequest& operator=(UpdateQualityWatchSwitchRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UpdateCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UpdateCommand& obj) { 
        DARABONBA_PTR_TO_JSON(Open, open_);
        DARABONBA_PTR_TO_JSON(WatchIdList, watchIdList_);
      };
      friend void from_json(const Darabonba::Json& j, UpdateCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(Open, open_);
        DARABONBA_PTR_FROM_JSON(WatchIdList, watchIdList_);
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
      virtual bool empty() const override { return this->open_ == nullptr
        && this->watchIdList_ == nullptr; };
      // open Field Functions 
      bool hasOpen() const { return this->open_ != nullptr;};
      void deleteOpen() { this->open_ = nullptr;};
      inline bool getOpen() const { DARABONBA_PTR_GET_DEFAULT(open_, false) };
      inline UpdateCommand& setOpen(bool open) { DARABONBA_PTR_SET_VALUE(open_, open) };


      // watchIdList Field Functions 
      bool hasWatchIdList() const { return this->watchIdList_ != nullptr;};
      void deleteWatchIdList() { this->watchIdList_ = nullptr;};
      inline const vector<int64_t> & getWatchIdList() const { DARABONBA_PTR_GET_CONST(watchIdList_, vector<int64_t>) };
      inline vector<int64_t> getWatchIdList() { DARABONBA_PTR_GET(watchIdList_, vector<int64_t>) };
      inline UpdateCommand& setWatchIdList(const vector<int64_t> & watchIdList) { DARABONBA_PTR_SET_VALUE(watchIdList_, watchIdList) };
      inline UpdateCommand& setWatchIdList(vector<int64_t> && watchIdList) { DARABONBA_PTR_SET_RVALUE(watchIdList_, watchIdList) };


    protected:
      // This parameter is required.
      shared_ptr<bool> open_ {};
      // This parameter is required.
      shared_ptr<vector<int64_t>> watchIdList_ {};
    };

    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && this->updateCommand_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline UpdateQualityWatchSwitchRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // updateCommand Field Functions 
    bool hasUpdateCommand() const { return this->updateCommand_ != nullptr;};
    void deleteUpdateCommand() { this->updateCommand_ = nullptr;};
    inline const UpdateQualityWatchSwitchRequest::UpdateCommand & getUpdateCommand() const { DARABONBA_PTR_GET_CONST(updateCommand_, UpdateQualityWatchSwitchRequest::UpdateCommand) };
    inline UpdateQualityWatchSwitchRequest::UpdateCommand getUpdateCommand() { DARABONBA_PTR_GET(updateCommand_, UpdateQualityWatchSwitchRequest::UpdateCommand) };
    inline UpdateQualityWatchSwitchRequest& setUpdateCommand(const UpdateQualityWatchSwitchRequest::UpdateCommand & updateCommand) { DARABONBA_PTR_SET_VALUE(updateCommand_, updateCommand) };
    inline UpdateQualityWatchSwitchRequest& setUpdateCommand(UpdateQualityWatchSwitchRequest::UpdateCommand && updateCommand) { DARABONBA_PTR_SET_RVALUE(updateCommand_, updateCommand) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // This parameter is required.
    shared_ptr<UpdateQualityWatchSwitchRequest::UpdateCommand> updateCommand_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
