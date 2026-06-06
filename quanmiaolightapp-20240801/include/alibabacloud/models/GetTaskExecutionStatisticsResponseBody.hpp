// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTASKEXECUTIONSTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTASKEXECUTIONSTATISTICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class GetTaskExecutionStatisticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTaskExecutionStatisticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetTaskExecutionStatisticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    GetTaskExecutionStatisticsResponseBody() = default ;
    GetTaskExecutionStatisticsResponseBody(const GetTaskExecutionStatisticsResponseBody &) = default ;
    GetTaskExecutionStatisticsResponseBody(GetTaskExecutionStatisticsResponseBody &&) = default ;
    GetTaskExecutionStatisticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTaskExecutionStatisticsResponseBody() = default ;
    GetTaskExecutionStatisticsResponseBody& operator=(const GetTaskExecutionStatisticsResponseBody &) = default ;
    GetTaskExecutionStatisticsResponseBody& operator=(GetTaskExecutionStatisticsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(completedCount, completedCount_);
        DARABONBA_PTR_TO_JSON(runningCount, runningCount_);
        DARABONBA_PTR_TO_JSON(tpmPerMinute, tpmPerMinute_);
        DARABONBA_PTR_TO_JSON(waitingCount, waitingCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(completedCount, completedCount_);
        DARABONBA_PTR_FROM_JSON(runningCount, runningCount_);
        DARABONBA_PTR_FROM_JSON(tpmPerMinute, tpmPerMinute_);
        DARABONBA_PTR_FROM_JSON(waitingCount, waitingCount_);
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
      class TpmPerMinute : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TpmPerMinute& obj) { 
          DARABONBA_PTR_TO_JSON(count, count_);
          DARABONBA_PTR_TO_JSON(time, time_);
        };
        friend void from_json(const Darabonba::Json& j, TpmPerMinute& obj) { 
          DARABONBA_PTR_FROM_JSON(count, count_);
          DARABONBA_PTR_FROM_JSON(time, time_);
        };
        TpmPerMinute() = default ;
        TpmPerMinute(const TpmPerMinute &) = default ;
        TpmPerMinute(TpmPerMinute &&) = default ;
        TpmPerMinute(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TpmPerMinute() = default ;
        TpmPerMinute& operator=(const TpmPerMinute &) = default ;
        TpmPerMinute& operator=(TpmPerMinute &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->count_ == nullptr
        && this->time_ == nullptr; };
        // count Field Functions 
        bool hasCount() const { return this->count_ != nullptr;};
        void deleteCount() { this->count_ = nullptr;};
        inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
        inline TpmPerMinute& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


        // time Field Functions 
        bool hasTime() const { return this->time_ != nullptr;};
        void deleteTime() { this->time_ = nullptr;};
        inline string getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
        inline TpmPerMinute& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


      protected:
        shared_ptr<int64_t> count_ {};
        shared_ptr<string> time_ {};
      };

      virtual bool empty() const override { return this->completedCount_ == nullptr
        && this->runningCount_ == nullptr && this->tpmPerMinute_ == nullptr && this->waitingCount_ == nullptr; };
      // completedCount Field Functions 
      bool hasCompletedCount() const { return this->completedCount_ != nullptr;};
      void deleteCompletedCount() { this->completedCount_ = nullptr;};
      inline int64_t getCompletedCount() const { DARABONBA_PTR_GET_DEFAULT(completedCount_, 0L) };
      inline Data& setCompletedCount(int64_t completedCount) { DARABONBA_PTR_SET_VALUE(completedCount_, completedCount) };


      // runningCount Field Functions 
      bool hasRunningCount() const { return this->runningCount_ != nullptr;};
      void deleteRunningCount() { this->runningCount_ = nullptr;};
      inline int64_t getRunningCount() const { DARABONBA_PTR_GET_DEFAULT(runningCount_, 0L) };
      inline Data& setRunningCount(int64_t runningCount) { DARABONBA_PTR_SET_VALUE(runningCount_, runningCount) };


      // tpmPerMinute Field Functions 
      bool hasTpmPerMinute() const { return this->tpmPerMinute_ != nullptr;};
      void deleteTpmPerMinute() { this->tpmPerMinute_ = nullptr;};
      inline const vector<Data::TpmPerMinute> & getTpmPerMinute() const { DARABONBA_PTR_GET_CONST(tpmPerMinute_, vector<Data::TpmPerMinute>) };
      inline vector<Data::TpmPerMinute> getTpmPerMinute() { DARABONBA_PTR_GET(tpmPerMinute_, vector<Data::TpmPerMinute>) };
      inline Data& setTpmPerMinute(const vector<Data::TpmPerMinute> & tpmPerMinute) { DARABONBA_PTR_SET_VALUE(tpmPerMinute_, tpmPerMinute) };
      inline Data& setTpmPerMinute(vector<Data::TpmPerMinute> && tpmPerMinute) { DARABONBA_PTR_SET_RVALUE(tpmPerMinute_, tpmPerMinute) };


      // waitingCount Field Functions 
      bool hasWaitingCount() const { return this->waitingCount_ != nullptr;};
      void deleteWaitingCount() { this->waitingCount_ = nullptr;};
      inline int64_t getWaitingCount() const { DARABONBA_PTR_GET_DEFAULT(waitingCount_, 0L) };
      inline Data& setWaitingCount(int64_t waitingCount) { DARABONBA_PTR_SET_VALUE(waitingCount_, waitingCount) };


    protected:
      shared_ptr<int64_t> completedCount_ {};
      shared_ptr<int64_t> runningCount_ {};
      shared_ptr<vector<Data::TpmPerMinute>> tpmPerMinute_ {};
      shared_ptr<int64_t> waitingCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetTaskExecutionStatisticsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetTaskExecutionStatisticsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetTaskExecutionStatisticsResponseBody::Data) };
    inline GetTaskExecutionStatisticsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetTaskExecutionStatisticsResponseBody::Data) };
    inline GetTaskExecutionStatisticsResponseBody& setData(const GetTaskExecutionStatisticsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetTaskExecutionStatisticsResponseBody& setData(GetTaskExecutionStatisticsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetTaskExecutionStatisticsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetTaskExecutionStatisticsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTaskExecutionStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetTaskExecutionStatisticsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetTaskExecutionStatisticsResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
