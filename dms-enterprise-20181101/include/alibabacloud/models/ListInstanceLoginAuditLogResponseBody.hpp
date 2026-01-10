// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCELOGINAUDITLOGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCELOGINAUDITLOGRESPONSEBODY_HPP_
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
  class ListInstanceLoginAuditLogResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceLoginAuditLogResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(InstanceLoginAuditLogList, instanceLoginAuditLogList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceLoginAuditLogResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(InstanceLoginAuditLogList, instanceLoginAuditLogList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListInstanceLoginAuditLogResponseBody() = default ;
    ListInstanceLoginAuditLogResponseBody(const ListInstanceLoginAuditLogResponseBody &) = default ;
    ListInstanceLoginAuditLogResponseBody(ListInstanceLoginAuditLogResponseBody &&) = default ;
    ListInstanceLoginAuditLogResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceLoginAuditLogResponseBody() = default ;
    ListInstanceLoginAuditLogResponseBody& operator=(const ListInstanceLoginAuditLogResponseBody &) = default ;
    ListInstanceLoginAuditLogResponseBody& operator=(ListInstanceLoginAuditLogResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InstanceLoginAuditLogList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceLoginAuditLogList& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceLoginAuditLog, instanceLoginAuditLog_);
      };
      friend void from_json(const Darabonba::Json& j, InstanceLoginAuditLogList& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceLoginAuditLog, instanceLoginAuditLog_);
      };
      InstanceLoginAuditLogList() = default ;
      InstanceLoginAuditLogList(const InstanceLoginAuditLogList &) = default ;
      InstanceLoginAuditLogList(InstanceLoginAuditLogList &&) = default ;
      InstanceLoginAuditLogList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstanceLoginAuditLogList() = default ;
      InstanceLoginAuditLogList& operator=(const InstanceLoginAuditLogList &) = default ;
      InstanceLoginAuditLogList& operator=(InstanceLoginAuditLogList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class InstanceLoginAuditLog : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InstanceLoginAuditLog& obj) { 
          DARABONBA_PTR_TO_JSON(DbUser, dbUser_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
          DARABONBA_PTR_TO_JSON(OpTime, opTime_);
          DARABONBA_PTR_TO_JSON(RequestIp, requestIp_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
          DARABONBA_PTR_TO_JSON(UserName, userName_);
        };
        friend void from_json(const Darabonba::Json& j, InstanceLoginAuditLog& obj) { 
          DARABONBA_PTR_FROM_JSON(DbUser, dbUser_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
          DARABONBA_PTR_FROM_JSON(OpTime, opTime_);
          DARABONBA_PTR_FROM_JSON(RequestIp, requestIp_);
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
          DARABONBA_PTR_FROM_JSON(UserName, userName_);
        };
        InstanceLoginAuditLog() = default ;
        InstanceLoginAuditLog(const InstanceLoginAuditLog &) = default ;
        InstanceLoginAuditLog(InstanceLoginAuditLog &&) = default ;
        InstanceLoginAuditLog(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InstanceLoginAuditLog() = default ;
        InstanceLoginAuditLog& operator=(const InstanceLoginAuditLog &) = default ;
        InstanceLoginAuditLog& operator=(InstanceLoginAuditLog &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->dbUser_ == nullptr
        && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->opTime_ == nullptr && this->requestIp_ == nullptr && this->userId_ == nullptr
        && this->userName_ == nullptr; };
        // dbUser Field Functions 
        bool hasDbUser() const { return this->dbUser_ != nullptr;};
        void deleteDbUser() { this->dbUser_ = nullptr;};
        inline string getDbUser() const { DARABONBA_PTR_GET_DEFAULT(dbUser_, "") };
        inline InstanceLoginAuditLog& setDbUser(string dbUser) { DARABONBA_PTR_SET_VALUE(dbUser_, dbUser) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline int64_t getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, 0L) };
        inline InstanceLoginAuditLog& setInstanceId(int64_t instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // instanceName Field Functions 
        bool hasInstanceName() const { return this->instanceName_ != nullptr;};
        void deleteInstanceName() { this->instanceName_ = nullptr;};
        inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
        inline InstanceLoginAuditLog& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


        // opTime Field Functions 
        bool hasOpTime() const { return this->opTime_ != nullptr;};
        void deleteOpTime() { this->opTime_ = nullptr;};
        inline string getOpTime() const { DARABONBA_PTR_GET_DEFAULT(opTime_, "") };
        inline InstanceLoginAuditLog& setOpTime(string opTime) { DARABONBA_PTR_SET_VALUE(opTime_, opTime) };


        // requestIp Field Functions 
        bool hasRequestIp() const { return this->requestIp_ != nullptr;};
        void deleteRequestIp() { this->requestIp_ = nullptr;};
        inline string getRequestIp() const { DARABONBA_PTR_GET_DEFAULT(requestIp_, "") };
        inline InstanceLoginAuditLog& setRequestIp(string requestIp) { DARABONBA_PTR_SET_VALUE(requestIp_, requestIp) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline int64_t getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
        inline InstanceLoginAuditLog& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


        // userName Field Functions 
        bool hasUserName() const { return this->userName_ != nullptr;};
        void deleteUserName() { this->userName_ = nullptr;};
        inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
        inline InstanceLoginAuditLog& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


      protected:
        // The database account that is used to log on to the instance.
        shared_ptr<string> dbUser_ {};
        // The ID of the instance.
        shared_ptr<int64_t> instanceId_ {};
        // The name of the instance.
        shared_ptr<string> instanceName_ {};
        // The time when the user performed an operation on the instance.
        shared_ptr<string> opTime_ {};
        // The source IP address of the request.
        shared_ptr<string> requestIp_ {};
        // The ID of the user.
        shared_ptr<int64_t> userId_ {};
        // The alias of the user.
        shared_ptr<string> userName_ {};
      };

      virtual bool empty() const override { return this->instanceLoginAuditLog_ == nullptr; };
      // instanceLoginAuditLog Field Functions 
      bool hasInstanceLoginAuditLog() const { return this->instanceLoginAuditLog_ != nullptr;};
      void deleteInstanceLoginAuditLog() { this->instanceLoginAuditLog_ = nullptr;};
      inline const vector<InstanceLoginAuditLogList::InstanceLoginAuditLog> & getInstanceLoginAuditLog() const { DARABONBA_PTR_GET_CONST(instanceLoginAuditLog_, vector<InstanceLoginAuditLogList::InstanceLoginAuditLog>) };
      inline vector<InstanceLoginAuditLogList::InstanceLoginAuditLog> getInstanceLoginAuditLog() { DARABONBA_PTR_GET(instanceLoginAuditLog_, vector<InstanceLoginAuditLogList::InstanceLoginAuditLog>) };
      inline InstanceLoginAuditLogList& setInstanceLoginAuditLog(const vector<InstanceLoginAuditLogList::InstanceLoginAuditLog> & instanceLoginAuditLog) { DARABONBA_PTR_SET_VALUE(instanceLoginAuditLog_, instanceLoginAuditLog) };
      inline InstanceLoginAuditLogList& setInstanceLoginAuditLog(vector<InstanceLoginAuditLogList::InstanceLoginAuditLog> && instanceLoginAuditLog) { DARABONBA_PTR_SET_RVALUE(instanceLoginAuditLog_, instanceLoginAuditLog) };


    protected:
      shared_ptr<vector<InstanceLoginAuditLogList::InstanceLoginAuditLog>> instanceLoginAuditLog_ {};
    };

    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->instanceLoginAuditLogList_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListInstanceLoginAuditLogResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListInstanceLoginAuditLogResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // instanceLoginAuditLogList Field Functions 
    bool hasInstanceLoginAuditLogList() const { return this->instanceLoginAuditLogList_ != nullptr;};
    void deleteInstanceLoginAuditLogList() { this->instanceLoginAuditLogList_ = nullptr;};
    inline const ListInstanceLoginAuditLogResponseBody::InstanceLoginAuditLogList & getInstanceLoginAuditLogList() const { DARABONBA_PTR_GET_CONST(instanceLoginAuditLogList_, ListInstanceLoginAuditLogResponseBody::InstanceLoginAuditLogList) };
    inline ListInstanceLoginAuditLogResponseBody::InstanceLoginAuditLogList getInstanceLoginAuditLogList() { DARABONBA_PTR_GET(instanceLoginAuditLogList_, ListInstanceLoginAuditLogResponseBody::InstanceLoginAuditLogList) };
    inline ListInstanceLoginAuditLogResponseBody& setInstanceLoginAuditLogList(const ListInstanceLoginAuditLogResponseBody::InstanceLoginAuditLogList & instanceLoginAuditLogList) { DARABONBA_PTR_SET_VALUE(instanceLoginAuditLogList_, instanceLoginAuditLogList) };
    inline ListInstanceLoginAuditLogResponseBody& setInstanceLoginAuditLogList(ListInstanceLoginAuditLogResponseBody::InstanceLoginAuditLogList && instanceLoginAuditLogList) { DARABONBA_PTR_SET_RVALUE(instanceLoginAuditLogList_, instanceLoginAuditLogList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListInstanceLoginAuditLogResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListInstanceLoginAuditLogResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListInstanceLoginAuditLogResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The error code returned.
    shared_ptr<string> errorCode_ {};
    // The error message returned.
    shared_ptr<string> errorMessage_ {};
    // The logon records of the instance.
    shared_ptr<ListInstanceLoginAuditLogResponseBody::InstanceLoginAuditLogList> instanceLoginAuditLogList_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request failed.
    shared_ptr<bool> success_ {};
    // The number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
