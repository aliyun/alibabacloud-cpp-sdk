// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTASKSTATSSUMMARYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTASKSTATSSUMMARYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentTeams20260605
{
namespace Models
{
  class GetTaskStatsSummaryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTaskStatsSummaryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetTaskStatsSummaryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetTaskStatsSummaryResponseBody() = default ;
    GetTaskStatsSummaryResponseBody(const GetTaskStatsSummaryResponseBody &) = default ;
    GetTaskStatsSummaryResponseBody(GetTaskStatsSummaryResponseBody &&) = default ;
    GetTaskStatsSummaryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTaskStatsSummaryResponseBody() = default ;
    GetTaskStatsSummaryResponseBody& operator=(const GetTaskStatsSummaryResponseBody &) = default ;
    GetTaskStatsSummaryResponseBody& operator=(GetTaskStatsSummaryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AverageTaskDuration, averageTaskDuration_);
        DARABONBA_PTR_TO_JSON(StatusDistribution, statusDistribution_);
        DARABONBA_PTR_TO_JSON(TaskTokenConsumption, taskTokenConsumption_);
        DARABONBA_PTR_TO_JSON(TotalTasks, totalTasks_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AverageTaskDuration, averageTaskDuration_);
        DARABONBA_PTR_FROM_JSON(StatusDistribution, statusDistribution_);
        DARABONBA_PTR_FROM_JSON(TaskTokenConsumption, taskTokenConsumption_);
        DARABONBA_PTR_FROM_JSON(TotalTasks, totalTasks_);
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
      class StatusDistribution : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const StatusDistribution& obj) { 
          DARABONBA_PTR_TO_JSON(Count, count_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, StatusDistribution& obj) { 
          DARABONBA_PTR_FROM_JSON(Count, count_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        StatusDistribution() = default ;
        StatusDistribution(const StatusDistribution &) = default ;
        StatusDistribution(StatusDistribution &&) = default ;
        StatusDistribution(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~StatusDistribution() = default ;
        StatusDistribution& operator=(const StatusDistribution &) = default ;
        StatusDistribution& operator=(StatusDistribution &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->count_ == nullptr
        && this->status_ == nullptr; };
        // count Field Functions 
        bool hasCount() const { return this->count_ != nullptr;};
        void deleteCount() { this->count_ = nullptr;};
        inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
        inline StatusDistribution& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline StatusDistribution& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        shared_ptr<int32_t> count_ {};
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->averageTaskDuration_ == nullptr
        && this->statusDistribution_ == nullptr && this->taskTokenConsumption_ == nullptr && this->totalTasks_ == nullptr; };
      // averageTaskDuration Field Functions 
      bool hasAverageTaskDuration() const { return this->averageTaskDuration_ != nullptr;};
      void deleteAverageTaskDuration() { this->averageTaskDuration_ = nullptr;};
      inline double getAverageTaskDuration() const { DARABONBA_PTR_GET_DEFAULT(averageTaskDuration_, 0.0) };
      inline Data& setAverageTaskDuration(double averageTaskDuration) { DARABONBA_PTR_SET_VALUE(averageTaskDuration_, averageTaskDuration) };


      // statusDistribution Field Functions 
      bool hasStatusDistribution() const { return this->statusDistribution_ != nullptr;};
      void deleteStatusDistribution() { this->statusDistribution_ = nullptr;};
      inline const vector<Data::StatusDistribution> & getStatusDistribution() const { DARABONBA_PTR_GET_CONST(statusDistribution_, vector<Data::StatusDistribution>) };
      inline vector<Data::StatusDistribution> getStatusDistribution() { DARABONBA_PTR_GET(statusDistribution_, vector<Data::StatusDistribution>) };
      inline Data& setStatusDistribution(const vector<Data::StatusDistribution> & statusDistribution) { DARABONBA_PTR_SET_VALUE(statusDistribution_, statusDistribution) };
      inline Data& setStatusDistribution(vector<Data::StatusDistribution> && statusDistribution) { DARABONBA_PTR_SET_RVALUE(statusDistribution_, statusDistribution) };


      // taskTokenConsumption Field Functions 
      bool hasTaskTokenConsumption() const { return this->taskTokenConsumption_ != nullptr;};
      void deleteTaskTokenConsumption() { this->taskTokenConsumption_ = nullptr;};
      inline int64_t getTaskTokenConsumption() const { DARABONBA_PTR_GET_DEFAULT(taskTokenConsumption_, 0L) };
      inline Data& setTaskTokenConsumption(int64_t taskTokenConsumption) { DARABONBA_PTR_SET_VALUE(taskTokenConsumption_, taskTokenConsumption) };


      // totalTasks Field Functions 
      bool hasTotalTasks() const { return this->totalTasks_ != nullptr;};
      void deleteTotalTasks() { this->totalTasks_ = nullptr;};
      inline int32_t getTotalTasks() const { DARABONBA_PTR_GET_DEFAULT(totalTasks_, 0) };
      inline Data& setTotalTasks(int32_t totalTasks) { DARABONBA_PTR_SET_VALUE(totalTasks_, totalTasks) };


    protected:
      shared_ptr<double> averageTaskDuration_ {};
      shared_ptr<vector<Data::StatusDistribution>> statusDistribution_ {};
      shared_ptr<int64_t> taskTokenConsumption_ {};
      shared_ptr<int32_t> totalTasks_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetTaskStatsSummaryResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetTaskStatsSummaryResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetTaskStatsSummaryResponseBody::Data) };
    inline GetTaskStatsSummaryResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetTaskStatsSummaryResponseBody::Data) };
    inline GetTaskStatsSummaryResponseBody& setData(const GetTaskStatsSummaryResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetTaskStatsSummaryResponseBody& setData(GetTaskStatsSummaryResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetTaskStatsSummaryResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetTaskStatsSummaryResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTaskStatsSummaryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetTaskStatsSummaryResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetTaskStatsSummaryResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentTeams20260605
#endif
