// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVCCROUTEENTRYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEVCCROUTEENTRYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class CreateVccRouteEntryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVccRouteEntryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVccRouteEntryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateVccRouteEntryResponseBody() = default ;
    CreateVccRouteEntryResponseBody(const CreateVccRouteEntryResponseBody &) = default ;
    CreateVccRouteEntryResponseBody(CreateVccRouteEntryResponseBody &&) = default ;
    CreateVccRouteEntryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVccRouteEntryResponseBody() = default ;
    CreateVccRouteEntryResponseBody& operator=(const CreateVccRouteEntryResponseBody &) = default ;
    CreateVccRouteEntryResponseBody& operator=(CreateVccRouteEntryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Content : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Content& obj) { 
        DARABONBA_PTR_TO_JSON(VccRouteEntryId, vccRouteEntryId_);
      };
      friend void from_json(const Darabonba::Json& j, Content& obj) { 
        DARABONBA_PTR_FROM_JSON(VccRouteEntryId, vccRouteEntryId_);
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
      virtual bool empty() const override { return this->vccRouteEntryId_ == nullptr; };
      // vccRouteEntryId Field Functions 
      bool hasVccRouteEntryId() const { return this->vccRouteEntryId_ != nullptr;};
      void deleteVccRouteEntryId() { this->vccRouteEntryId_ = nullptr;};
      inline string getVccRouteEntryId() const { DARABONBA_PTR_GET_DEFAULT(vccRouteEntryId_, "") };
      inline Content& setVccRouteEntryId(string vccRouteEntryId) { DARABONBA_PTR_SET_VALUE(vccRouteEntryId_, vccRouteEntryId) };


    protected:
      // The ID of the route entry.
      shared_ptr<string> vccRouteEntryId_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->content_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline CreateVccRouteEntryResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline CreateVccRouteEntryResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const CreateVccRouteEntryResponseBody::Content & getContent() const { DARABONBA_PTR_GET_CONST(content_, CreateVccRouteEntryResponseBody::Content) };
    inline CreateVccRouteEntryResponseBody::Content getContent() { DARABONBA_PTR_GET(content_, CreateVccRouteEntryResponseBody::Content) };
    inline CreateVccRouteEntryResponseBody& setContent(const CreateVccRouteEntryResponseBody::Content & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline CreateVccRouteEntryResponseBody& setContent(CreateVccRouteEntryResponseBody::Content && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateVccRouteEntryResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateVccRouteEntryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The detailed information about the failed permission verification.
    shared_ptr<string> accessDeniedDetail_ {};
    // The response status code.
    shared_ptr<int32_t> code_ {};
    // The returned data.
    shared_ptr<CreateVccRouteEntryResponseBody::Content> content_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
