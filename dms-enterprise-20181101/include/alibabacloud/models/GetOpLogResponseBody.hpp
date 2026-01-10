// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOPLOGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETOPLOGRESPONSEBODY_HPP_
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
  class GetOpLogResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOpLogResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(OpLogDetails, opLogDetails_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetOpLogResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(OpLogDetails, opLogDetails_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    GetOpLogResponseBody() = default ;
    GetOpLogResponseBody(const GetOpLogResponseBody &) = default ;
    GetOpLogResponseBody(GetOpLogResponseBody &&) = default ;
    GetOpLogResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOpLogResponseBody() = default ;
    GetOpLogResponseBody& operator=(const GetOpLogResponseBody &) = default ;
    GetOpLogResponseBody& operator=(GetOpLogResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class OpLogDetails : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OpLogDetails& obj) { 
        DARABONBA_PTR_TO_JSON(OpLogDetail, opLogDetail_);
      };
      friend void from_json(const Darabonba::Json& j, OpLogDetails& obj) { 
        DARABONBA_PTR_FROM_JSON(OpLogDetail, opLogDetail_);
      };
      OpLogDetails() = default ;
      OpLogDetails(const OpLogDetails &) = default ;
      OpLogDetails(OpLogDetails &&) = default ;
      OpLogDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OpLogDetails() = default ;
      OpLogDetails& operator=(const OpLogDetails &) = default ;
      OpLogDetails& operator=(OpLogDetails &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class OpLogDetail : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OpLogDetail& obj) { 
          DARABONBA_PTR_TO_JSON(Database, database_);
          DARABONBA_PTR_TO_JSON(Module, module_);
          DARABONBA_PTR_TO_JSON(OpContent, opContent_);
          DARABONBA_PTR_TO_JSON(OpTime, opTime_);
          DARABONBA_PTR_TO_JSON(OpUserId, opUserId_);
          DARABONBA_PTR_TO_JSON(OrderId, orderId_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
          DARABONBA_PTR_TO_JSON(UserNick, userNick_);
        };
        friend void from_json(const Darabonba::Json& j, OpLogDetail& obj) { 
          DARABONBA_PTR_FROM_JSON(Database, database_);
          DARABONBA_PTR_FROM_JSON(Module, module_);
          DARABONBA_PTR_FROM_JSON(OpContent, opContent_);
          DARABONBA_PTR_FROM_JSON(OpTime, opTime_);
          DARABONBA_PTR_FROM_JSON(OpUserId, opUserId_);
          DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
          DARABONBA_PTR_FROM_JSON(UserNick, userNick_);
        };
        OpLogDetail() = default ;
        OpLogDetail(const OpLogDetail &) = default ;
        OpLogDetail(OpLogDetail &&) = default ;
        OpLogDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OpLogDetail() = default ;
        OpLogDetail& operator=(const OpLogDetail &) = default ;
        OpLogDetail& operator=(OpLogDetail &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->database_ == nullptr
        && this->module_ == nullptr && this->opContent_ == nullptr && this->opTime_ == nullptr && this->opUserId_ == nullptr && this->orderId_ == nullptr
        && this->userId_ == nullptr && this->userNick_ == nullptr; };
        // database Field Functions 
        bool hasDatabase() const { return this->database_ != nullptr;};
        void deleteDatabase() { this->database_ = nullptr;};
        inline string getDatabase() const { DARABONBA_PTR_GET_DEFAULT(database_, "") };
        inline OpLogDetail& setDatabase(string database) { DARABONBA_PTR_SET_VALUE(database_, database) };


        // module Field Functions 
        bool hasModule() const { return this->module_ != nullptr;};
        void deleteModule() { this->module_ = nullptr;};
        inline string getModule() const { DARABONBA_PTR_GET_DEFAULT(module_, "") };
        inline OpLogDetail& setModule(string module) { DARABONBA_PTR_SET_VALUE(module_, module) };


        // opContent Field Functions 
        bool hasOpContent() const { return this->opContent_ != nullptr;};
        void deleteOpContent() { this->opContent_ = nullptr;};
        inline string getOpContent() const { DARABONBA_PTR_GET_DEFAULT(opContent_, "") };
        inline OpLogDetail& setOpContent(string opContent) { DARABONBA_PTR_SET_VALUE(opContent_, opContent) };


        // opTime Field Functions 
        bool hasOpTime() const { return this->opTime_ != nullptr;};
        void deleteOpTime() { this->opTime_ = nullptr;};
        inline string getOpTime() const { DARABONBA_PTR_GET_DEFAULT(opTime_, "") };
        inline OpLogDetail& setOpTime(string opTime) { DARABONBA_PTR_SET_VALUE(opTime_, opTime) };


        // opUserId Field Functions 
        bool hasOpUserId() const { return this->opUserId_ != nullptr;};
        void deleteOpUserId() { this->opUserId_ = nullptr;};
        inline int64_t getOpUserId() const { DARABONBA_PTR_GET_DEFAULT(opUserId_, 0L) };
        inline OpLogDetail& setOpUserId(int64_t opUserId) { DARABONBA_PTR_SET_VALUE(opUserId_, opUserId) };


        // orderId Field Functions 
        bool hasOrderId() const { return this->orderId_ != nullptr;};
        void deleteOrderId() { this->orderId_ = nullptr;};
        inline int64_t getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
        inline OpLogDetail& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline OpLogDetail& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


        // userNick Field Functions 
        bool hasUserNick() const { return this->userNick_ != nullptr;};
        void deleteUserNick() { this->userNick_ = nullptr;};
        inline string getUserNick() const { DARABONBA_PTR_GET_DEFAULT(userNick_, "") };
        inline OpLogDetail& setUserNick(string userNick) { DARABONBA_PTR_SET_VALUE(userNick_, userNick) };


      protected:
        // The endpoint of the database instance.
        // 
        // > 
        // 
        // *   This parameter is valid only for database instances of the LocalInstance type.
        // 
        // *   This parameter is valid only for operations on the functional modules related to tasks.
        shared_ptr<string> database_ {};
        // The functional module for which the operation log is queried.
        shared_ptr<string> module_ {};
        // The details of the operation.
        shared_ptr<string> opContent_ {};
        // The time when the operation was performed.
        shared_ptr<string> opTime_ {};
        // The ID of the user who performed the operation.
        shared_ptr<int64_t> opUserId_ {};
        // The ID of the ticket or task.
        // 
        // >  This parameter is valid only for operations on the functional modules related to tasks and the task management module in system management.
        shared_ptr<int64_t> orderId_ {};
        // The ID of the Alibaba Cloud account.
        shared_ptr<string> userId_ {};
        // The display name of the user.
        shared_ptr<string> userNick_ {};
      };

      virtual bool empty() const override { return this->opLogDetail_ == nullptr; };
      // opLogDetail Field Functions 
      bool hasOpLogDetail() const { return this->opLogDetail_ != nullptr;};
      void deleteOpLogDetail() { this->opLogDetail_ = nullptr;};
      inline const vector<OpLogDetails::OpLogDetail> & getOpLogDetail() const { DARABONBA_PTR_GET_CONST(opLogDetail_, vector<OpLogDetails::OpLogDetail>) };
      inline vector<OpLogDetails::OpLogDetail> getOpLogDetail() { DARABONBA_PTR_GET(opLogDetail_, vector<OpLogDetails::OpLogDetail>) };
      inline OpLogDetails& setOpLogDetail(const vector<OpLogDetails::OpLogDetail> & opLogDetail) { DARABONBA_PTR_SET_VALUE(opLogDetail_, opLogDetail) };
      inline OpLogDetails& setOpLogDetail(vector<OpLogDetails::OpLogDetail> && opLogDetail) { DARABONBA_PTR_SET_RVALUE(opLogDetail_, opLogDetail) };


    protected:
      shared_ptr<vector<OpLogDetails::OpLogDetail>> opLogDetail_ {};
    };

    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->opLogDetails_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetOpLogResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetOpLogResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // opLogDetails Field Functions 
    bool hasOpLogDetails() const { return this->opLogDetails_ != nullptr;};
    void deleteOpLogDetails() { this->opLogDetails_ = nullptr;};
    inline const GetOpLogResponseBody::OpLogDetails & getOpLogDetails() const { DARABONBA_PTR_GET_CONST(opLogDetails_, GetOpLogResponseBody::OpLogDetails) };
    inline GetOpLogResponseBody::OpLogDetails getOpLogDetails() { DARABONBA_PTR_GET(opLogDetails_, GetOpLogResponseBody::OpLogDetails) };
    inline GetOpLogResponseBody& setOpLogDetails(const GetOpLogResponseBody::OpLogDetails & opLogDetails) { DARABONBA_PTR_SET_VALUE(opLogDetails_, opLogDetails) };
    inline GetOpLogResponseBody& setOpLogDetails(GetOpLogResponseBody::OpLogDetails && opLogDetails) { DARABONBA_PTR_SET_RVALUE(opLogDetails_, opLogDetails) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetOpLogResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetOpLogResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline GetOpLogResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The error code.
    shared_ptr<string> errorCode_ {};
    // The error message returned if the request failed.
    shared_ptr<string> errorMessage_ {};
    // The details of the operation log.
    shared_ptr<GetOpLogResponseBody::OpLogDetails> opLogDetails_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request failed.
    shared_ptr<bool> success_ {};
    // The total number of operation logs that are returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
