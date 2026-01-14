// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAUDITLOGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYAUDITLOGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryAuditLogRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAuditLogRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessSourceFlag, accessSourceFlag_);
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(LogType, logType_);
      DARABONBA_PTR_TO_JSON(OperatorId, operatorId_);
      DARABONBA_PTR_TO_JSON(OperatorTypes, operatorTypes_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
      DARABONBA_PTR_TO_JSON(UserAccessDevice, userAccessDevice_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAuditLogRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessSourceFlag, accessSourceFlag_);
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(LogType, logType_);
      DARABONBA_PTR_FROM_JSON(OperatorId, operatorId_);
      DARABONBA_PTR_FROM_JSON(OperatorTypes, operatorTypes_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
      DARABONBA_PTR_FROM_JSON(UserAccessDevice, userAccessDevice_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    QueryAuditLogRequest() = default ;
    QueryAuditLogRequest(const QueryAuditLogRequest &) = default ;
    QueryAuditLogRequest(QueryAuditLogRequest &&) = default ;
    QueryAuditLogRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAuditLogRequest() = default ;
    QueryAuditLogRequest& operator=(const QueryAuditLogRequest &) = default ;
    QueryAuditLogRequest& operator=(QueryAuditLogRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessSourceFlag_ == nullptr
        && this->endDate_ == nullptr && this->logType_ == nullptr && this->operatorId_ == nullptr && this->operatorTypes_ == nullptr && this->resourceType_ == nullptr
        && this->startDate_ == nullptr && this->userAccessDevice_ == nullptr && this->workspaceId_ == nullptr; };
    // accessSourceFlag Field Functions 
    bool hasAccessSourceFlag() const { return this->accessSourceFlag_ != nullptr;};
    void deleteAccessSourceFlag() { this->accessSourceFlag_ = nullptr;};
    inline string getAccessSourceFlag() const { DARABONBA_PTR_GET_DEFAULT(accessSourceFlag_, "") };
    inline QueryAuditLogRequest& setAccessSourceFlag(string accessSourceFlag) { DARABONBA_PTR_SET_VALUE(accessSourceFlag_, accessSourceFlag) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline QueryAuditLogRequest& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // logType Field Functions 
    bool hasLogType() const { return this->logType_ != nullptr;};
    void deleteLogType() { this->logType_ = nullptr;};
    inline string getLogType() const { DARABONBA_PTR_GET_DEFAULT(logType_, "") };
    inline QueryAuditLogRequest& setLogType(string logType) { DARABONBA_PTR_SET_VALUE(logType_, logType) };


    // operatorId Field Functions 
    bool hasOperatorId() const { return this->operatorId_ != nullptr;};
    void deleteOperatorId() { this->operatorId_ = nullptr;};
    inline string getOperatorId() const { DARABONBA_PTR_GET_DEFAULT(operatorId_, "") };
    inline QueryAuditLogRequest& setOperatorId(string operatorId) { DARABONBA_PTR_SET_VALUE(operatorId_, operatorId) };


    // operatorTypes Field Functions 
    bool hasOperatorTypes() const { return this->operatorTypes_ != nullptr;};
    void deleteOperatorTypes() { this->operatorTypes_ = nullptr;};
    inline string getOperatorTypes() const { DARABONBA_PTR_GET_DEFAULT(operatorTypes_, "") };
    inline QueryAuditLogRequest& setOperatorTypes(string operatorTypes) { DARABONBA_PTR_SET_VALUE(operatorTypes_, operatorTypes) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline QueryAuditLogRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline QueryAuditLogRequest& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


    // userAccessDevice Field Functions 
    bool hasUserAccessDevice() const { return this->userAccessDevice_ != nullptr;};
    void deleteUserAccessDevice() { this->userAccessDevice_ = nullptr;};
    inline string getUserAccessDevice() const { DARABONBA_PTR_GET_DEFAULT(userAccessDevice_, "") };
    inline QueryAuditLogRequest& setUserAccessDevice(string userAccessDevice) { DARABONBA_PTR_SET_VALUE(userAccessDevice_, userAccessDevice) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline QueryAuditLogRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<string> accessSourceFlag_ {};
    // End date of the query, format ("yyyyMMdd").
    // 
    // This parameter is required.
    shared_ptr<string> endDate_ {};
    // Log type:
    // - dataView - Access
    // - function - Operation
    // - permission - Permission
    // 
    // This parameter is required.
    shared_ptr<string> logType_ {};
    // Operator\\"s user ID.
    shared_ptr<string> operatorId_ {};
    // Permission/Access/Operation type, empty - default all;
    // 
    // Refer to the audit log code values, send multiple values separated by English commas.
    shared_ptr<string> operatorTypes_ {};
    // Resource type, refer to the work type.
    shared_ptr<string> resourceType_ {};
    // Start date of the query, format ("yyyyMMdd"), cannot be earlier than 90 days from the current time.
    // 
    // This parameter is required.
    shared_ptr<string> startDate_ {};
    shared_ptr<string> userAccessDevice_ {};
    // Workspace ID, the ID of the workspace to which the logs to be queried belong.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
