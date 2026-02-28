// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEERATTACHMENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEERATTACHMENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class CreateErAttachmentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateErAttachmentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateErAttachmentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateErAttachmentResponseBody() = default ;
    CreateErAttachmentResponseBody(const CreateErAttachmentResponseBody &) = default ;
    CreateErAttachmentResponseBody(CreateErAttachmentResponseBody &&) = default ;
    CreateErAttachmentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateErAttachmentResponseBody() = default ;
    CreateErAttachmentResponseBody& operator=(const CreateErAttachmentResponseBody &) = default ;
    CreateErAttachmentResponseBody& operator=(CreateErAttachmentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Content : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Content& obj) { 
        DARABONBA_PTR_TO_JSON(ErAttachmentId, erAttachmentId_);
      };
      friend void from_json(const Darabonba::Json& j, Content& obj) { 
        DARABONBA_PTR_FROM_JSON(ErAttachmentId, erAttachmentId_);
      };
      Content() = default ;
      Content(const Content &) = default ;
      Content(Content &&) = default ;
      Content(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Content() = default ;
      Content& operator=(const Content &) = default ;
      Content& operator=(Content &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->erAttachmentId_ == nullptr; };
      // erAttachmentId Field Functions 
      bool hasErAttachmentId() const { return this->erAttachmentId_ != nullptr;};
      void deleteErAttachmentId() { this->erAttachmentId_ = nullptr;};
      inline string getErAttachmentId() const { DARABONBA_PTR_GET_DEFAULT(erAttachmentId_, "") };
      inline Content& setErAttachmentId(string erAttachmentId) { DARABONBA_PTR_SET_VALUE(erAttachmentId_, erAttachmentId) };


    protected:
      // The ID of the network connection instance.
      shared_ptr<string> erAttachmentId_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->content_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline CreateErAttachmentResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline CreateErAttachmentResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const CreateErAttachmentResponseBody::Content & getContent() const { DARABONBA_PTR_GET_CONST(content_, CreateErAttachmentResponseBody::Content) };
    inline CreateErAttachmentResponseBody::Content getContent() { DARABONBA_PTR_GET(content_, CreateErAttachmentResponseBody::Content) };
    inline CreateErAttachmentResponseBody& setContent(const CreateErAttachmentResponseBody::Content & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline CreateErAttachmentResponseBody& setContent(CreateErAttachmentResponseBody::Content && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateErAttachmentResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateErAttachmentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The detailed information about the failed permission verification.
    shared_ptr<string> accessDeniedDetail_ {};
    // The response status code.
    shared_ptr<int32_t> code_ {};
    // The response data.
    shared_ptr<CreateErAttachmentResponseBody::Content> content_ {};
    // The error message. (If the instance is in the Exception state, the exception cause is displayed.)
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
