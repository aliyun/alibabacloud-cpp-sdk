// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESOLVEWORKITEMARTIFACTACCESSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RESOLVEWORKITEMARTIFACTACCESSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class ResolveWorkItemArtifactAccessResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResolveWorkItemArtifactAccessResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(downloadUrl, downloadUrl_);
      DARABONBA_PTR_TO_JSON(expiresAt, expiresAt_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ResolveWorkItemArtifactAccessResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(downloadUrl, downloadUrl_);
      DARABONBA_PTR_FROM_JSON(expiresAt, expiresAt_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ResolveWorkItemArtifactAccessResponseBody() = default ;
    ResolveWorkItemArtifactAccessResponseBody(const ResolveWorkItemArtifactAccessResponseBody &) = default ;
    ResolveWorkItemArtifactAccessResponseBody(ResolveWorkItemArtifactAccessResponseBody &&) = default ;
    ResolveWorkItemArtifactAccessResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResolveWorkItemArtifactAccessResponseBody() = default ;
    ResolveWorkItemArtifactAccessResponseBody& operator=(const ResolveWorkItemArtifactAccessResponseBody &) = default ;
    ResolveWorkItemArtifactAccessResponseBody& operator=(ResolveWorkItemArtifactAccessResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->downloadUrl_ == nullptr && this->expiresAt_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ResolveWorkItemArtifactAccessResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // downloadUrl Field Functions 
    bool hasDownloadUrl() const { return this->downloadUrl_ != nullptr;};
    void deleteDownloadUrl() { this->downloadUrl_ = nullptr;};
    inline string getDownloadUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadUrl_, "") };
    inline ResolveWorkItemArtifactAccessResponseBody& setDownloadUrl(string downloadUrl) { DARABONBA_PTR_SET_VALUE(downloadUrl_, downloadUrl) };


    // expiresAt Field Functions 
    bool hasExpiresAt() const { return this->expiresAt_ != nullptr;};
    void deleteExpiresAt() { this->expiresAt_ = nullptr;};
    inline string getExpiresAt() const { DARABONBA_PTR_GET_DEFAULT(expiresAt_, "") };
    inline ResolveWorkItemArtifactAccessResponseBody& setExpiresAt(string expiresAt) { DARABONBA_PTR_SET_VALUE(expiresAt_, expiresAt) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ResolveWorkItemArtifactAccessResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ResolveWorkItemArtifactAccessResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The business status code. A value of 200 indicates success.
    shared_ptr<string> code_ {};
    // The short-term signed download URL of the artifact. You can send a GET request directly to this URL before it expires.
    shared_ptr<string> downloadUrl_ {};
    // The expiration time of the URL in ISO 8601 format.
    shared_ptr<string> expiresAt_ {};
    // The error message.
    shared_ptr<string> message_ {};
    // The request trace ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
