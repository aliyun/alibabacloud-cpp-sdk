// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEERROUTEMAPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEERROUTEMAPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class CreateErRouteMapResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateErRouteMapResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateErRouteMapResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateErRouteMapResponseBody() = default ;
    CreateErRouteMapResponseBody(const CreateErRouteMapResponseBody &) = default ;
    CreateErRouteMapResponseBody(CreateErRouteMapResponseBody &&) = default ;
    CreateErRouteMapResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateErRouteMapResponseBody() = default ;
    CreateErRouteMapResponseBody& operator=(const CreateErRouteMapResponseBody &) = default ;
    CreateErRouteMapResponseBody& operator=(CreateErRouteMapResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Content : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Content& obj) { 
        DARABONBA_PTR_TO_JSON(ErRouteMapId, erRouteMapId_);
      };
      friend void from_json(const Darabonba::Json& j, Content& obj) { 
        DARABONBA_PTR_FROM_JSON(ErRouteMapId, erRouteMapId_);
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
      virtual bool empty() const override { return this->erRouteMapId_ == nullptr; };
      // erRouteMapId Field Functions 
      bool hasErRouteMapId() const { return this->erRouteMapId_ != nullptr;};
      void deleteErRouteMapId() { this->erRouteMapId_ = nullptr;};
      inline string getErRouteMapId() const { DARABONBA_PTR_GET_DEFAULT(erRouteMapId_, "") };
      inline Content& setErRouteMapId(string erRouteMapId) { DARABONBA_PTR_SET_VALUE(erRouteMapId_, erRouteMapId) };


    protected:
      // routing policy ID
      shared_ptr<string> erRouteMapId_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->content_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline CreateErRouteMapResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline CreateErRouteMapResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const CreateErRouteMapResponseBody::Content & getContent() const { DARABONBA_PTR_GET_CONST(content_, CreateErRouteMapResponseBody::Content) };
    inline CreateErRouteMapResponseBody::Content getContent() { DARABONBA_PTR_GET(content_, CreateErRouteMapResponseBody::Content) };
    inline CreateErRouteMapResponseBody& setContent(const CreateErRouteMapResponseBody::Content & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline CreateErRouteMapResponseBody& setContent(CreateErRouteMapResponseBody::Content && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateErRouteMapResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateErRouteMapResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details about the access denial. This parameter is returned only if Resource Access Management (RAM) authentication failed.
    shared_ptr<string> accessDeniedDetail_ {};
    // The response status code.
    shared_ptr<int32_t> code_ {};
    // The response parameters.
    shared_ptr<CreateErRouteMapResponseBody::Content> content_ {};
    // The error message. (If the instance is in the Exception state, the exception cause is prompted.)
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
