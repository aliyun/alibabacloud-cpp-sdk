// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTEXTSCANRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTEXTSCANRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class GetTextScanResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTextScanResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Msg, msg_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetTextScanResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Msg, msg_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetTextScanResultResponseBody() = default ;
    GetTextScanResultResponseBody(const GetTextScanResultResponseBody &) = default ;
    GetTextScanResultResponseBody(GetTextScanResultResponseBody &&) = default ;
    GetTextScanResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTextScanResultResponseBody() = default ;
    GetTextScanResultResponseBody& operator=(const GetTextScanResultResponseBody &) = default ;
    GetTextScanResultResponseBody& operator=(GetTextScanResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(Items, items_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(Items, items_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
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
      class Items : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Items& obj) { 
          DARABONBA_PTR_TO_JSON(AccountId, accountId_);
          DARABONBA_PTR_TO_JSON(BailianRequestId, bailianRequestId_);
          DARABONBA_PTR_TO_JSON(Content, content_);
          DARABONBA_PTR_TO_JSON(DataId, dataId_);
          DARABONBA_PTR_TO_JSON(ExtFeedback, extFeedback_);
          DARABONBA_ANY_TO_JSON(Extra, extra_);
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(Labels, labels_);
          DARABONBA_PTR_TO_JSON(RequestId, requestId_);
          DARABONBA_PTR_TO_JSON(RequestTime, requestTime_);
          DARABONBA_PTR_TO_JSON(Result, result_);
          DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
          DARABONBA_PTR_TO_JSON(ScanResult, scanResult_);
          DARABONBA_PTR_TO_JSON(Score, score_);
          DARABONBA_PTR_TO_JSON(ServiceCode, serviceCode_);
          DARABONBA_PTR_TO_JSON(Suggestion, suggestion_);
          DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        };
        friend void from_json(const Darabonba::Json& j, Items& obj) { 
          DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
          DARABONBA_PTR_FROM_JSON(BailianRequestId, bailianRequestId_);
          DARABONBA_PTR_FROM_JSON(Content, content_);
          DARABONBA_PTR_FROM_JSON(DataId, dataId_);
          DARABONBA_PTR_FROM_JSON(ExtFeedback, extFeedback_);
          DARABONBA_ANY_FROM_JSON(Extra, extra_);
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(Labels, labels_);
          DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
          DARABONBA_PTR_FROM_JSON(RequestTime, requestTime_);
          DARABONBA_PTR_FROM_JSON(Result, result_);
          DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
          DARABONBA_PTR_FROM_JSON(ScanResult, scanResult_);
          DARABONBA_PTR_FROM_JSON(Score, score_);
          DARABONBA_PTR_FROM_JSON(ServiceCode, serviceCode_);
          DARABONBA_PTR_FROM_JSON(Suggestion, suggestion_);
          DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
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
        class Result : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Result& obj) { 
            DARABONBA_PTR_TO_JSON(Confidence, confidence_);
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Label, label_);
          };
          friend void from_json(const Darabonba::Json& j, Result& obj) { 
            DARABONBA_PTR_FROM_JSON(Confidence, confidence_);
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Label, label_);
          };
          Result() = default ;
          Result(const Result &) = default ;
          Result(Result &&) = default ;
          Result(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Result() = default ;
          Result& operator=(const Result &) = default ;
          Result& operator=(Result &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->confidence_ == nullptr
        && this->description_ == nullptr && this->label_ == nullptr; };
          // confidence Field Functions 
          bool hasConfidence() const { return this->confidence_ != nullptr;};
          void deleteConfidence() { this->confidence_ = nullptr;};
          inline float getConfidence() const { DARABONBA_PTR_GET_DEFAULT(confidence_, 0.0) };
          inline Result& setConfidence(float confidence) { DARABONBA_PTR_SET_VALUE(confidence_, confidence) };


          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline Result& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // label Field Functions 
          bool hasLabel() const { return this->label_ != nullptr;};
          void deleteLabel() { this->label_ = nullptr;};
          inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
          inline Result& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


        protected:
          // Confidence score, ranging from 0 to 100, with two decimal places retained.
          shared_ptr<float> confidence_ {};
          // Description.
          shared_ptr<string> description_ {};
          // Label.
          shared_ptr<string> label_ {};
        };

        virtual bool empty() const override { return this->accountId_ == nullptr
        && this->bailianRequestId_ == nullptr && this->content_ == nullptr && this->dataId_ == nullptr && this->extFeedback_ == nullptr && this->extra_ == nullptr
        && this->gmtCreate_ == nullptr && this->labels_ == nullptr && this->requestId_ == nullptr && this->requestTime_ == nullptr && this->result_ == nullptr
        && this->riskLevel_ == nullptr && this->scanResult_ == nullptr && this->score_ == nullptr && this->serviceCode_ == nullptr && this->suggestion_ == nullptr
        && this->taskId_ == nullptr; };
        // accountId Field Functions 
        bool hasAccountId() const { return this->accountId_ != nullptr;};
        void deleteAccountId() { this->accountId_ = nullptr;};
        inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
        inline Items& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


        // bailianRequestId Field Functions 
        bool hasBailianRequestId() const { return this->bailianRequestId_ != nullptr;};
        void deleteBailianRequestId() { this->bailianRequestId_ = nullptr;};
        inline string getBailianRequestId() const { DARABONBA_PTR_GET_DEFAULT(bailianRequestId_, "") };
        inline Items& setBailianRequestId(string bailianRequestId) { DARABONBA_PTR_SET_VALUE(bailianRequestId_, bailianRequestId) };


        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
        inline Items& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


        // dataId Field Functions 
        bool hasDataId() const { return this->dataId_ != nullptr;};
        void deleteDataId() { this->dataId_ = nullptr;};
        inline string getDataId() const { DARABONBA_PTR_GET_DEFAULT(dataId_, "") };
        inline Items& setDataId(string dataId) { DARABONBA_PTR_SET_VALUE(dataId_, dataId) };


        // extFeedback Field Functions 
        bool hasExtFeedback() const { return this->extFeedback_ != nullptr;};
        void deleteExtFeedback() { this->extFeedback_ = nullptr;};
        inline string getExtFeedback() const { DARABONBA_PTR_GET_DEFAULT(extFeedback_, "") };
        inline Items& setExtFeedback(string extFeedback) { DARABONBA_PTR_SET_VALUE(extFeedback_, extFeedback) };


        // extra Field Functions 
        bool hasExtra() const { return this->extra_ != nullptr;};
        void deleteExtra() { this->extra_ = nullptr;};
        inline         const Darabonba::Json & getExtra() const { DARABONBA_GET(extra_) };
        Darabonba::Json & getExtra() { DARABONBA_GET(extra_) };
        inline Items& setExtra(const Darabonba::Json & extra) { DARABONBA_SET_VALUE(extra_, extra) };
        inline Items& setExtra(Darabonba::Json && extra) { DARABONBA_SET_RVALUE(extra_, extra) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline Items& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // labels Field Functions 
        bool hasLabels() const { return this->labels_ != nullptr;};
        void deleteLabels() { this->labels_ = nullptr;};
        inline string getLabels() const { DARABONBA_PTR_GET_DEFAULT(labels_, "") };
        inline Items& setLabels(string labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };


        // requestId Field Functions 
        bool hasRequestId() const { return this->requestId_ != nullptr;};
        void deleteRequestId() { this->requestId_ = nullptr;};
        inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
        inline Items& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


        // requestTime Field Functions 
        bool hasRequestTime() const { return this->requestTime_ != nullptr;};
        void deleteRequestTime() { this->requestTime_ = nullptr;};
        inline string getRequestTime() const { DARABONBA_PTR_GET_DEFAULT(requestTime_, "") };
        inline Items& setRequestTime(string requestTime) { DARABONBA_PTR_SET_VALUE(requestTime_, requestTime) };


        // result Field Functions 
        bool hasResult() const { return this->result_ != nullptr;};
        void deleteResult() { this->result_ = nullptr;};
        inline const vector<Items::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<Items::Result>) };
        inline vector<Items::Result> getResult() { DARABONBA_PTR_GET(result_, vector<Items::Result>) };
        inline Items& setResult(const vector<Items::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
        inline Items& setResult(vector<Items::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


        // riskLevel Field Functions 
        bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
        void deleteRiskLevel() { this->riskLevel_ = nullptr;};
        inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
        inline Items& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


        // scanResult Field Functions 
        bool hasScanResult() const { return this->scanResult_ != nullptr;};
        void deleteScanResult() { this->scanResult_ = nullptr;};
        inline string getScanResult() const { DARABONBA_PTR_GET_DEFAULT(scanResult_, "") };
        inline Items& setScanResult(string scanResult) { DARABONBA_PTR_SET_VALUE(scanResult_, scanResult) };


        // score Field Functions 
        bool hasScore() const { return this->score_ != nullptr;};
        void deleteScore() { this->score_ = nullptr;};
        inline float getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
        inline Items& setScore(float score) { DARABONBA_PTR_SET_VALUE(score_, score) };


        // serviceCode Field Functions 
        bool hasServiceCode() const { return this->serviceCode_ != nullptr;};
        void deleteServiceCode() { this->serviceCode_ = nullptr;};
        inline string getServiceCode() const { DARABONBA_PTR_GET_DEFAULT(serviceCode_, "") };
        inline Items& setServiceCode(string serviceCode) { DARABONBA_PTR_SET_VALUE(serviceCode_, serviceCode) };


        // suggestion Field Functions 
        bool hasSuggestion() const { return this->suggestion_ != nullptr;};
        void deleteSuggestion() { this->suggestion_ = nullptr;};
        inline string getSuggestion() const { DARABONBA_PTR_GET_DEFAULT(suggestion_, "") };
        inline Items& setSuggestion(string suggestion) { DARABONBA_PTR_SET_VALUE(suggestion_, suggestion) };


        // taskId Field Functions 
        bool hasTaskId() const { return this->taskId_ != nullptr;};
        void deleteTaskId() { this->taskId_ = nullptr;};
        inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
        inline Items& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      protected:
        shared_ptr<string> accountId_ {};
        // Bailian Request ID
        shared_ptr<string> bailianRequestId_ {};
        // Content.
        shared_ptr<string> content_ {};
        shared_ptr<string> dataId_ {};
        // Feedback information.
        shared_ptr<string> extFeedback_ {};
        // Spare parameters.
        Darabonba::Json extra_ {};
        // Creation time.
        shared_ptr<string> gmtCreate_ {};
        // Labels.
        shared_ptr<string> labels_ {};
        // Request ID.
        shared_ptr<string> requestId_ {};
        // Request time.
        shared_ptr<string> requestTime_ {};
        // Detection results.
        shared_ptr<vector<Items::Result>> result_ {};
        // Risk level, returned based on the set high and low risk scores. The return values include:
        // 
        // - high: High risk
        // 
        // - medium: Medium risk
        //  
        // - low: Low risk
        // 
        // - none: No risk detected
        shared_ptr<string> riskLevel_ {};
        // Details of the result.
        shared_ptr<string> scanResult_ {};
        // Score.
        shared_ptr<float> score_ {};
        // Service code.
        shared_ptr<string> serviceCode_ {};
        // Suggestion for handling.
        shared_ptr<string> suggestion_ {};
        // Task ID.
        shared_ptr<string> taskId_ {};
      };

      virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->items_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline Data& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // items Field Functions 
      bool hasItems() const { return this->items_ != nullptr;};
      void deleteItems() { this->items_ = nullptr;};
      inline const vector<Data::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<Data::Items>) };
      inline vector<Data::Items> getItems() { DARABONBA_PTR_GET(items_, vector<Data::Items>) };
      inline Data& setItems(const vector<Data::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
      inline Data& setItems(vector<Data::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline Data& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // Current page number.
      shared_ptr<int32_t> currentPage_ {};
      // Data for the current page.
      shared_ptr<vector<Data::Items>> items_ {};
      // Page size.
      shared_ptr<int32_t> pageSize_ {};
      // Total number of records.
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->msg_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetTextScanResultResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetTextScanResultResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetTextScanResultResponseBody::Data) };
    inline GetTextScanResultResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetTextScanResultResponseBody::Data) };
    inline GetTextScanResultResponseBody& setData(const GetTextScanResultResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetTextScanResultResponseBody& setData(GetTextScanResultResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // msg Field Functions 
    bool hasMsg() const { return this->msg_ != nullptr;};
    void deleteMsg() { this->msg_ = nullptr;};
    inline string getMsg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
    inline GetTextScanResultResponseBody& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTextScanResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetTextScanResultResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Error code.
    shared_ptr<int32_t> code_ {};
    // Returned data.
    shared_ptr<GetTextScanResultResponseBody::Data> data_ {};
    // Further description of the error code.
    shared_ptr<string> msg_ {};
    // ID assigned by the backend to uniquely identify a request. It can be used for troubleshooting.
    shared_ptr<string> requestId_ {};
    // Success indicator.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
