// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSENSITIVEDATAAUDITLOGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSENSITIVEDATAAUDITLOGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListSensitiveDataAuditLogResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSensitiveDataAuditLogResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SensitiveDataAuditLogList, sensitiveDataAuditLogList_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListSensitiveDataAuditLogResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SensitiveDataAuditLogList, sensitiveDataAuditLogList_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListSensitiveDataAuditLogResponseBody() = default ;
    ListSensitiveDataAuditLogResponseBody(const ListSensitiveDataAuditLogResponseBody &) = default ;
    ListSensitiveDataAuditLogResponseBody(ListSensitiveDataAuditLogResponseBody &&) = default ;
    ListSensitiveDataAuditLogResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSensitiveDataAuditLogResponseBody() = default ;
    ListSensitiveDataAuditLogResponseBody& operator=(const ListSensitiveDataAuditLogResponseBody &) = default ;
    ListSensitiveDataAuditLogResponseBody& operator=(ListSensitiveDataAuditLogResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SensitiveDataAuditLogList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SensitiveDataAuditLogList& obj) { 
        DARABONBA_PTR_TO_JSON(DbDisplayName, dbDisplayName_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(ModuleName, moduleName_);
        DARABONBA_PTR_TO_JSON(OpTime, opTime_);
        DARABONBA_PTR_TO_JSON(SensitiveDataLog, sensitiveDataLog_);
        DARABONBA_PTR_TO_JSON(TargetName, targetName_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
        DARABONBA_PTR_TO_JSON(UserName, userName_);
      };
      friend void from_json(const Darabonba::Json& j, SensitiveDataAuditLogList& obj) { 
        DARABONBA_PTR_FROM_JSON(DbDisplayName, dbDisplayName_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(ModuleName, moduleName_);
        DARABONBA_PTR_FROM_JSON(OpTime, opTime_);
        DARABONBA_PTR_FROM_JSON(SensitiveDataLog, sensitiveDataLog_);
        DARABONBA_PTR_FROM_JSON(TargetName, targetName_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
        DARABONBA_PTR_FROM_JSON(UserName, userName_);
      };
      SensitiveDataAuditLogList() = default ;
      SensitiveDataAuditLogList(const SensitiveDataAuditLogList &) = default ;
      SensitiveDataAuditLogList(SensitiveDataAuditLogList &&) = default ;
      SensitiveDataAuditLogList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SensitiveDataAuditLogList() = default ;
      SensitiveDataAuditLogList& operator=(const SensitiveDataAuditLogList &) = default ;
      SensitiveDataAuditLogList& operator=(SensitiveDataAuditLogList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SensitiveDataLog : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SensitiveDataLog& obj) { 
          DARABONBA_PTR_TO_JSON(ColumnName, columnName_);
          DARABONBA_PTR_TO_JSON(ColumnPermissionType, columnPermissionType_);
          DARABONBA_PTR_TO_JSON(DesensitizationRule, desensitizationRule_);
          DARABONBA_PTR_TO_JSON(SecurityLevel, securityLevel_);
          DARABONBA_PTR_TO_JSON(TableName, tableName_);
        };
        friend void from_json(const Darabonba::Json& j, SensitiveDataLog& obj) { 
          DARABONBA_PTR_FROM_JSON(ColumnName, columnName_);
          DARABONBA_PTR_FROM_JSON(ColumnPermissionType, columnPermissionType_);
          DARABONBA_PTR_FROM_JSON(DesensitizationRule, desensitizationRule_);
          DARABONBA_PTR_FROM_JSON(SecurityLevel, securityLevel_);
          DARABONBA_PTR_FROM_JSON(TableName, tableName_);
        };
        SensitiveDataLog() = default ;
        SensitiveDataLog(const SensitiveDataLog &) = default ;
        SensitiveDataLog(SensitiveDataLog &&) = default ;
        SensitiveDataLog(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SensitiveDataLog() = default ;
        SensitiveDataLog& operator=(const SensitiveDataLog &) = default ;
        SensitiveDataLog& operator=(SensitiveDataLog &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->columnName_ == nullptr
        && this->columnPermissionType_ == nullptr && this->desensitizationRule_ == nullptr && this->securityLevel_ == nullptr && this->tableName_ == nullptr; };
        // columnName Field Functions 
        bool hasColumnName() const { return this->columnName_ != nullptr;};
        void deleteColumnName() { this->columnName_ = nullptr;};
        inline string getColumnName() const { DARABONBA_PTR_GET_DEFAULT(columnName_, "") };
        inline SensitiveDataLog& setColumnName(string columnName) { DARABONBA_PTR_SET_VALUE(columnName_, columnName) };


        // columnPermissionType Field Functions 
        bool hasColumnPermissionType() const { return this->columnPermissionType_ != nullptr;};
        void deleteColumnPermissionType() { this->columnPermissionType_ = nullptr;};
        inline string getColumnPermissionType() const { DARABONBA_PTR_GET_DEFAULT(columnPermissionType_, "") };
        inline SensitiveDataLog& setColumnPermissionType(string columnPermissionType) { DARABONBA_PTR_SET_VALUE(columnPermissionType_, columnPermissionType) };


        // desensitizationRule Field Functions 
        bool hasDesensitizationRule() const { return this->desensitizationRule_ != nullptr;};
        void deleteDesensitizationRule() { this->desensitizationRule_ = nullptr;};
        inline string getDesensitizationRule() const { DARABONBA_PTR_GET_DEFAULT(desensitizationRule_, "") };
        inline SensitiveDataLog& setDesensitizationRule(string desensitizationRule) { DARABONBA_PTR_SET_VALUE(desensitizationRule_, desensitizationRule) };


        // securityLevel Field Functions 
        bool hasSecurityLevel() const { return this->securityLevel_ != nullptr;};
        void deleteSecurityLevel() { this->securityLevel_ = nullptr;};
        inline string getSecurityLevel() const { DARABONBA_PTR_GET_DEFAULT(securityLevel_, "") };
        inline SensitiveDataLog& setSecurityLevel(string securityLevel) { DARABONBA_PTR_SET_VALUE(securityLevel_, securityLevel) };


        // tableName Field Functions 
        bool hasTableName() const { return this->tableName_ != nullptr;};
        void deleteTableName() { this->tableName_ = nullptr;};
        inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
        inline SensitiveDataLog& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


      protected:
        // The name of the column that contains sensitive data.
        shared_ptr<string> columnName_ {};
        // The permission that the user has on the column. Valid values:
        // 
        // *   **No permission**
        // *   **Partial redaction**
        // *   **Plaintext**
        // *   **Change**
        // *   **Enable data masking**
        // *   **Disable data masking**
        shared_ptr<string> columnPermissionType_ {};
        // The algorithm used for data masking.
        shared_ptr<string> desensitizationRule_ {};
        // The sensitivity level of the data. Valid values:
        // 
        // *   **Low**
        // *   **Medium**
        // *   **High**
        shared_ptr<string> securityLevel_ {};
        // The name of the table that stores the sensitive data.
        shared_ptr<string> tableName_ {};
      };

      virtual bool empty() const override { return this->dbDisplayName_ == nullptr
        && this->instanceId_ == nullptr && this->moduleName_ == nullptr && this->opTime_ == nullptr && this->sensitiveDataLog_ == nullptr && this->targetName_ == nullptr
        && this->userId_ == nullptr && this->userName_ == nullptr; };
      // dbDisplayName Field Functions 
      bool hasDbDisplayName() const { return this->dbDisplayName_ != nullptr;};
      void deleteDbDisplayName() { this->dbDisplayName_ = nullptr;};
      inline string getDbDisplayName() const { DARABONBA_PTR_GET_DEFAULT(dbDisplayName_, "") };
      inline SensitiveDataAuditLogList& setDbDisplayName(string dbDisplayName) { DARABONBA_PTR_SET_VALUE(dbDisplayName_, dbDisplayName) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline int64_t getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, 0L) };
      inline SensitiveDataAuditLogList& setInstanceId(int64_t instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // moduleName Field Functions 
      bool hasModuleName() const { return this->moduleName_ != nullptr;};
      void deleteModuleName() { this->moduleName_ = nullptr;};
      inline string getModuleName() const { DARABONBA_PTR_GET_DEFAULT(moduleName_, "") };
      inline SensitiveDataAuditLogList& setModuleName(string moduleName) { DARABONBA_PTR_SET_VALUE(moduleName_, moduleName) };


      // opTime Field Functions 
      bool hasOpTime() const { return this->opTime_ != nullptr;};
      void deleteOpTime() { this->opTime_ = nullptr;};
      inline string getOpTime() const { DARABONBA_PTR_GET_DEFAULT(opTime_, "") };
      inline SensitiveDataAuditLogList& setOpTime(string opTime) { DARABONBA_PTR_SET_VALUE(opTime_, opTime) };


      // sensitiveDataLog Field Functions 
      bool hasSensitiveDataLog() const { return this->sensitiveDataLog_ != nullptr;};
      void deleteSensitiveDataLog() { this->sensitiveDataLog_ = nullptr;};
      inline const vector<SensitiveDataAuditLogList::SensitiveDataLog> & getSensitiveDataLog() const { DARABONBA_PTR_GET_CONST(sensitiveDataLog_, vector<SensitiveDataAuditLogList::SensitiveDataLog>) };
      inline vector<SensitiveDataAuditLogList::SensitiveDataLog> getSensitiveDataLog() { DARABONBA_PTR_GET(sensitiveDataLog_, vector<SensitiveDataAuditLogList::SensitiveDataLog>) };
      inline SensitiveDataAuditLogList& setSensitiveDataLog(const vector<SensitiveDataAuditLogList::SensitiveDataLog> & sensitiveDataLog) { DARABONBA_PTR_SET_VALUE(sensitiveDataLog_, sensitiveDataLog) };
      inline SensitiveDataAuditLogList& setSensitiveDataLog(vector<SensitiveDataAuditLogList::SensitiveDataLog> && sensitiveDataLog) { DARABONBA_PTR_SET_RVALUE(sensitiveDataLog_, sensitiveDataLog) };


      // targetName Field Functions 
      bool hasTargetName() const { return this->targetName_ != nullptr;};
      void deleteTargetName() { this->targetName_ = nullptr;};
      inline string getTargetName() const { DARABONBA_PTR_GET_DEFAULT(targetName_, "") };
      inline SensitiveDataAuditLogList& setTargetName(string targetName) { DARABONBA_PTR_SET_VALUE(targetName_, targetName) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline int64_t getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
      inline SensitiveDataAuditLogList& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      // userName Field Functions 
      bool hasUserName() const { return this->userName_ != nullptr;};
      void deleteUserName() { this->userName_ = nullptr;};
      inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
      inline SensitiveDataAuditLogList& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    protected:
      // The name of the database that stores the sensitive data.
      shared_ptr<string> dbDisplayName_ {};
      // The ID of the instance.
      shared_ptr<int64_t> instanceId_ {};
      // The name of the function module whose audit logs were queried.
      shared_ptr<string> moduleName_ {};
      // The time when the operation was performed. The time is in the yyyy-MM-DD HH:mm:ss format.
      shared_ptr<string> opTime_ {};
      // The logs for sensitive data.
      shared_ptr<vector<SensitiveDataAuditLogList::SensitiveDataLog>> sensitiveDataLog_ {};
      // The details of the object on which the operation was performed. The value of this parameter is in one of the following formats:
      // 
      // *   Object name - object ID
      // *   Object name (object ID)
      shared_ptr<string> targetName_ {};
      // The user ID of the requester.
      shared_ptr<int64_t> userId_ {};
      // The username of the requester.
      shared_ptr<string> userName_ {};
    };

    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->sensitiveDataAuditLogList_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListSensitiveDataAuditLogResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListSensitiveDataAuditLogResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSensitiveDataAuditLogResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sensitiveDataAuditLogList Field Functions 
    bool hasSensitiveDataAuditLogList() const { return this->sensitiveDataAuditLogList_ != nullptr;};
    void deleteSensitiveDataAuditLogList() { this->sensitiveDataAuditLogList_ = nullptr;};
    inline const vector<ListSensitiveDataAuditLogResponseBody::SensitiveDataAuditLogList> & getSensitiveDataAuditLogList() const { DARABONBA_PTR_GET_CONST(sensitiveDataAuditLogList_, vector<ListSensitiveDataAuditLogResponseBody::SensitiveDataAuditLogList>) };
    inline vector<ListSensitiveDataAuditLogResponseBody::SensitiveDataAuditLogList> getSensitiveDataAuditLogList() { DARABONBA_PTR_GET(sensitiveDataAuditLogList_, vector<ListSensitiveDataAuditLogResponseBody::SensitiveDataAuditLogList>) };
    inline ListSensitiveDataAuditLogResponseBody& setSensitiveDataAuditLogList(const vector<ListSensitiveDataAuditLogResponseBody::SensitiveDataAuditLogList> & sensitiveDataAuditLogList) { DARABONBA_PTR_SET_VALUE(sensitiveDataAuditLogList_, sensitiveDataAuditLogList) };
    inline ListSensitiveDataAuditLogResponseBody& setSensitiveDataAuditLogList(vector<ListSensitiveDataAuditLogResponseBody::SensitiveDataAuditLogList> && sensitiveDataAuditLogList) { DARABONBA_PTR_SET_RVALUE(sensitiveDataAuditLogList_, sensitiveDataAuditLogList) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListSensitiveDataAuditLogResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListSensitiveDataAuditLogResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The error code returned if the request failed.
    shared_ptr<string> errorCode_ {};
    // The error message returned if the request failed.
    shared_ptr<string> errorMessage_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The audit logs for sensitive data.
    shared_ptr<vector<ListSensitiveDataAuditLogResponseBody::SensitiveDataAuditLogList>> sensitiveDataAuditLogList_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request failed.
    shared_ptr<bool> success_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
