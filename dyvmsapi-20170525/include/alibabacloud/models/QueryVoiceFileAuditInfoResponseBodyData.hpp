// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYVOICEFILEAUDITINFORESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYVOICEFILEAUDITINFORESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class QueryVoiceFileAuditInfoResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryVoiceFileAuditInfoResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AuditState, auditState_);
      DARABONBA_PTR_TO_JSON(RejectInfo, rejectInfo_);
      DARABONBA_PTR_TO_JSON(VoiceCode, voiceCode_);
    };
    friend void from_json(const Darabonba::Json& j, QueryVoiceFileAuditInfoResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AuditState, auditState_);
      DARABONBA_PTR_FROM_JSON(RejectInfo, rejectInfo_);
      DARABONBA_PTR_FROM_JSON(VoiceCode, voiceCode_);
    };
    QueryVoiceFileAuditInfoResponseBodyData() = default ;
    QueryVoiceFileAuditInfoResponseBodyData(const QueryVoiceFileAuditInfoResponseBodyData &) = default ;
    QueryVoiceFileAuditInfoResponseBodyData(QueryVoiceFileAuditInfoResponseBodyData &&) = default ;
    QueryVoiceFileAuditInfoResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryVoiceFileAuditInfoResponseBodyData() = default ;
    QueryVoiceFileAuditInfoResponseBodyData& operator=(const QueryVoiceFileAuditInfoResponseBodyData &) = default ;
    QueryVoiceFileAuditInfoResponseBodyData& operator=(QueryVoiceFileAuditInfoResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->auditState_ == nullptr
        && return this->rejectInfo_ == nullptr && return this->voiceCode_ == nullptr; };
    // auditState Field Functions 
    bool hasAuditState() const { return this->auditState_ != nullptr;};
    void deleteAuditState() { this->auditState_ = nullptr;};
    inline string auditState() const { DARABONBA_PTR_GET_DEFAULT(auditState_, "") };
    inline QueryVoiceFileAuditInfoResponseBodyData& setAuditState(string auditState) { DARABONBA_PTR_SET_VALUE(auditState_, auditState) };


    // rejectInfo Field Functions 
    bool hasRejectInfo() const { return this->rejectInfo_ != nullptr;};
    void deleteRejectInfo() { this->rejectInfo_ = nullptr;};
    inline string rejectInfo() const { DARABONBA_PTR_GET_DEFAULT(rejectInfo_, "") };
    inline QueryVoiceFileAuditInfoResponseBodyData& setRejectInfo(string rejectInfo) { DARABONBA_PTR_SET_VALUE(rejectInfo_, rejectInfo) };


    // voiceCode Field Functions 
    bool hasVoiceCode() const { return this->voiceCode_ != nullptr;};
    void deleteVoiceCode() { this->voiceCode_ = nullptr;};
    inline string voiceCode() const { DARABONBA_PTR_GET_DEFAULT(voiceCode_, "") };
    inline QueryVoiceFileAuditInfoResponseBodyData& setVoiceCode(string voiceCode) { DARABONBA_PTR_SET_VALUE(voiceCode_, voiceCode) };


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
    std::shared_ptr<string> auditState_ = nullptr;
    // The reason why the voice file was rejected.
    std::shared_ptr<string> rejectInfo_ = nullptr;
    // The code of the voice file.
    std::shared_ptr<string> voiceCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
