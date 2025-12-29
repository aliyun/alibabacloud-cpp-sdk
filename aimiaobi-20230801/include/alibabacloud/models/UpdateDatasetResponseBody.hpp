// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDATASETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDATASETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class UpdateDatasetResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDatasetResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDatasetResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    UpdateDatasetResponseBody() = default ;
    UpdateDatasetResponseBody(const UpdateDatasetResponseBody &) = default ;
    UpdateDatasetResponseBody(UpdateDatasetResponseBody &&) = default ;
    UpdateDatasetResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDatasetResponseBody() = default ;
    UpdateDatasetResponseBody& operator=(const UpdateDatasetResponseBody &) = default ;
    UpdateDatasetResponseBody& operator=(UpdateDatasetResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(CreateUser, createUser_);
        DARABONBA_PTR_TO_JSON(DatasetDescription, datasetDescription_);
        DARABONBA_PTR_TO_JSON(DatasetId, datasetId_);
        DARABONBA_PTR_TO_JSON(DatasetName, datasetName_);
        DARABONBA_PTR_TO_JSON(DatasetType, datasetType_);
        DARABONBA_PTR_TO_JSON(NewsArticleResults, newsArticleResults_);
        DARABONBA_PTR_TO_JSON(SearchDatasetEnable, searchDatasetEnable_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(CreateUser, createUser_);
        DARABONBA_PTR_FROM_JSON(DatasetDescription, datasetDescription_);
        DARABONBA_PTR_FROM_JSON(DatasetId, datasetId_);
        DARABONBA_PTR_FROM_JSON(DatasetName, datasetName_);
        DARABONBA_PTR_FROM_JSON(DatasetType, datasetType_);
        DARABONBA_PTR_FROM_JSON(NewsArticleResults, newsArticleResults_);
        DARABONBA_PTR_FROM_JSON(SearchDatasetEnable, searchDatasetEnable_);
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
      class NewsArticleResults : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NewsArticleResults& obj) { 
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(Current, current_);
          DARABONBA_PTR_TO_JSON(Data, data_);
          DARABONBA_PTR_TO_JSON(Message, message_);
          DARABONBA_PTR_TO_JSON(Size, size_);
          DARABONBA_PTR_TO_JSON(Total, total_);
        };
        friend void from_json(const Darabonba::Json& j, NewsArticleResults& obj) { 
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(Current, current_);
          DARABONBA_PTR_FROM_JSON(Data, data_);
          DARABONBA_PTR_FROM_JSON(Message, message_);
          DARABONBA_PTR_FROM_JSON(Size, size_);
          DARABONBA_PTR_FROM_JSON(Total, total_);
        };
        NewsArticleResults() = default ;
        NewsArticleResults(const NewsArticleResults &) = default ;
        NewsArticleResults(NewsArticleResults &&) = default ;
        NewsArticleResults(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NewsArticleResults() = default ;
        NewsArticleResults& operator=(const NewsArticleResults &) = default ;
        NewsArticleResults& operator=(NewsArticleResults &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Data : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Data& obj) { 
            DARABONBA_PTR_TO_JSON(Content, content_);
            DARABONBA_PTR_TO_JSON(PubTime, pubTime_);
            DARABONBA_PTR_TO_JSON(Source, source_);
            DARABONBA_PTR_TO_JSON(Summary, summary_);
            DARABONBA_PTR_TO_JSON(Title, title_);
            DARABONBA_PTR_TO_JSON(Url, url_);
          };
          friend void from_json(const Darabonba::Json& j, Data& obj) { 
            DARABONBA_PTR_FROM_JSON(Content, content_);
            DARABONBA_PTR_FROM_JSON(PubTime, pubTime_);
            DARABONBA_PTR_FROM_JSON(Source, source_);
            DARABONBA_PTR_FROM_JSON(Summary, summary_);
            DARABONBA_PTR_FROM_JSON(Title, title_);
            DARABONBA_PTR_FROM_JSON(Url, url_);
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
          virtual bool empty() const override { return this->content_ == nullptr
        && this->pubTime_ == nullptr && this->source_ == nullptr && this->summary_ == nullptr && this->title_ == nullptr && this->url_ == nullptr; };
          // content Field Functions 
          bool hasContent() const { return this->content_ != nullptr;};
          void deleteContent() { this->content_ = nullptr;};
          inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
          inline Data& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


          // pubTime Field Functions 
          bool hasPubTime() const { return this->pubTime_ != nullptr;};
          void deletePubTime() { this->pubTime_ = nullptr;};
          inline string getPubTime() const { DARABONBA_PTR_GET_DEFAULT(pubTime_, "") };
          inline Data& setPubTime(string pubTime) { DARABONBA_PTR_SET_VALUE(pubTime_, pubTime) };


          // source Field Functions 
          bool hasSource() const { return this->source_ != nullptr;};
          void deleteSource() { this->source_ = nullptr;};
          inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
          inline Data& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


          // summary Field Functions 
          bool hasSummary() const { return this->summary_ != nullptr;};
          void deleteSummary() { this->summary_ = nullptr;};
          inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
          inline Data& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


          // title Field Functions 
          bool hasTitle() const { return this->title_ != nullptr;};
          void deleteTitle() { this->title_ = nullptr;};
          inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
          inline Data& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


          // url Field Functions 
          bool hasUrl() const { return this->url_ != nullptr;};
          void deleteUrl() { this->url_ = nullptr;};
          inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
          inline Data& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


        protected:
          shared_ptr<string> content_ {};
          shared_ptr<string> pubTime_ {};
          shared_ptr<string> source_ {};
          shared_ptr<string> summary_ {};
          shared_ptr<string> title_ {};
          shared_ptr<string> url_ {};
        };

        virtual bool empty() const override { return this->code_ == nullptr
        && this->current_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->size_ == nullptr && this->total_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline NewsArticleResults& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // current Field Functions 
        bool hasCurrent() const { return this->current_ != nullptr;};
        void deleteCurrent() { this->current_ = nullptr;};
        inline int32_t getCurrent() const { DARABONBA_PTR_GET_DEFAULT(current_, 0) };
        inline NewsArticleResults& setCurrent(int32_t current) { DARABONBA_PTR_SET_VALUE(current_, current) };


        // data Field Functions 
        bool hasData() const { return this->data_ != nullptr;};
        void deleteData() { this->data_ = nullptr;};
        inline const vector<NewsArticleResults::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<NewsArticleResults::Data>) };
        inline vector<NewsArticleResults::Data> getData() { DARABONBA_PTR_GET(data_, vector<NewsArticleResults::Data>) };
        inline NewsArticleResults& setData(const vector<NewsArticleResults::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
        inline NewsArticleResults& setData(vector<NewsArticleResults::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline NewsArticleResults& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


        // size Field Functions 
        bool hasSize() const { return this->size_ != nullptr;};
        void deleteSize() { this->size_ = nullptr;};
        inline int32_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
        inline NewsArticleResults& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


        // total Field Functions 
        bool hasTotal() const { return this->total_ != nullptr;};
        void deleteTotal() { this->total_ = nullptr;};
        inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
        inline NewsArticleResults& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


      protected:
        shared_ptr<string> code_ {};
        shared_ptr<int32_t> current_ {};
        shared_ptr<vector<NewsArticleResults::Data>> data_ {};
        shared_ptr<string> message_ {};
        shared_ptr<int32_t> size_ {};
        shared_ptr<int32_t> total_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->createUser_ == nullptr && this->datasetDescription_ == nullptr && this->datasetId_ == nullptr && this->datasetName_ == nullptr && this->datasetType_ == nullptr
        && this->newsArticleResults_ == nullptr && this->searchDatasetEnable_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Data& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // createUser Field Functions 
      bool hasCreateUser() const { return this->createUser_ != nullptr;};
      void deleteCreateUser() { this->createUser_ = nullptr;};
      inline string getCreateUser() const { DARABONBA_PTR_GET_DEFAULT(createUser_, "") };
      inline Data& setCreateUser(string createUser) { DARABONBA_PTR_SET_VALUE(createUser_, createUser) };


      // datasetDescription Field Functions 
      bool hasDatasetDescription() const { return this->datasetDescription_ != nullptr;};
      void deleteDatasetDescription() { this->datasetDescription_ = nullptr;};
      inline string getDatasetDescription() const { DARABONBA_PTR_GET_DEFAULT(datasetDescription_, "") };
      inline Data& setDatasetDescription(string datasetDescription) { DARABONBA_PTR_SET_VALUE(datasetDescription_, datasetDescription) };


      // datasetId Field Functions 
      bool hasDatasetId() const { return this->datasetId_ != nullptr;};
      void deleteDatasetId() { this->datasetId_ = nullptr;};
      inline int64_t getDatasetId() const { DARABONBA_PTR_GET_DEFAULT(datasetId_, 0L) };
      inline Data& setDatasetId(int64_t datasetId) { DARABONBA_PTR_SET_VALUE(datasetId_, datasetId) };


      // datasetName Field Functions 
      bool hasDatasetName() const { return this->datasetName_ != nullptr;};
      void deleteDatasetName() { this->datasetName_ = nullptr;};
      inline string getDatasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
      inline Data& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


      // datasetType Field Functions 
      bool hasDatasetType() const { return this->datasetType_ != nullptr;};
      void deleteDatasetType() { this->datasetType_ = nullptr;};
      inline string getDatasetType() const { DARABONBA_PTR_GET_DEFAULT(datasetType_, "") };
      inline Data& setDatasetType(string datasetType) { DARABONBA_PTR_SET_VALUE(datasetType_, datasetType) };


      // newsArticleResults Field Functions 
      bool hasNewsArticleResults() const { return this->newsArticleResults_ != nullptr;};
      void deleteNewsArticleResults() { this->newsArticleResults_ = nullptr;};
      inline const vector<Data::NewsArticleResults> & getNewsArticleResults() const { DARABONBA_PTR_GET_CONST(newsArticleResults_, vector<Data::NewsArticleResults>) };
      inline vector<Data::NewsArticleResults> getNewsArticleResults() { DARABONBA_PTR_GET(newsArticleResults_, vector<Data::NewsArticleResults>) };
      inline Data& setNewsArticleResults(const vector<Data::NewsArticleResults> & newsArticleResults) { DARABONBA_PTR_SET_VALUE(newsArticleResults_, newsArticleResults) };
      inline Data& setNewsArticleResults(vector<Data::NewsArticleResults> && newsArticleResults) { DARABONBA_PTR_SET_RVALUE(newsArticleResults_, newsArticleResults) };


      // searchDatasetEnable Field Functions 
      bool hasSearchDatasetEnable() const { return this->searchDatasetEnable_ != nullptr;};
      void deleteSearchDatasetEnable() { this->searchDatasetEnable_ = nullptr;};
      inline int32_t getSearchDatasetEnable() const { DARABONBA_PTR_GET_DEFAULT(searchDatasetEnable_, 0) };
      inline Data& setSearchDatasetEnable(int32_t searchDatasetEnable) { DARABONBA_PTR_SET_VALUE(searchDatasetEnable_, searchDatasetEnable) };


    protected:
      shared_ptr<string> createTime_ {};
      shared_ptr<string> createUser_ {};
      shared_ptr<string> datasetDescription_ {};
      shared_ptr<int64_t> datasetId_ {};
      shared_ptr<string> datasetName_ {};
      shared_ptr<string> datasetType_ {};
      shared_ptr<vector<Data::NewsArticleResults>> newsArticleResults_ {};
      shared_ptr<int32_t> searchDatasetEnable_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline UpdateDatasetResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const UpdateDatasetResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, UpdateDatasetResponseBody::Data) };
    inline UpdateDatasetResponseBody::Data getData() { DARABONBA_PTR_GET(data_, UpdateDatasetResponseBody::Data) };
    inline UpdateDatasetResponseBody& setData(const UpdateDatasetResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline UpdateDatasetResponseBody& setData(UpdateDatasetResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline UpdateDatasetResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline UpdateDatasetResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateDatasetResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline UpdateDatasetResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<UpdateDatasetResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
