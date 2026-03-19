// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRECHECKPROGRESSLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRECHECKPROGRESSLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dbs20190306
{
namespace Models
{
  class DescribePreCheckProgressListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePreCheckProgressListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(Progress, progress_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePreCheckProgressListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(Progress, progress_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribePreCheckProgressListResponseBody() = default ;
    DescribePreCheckProgressListResponseBody(const DescribePreCheckProgressListResponseBody &) = default ;
    DescribePreCheckProgressListResponseBody(DescribePreCheckProgressListResponseBody &&) = default ;
    DescribePreCheckProgressListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePreCheckProgressListResponseBody() = default ;
    DescribePreCheckProgressListResponseBody& operator=(const DescribePreCheckProgressListResponseBody &) = default ;
    DescribePreCheckProgressListResponseBody& operator=(DescribePreCheckProgressListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(PreCheckProgressDetail, preCheckProgressDetail_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(PreCheckProgressDetail, preCheckProgressDetail_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PreCheckProgressDetail : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PreCheckProgressDetail& obj) { 
          DARABONBA_PTR_TO_JSON(BootTime, bootTime_);
          DARABONBA_PTR_TO_JSON(ErrMsg, errMsg_);
          DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
          DARABONBA_PTR_TO_JSON(Item, item_);
          DARABONBA_PTR_TO_JSON(JobId, jobId_);
          DARABONBA_PTR_TO_JSON(Names, names_);
          DARABONBA_PTR_TO_JSON(OrderNum, orderNum_);
          DARABONBA_PTR_TO_JSON(State, state_);
        };
        friend void from_json(const Darabonba::Json& j, PreCheckProgressDetail& obj) { 
          DARABONBA_PTR_FROM_JSON(BootTime, bootTime_);
          DARABONBA_PTR_FROM_JSON(ErrMsg, errMsg_);
          DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
          DARABONBA_PTR_FROM_JSON(Item, item_);
          DARABONBA_PTR_FROM_JSON(JobId, jobId_);
          DARABONBA_PTR_FROM_JSON(Names, names_);
          DARABONBA_PTR_FROM_JSON(OrderNum, orderNum_);
          DARABONBA_PTR_FROM_JSON(State, state_);
        };
        PreCheckProgressDetail() = default ;
        PreCheckProgressDetail(const PreCheckProgressDetail &) = default ;
        PreCheckProgressDetail(PreCheckProgressDetail &&) = default ;
        PreCheckProgressDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PreCheckProgressDetail() = default ;
        PreCheckProgressDetail& operator=(const PreCheckProgressDetail &) = default ;
        PreCheckProgressDetail& operator=(PreCheckProgressDetail &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bootTime_ == nullptr
        && this->errMsg_ == nullptr && this->finishTime_ == nullptr && this->item_ == nullptr && this->jobId_ == nullptr && this->names_ == nullptr
        && this->orderNum_ == nullptr && this->state_ == nullptr; };
        // bootTime Field Functions 
        bool hasBootTime() const { return this->bootTime_ != nullptr;};
        void deleteBootTime() { this->bootTime_ = nullptr;};
        inline int64_t getBootTime() const { DARABONBA_PTR_GET_DEFAULT(bootTime_, 0L) };
        inline PreCheckProgressDetail& setBootTime(int64_t bootTime) { DARABONBA_PTR_SET_VALUE(bootTime_, bootTime) };


        // errMsg Field Functions 
        bool hasErrMsg() const { return this->errMsg_ != nullptr;};
        void deleteErrMsg() { this->errMsg_ = nullptr;};
        inline string getErrMsg() const { DARABONBA_PTR_GET_DEFAULT(errMsg_, "") };
        inline PreCheckProgressDetail& setErrMsg(string errMsg) { DARABONBA_PTR_SET_VALUE(errMsg_, errMsg) };


        // finishTime Field Functions 
        bool hasFinishTime() const { return this->finishTime_ != nullptr;};
        void deleteFinishTime() { this->finishTime_ = nullptr;};
        inline int64_t getFinishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, 0L) };
        inline PreCheckProgressDetail& setFinishTime(int64_t finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


        // item Field Functions 
        bool hasItem() const { return this->item_ != nullptr;};
        void deleteItem() { this->item_ = nullptr;};
        inline string getItem() const { DARABONBA_PTR_GET_DEFAULT(item_, "") };
        inline PreCheckProgressDetail& setItem(string item) { DARABONBA_PTR_SET_VALUE(item_, item) };


        // jobId Field Functions 
        bool hasJobId() const { return this->jobId_ != nullptr;};
        void deleteJobId() { this->jobId_ = nullptr;};
        inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
        inline PreCheckProgressDetail& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


        // names Field Functions 
        bool hasNames() const { return this->names_ != nullptr;};
        void deleteNames() { this->names_ = nullptr;};
        inline string getNames() const { DARABONBA_PTR_GET_DEFAULT(names_, "") };
        inline PreCheckProgressDetail& setNames(string names) { DARABONBA_PTR_SET_VALUE(names_, names) };


        // orderNum Field Functions 
        bool hasOrderNum() const { return this->orderNum_ != nullptr;};
        void deleteOrderNum() { this->orderNum_ = nullptr;};
        inline string getOrderNum() const { DARABONBA_PTR_GET_DEFAULT(orderNum_, "") };
        inline PreCheckProgressDetail& setOrderNum(string orderNum) { DARABONBA_PTR_SET_VALUE(orderNum_, orderNum) };


        // state Field Functions 
        bool hasState() const { return this->state_ != nullptr;};
        void deleteState() { this->state_ = nullptr;};
        inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
        inline PreCheckProgressDetail& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      protected:
        shared_ptr<int64_t> bootTime_ {};
        shared_ptr<string> errMsg_ {};
        shared_ptr<int64_t> finishTime_ {};
        shared_ptr<string> item_ {};
        shared_ptr<string> jobId_ {};
        shared_ptr<string> names_ {};
        shared_ptr<string> orderNum_ {};
        shared_ptr<string> state_ {};
      };

      virtual bool empty() const override { return this->preCheckProgressDetail_ == nullptr; };
      // preCheckProgressDetail Field Functions 
      bool hasPreCheckProgressDetail() const { return this->preCheckProgressDetail_ != nullptr;};
      void deletePreCheckProgressDetail() { this->preCheckProgressDetail_ = nullptr;};
      inline const vector<Items::PreCheckProgressDetail> & getPreCheckProgressDetail() const { DARABONBA_PTR_GET_CONST(preCheckProgressDetail_, vector<Items::PreCheckProgressDetail>) };
      inline vector<Items::PreCheckProgressDetail> getPreCheckProgressDetail() { DARABONBA_PTR_GET(preCheckProgressDetail_, vector<Items::PreCheckProgressDetail>) };
      inline Items& setPreCheckProgressDetail(const vector<Items::PreCheckProgressDetail> & preCheckProgressDetail) { DARABONBA_PTR_SET_VALUE(preCheckProgressDetail_, preCheckProgressDetail) };
      inline Items& setPreCheckProgressDetail(vector<Items::PreCheckProgressDetail> && preCheckProgressDetail) { DARABONBA_PTR_SET_RVALUE(preCheckProgressDetail_, preCheckProgressDetail) };


    protected:
      shared_ptr<vector<Items::PreCheckProgressDetail>> preCheckProgressDetail_ {};
    };

    virtual bool empty() const override { return this->errCode_ == nullptr
        && this->errMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->items_ == nullptr && this->progress_ == nullptr && this->requestId_ == nullptr
        && this->status_ == nullptr && this->success_ == nullptr; };
    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline DescribePreCheckProgressListResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline DescribePreCheckProgressListResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DescribePreCheckProgressListResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const DescribePreCheckProgressListResponseBody::Items & getItems() const { DARABONBA_PTR_GET_CONST(items_, DescribePreCheckProgressListResponseBody::Items) };
    inline DescribePreCheckProgressListResponseBody::Items getItems() { DARABONBA_PTR_GET(items_, DescribePreCheckProgressListResponseBody::Items) };
    inline DescribePreCheckProgressListResponseBody& setItems(const DescribePreCheckProgressListResponseBody::Items & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribePreCheckProgressListResponseBody& setItems(DescribePreCheckProgressListResponseBody::Items && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline int32_t getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0) };
    inline DescribePreCheckProgressListResponseBody& setProgress(int32_t progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePreCheckProgressListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribePreCheckProgressListResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribePreCheckProgressListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code.
    shared_ptr<string> errCode_ {};
    // The error message.
    shared_ptr<string> errMessage_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<DescribePreCheckProgressListResponseBody::Items> items_ {};
    // The precheck progress. The value ranges from 0 to 100.
    shared_ptr<int32_t> progress_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The precheck status. Valid values:
    // 
    // - **running**: The precheck is in progress.
    // 
    // - **failed**: The precheck failed.
    // 
    // - **finish**: The precheck is complete.
    shared_ptr<string> status_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // - **true**: The request was successful.
    // 
    // - **false**: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dbs20190306
#endif
