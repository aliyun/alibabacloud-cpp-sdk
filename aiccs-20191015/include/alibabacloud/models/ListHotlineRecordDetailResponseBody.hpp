// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHOTLINERECORDDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTHOTLINERECORDDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class ListHotlineRecordDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHotlineRecordDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultData, resultData_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListHotlineRecordDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultData, resultData_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListHotlineRecordDetailResponseBody() = default ;
    ListHotlineRecordDetailResponseBody(const ListHotlineRecordDetailResponseBody &) = default ;
    ListHotlineRecordDetailResponseBody(ListHotlineRecordDetailResponseBody &&) = default ;
    ListHotlineRecordDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHotlineRecordDetailResponseBody() = default ;
    ListHotlineRecordDetailResponseBody& operator=(const ListHotlineRecordDetailResponseBody &) = default ;
    ListHotlineRecordDetailResponseBody& operator=(ListHotlineRecordDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultData : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultData& obj) { 
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(Data, data_);
        DARABONBA_PTR_TO_JSON(OnePageSize, onePageSize_);
        DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
        DARABONBA_PTR_TO_JSON(TotalResults, totalResults_);
      };
      friend void from_json(const Darabonba::Json& j, ResultData& obj) { 
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(Data, data_);
        DARABONBA_PTR_FROM_JSON(OnePageSize, onePageSize_);
        DARABONBA_PTR_FROM_JSON(TotalPage, totalPage_);
        DARABONBA_PTR_FROM_JSON(TotalResults, totalResults_);
      };
      ResultData() = default ;
      ResultData(const ResultData &) = default ;
      ResultData(ResultData &&) = default ;
      ResultData(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResultData() = default ;
      ResultData& operator=(const ResultData &) = default ;
      ResultData& operator=(ResultData &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Data : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Data& obj) { 
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(OssUrl, ossUrl_);
          DARABONBA_PTR_TO_JSON(ServicerName, servicerName_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        };
        friend void from_json(const Darabonba::Json& j, Data& obj) { 
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(OssUrl, ossUrl_);
          DARABONBA_PTR_FROM_JSON(ServicerName, servicerName_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
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
        virtual bool empty() const override { return this->endTime_ == nullptr
        && this->ossUrl_ == nullptr && this->servicerName_ == nullptr && this->startTime_ == nullptr; };
        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
        inline Data& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // ossUrl Field Functions 
        bool hasOssUrl() const { return this->ossUrl_ != nullptr;};
        void deleteOssUrl() { this->ossUrl_ = nullptr;};
        inline string getOssUrl() const { DARABONBA_PTR_GET_DEFAULT(ossUrl_, "") };
        inline Data& setOssUrl(string ossUrl) { DARABONBA_PTR_SET_VALUE(ossUrl_, ossUrl) };


        // servicerName Field Functions 
        bool hasServicerName() const { return this->servicerName_ != nullptr;};
        void deleteServicerName() { this->servicerName_ = nullptr;};
        inline string getServicerName() const { DARABONBA_PTR_GET_DEFAULT(servicerName_, "") };
        inline Data& setServicerName(string servicerName) { DARABONBA_PTR_SET_VALUE(servicerName_, servicerName) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
        inline Data& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      protected:
        shared_ptr<int64_t> endTime_ {};
        shared_ptr<string> ossUrl_ {};
        shared_ptr<string> servicerName_ {};
        shared_ptr<int64_t> startTime_ {};
      };

      virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->data_ == nullptr && this->onePageSize_ == nullptr && this->totalPage_ == nullptr && this->totalResults_ == nullptr; };
      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int64_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0L) };
      inline ResultData& setCurrentPage(int64_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // data Field Functions 
      bool hasData() const { return this->data_ != nullptr;};
      void deleteData() { this->data_ = nullptr;};
      inline const vector<ResultData::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ResultData::Data>) };
      inline vector<ResultData::Data> getData() { DARABONBA_PTR_GET(data_, vector<ResultData::Data>) };
      inline ResultData& setData(const vector<ResultData::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
      inline ResultData& setData(vector<ResultData::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


      // onePageSize Field Functions 
      bool hasOnePageSize() const { return this->onePageSize_ != nullptr;};
      void deleteOnePageSize() { this->onePageSize_ = nullptr;};
      inline int64_t getOnePageSize() const { DARABONBA_PTR_GET_DEFAULT(onePageSize_, 0L) };
      inline ResultData& setOnePageSize(int64_t onePageSize) { DARABONBA_PTR_SET_VALUE(onePageSize_, onePageSize) };


      // totalPage Field Functions 
      bool hasTotalPage() const { return this->totalPage_ != nullptr;};
      void deleteTotalPage() { this->totalPage_ = nullptr;};
      inline int64_t getTotalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0L) };
      inline ResultData& setTotalPage(int64_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


      // totalResults Field Functions 
      bool hasTotalResults() const { return this->totalResults_ != nullptr;};
      void deleteTotalResults() { this->totalResults_ = nullptr;};
      inline int64_t getTotalResults() const { DARABONBA_PTR_GET_DEFAULT(totalResults_, 0L) };
      inline ResultData& setTotalResults(int64_t totalResults) { DARABONBA_PTR_SET_VALUE(totalResults_, totalResults) };


    protected:
      shared_ptr<int64_t> currentPage_ {};
      shared_ptr<vector<ResultData::Data>> data_ {};
      shared_ptr<int64_t> onePageSize_ {};
      shared_ptr<int64_t> totalPage_ {};
      shared_ptr<int64_t> totalResults_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->resultData_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListHotlineRecordDetailResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListHotlineRecordDetailResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListHotlineRecordDetailResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListHotlineRecordDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultData Field Functions 
    bool hasResultData() const { return this->resultData_ != nullptr;};
    void deleteResultData() { this->resultData_ = nullptr;};
    inline const ListHotlineRecordDetailResponseBody::ResultData & getResultData() const { DARABONBA_PTR_GET_CONST(resultData_, ListHotlineRecordDetailResponseBody::ResultData) };
    inline ListHotlineRecordDetailResponseBody::ResultData getResultData() { DARABONBA_PTR_GET(resultData_, ListHotlineRecordDetailResponseBody::ResultData) };
    inline ListHotlineRecordDetailResponseBody& setResultData(const ListHotlineRecordDetailResponseBody::ResultData & resultData) { DARABONBA_PTR_SET_VALUE(resultData_, resultData) };
    inline ListHotlineRecordDetailResponseBody& setResultData(ListHotlineRecordDetailResponseBody::ResultData && resultData) { DARABONBA_PTR_SET_RVALUE(resultData_, resultData) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListHotlineRecordDetailResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<ListHotlineRecordDetailResponseBody::ResultData> resultData_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
