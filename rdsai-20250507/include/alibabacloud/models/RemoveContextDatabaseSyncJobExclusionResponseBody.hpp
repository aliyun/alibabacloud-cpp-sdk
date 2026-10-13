// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVECONTEXTDATABASESYNCJOBEXCLUSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_REMOVECONTEXTDATABASESYNCJOBEXCLUSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class RemoveContextDatabaseSyncJobExclusionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveContextDatabaseSyncJobExclusionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveContextDatabaseSyncJobExclusionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    RemoveContextDatabaseSyncJobExclusionResponseBody() = default ;
    RemoveContextDatabaseSyncJobExclusionResponseBody(const RemoveContextDatabaseSyncJobExclusionResponseBody &) = default ;
    RemoveContextDatabaseSyncJobExclusionResponseBody(RemoveContextDatabaseSyncJobExclusionResponseBody &&) = default ;
    RemoveContextDatabaseSyncJobExclusionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveContextDatabaseSyncJobExclusionResponseBody() = default ;
    RemoveContextDatabaseSyncJobExclusionResponseBody& operator=(const RemoveContextDatabaseSyncJobExclusionResponseBody &) = default ;
    RemoveContextDatabaseSyncJobExclusionResponseBody& operator=(RemoveContextDatabaseSyncJobExclusionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Changed, changed_);
        DARABONBA_PTR_TO_JSON(ConfigVersion, configVersion_);
        DARABONBA_PTR_TO_JSON(DocumentId, documentId_);
        DARABONBA_PTR_TO_JSON(Excluded, excluded_);
        DARABONBA_PTR_TO_JSON(JobId, jobId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Changed, changed_);
        DARABONBA_PTR_FROM_JSON(ConfigVersion, configVersion_);
        DARABONBA_PTR_FROM_JSON(DocumentId, documentId_);
        DARABONBA_PTR_FROM_JSON(Excluded, excluded_);
        DARABONBA_PTR_FROM_JSON(JobId, jobId_);
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
      virtual bool empty() const override { return this->changed_ == nullptr
        && this->configVersion_ == nullptr && this->documentId_ == nullptr && this->excluded_ == nullptr && this->jobId_ == nullptr; };
      // changed Field Functions 
      bool hasChanged() const { return this->changed_ != nullptr;};
      void deleteChanged() { this->changed_ = nullptr;};
      inline bool getChanged() const { DARABONBA_PTR_GET_DEFAULT(changed_, false) };
      inline Data& setChanged(bool changed) { DARABONBA_PTR_SET_VALUE(changed_, changed) };


      // configVersion Field Functions 
      bool hasConfigVersion() const { return this->configVersion_ != nullptr;};
      void deleteConfigVersion() { this->configVersion_ = nullptr;};
      inline int32_t getConfigVersion() const { DARABONBA_PTR_GET_DEFAULT(configVersion_, 0) };
      inline Data& setConfigVersion(int32_t configVersion) { DARABONBA_PTR_SET_VALUE(configVersion_, configVersion) };


      // documentId Field Functions 
      bool hasDocumentId() const { return this->documentId_ != nullptr;};
      void deleteDocumentId() { this->documentId_ = nullptr;};
      inline string getDocumentId() const { DARABONBA_PTR_GET_DEFAULT(documentId_, "") };
      inline Data& setDocumentId(string documentId) { DARABONBA_PTR_SET_VALUE(documentId_, documentId) };


      // excluded Field Functions 
      bool hasExcluded() const { return this->excluded_ != nullptr;};
      void deleteExcluded() { this->excluded_ = nullptr;};
      inline bool getExcluded() const { DARABONBA_PTR_GET_DEFAULT(excluded_, false) };
      inline Data& setExcluded(bool excluded) { DARABONBA_PTR_SET_VALUE(excluded_, excluded) };


      // jobId Field Functions 
      bool hasJobId() const { return this->jobId_ != nullptr;};
      void deleteJobId() { this->jobId_ = nullptr;};
      inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
      inline Data& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    protected:
      // Indicates whether the data has changed.
      shared_ptr<bool> changed_ {};
      // The configuration version number.
      shared_ptr<int32_t> configVersion_ {};
      // The document ID.
      shared_ptr<string> documentId_ {};
      // Indicates whether the item is excluded.
      shared_ptr<bool> excluded_ {};
      // The job ID, which is a system-generated UUID.
      shared_ptr<string> jobId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline RemoveContextDatabaseSyncJobExclusionResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const RemoveContextDatabaseSyncJobExclusionResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, RemoveContextDatabaseSyncJobExclusionResponseBody::Data) };
    inline RemoveContextDatabaseSyncJobExclusionResponseBody::Data getData() { DARABONBA_PTR_GET(data_, RemoveContextDatabaseSyncJobExclusionResponseBody::Data) };
    inline RemoveContextDatabaseSyncJobExclusionResponseBody& setData(const RemoveContextDatabaseSyncJobExclusionResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline RemoveContextDatabaseSyncJobExclusionResponseBody& setData(RemoveContextDatabaseSyncJobExclusionResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int64_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0L) };
    inline RemoveContextDatabaseSyncJobExclusionResponseBody& setHttpStatusCode(int64_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline RemoveContextDatabaseSyncJobExclusionResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RemoveContextDatabaseSyncJobExclusionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline RemoveContextDatabaseSyncJobExclusionResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code.
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<RemoveContextDatabaseSyncJobExclusionResponseBody::Data> data_ {};
    // The HTTP status code.
    shared_ptr<int64_t> httpStatusCode_ {};
    // The message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
