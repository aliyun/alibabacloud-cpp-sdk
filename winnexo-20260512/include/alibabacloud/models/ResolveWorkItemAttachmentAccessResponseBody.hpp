// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESOLVEWORKITEMATTACHMENTACCESSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RESOLVEWORKITEMATTACHMENTACCESSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class ResolveWorkItemAttachmentAccessResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResolveWorkItemAttachmentAccessResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(accessUrl, accessUrl_);
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(expiresAt, expiresAt_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ResolveWorkItemAttachmentAccessResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(accessUrl, accessUrl_);
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(expiresAt, expiresAt_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ResolveWorkItemAttachmentAccessResponseBody() = default ;
    ResolveWorkItemAttachmentAccessResponseBody(const ResolveWorkItemAttachmentAccessResponseBody &) = default ;
    ResolveWorkItemAttachmentAccessResponseBody(ResolveWorkItemAttachmentAccessResponseBody &&) = default ;
    ResolveWorkItemAttachmentAccessResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResolveWorkItemAttachmentAccessResponseBody() = default ;
    ResolveWorkItemAttachmentAccessResponseBody& operator=(const ResolveWorkItemAttachmentAccessResponseBody &) = default ;
    ResolveWorkItemAttachmentAccessResponseBody& operator=(ResolveWorkItemAttachmentAccessResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessUrl_ == nullptr
        && this->code_ == nullptr && this->expiresAt_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // accessUrl Field Functions 
    bool hasAccessUrl() const { return this->accessUrl_ != nullptr;};
    void deleteAccessUrl() { this->accessUrl_ = nullptr;};
    inline string getAccessUrl() const { DARABONBA_PTR_GET_DEFAULT(accessUrl_, "") };
    inline ResolveWorkItemAttachmentAccessResponseBody& setAccessUrl(string accessUrl) { DARABONBA_PTR_SET_VALUE(accessUrl_, accessUrl) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ResolveWorkItemAttachmentAccessResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // expiresAt Field Functions 
    bool hasExpiresAt() const { return this->expiresAt_ != nullptr;};
    void deleteExpiresAt() { this->expiresAt_ = nullptr;};
    inline string getExpiresAt() const { DARABONBA_PTR_GET_DEFAULT(expiresAt_, "") };
    inline ResolveWorkItemAttachmentAccessResponseBody& setExpiresAt(string expiresAt) { DARABONBA_PTR_SET_VALUE(expiresAt_, expiresAt) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ResolveWorkItemAttachmentAccessResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ResolveWorkItemAttachmentAccessResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // 附件短期预览地址，过期前可直接 GET
    shared_ptr<string> accessUrl_ {};
    // 业务状态码；成功为200
    shared_ptr<string> code_ {};
    // 地址过期时间(ISO8601)
    shared_ptr<string> expiresAt_ {};
    // 错误描述
    shared_ptr<string> message_ {};
    // 请求追踪ID
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
