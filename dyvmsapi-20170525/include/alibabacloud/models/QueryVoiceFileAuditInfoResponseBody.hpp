// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYVOICEFILEAUDITINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYVOICEFILEAUDITINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class QueryVoiceFileAuditInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryVoiceFileAuditInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryVoiceFileAuditInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryVoiceFileAuditInfoResponseBody() = default ;
    QueryVoiceFileAuditInfoResponseBody(const QueryVoiceFileAuditInfoResponseBody &) = default ;
    QueryVoiceFileAuditInfoResponseBody(QueryVoiceFileAuditInfoResponseBody &&) = default ;
    QueryVoiceFileAuditInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryVoiceFileAuditInfoResponseBody() = default ;
    QueryVoiceFileAuditInfoResponseBody& operator=(const QueryVoiceFileAuditInfoResponseBody &) = default ;
    QueryVoiceFileAuditInfoResponseBody& operator=(QueryVoiceFileAuditInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AuditState, auditState_);
        DARABONBA_PTR_TO_JSON(RejectInfo, rejectInfo_);
        DARABONBA_PTR_TO_JSON(VoiceCode, voiceCode_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AuditState, auditState_);
        DARABONBA_PTR_FROM_JSON(RejectInfo, rejectInfo_);
        DARABONBA_PTR_FROM_JSON(VoiceCode, voiceCode_);
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
      virtual bool empty() const override { return this->auditState_ == nullptr
        && this->rejectInfo_ == nullptr && this->voiceCode_ == nullptr; };
      // auditState Field Functions 
      bool hasAuditState() const { return this->auditState_ != nullptr;};
      void deleteAuditState() { this->auditState_ = nullptr;};
      inline string getAuditState() const { DARABONBA_PTR_GET_DEFAULT(auditState_, "") };
      inline Data& setAuditState(string auditState) { DARABONBA_PTR_SET_VALUE(auditState_, auditState) };


      // rejectInfo Field Functions 
      bool hasRejectInfo() const { return this->rejectInfo_ != nullptr;};
      void deleteRejectInfo() { this->rejectInfo_ = nullptr;};
      inline string getRejectInfo() const { DARABONBA_PTR_GET_DEFAULT(rejectInfo_, "") };
      inline Data& setRejectInfo(string rejectInfo) { DARABONBA_PTR_SET_VALUE(rejectInfo_, rejectInfo) };


      // voiceCode Field Functions 
      bool hasVoiceCode() const { return this->voiceCode_ != nullptr;};
      void deleteVoiceCode() { this->voiceCode_ = nullptr;};
      inline string getVoiceCode() const { DARABONBA_PTR_GET_DEFAULT(voiceCode_, "") };
      inline Data& setVoiceCode(string voiceCode) { DARABONBA_PTR_SET_VALUE(voiceCode_, voiceCode) };


    protected:
      // The review state of the voice file. Valid values:
      // 
      // *   **AUDIT_STATE_INIT**: The voice file was under review.
      // *   **AUDIT_STATE_PASS**: The voice file was approved.
      // *   **AUDIT_STATE_NOT_PASS**: The voice file was rejected.
      // *   **AUDIT_STATE_UPLOADING**: The voice file was approved and is being uploaded.
      // *   **AUDIT_STATE_REDOING**: The voice file was being reprocessed.
      // *   **AUDIT_SATE_CANCEL**: The review of the voice file was canceled.
      // *   **AUDIT_PAUSE**: The review of the voice file was suspended.
      // *   **AUDIT_ORDER_FINISHED**: The voice file was approved by the ticket system and was waiting for the review of the Internet service provider (ISP).
      shared_ptr<string> auditState_ {};
      // The reason why the voice file was rejected.
      shared_ptr<string> rejectInfo_ {};
      // The code of the voice file.
      shared_ptr<string> voiceCode_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryVoiceFileAuditInfoResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<QueryVoiceFileAuditInfoResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<QueryVoiceFileAuditInfoResponseBody::Data>) };
    inline vector<QueryVoiceFileAuditInfoResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<QueryVoiceFileAuditInfoResponseBody::Data>) };
    inline QueryVoiceFileAuditInfoResponseBody& setData(const vector<QueryVoiceFileAuditInfoResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryVoiceFileAuditInfoResponseBody& setData(vector<QueryVoiceFileAuditInfoResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryVoiceFileAuditInfoResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryVoiceFileAuditInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response code.
    // 
    // The value OK indicates that the request was successful. For more information about other response codes, see [API error codes](https://help.aliyun.com/document_detail/112502.html).
    shared_ptr<string> code_ {};
    // The response parameters.
    shared_ptr<vector<QueryVoiceFileAuditInfoResponseBody::Data>> data_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
