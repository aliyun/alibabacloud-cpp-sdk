// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEANNOUNCEMENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEANNOUNCEMENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class CreateAnnouncementResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAnnouncementResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(announcementId, announcementId_);
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(createdBy, createdBy_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(publishedAt, publishedAt_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(sourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAnnouncementResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(announcementId, announcementId_);
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(createdBy, createdBy_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(publishedAt, publishedAt_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(sourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    CreateAnnouncementResponseBody() = default ;
    CreateAnnouncementResponseBody(const CreateAnnouncementResponseBody &) = default ;
    CreateAnnouncementResponseBody(CreateAnnouncementResponseBody &&) = default ;
    CreateAnnouncementResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAnnouncementResponseBody() = default ;
    CreateAnnouncementResponseBody& operator=(const CreateAnnouncementResponseBody &) = default ;
    CreateAnnouncementResponseBody& operator=(CreateAnnouncementResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->announcementId_ == nullptr
        && this->code_ == nullptr && this->createdBy_ == nullptr && this->message_ == nullptr && this->publishedAt_ == nullptr && this->requestId_ == nullptr
        && this->sourceType_ == nullptr && this->status_ == nullptr; };
    // announcementId Field Functions 
    bool hasAnnouncementId() const { return this->announcementId_ != nullptr;};
    void deleteAnnouncementId() { this->announcementId_ = nullptr;};
    inline int64_t getAnnouncementId() const { DARABONBA_PTR_GET_DEFAULT(announcementId_, 0L) };
    inline CreateAnnouncementResponseBody& setAnnouncementId(int64_t announcementId) { DARABONBA_PTR_SET_VALUE(announcementId_, announcementId) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateAnnouncementResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // createdBy Field Functions 
    bool hasCreatedBy() const { return this->createdBy_ != nullptr;};
    void deleteCreatedBy() { this->createdBy_ = nullptr;};
    inline int64_t getCreatedBy() const { DARABONBA_PTR_GET_DEFAULT(createdBy_, 0L) };
    inline CreateAnnouncementResponseBody& setCreatedBy(int64_t createdBy) { DARABONBA_PTR_SET_VALUE(createdBy_, createdBy) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateAnnouncementResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // publishedAt Field Functions 
    bool hasPublishedAt() const { return this->publishedAt_ != nullptr;};
    void deletePublishedAt() { this->publishedAt_ = nullptr;};
    inline string getPublishedAt() const { DARABONBA_PTR_GET_DEFAULT(publishedAt_, "") };
    inline CreateAnnouncementResponseBody& setPublishedAt(string publishedAt) { DARABONBA_PTR_SET_VALUE(publishedAt_, publishedAt) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateAnnouncementResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline CreateAnnouncementResponseBody& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline CreateAnnouncementResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The business ID of the notice.
    shared_ptr<int64_t> announcementId_ {};
    // The error code.
    shared_ptr<string> code_ {};
    // The creator.
    shared_ptr<int64_t> createdBy_ {};
    // The prompt message.
    shared_ptr<string> message_ {};
    // The publish time in ISO 8601 format. This field is empty for drafts.
    shared_ptr<string> publishedAt_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The source type of the dictionary file. Valid values: OSS: Object Storage Service (OSS). ORIGIN: retains the previously uploaded dictionary.
    shared_ptr<string> sourceType_ {};
    // The refund status. You need to query and confirm the refund status during the refund process. Valid values:
    // - SUCCESS: All succeeded.
    // - FAIL: Failed.
    // - WAIT_PAY: Waiting for refund.
    // - EXPIRE: Expired.
    // - PAYING: Refund in progress.
    // - TERMINATE: Refund terminated.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
