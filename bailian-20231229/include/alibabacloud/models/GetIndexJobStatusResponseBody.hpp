// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINDEXJOBSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINDEXJOBSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class GetIndexJobStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIndexJobStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetIndexJobStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetIndexJobStatusResponseBody() = default ;
    GetIndexJobStatusResponseBody(const GetIndexJobStatusResponseBody &) = default ;
    GetIndexJobStatusResponseBody(GetIndexJobStatusResponseBody &&) = default ;
    GetIndexJobStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIndexJobStatusResponseBody() = default ;
    GetIndexJobStatusResponseBody& operator=(const GetIndexJobStatusResponseBody &) = default ;
    GetIndexJobStatusResponseBody& operator=(GetIndexJobStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Documents, documents_);
        DARABONBA_PTR_TO_JSON(JobId, jobId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Documents, documents_);
        DARABONBA_PTR_FROM_JSON(JobId, jobId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
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
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(DocId, docId_);
          DARABONBA_PTR_TO_JSON(DocName, docName_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(Message, message_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, Documents& obj) { 
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(DocId, docId_);
          DARABONBA_PTR_FROM_JSON(DocName, docName_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(Message, message_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
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
        virtual bool empty() const override { return this->code_ == nullptr
        && this->docId_ == nullptr && this->docName_ == nullptr && this->gmtModified_ == nullptr && this->message_ == nullptr && this->status_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline Documents& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // docId Field Functions 
        bool hasDocId() const { return this->docId_ != nullptr;};
        void deleteDocId() { this->docId_ = nullptr;};
        inline string getDocId() const { DARABONBA_PTR_GET_DEFAULT(docId_, "") };
        inline Documents& setDocId(string docId) { DARABONBA_PTR_SET_VALUE(docId_, docId) };


        // docName Field Functions 
        bool hasDocName() const { return this->docName_ != nullptr;};
        void deleteDocName() { this->docName_ = nullptr;};
        inline string getDocName() const { DARABONBA_PTR_GET_DEFAULT(docName_, "") };
        inline Documents& setDocName(string docName) { DARABONBA_PTR_SET_VALUE(docName_, docName) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline int64_t getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
        inline Documents& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline Documents& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Documents& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // HTTP status code
        shared_ptr<string> code_ {};
        // The primary key ID of the document.
        shared_ptr<string> docId_ {};
        // The name of the document.
        shared_ptr<string> docName_ {};
        shared_ptr<int64_t> gmtModified_ {};
        // The error message.
        shared_ptr<string> message_ {};
        // The import status of the document. Valid values:
        // 
        // *   INSERT_ERROR
        // *   RUNNING
        // *   DELETED
        // *   FINISH
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->documents_ == nullptr
        && this->jobId_ == nullptr && this->status_ == nullptr; };
      // documents Field Functions 
      bool hasDocuments() const { return this->documents_ != nullptr;};
      void deleteDocuments() { this->documents_ = nullptr;};
      inline const vector<Data::Documents> & getDocuments() const { DARABONBA_PTR_GET_CONST(documents_, vector<Data::Documents>) };
      inline vector<Data::Documents> getDocuments() { DARABONBA_PTR_GET(documents_, vector<Data::Documents>) };
      inline Data& setDocuments(const vector<Data::Documents> & documents) { DARABONBA_PTR_SET_VALUE(documents_, documents) };
      inline Data& setDocuments(vector<Data::Documents> && documents) { DARABONBA_PTR_SET_RVALUE(documents_, documents) };


      // jobId Field Functions 
      bool hasJobId() const { return this->jobId_ != nullptr;};
      void deleteJobId() { this->jobId_ = nullptr;};
      inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
      inline Data& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The list of imported documents.
      shared_ptr<vector<Data::Documents>> documents_ {};
      // The ID of the job.
      shared_ptr<string> jobId_ {};
      // The status of the knowledge base job. Valid values:
      // 
      // *   COMPLETED
      // *   FAILED
      // *   RUNNING
      // *   PENDING
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->status_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetIndexJobStatusResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetIndexJobStatusResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetIndexJobStatusResponseBody::Data) };
    inline GetIndexJobStatusResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetIndexJobStatusResponseBody::Data) };
    inline GetIndexJobStatusResponseBody& setData(const GetIndexJobStatusResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetIndexJobStatusResponseBody& setData(GetIndexJobStatusResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetIndexJobStatusResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetIndexJobStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetIndexJobStatusResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetIndexJobStatusResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // HTTP status code
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<GetIndexJobStatusResponseBody::Data> data_ {};
    // The error message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The HTTP status code returned.
    shared_ptr<string> status_ {};
    // Indications whether the API call is successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
