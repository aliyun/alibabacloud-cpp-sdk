// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCUSTOMSOURCETOPICANALYSISTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCUSTOMSOURCETOPICANALYSISTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GetCustomSourceTopicAnalysisTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCustomSourceTopicAnalysisTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetCustomSourceTopicAnalysisTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetCustomSourceTopicAnalysisTaskResponseBody() = default ;
    GetCustomSourceTopicAnalysisTaskResponseBody(const GetCustomSourceTopicAnalysisTaskResponseBody &) = default ;
    GetCustomSourceTopicAnalysisTaskResponseBody(GetCustomSourceTopicAnalysisTaskResponseBody &&) = default ;
    GetCustomSourceTopicAnalysisTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCustomSourceTopicAnalysisTaskResponseBody() = default ;
    GetCustomSourceTopicAnalysisTaskResponseBody& operator=(const GetCustomSourceTopicAnalysisTaskResponseBody &) = default ;
    GetCustomSourceTopicAnalysisTaskResponseBody& operator=(GetCustomSourceTopicAnalysisTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ClusterCount, clusterCount_);
        DARABONBA_PTR_TO_JSON(ClusterResults, clusterResults_);
        DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_TO_JSON(MaxClusteredTopicNewsSize, maxClusteredTopicNewsSize_);
        DARABONBA_PTR_TO_JSON(ParsedNewsSize, parsedNewsSize_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(rt, rt_);
        DARABONBA_PTR_TO_JSON(usages, usages_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ClusterCount, clusterCount_);
        DARABONBA_PTR_FROM_JSON(ClusterResults, clusterResults_);
        DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_FROM_JSON(MaxClusteredTopicNewsSize, maxClusteredTopicNewsSize_);
        DARABONBA_PTR_FROM_JSON(ParsedNewsSize, parsedNewsSize_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(rt, rt_);
        DARABONBA_PTR_FROM_JSON(usages, usages_);
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
      class ClusterResults : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ClusterResults& obj) { 
          DARABONBA_PTR_TO_JSON(ClusterNews, clusterNews_);
          DARABONBA_PTR_TO_JSON(Topic, topic_);
        };
        friend void from_json(const Darabonba::Json& j, ClusterResults& obj) { 
          DARABONBA_PTR_FROM_JSON(ClusterNews, clusterNews_);
          DARABONBA_PTR_FROM_JSON(Topic, topic_);
        };
        ClusterResults() = default ;
        ClusterResults(const ClusterResults &) = default ;
        ClusterResults(ClusterResults &&) = default ;
        ClusterResults(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ClusterResults() = default ;
        ClusterResults& operator=(const ClusterResults &) = default ;
        ClusterResults& operator=(ClusterResults &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ClusterNews : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ClusterNews& obj) { 
            DARABONBA_PTR_TO_JSON(Title, title_);
            DARABONBA_PTR_TO_JSON(Url, url_);
          };
          friend void from_json(const Darabonba::Json& j, ClusterNews& obj) { 
            DARABONBA_PTR_FROM_JSON(Title, title_);
            DARABONBA_PTR_FROM_JSON(Url, url_);
          };
          ClusterNews() = default ;
          ClusterNews(const ClusterNews &) = default ;
          ClusterNews(ClusterNews &&) = default ;
          ClusterNews(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ClusterNews() = default ;
          ClusterNews& operator=(const ClusterNews &) = default ;
          ClusterNews& operator=(ClusterNews &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->title_ == nullptr
        && this->url_ == nullptr; };
          // title Field Functions 
          bool hasTitle() const { return this->title_ != nullptr;};
          void deleteTitle() { this->title_ = nullptr;};
          inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
          inline ClusterNews& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


          // url Field Functions 
          bool hasUrl() const { return this->url_ != nullptr;};
          void deleteUrl() { this->url_ = nullptr;};
          inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
          inline ClusterNews& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


        protected:
          shared_ptr<string> title_ {};
          shared_ptr<string> url_ {};
        };

        virtual bool empty() const override { return this->clusterNews_ == nullptr
        && this->topic_ == nullptr; };
        // clusterNews Field Functions 
        bool hasClusterNews() const { return this->clusterNews_ != nullptr;};
        void deleteClusterNews() { this->clusterNews_ = nullptr;};
        inline const vector<ClusterResults::ClusterNews> & getClusterNews() const { DARABONBA_PTR_GET_CONST(clusterNews_, vector<ClusterResults::ClusterNews>) };
        inline vector<ClusterResults::ClusterNews> getClusterNews() { DARABONBA_PTR_GET(clusterNews_, vector<ClusterResults::ClusterNews>) };
        inline ClusterResults& setClusterNews(const vector<ClusterResults::ClusterNews> & clusterNews) { DARABONBA_PTR_SET_VALUE(clusterNews_, clusterNews) };
        inline ClusterResults& setClusterNews(vector<ClusterResults::ClusterNews> && clusterNews) { DARABONBA_PTR_SET_RVALUE(clusterNews_, clusterNews) };


        // topic Field Functions 
        bool hasTopic() const { return this->topic_ != nullptr;};
        void deleteTopic() { this->topic_ = nullptr;};
        inline string getTopic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
        inline ClusterResults& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


      protected:
        shared_ptr<vector<ClusterResults::ClusterNews>> clusterNews_ {};
        shared_ptr<string> topic_ {};
      };

      virtual bool empty() const override { return this->clusterCount_ == nullptr
        && this->clusterResults_ == nullptr && this->errorMessage_ == nullptr && this->maxClusteredTopicNewsSize_ == nullptr && this->parsedNewsSize_ == nullptr && this->status_ == nullptr
        && this->rt_ == nullptr && this->usages_ == nullptr; };
      // clusterCount Field Functions 
      bool hasClusterCount() const { return this->clusterCount_ != nullptr;};
      void deleteClusterCount() { this->clusterCount_ = nullptr;};
      inline int32_t getClusterCount() const { DARABONBA_PTR_GET_DEFAULT(clusterCount_, 0) };
      inline Data& setClusterCount(int32_t clusterCount) { DARABONBA_PTR_SET_VALUE(clusterCount_, clusterCount) };


      // clusterResults Field Functions 
      bool hasClusterResults() const { return this->clusterResults_ != nullptr;};
      void deleteClusterResults() { this->clusterResults_ = nullptr;};
      inline const vector<Data::ClusterResults> & getClusterResults() const { DARABONBA_PTR_GET_CONST(clusterResults_, vector<Data::ClusterResults>) };
      inline vector<Data::ClusterResults> getClusterResults() { DARABONBA_PTR_GET(clusterResults_, vector<Data::ClusterResults>) };
      inline Data& setClusterResults(const vector<Data::ClusterResults> & clusterResults) { DARABONBA_PTR_SET_VALUE(clusterResults_, clusterResults) };
      inline Data& setClusterResults(vector<Data::ClusterResults> && clusterResults) { DARABONBA_PTR_SET_RVALUE(clusterResults_, clusterResults) };


      // errorMessage Field Functions 
      bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
      void deleteErrorMessage() { this->errorMessage_ = nullptr;};
      inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
      inline Data& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


      // maxClusteredTopicNewsSize Field Functions 
      bool hasMaxClusteredTopicNewsSize() const { return this->maxClusteredTopicNewsSize_ != nullptr;};
      void deleteMaxClusteredTopicNewsSize() { this->maxClusteredTopicNewsSize_ = nullptr;};
      inline int32_t getMaxClusteredTopicNewsSize() const { DARABONBA_PTR_GET_DEFAULT(maxClusteredTopicNewsSize_, 0) };
      inline Data& setMaxClusteredTopicNewsSize(int32_t maxClusteredTopicNewsSize) { DARABONBA_PTR_SET_VALUE(maxClusteredTopicNewsSize_, maxClusteredTopicNewsSize) };


      // parsedNewsSize Field Functions 
      bool hasParsedNewsSize() const { return this->parsedNewsSize_ != nullptr;};
      void deleteParsedNewsSize() { this->parsedNewsSize_ = nullptr;};
      inline int32_t getParsedNewsSize() const { DARABONBA_PTR_GET_DEFAULT(parsedNewsSize_, 0) };
      inline Data& setParsedNewsSize(int32_t parsedNewsSize) { DARABONBA_PTR_SET_VALUE(parsedNewsSize_, parsedNewsSize) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // rt Field Functions 
      bool hasRt() const { return this->rt_ != nullptr;};
      void deleteRt() { this->rt_ = nullptr;};
      inline int64_t getRt() const { DARABONBA_PTR_GET_DEFAULT(rt_, 0L) };
      inline Data& setRt(int64_t rt) { DARABONBA_PTR_SET_VALUE(rt_, rt) };


      // usages Field Functions 
      bool hasUsages() const { return this->usages_ != nullptr;};
      void deleteUsages() { this->usages_ = nullptr;};
      inline const map<string, int64_t> & getUsages() const { DARABONBA_PTR_GET_CONST(usages_, map<string, int64_t>) };
      inline map<string, int64_t> getUsages() { DARABONBA_PTR_GET(usages_, map<string, int64_t>) };
      inline Data& setUsages(const map<string, int64_t> & usages) { DARABONBA_PTR_SET_VALUE(usages_, usages) };
      inline Data& setUsages(map<string, int64_t> && usages) { DARABONBA_PTR_SET_RVALUE(usages_, usages) };


    protected:
      shared_ptr<int32_t> clusterCount_ {};
      shared_ptr<vector<Data::ClusterResults>> clusterResults_ {};
      shared_ptr<string> errorMessage_ {};
      shared_ptr<int32_t> maxClusteredTopicNewsSize_ {};
      shared_ptr<int32_t> parsedNewsSize_ {};
      shared_ptr<string> status_ {};
      shared_ptr<int64_t> rt_ {};
      shared_ptr<map<string, int64_t>> usages_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetCustomSourceTopicAnalysisTaskResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetCustomSourceTopicAnalysisTaskResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetCustomSourceTopicAnalysisTaskResponseBody::Data) };
    inline GetCustomSourceTopicAnalysisTaskResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetCustomSourceTopicAnalysisTaskResponseBody::Data) };
    inline GetCustomSourceTopicAnalysisTaskResponseBody& setData(const GetCustomSourceTopicAnalysisTaskResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetCustomSourceTopicAnalysisTaskResponseBody& setData(GetCustomSourceTopicAnalysisTaskResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetCustomSourceTopicAnalysisTaskResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetCustomSourceTopicAnalysisTaskResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCustomSourceTopicAnalysisTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetCustomSourceTopicAnalysisTaskResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetCustomSourceTopicAnalysisTaskResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
