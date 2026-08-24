// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDDOCUMENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDDOCUMENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MilvusKnowledgeBase20260604
{
namespace Models
{
  class AddDocumentsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddDocumentsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(accessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, AddDocumentsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(accessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    AddDocumentsResponseBody() = default ;
    AddDocumentsResponseBody(const AddDocumentsResponseBody &) = default ;
    AddDocumentsResponseBody(AddDocumentsResponseBody &&) = default ;
    AddDocumentsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddDocumentsResponseBody() = default ;
    AddDocumentsResponseBody& operator=(const AddDocumentsResponseBody &) = default ;
    AddDocumentsResponseBody& operator=(AddDocumentsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(documents, documents_);
        DARABONBA_PTR_TO_JSON(errors, errors_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(documents, documents_);
        DARABONBA_PTR_FROM_JSON(errors, errors_);
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
      class Documents : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Documents& obj) { 
          DARABONBA_PTR_TO_JSON(chunkCount, chunkCount_);
          DARABONBA_PTR_TO_JSON(chunkMethod, chunkMethod_);
          DARABONBA_PTR_TO_JSON(datasetId, datasetId_);
          DARABONBA_PTR_TO_JSON(id, id_);
          DARABONBA_PTR_TO_JSON(location, location_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(progress, progress_);
          DARABONBA_PTR_TO_JSON(run, run_);
          DARABONBA_PTR_TO_JSON(size, size_);
          DARABONBA_PTR_TO_JSON(suffix, suffix_);
          DARABONBA_PTR_TO_JSON(thumbnail, thumbnail_);
          DARABONBA_PTR_TO_JSON(tokenCount, tokenCount_);
        };
        friend void from_json(const Darabonba::Json& j, Documents& obj) { 
          DARABONBA_PTR_FROM_JSON(chunkCount, chunkCount_);
          DARABONBA_PTR_FROM_JSON(chunkMethod, chunkMethod_);
          DARABONBA_PTR_FROM_JSON(datasetId, datasetId_);
          DARABONBA_PTR_FROM_JSON(id, id_);
          DARABONBA_PTR_FROM_JSON(location, location_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(progress, progress_);
          DARABONBA_PTR_FROM_JSON(run, run_);
          DARABONBA_PTR_FROM_JSON(size, size_);
          DARABONBA_PTR_FROM_JSON(suffix, suffix_);
          DARABONBA_PTR_FROM_JSON(thumbnail, thumbnail_);
          DARABONBA_PTR_FROM_JSON(tokenCount, tokenCount_);
        };
        Documents() = default ;
        Documents(const Documents &) = default ;
        Documents(Documents &&) = default ;
        Documents(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Documents() = default ;
        Documents& operator=(const Documents &) = default ;
        Documents& operator=(Documents &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->chunkCount_ == nullptr
        && this->chunkMethod_ == nullptr && this->datasetId_ == nullptr && this->id_ == nullptr && this->location_ == nullptr && this->name_ == nullptr
        && this->progress_ == nullptr && this->run_ == nullptr && this->size_ == nullptr && this->suffix_ == nullptr && this->thumbnail_ == nullptr
        && this->tokenCount_ == nullptr; };
        // chunkCount Field Functions 
        bool hasChunkCount() const { return this->chunkCount_ != nullptr;};
        void deleteChunkCount() { this->chunkCount_ = nullptr;};
        inline int32_t getChunkCount() const { DARABONBA_PTR_GET_DEFAULT(chunkCount_, 0) };
        inline Documents& setChunkCount(int32_t chunkCount) { DARABONBA_PTR_SET_VALUE(chunkCount_, chunkCount) };


        // chunkMethod Field Functions 
        bool hasChunkMethod() const { return this->chunkMethod_ != nullptr;};
        void deleteChunkMethod() { this->chunkMethod_ = nullptr;};
        inline string getChunkMethod() const { DARABONBA_PTR_GET_DEFAULT(chunkMethod_, "") };
        inline Documents& setChunkMethod(string chunkMethod) { DARABONBA_PTR_SET_VALUE(chunkMethod_, chunkMethod) };


        // datasetId Field Functions 
        bool hasDatasetId() const { return this->datasetId_ != nullptr;};
        void deleteDatasetId() { this->datasetId_ = nullptr;};
        inline string getDatasetId() const { DARABONBA_PTR_GET_DEFAULT(datasetId_, "") };
        inline Documents& setDatasetId(string datasetId) { DARABONBA_PTR_SET_VALUE(datasetId_, datasetId) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline Documents& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // location Field Functions 
        bool hasLocation() const { return this->location_ != nullptr;};
        void deleteLocation() { this->location_ = nullptr;};
        inline string getLocation() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
        inline Documents& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Documents& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // progress Field Functions 
        bool hasProgress() const { return this->progress_ != nullptr;};
        void deleteProgress() { this->progress_ = nullptr;};
        inline float getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0.0) };
        inline Documents& setProgress(float progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


        // run Field Functions 
        bool hasRun() const { return this->run_ != nullptr;};
        void deleteRun() { this->run_ = nullptr;};
        inline string getRun() const { DARABONBA_PTR_GET_DEFAULT(run_, "") };
        inline Documents& setRun(string run) { DARABONBA_PTR_SET_VALUE(run_, run) };


        // size Field Functions 
        bool hasSize() const { return this->size_ != nullptr;};
        void deleteSize() { this->size_ = nullptr;};
        inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
        inline Documents& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


        // suffix Field Functions 
        bool hasSuffix() const { return this->suffix_ != nullptr;};
        void deleteSuffix() { this->suffix_ = nullptr;};
        inline string getSuffix() const { DARABONBA_PTR_GET_DEFAULT(suffix_, "") };
        inline Documents& setSuffix(string suffix) { DARABONBA_PTR_SET_VALUE(suffix_, suffix) };


        // thumbnail Field Functions 
        bool hasThumbnail() const { return this->thumbnail_ != nullptr;};
        void deleteThumbnail() { this->thumbnail_ = nullptr;};
        inline string getThumbnail() const { DARABONBA_PTR_GET_DEFAULT(thumbnail_, "") };
        inline Documents& setThumbnail(string thumbnail) { DARABONBA_PTR_SET_VALUE(thumbnail_, thumbnail) };


        // tokenCount Field Functions 
        bool hasTokenCount() const { return this->tokenCount_ != nullptr;};
        void deleteTokenCount() { this->tokenCount_ = nullptr;};
        inline int32_t getTokenCount() const { DARABONBA_PTR_GET_DEFAULT(tokenCount_, 0) };
        inline Documents& setTokenCount(int32_t tokenCount) { DARABONBA_PTR_SET_VALUE(tokenCount_, tokenCount) };


      protected:
        // The chunk count.
        shared_ptr<int32_t> chunkCount_ {};
        // The chunk method.
        shared_ptr<string> chunkMethod_ {};
        // The ID of the knowledge base.
        shared_ptr<string> datasetId_ {};
        // The document ID.
        shared_ptr<string> id_ {};
        // The object path.
        shared_ptr<string> location_ {};
        // The name of the document.
        shared_ptr<string> name_ {};
        // The processing progress.
        shared_ptr<float> progress_ {};
        // The processing status.
        shared_ptr<string> run_ {};
        // The size of the file.
        shared_ptr<int64_t> size_ {};
        // The file extension.
        shared_ptr<string> suffix_ {};
        // The thumbnail.
        shared_ptr<string> thumbnail_ {};
        // The token count.
        shared_ptr<int32_t> tokenCount_ {};
      };

      virtual bool empty() const override { return this->documents_ == nullptr
        && this->errors_ == nullptr; };
      // documents Field Functions 
      bool hasDocuments() const { return this->documents_ != nullptr;};
      void deleteDocuments() { this->documents_ = nullptr;};
      inline const vector<Data::Documents> & getDocuments() const { DARABONBA_PTR_GET_CONST(documents_, vector<Data::Documents>) };
      inline vector<Data::Documents> getDocuments() { DARABONBA_PTR_GET(documents_, vector<Data::Documents>) };
      inline Data& setDocuments(const vector<Data::Documents> & documents) { DARABONBA_PTR_SET_VALUE(documents_, documents) };
      inline Data& setDocuments(vector<Data::Documents> && documents) { DARABONBA_PTR_SET_RVALUE(documents_, documents) };


      // errors Field Functions 
      bool hasErrors() const { return this->errors_ != nullptr;};
      void deleteErrors() { this->errors_ = nullptr;};
      inline const vector<string> & getErrors() const { DARABONBA_PTR_GET_CONST(errors_, vector<string>) };
      inline vector<string> getErrors() { DARABONBA_PTR_GET(errors_, vector<string>) };
      inline Data& setErrors(const vector<string> & errors) { DARABONBA_PTR_SET_VALUE(errors_, errors) };
      inline Data& setErrors(vector<string> && errors) { DARABONBA_PTR_SET_RVALUE(errors_, errors) };


    protected:
      // The list of documents.
      shared_ptr<vector<Data::Documents>> documents_ {};
      // The list of errors.
      shared_ptr<vector<string>> errors_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline AddDocumentsResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline AddDocumentsResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const AddDocumentsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, AddDocumentsResponseBody::Data) };
    inline AddDocumentsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, AddDocumentsResponseBody::Data) };
    inline AddDocumentsResponseBody& setData(const AddDocumentsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline AddDocumentsResponseBody& setData(AddDocumentsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline AddDocumentsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline AddDocumentsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddDocumentsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline AddDocumentsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The details of the permission verification failure.
    shared_ptr<string> accessDeniedDetail_ {};
    // The status code.
    shared_ptr<int32_t> code_ {};
    // The response data.
    shared_ptr<AddDocumentsResponseBody::Data> data_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MilvusKnowledgeBase20260604
#endif
