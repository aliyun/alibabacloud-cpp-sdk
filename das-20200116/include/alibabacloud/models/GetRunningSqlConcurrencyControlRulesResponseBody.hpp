// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRUNNINGSQLCONCURRENCYCONTROLRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRUNNINGSQLCONCURRENCYCONTROLRULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetRunningSqlConcurrencyControlRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRunningSqlConcurrencyControlRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetRunningSqlConcurrencyControlRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetRunningSqlConcurrencyControlRulesResponseBody() = default ;
    GetRunningSqlConcurrencyControlRulesResponseBody(const GetRunningSqlConcurrencyControlRulesResponseBody &) = default ;
    GetRunningSqlConcurrencyControlRulesResponseBody(GetRunningSqlConcurrencyControlRulesResponseBody &&) = default ;
    GetRunningSqlConcurrencyControlRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRunningSqlConcurrencyControlRulesResponseBody() = default ;
    GetRunningSqlConcurrencyControlRulesResponseBody& operator=(const GetRunningSqlConcurrencyControlRulesResponseBody &) = default ;
    GetRunningSqlConcurrencyControlRulesResponseBody& operator=(GetRunningSqlConcurrencyControlRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(List, list_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(List, list_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class List : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const List& obj) { 
          DARABONBA_PTR_TO_JSON(runningRules, runningRules_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(runningRules, runningRules_);
        };
        List() = default ;
        List(const List &) = default ;
        List(List &&) = default ;
        List(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~List() = default ;
        List& operator=(const List &) = default ;
        List& operator=(List &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class RunningRules : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RunningRules& obj) { 
            DARABONBA_PTR_TO_JSON(ConcurrencyControlTime, concurrencyControlTime_);
            DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
            DARABONBA_PTR_TO_JSON(ItemId, itemId_);
            DARABONBA_PTR_TO_JSON(KeywordsHash, keywordsHash_);
            DARABONBA_PTR_TO_JSON(MaxConcurrency, maxConcurrency_);
            DARABONBA_PTR_TO_JSON(SqlKeywords, sqlKeywords_);
            DARABONBA_PTR_TO_JSON(SqlType, sqlType_);
            DARABONBA_PTR_TO_JSON(StartTime, startTime_);
            DARABONBA_PTR_TO_JSON(Status, status_);
            DARABONBA_PTR_TO_JSON(UserId, userId_);
          };
          friend void from_json(const Darabonba::Json& j, RunningRules& obj) { 
            DARABONBA_PTR_FROM_JSON(ConcurrencyControlTime, concurrencyControlTime_);
            DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
            DARABONBA_PTR_FROM_JSON(ItemId, itemId_);
            DARABONBA_PTR_FROM_JSON(KeywordsHash, keywordsHash_);
            DARABONBA_PTR_FROM_JSON(MaxConcurrency, maxConcurrency_);
            DARABONBA_PTR_FROM_JSON(SqlKeywords, sqlKeywords_);
            DARABONBA_PTR_FROM_JSON(SqlType, sqlType_);
            DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
            DARABONBA_PTR_FROM_JSON(Status, status_);
            DARABONBA_PTR_FROM_JSON(UserId, userId_);
          };
          RunningRules() = default ;
          RunningRules(const RunningRules &) = default ;
          RunningRules(RunningRules &&) = default ;
          RunningRules(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RunningRules() = default ;
          RunningRules& operator=(const RunningRules &) = default ;
          RunningRules& operator=(RunningRules &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->concurrencyControlTime_ == nullptr
        && this->instanceId_ == nullptr && this->itemId_ == nullptr && this->keywordsHash_ == nullptr && this->maxConcurrency_ == nullptr && this->sqlKeywords_ == nullptr
        && this->sqlType_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr && this->userId_ == nullptr; };
          // concurrencyControlTime Field Functions 
          bool hasConcurrencyControlTime() const { return this->concurrencyControlTime_ != nullptr;};
          void deleteConcurrencyControlTime() { this->concurrencyControlTime_ = nullptr;};
          inline int64_t getConcurrencyControlTime() const { DARABONBA_PTR_GET_DEFAULT(concurrencyControlTime_, 0L) };
          inline RunningRules& setConcurrencyControlTime(int64_t concurrencyControlTime) { DARABONBA_PTR_SET_VALUE(concurrencyControlTime_, concurrencyControlTime) };


          // instanceId Field Functions 
          bool hasInstanceId() const { return this->instanceId_ != nullptr;};
          void deleteInstanceId() { this->instanceId_ = nullptr;};
          inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
          inline RunningRules& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


          // itemId Field Functions 
          bool hasItemId() const { return this->itemId_ != nullptr;};
          void deleteItemId() { this->itemId_ = nullptr;};
          inline int64_t getItemId() const { DARABONBA_PTR_GET_DEFAULT(itemId_, 0L) };
          inline RunningRules& setItemId(int64_t itemId) { DARABONBA_PTR_SET_VALUE(itemId_, itemId) };


          // keywordsHash Field Functions 
          bool hasKeywordsHash() const { return this->keywordsHash_ != nullptr;};
          void deleteKeywordsHash() { this->keywordsHash_ = nullptr;};
          inline string getKeywordsHash() const { DARABONBA_PTR_GET_DEFAULT(keywordsHash_, "") };
          inline RunningRules& setKeywordsHash(string keywordsHash) { DARABONBA_PTR_SET_VALUE(keywordsHash_, keywordsHash) };


          // maxConcurrency Field Functions 
          bool hasMaxConcurrency() const { return this->maxConcurrency_ != nullptr;};
          void deleteMaxConcurrency() { this->maxConcurrency_ = nullptr;};
          inline string getMaxConcurrency() const { DARABONBA_PTR_GET_DEFAULT(maxConcurrency_, "") };
          inline RunningRules& setMaxConcurrency(string maxConcurrency) { DARABONBA_PTR_SET_VALUE(maxConcurrency_, maxConcurrency) };


          // sqlKeywords Field Functions 
          bool hasSqlKeywords() const { return this->sqlKeywords_ != nullptr;};
          void deleteSqlKeywords() { this->sqlKeywords_ = nullptr;};
          inline string getSqlKeywords() const { DARABONBA_PTR_GET_DEFAULT(sqlKeywords_, "") };
          inline RunningRules& setSqlKeywords(string sqlKeywords) { DARABONBA_PTR_SET_VALUE(sqlKeywords_, sqlKeywords) };


          // sqlType Field Functions 
          bool hasSqlType() const { return this->sqlType_ != nullptr;};
          void deleteSqlType() { this->sqlType_ = nullptr;};
          inline string getSqlType() const { DARABONBA_PTR_GET_DEFAULT(sqlType_, "") };
          inline RunningRules& setSqlType(string sqlType) { DARABONBA_PTR_SET_VALUE(sqlType_, sqlType) };


          // startTime Field Functions 
          bool hasStartTime() const { return this->startTime_ != nullptr;};
          void deleteStartTime() { this->startTime_ = nullptr;};
          inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
          inline RunningRules& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
          inline RunningRules& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


          // userId Field Functions 
          bool hasUserId() const { return this->userId_ != nullptr;};
          void deleteUserId() { this->userId_ = nullptr;};
          inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
          inline RunningRules& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


        protected:
          // The duration within which the SQL throttling rule takes effect. Unit: seconds.
          // 
          // > The throttling rule takes effect only within this duration.
          shared_ptr<int64_t> concurrencyControlTime_ {};
          // The instance ID.
          shared_ptr<string> instanceId_ {};
          // The ID of the throttling rule that is applied to the instance.
          shared_ptr<int64_t> itemId_ {};
          // The hash value of the SQL keywords. The hash value is calculated based on the SQL keywords that are contained in the SQL statements to which the throttling rule is applied.
          shared_ptr<string> keywordsHash_ {};
          // The maximum number of concurrent SQL statements. The value is a positive integer.
          // 
          // > If the number of concurrent SQL statements that contain the specified keywords reaches this upper limit, the throttling rule is triggered.
          shared_ptr<string> maxConcurrency_ {};
          // The keywords contained in the SQL statements to which the throttling rule was applied.
          // 
          // > SQL keywords are separated by tildes (~). If the number of concurrent SQL statements that contain all the specified SQL keywords reaches the specified upper limit, the throttling rule is triggered.
          shared_ptr<string> sqlKeywords_ {};
          // The type of the SQL statements. Valid values:
          // 
          // * **SELECT**
          // * **UPDATE**
          // * **DELETE**
          shared_ptr<string> sqlType_ {};
          // The time when the throttling rule started to take effect. The value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
          shared_ptr<int64_t> startTime_ {};
          // The status of the throttling rule. The value of **Open** indicates that the throttling rule is in effect.
          shared_ptr<string> status_ {};
          // The Alibaba Cloud account ID.
          shared_ptr<string> userId_ {};
        };

        virtual bool empty() const override { return this->runningRules_ == nullptr; };
        // runningRules Field Functions 
        bool hasRunningRules() const { return this->runningRules_ != nullptr;};
        void deleteRunningRules() { this->runningRules_ = nullptr;};
        inline const vector<List::RunningRules> & getRunningRules() const { DARABONBA_PTR_GET_CONST(runningRules_, vector<List::RunningRules>) };
        inline vector<List::RunningRules> getRunningRules() { DARABONBA_PTR_GET(runningRules_, vector<List::RunningRules>) };
        inline List& setRunningRules(const vector<List::RunningRules> & runningRules) { DARABONBA_PTR_SET_VALUE(runningRules_, runningRules) };
        inline List& setRunningRules(vector<List::RunningRules> && runningRules) { DARABONBA_PTR_SET_RVALUE(runningRules_, runningRules) };


      protected:
        shared_ptr<vector<List::RunningRules>> runningRules_ {};
      };

      virtual bool empty() const override { return this->list_ == nullptr
        && this->total_ == nullptr; };
      // list Field Functions 
      bool hasList() const { return this->list_ != nullptr;};
      void deleteList() { this->list_ = nullptr;};
      inline const Data::List & getList() const { DARABONBA_PTR_GET_CONST(list_, Data::List) };
      inline Data::List getList() { DARABONBA_PTR_GET(list_, Data::List) };
      inline Data& setList(const Data::List & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
      inline Data& setList(Data::List && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
      inline Data& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      // The returned data.
      shared_ptr<Data::List> list_ {};
      // The total number of entries returned.
      shared_ptr<int64_t> total_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetRunningSqlConcurrencyControlRulesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetRunningSqlConcurrencyControlRulesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetRunningSqlConcurrencyControlRulesResponseBody::Data) };
    inline GetRunningSqlConcurrencyControlRulesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetRunningSqlConcurrencyControlRulesResponseBody::Data) };
    inline GetRunningSqlConcurrencyControlRulesResponseBody& setData(const GetRunningSqlConcurrencyControlRulesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetRunningSqlConcurrencyControlRulesResponseBody& setData(GetRunningSqlConcurrencyControlRulesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetRunningSqlConcurrencyControlRulesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRunningSqlConcurrencyControlRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline GetRunningSqlConcurrencyControlRulesResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code returned.
    shared_ptr<string> code_ {};
    // The detailed information, including the error codes and the number of entries that are returned.
    shared_ptr<GetRunningSqlConcurrencyControlRulesResponseBody::Data> data_ {};
    // The returned message.
    // 
    // >  If the request was successful, Successful is returned. If the request failed, an error message such as an error code is returned.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
