// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEQUALITYSCHEDULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEQUALITYSCHEDULESREQUEST_HPP_
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
  class DeleteQualitySchedulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteQualitySchedulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeleteCommand, deleteCommand_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteQualitySchedulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeleteCommand, deleteCommand_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    DeleteQualitySchedulesRequest() = default ;
    DeleteQualitySchedulesRequest(const DeleteQualitySchedulesRequest &) = default ;
    DeleteQualitySchedulesRequest(DeleteQualitySchedulesRequest &&) = default ;
    DeleteQualitySchedulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteQualitySchedulesRequest() = default ;
    DeleteQualitySchedulesRequest& operator=(const DeleteQualitySchedulesRequest &) = default ;
    DeleteQualitySchedulesRequest& operator=(DeleteQualitySchedulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DeleteCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DeleteCommand& obj) { 
        DARABONBA_PTR_TO_JSON(ScheduleIdList, scheduleIdList_);
      };
      friend void from_json(const Darabonba::Json& j, DeleteCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(ScheduleIdList, scheduleIdList_);
      };
      DeleteCommand() = default ;
      DeleteCommand(const DeleteCommand &) = default ;
      DeleteCommand(DeleteCommand &&) = default ;
      DeleteCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DeleteCommand() = default ;
      DeleteCommand& operator=(const DeleteCommand &) = default ;
      DeleteCommand& operator=(DeleteCommand &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->scheduleIdList_ == nullptr; };
      // scheduleIdList Field Functions 
      bool hasScheduleIdList() const { return this->scheduleIdList_ != nullptr;};
      void deleteScheduleIdList() { this->scheduleIdList_ = nullptr;};
      inline const vector<int64_t> & getScheduleIdList() const { DARABONBA_PTR_GET_CONST(scheduleIdList_, vector<int64_t>) };
      inline vector<int64_t> getScheduleIdList() { DARABONBA_PTR_GET(scheduleIdList_, vector<int64_t>) };
      inline DeleteCommand& setScheduleIdList(const vector<int64_t> & scheduleIdList) { DARABONBA_PTR_SET_VALUE(scheduleIdList_, scheduleIdList) };
      inline DeleteCommand& setScheduleIdList(vector<int64_t> && scheduleIdList) { DARABONBA_PTR_SET_RVALUE(scheduleIdList_, scheduleIdList) };


    protected:
      // This parameter is required.
      shared_ptr<vector<int64_t>> scheduleIdList_ {};
    };

    virtual bool empty() const override { return this->deleteCommand_ == nullptr
        && this->opTenantId_ == nullptr; };
    // deleteCommand Field Functions 
    bool hasDeleteCommand() const { return this->deleteCommand_ != nullptr;};
    void deleteDeleteCommand() { this->deleteCommand_ = nullptr;};
    inline const DeleteQualitySchedulesRequest::DeleteCommand & getDeleteCommand() const { DARABONBA_PTR_GET_CONST(deleteCommand_, DeleteQualitySchedulesRequest::DeleteCommand) };
    inline DeleteQualitySchedulesRequest::DeleteCommand getDeleteCommand() { DARABONBA_PTR_GET(deleteCommand_, DeleteQualitySchedulesRequest::DeleteCommand) };
    inline DeleteQualitySchedulesRequest& setDeleteCommand(const DeleteQualitySchedulesRequest::DeleteCommand & deleteCommand) { DARABONBA_PTR_SET_VALUE(deleteCommand_, deleteCommand) };
    inline DeleteQualitySchedulesRequest& setDeleteCommand(DeleteQualitySchedulesRequest::DeleteCommand && deleteCommand) { DARABONBA_PTR_SET_RVALUE(deleteCommand_, deleteCommand) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline DeleteQualitySchedulesRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    shared_ptr<DeleteQualitySchedulesRequest::DeleteCommand> deleteCommand_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
