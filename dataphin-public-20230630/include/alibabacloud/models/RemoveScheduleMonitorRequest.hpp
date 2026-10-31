// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVESCHEDULEMONITORREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVESCHEDULEMONITORREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class RemoveScheduleMonitorRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveScheduleMonitorRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(OpUserId, opUserId_);
      DARABONBA_PTR_TO_JSON(RemoveCommand, removeCommand_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveScheduleMonitorRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(OpUserId, opUserId_);
      DARABONBA_PTR_FROM_JSON(RemoveCommand, removeCommand_);
    };
    RemoveScheduleMonitorRequest() = default ;
    RemoveScheduleMonitorRequest(const RemoveScheduleMonitorRequest &) = default ;
    RemoveScheduleMonitorRequest(RemoveScheduleMonitorRequest &&) = default ;
    RemoveScheduleMonitorRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveScheduleMonitorRequest() = default ;
    RemoveScheduleMonitorRequest& operator=(const RemoveScheduleMonitorRequest &) = default ;
    RemoveScheduleMonitorRequest& operator=(RemoveScheduleMonitorRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RemoveCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RemoveCommand& obj) { 
        DARABONBA_PTR_TO_JSON(MonitoredItemId, monitoredItemId_);
        DARABONBA_PTR_TO_JSON(MonitoredItemType, monitoredItemType_);
      };
      friend void from_json(const Darabonba::Json& j, RemoveCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(MonitoredItemId, monitoredItemId_);
        DARABONBA_PTR_FROM_JSON(MonitoredItemType, monitoredItemType_);
      };
      RemoveCommand() = default ;
      RemoveCommand(const RemoveCommand &) = default ;
      RemoveCommand(RemoveCommand &&) = default ;
      RemoveCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RemoveCommand() = default ;
      RemoveCommand& operator=(const RemoveCommand &) = default ;
      RemoveCommand& operator=(RemoveCommand &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->monitoredItemId_ == nullptr
        && this->monitoredItemType_ == nullptr; };
      // monitoredItemId Field Functions 
      bool hasMonitoredItemId() const { return this->monitoredItemId_ != nullptr;};
      void deleteMonitoredItemId() { this->monitoredItemId_ = nullptr;};
      inline int64_t getMonitoredItemId() const { DARABONBA_PTR_GET_DEFAULT(monitoredItemId_, 0L) };
      inline RemoveCommand& setMonitoredItemId(int64_t monitoredItemId) { DARABONBA_PTR_SET_VALUE(monitoredItemId_, monitoredItemId) };


      // monitoredItemType Field Functions 
      bool hasMonitoredItemType() const { return this->monitoredItemType_ != nullptr;};
      void deleteMonitoredItemType() { this->monitoredItemType_ = nullptr;};
      inline string getMonitoredItemType() const { DARABONBA_PTR_GET_DEFAULT(monitoredItemType_, "") };
      inline RemoveCommand& setMonitoredItemType(string monitoredItemType) { DARABONBA_PTR_SET_VALUE(monitoredItemType_, monitoredItemType) };


    protected:
      // The ID of the monitored item.
      // 
      // This parameter is required.
      shared_ptr<int64_t> monitoredItemId_ {};
      // The type of the monitored item. Valid values: LOGICAL_FIELD, OND_ID_NODE, SCHEDULE_PHYSICAL_NODE, MANUAL_PHYSICAL_NODE, ODM_NODE, LOGICAL_TABLE_NODE, and PROJECT.
      // 
      // This parameter is required.
      shared_ptr<string> monitoredItemType_ {};
    };

    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && this->opUserId_ == nullptr && this->removeCommand_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline RemoveScheduleMonitorRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // opUserId Field Functions 
    bool hasOpUserId() const { return this->opUserId_ != nullptr;};
    void deleteOpUserId() { this->opUserId_ = nullptr;};
    inline string getOpUserId() const { DARABONBA_PTR_GET_DEFAULT(opUserId_, "") };
    inline RemoveScheduleMonitorRequest& setOpUserId(string opUserId) { DARABONBA_PTR_SET_VALUE(opUserId_, opUserId) };


    // removeCommand Field Functions 
    bool hasRemoveCommand() const { return this->removeCommand_ != nullptr;};
    void deleteRemoveCommand() { this->removeCommand_ = nullptr;};
    inline const RemoveScheduleMonitorRequest::RemoveCommand & getRemoveCommand() const { DARABONBA_PTR_GET_CONST(removeCommand_, RemoveScheduleMonitorRequest::RemoveCommand) };
    inline RemoveScheduleMonitorRequest::RemoveCommand getRemoveCommand() { DARABONBA_PTR_GET(removeCommand_, RemoveScheduleMonitorRequest::RemoveCommand) };
    inline RemoveScheduleMonitorRequest& setRemoveCommand(const RemoveScheduleMonitorRequest::RemoveCommand & removeCommand) { DARABONBA_PTR_SET_VALUE(removeCommand_, removeCommand) };
    inline RemoveScheduleMonitorRequest& setRemoveCommand(RemoveScheduleMonitorRequest::RemoveCommand && removeCommand) { DARABONBA_PTR_SET_RVALUE(removeCommand_, removeCommand) };


  protected:
    // The tenant ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // The ID of the operator.
    shared_ptr<string> opUserId_ {};
    // The request body for removing scheduling monitoring.
    // 
    // This parameter is required.
    shared_ptr<RemoveScheduleMonitorRequest::RemoveCommand> removeCommand_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
