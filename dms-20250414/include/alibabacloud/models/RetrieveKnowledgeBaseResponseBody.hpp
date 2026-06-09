// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RETRIEVEKNOWLEDGEBASERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RETRIEVEKNOWLEDGEBASERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class RetrieveKnowledgeBaseResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RetrieveKnowledgeBaseResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, RetrieveKnowledgeBaseResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    RetrieveKnowledgeBaseResponseBody() = default ;
    RetrieveKnowledgeBaseResponseBody(const RetrieveKnowledgeBaseResponseBody &) = default ;
    RetrieveKnowledgeBaseResponseBody(RetrieveKnowledgeBaseResponseBody &&) = default ;
    RetrieveKnowledgeBaseResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RetrieveKnowledgeBaseResponseBody() = default ;
    RetrieveKnowledgeBaseResponseBody& operator=(const RetrieveKnowledgeBaseResponseBody &) = default ;
    RetrieveKnowledgeBaseResponseBody& operator=(RetrieveKnowledgeBaseResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Matches, matches_);
        DARABONBA_PTR_TO_JSON(Results, results_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Matches, matches_);
        DARABONBA_PTR_FROM_JSON(Results, results_);
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
      class Results : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Results& obj) { 
          DARABONBA_PTR_TO_JSON(Content, content_);
          DARABONBA_PTR_TO_JSON(FileName, fileName_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(LoaderMetadata, loaderMetadata_);
          DARABONBA_ANY_TO_JSON(Metadata, metadata_);
          DARABONBA_PTR_TO_JSON(RerankScore, rerankScore_);
          DARABONBA_PTR_TO_JSON(RetrievalSource, retrievalSource_);
          DARABONBA_PTR_TO_JSON(Score, score_);
          DARABONBA_PTR_TO_JSON(Vector, vector_);
        };
        friend void from_json(const Darabonba::Json& j, Results& obj) { 
          DARABONBA_PTR_FROM_JSON(Content, content_);
          DARABONBA_PTR_FROM_JSON(FileName, fileName_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(LoaderMetadata, loaderMetadata_);
          DARABONBA_ANY_FROM_JSON(Metadata, metadata_);
          DARABONBA_PTR_FROM_JSON(RerankScore, rerankScore_);
          DARABONBA_PTR_FROM_JSON(RetrievalSource, retrievalSource_);
          DARABONBA_PTR_FROM_JSON(Score, score_);
          DARABONBA_PTR_FROM_JSON(Vector, vector_);
        };
        Results() = default ;
        Results(const Results &) = default ;
        Results(Results &&) = default ;
        Results(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Results() = default ;
        Results& operator=(const Results &) = default ;
        Results& operator=(Results &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->content_ == nullptr
        && this->fileName_ == nullptr && this->id_ == nullptr && this->loaderMetadata_ == nullptr && this->metadata_ == nullptr && this->rerankScore_ == nullptr
        && this->retrievalSource_ == nullptr && this->score_ == nullptr && this->vector_ == nullptr; };
        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
        inline Results& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


        // fileName Field Functions 
        bool hasFileName() const { return this->fileName_ != nullptr;};
        void deleteFileName() { this->fileName_ = nullptr;};
        inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
        inline Results& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline Results& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // loaderMetadata Field Functions 
        bool hasLoaderMetadata() const { return this->loaderMetadata_ != nullptr;};
        void deleteLoaderMetadata() { this->loaderMetadata_ = nullptr;};
        inline string getLoaderMetadata() const { DARABONBA_PTR_GET_DEFAULT(loaderMetadata_, "") };
        inline Results& setLoaderMetadata(string loaderMetadata) { DARABONBA_PTR_SET_VALUE(loaderMetadata_, loaderMetadata) };


        // metadata Field Functions 
        bool hasMetadata() const { return this->metadata_ != nullptr;};
        void deleteMetadata() { this->metadata_ = nullptr;};
        inline         const Darabonba::Json & getMetadata() const { DARABONBA_GET(metadata_) };
        Darabonba::Json & getMetadata() { DARABONBA_GET(metadata_) };
        inline Results& setMetadata(const Darabonba::Json & metadata) { DARABONBA_SET_VALUE(metadata_, metadata) };
        inline Results& setMetadata(Darabonba::Json && metadata) { DARABONBA_SET_RVALUE(metadata_, metadata) };


        // rerankScore Field Functions 
        bool hasRerankScore() const { return this->rerankScore_ != nullptr;};
        void deleteRerankScore() { this->rerankScore_ = nullptr;};
        inline double getRerankScore() const { DARABONBA_PTR_GET_DEFAULT(rerankScore_, 0.0) };
        inline Results& setRerankScore(double rerankScore) { DARABONBA_PTR_SET_VALUE(rerankScore_, rerankScore) };


        // retrievalSource Field Functions 
        bool hasRetrievalSource() const { return this->retrievalSource_ != nullptr;};
        void deleteRetrievalSource() { this->retrievalSource_ = nullptr;};
        inline int32_t getRetrievalSource() const { DARABONBA_PTR_GET_DEFAULT(retrievalSource_, 0) };
        inline Results& setRetrievalSource(int32_t retrievalSource) { DARABONBA_PTR_SET_VALUE(retrievalSource_, retrievalSource) };


        // score Field Functions 
        bool hasScore() const { return this->score_ != nullptr;};
        void deleteScore() { this->score_ = nullptr;};
        inline double getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
        inline Results& setScore(double score) { DARABONBA_PTR_SET_VALUE(score_, score) };


        // vector Field Functions 
        bool hasVector() const { return this->vector_ != nullptr;};
        void deleteVector() { this->vector_ = nullptr;};
        inline const vector<double> & getVector() const { DARABONBA_PTR_GET_CONST(vector_, vector<double>) };
        inline vector<double> getVector() { DARABONBA_PTR_GET(vector_, vector<double>) };
        inline Results& setVector(const vector<double> & _vector) { DARABONBA_PTR_SET_VALUE(vector_, _vector) };
        inline Results& setVector(vector<double> && _vector) { DARABONBA_PTR_SET_RVALUE(vector_, _vector) };


      protected:
        shared_ptr<string> content_ {};
        shared_ptr<string> fileName_ {};
        shared_ptr<string> id_ {};
        shared_ptr<string> loaderMetadata_ {};
        Darabonba::Json metadata_ {};
        shared_ptr<double> rerankScore_ {};
        shared_ptr<int32_t> retrievalSource_ {};
        shared_ptr<double> score_ {};
        shared_ptr<vector<double>> vector_ {};
      };

      class Matches : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Matches& obj) { 
          DARABONBA_PTR_TO_JSON(Content, content_);
          DARABONBA_PTR_TO_JSON(FileName, fileName_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(LoaderMetadata, loaderMetadata_);
          DARABONBA_ANY_TO_JSON(Metadata, metadata_);
        };
        friend void from_json(const Darabonba::Json& j, Matches& obj) { 
          DARABONBA_PTR_FROM_JSON(Content, content_);
          DARABONBA_PTR_FROM_JSON(FileName, fileName_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(LoaderMetadata, loaderMetadata_);
          DARABONBA_ANY_FROM_JSON(Metadata, metadata_);
        };
        Matches() = default ;
        Matches(const Matches &) = default ;
        Matches(Matches &&) = default ;
        Matches(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Matches() = default ;
        Matches& operator=(const Matches &) = default ;
        Matches& operator=(Matches &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->content_ == nullptr
        && this->fileName_ == nullptr && this->id_ == nullptr && this->loaderMetadata_ == nullptr && this->metadata_ == nullptr; };
        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
        inline Matches& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


        // fileName Field Functions 
        bool hasFileName() const { return this->fileName_ != nullptr;};
        void deleteFileName() { this->fileName_ = nullptr;};
        inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
        inline Matches& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline Matches& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // loaderMetadata Field Functions 
        bool hasLoaderMetadata() const { return this->loaderMetadata_ != nullptr;};
        void deleteLoaderMetadata() { this->loaderMetadata_ = nullptr;};
        inline string getLoaderMetadata() const { DARABONBA_PTR_GET_DEFAULT(loaderMetadata_, "") };
        inline Matches& setLoaderMetadata(string loaderMetadata) { DARABONBA_PTR_SET_VALUE(loaderMetadata_, loaderMetadata) };


        // metadata Field Functions 
        bool hasMetadata() const { return this->metadata_ != nullptr;};
        void deleteMetadata() { this->metadata_ = nullptr;};
        inline         const Darabonba::Json & getMetadata() const { DARABONBA_GET(metadata_) };
        Darabonba::Json & getMetadata() { DARABONBA_GET(metadata_) };
        inline Matches& setMetadata(const Darabonba::Json & metadata) { DARABONBA_SET_VALUE(metadata_, metadata) };
        inline Matches& setMetadata(Darabonba::Json && metadata) { DARABONBA_SET_RVALUE(metadata_, metadata) };


      protected:
        shared_ptr<string> content_ {};
        shared_ptr<string> fileName_ {};
        shared_ptr<string> id_ {};
        shared_ptr<string> loaderMetadata_ {};
        Darabonba::Json metadata_ {};
      };

      virtual bool empty() const override { return this->matches_ == nullptr
        && this->results_ == nullptr; };
      // matches Field Functions 
      bool hasMatches() const { return this->matches_ != nullptr;};
      void deleteMatches() { this->matches_ = nullptr;};
      inline const vector<Data::Matches> & getMatches() const { DARABONBA_PTR_GET_CONST(matches_, vector<Data::Matches>) };
      inline vector<Data::Matches> getMatches() { DARABONBA_PTR_GET(matches_, vector<Data::Matches>) };
      inline Data& setMatches(const vector<Data::Matches> & matches) { DARABONBA_PTR_SET_VALUE(matches_, matches) };
      inline Data& setMatches(vector<Data::Matches> && matches) { DARABONBA_PTR_SET_RVALUE(matches_, matches) };


      // results Field Functions 
      bool hasResults() const { return this->results_ != nullptr;};
      void deleteResults() { this->results_ = nullptr;};
      inline const vector<Data::Results> & getResults() const { DARABONBA_PTR_GET_CONST(results_, vector<Data::Results>) };
      inline vector<Data::Results> getResults() { DARABONBA_PTR_GET(results_, vector<Data::Results>) };
      inline Data& setResults(const vector<Data::Results> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
      inline Data& setResults(vector<Data::Results> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


    protected:
      shared_ptr<vector<Data::Matches>> matches_ {};
      shared_ptr<vector<Data::Results>> results_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const RetrieveKnowledgeBaseResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, RetrieveKnowledgeBaseResponseBody::Data) };
    inline RetrieveKnowledgeBaseResponseBody::Data getData() { DARABONBA_PTR_GET(data_, RetrieveKnowledgeBaseResponseBody::Data) };
    inline RetrieveKnowledgeBaseResponseBody& setData(const RetrieveKnowledgeBaseResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline RetrieveKnowledgeBaseResponseBody& setData(RetrieveKnowledgeBaseResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline RetrieveKnowledgeBaseResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline RetrieveKnowledgeBaseResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RetrieveKnowledgeBaseResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline RetrieveKnowledgeBaseResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<RetrieveKnowledgeBaseResponseBody::Data> data_ {};
    shared_ptr<string> errorCode_ {};
    shared_ptr<string> errorMessage_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
