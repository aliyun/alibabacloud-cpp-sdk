// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNASSOCIATEVPDCIDRBLOCKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UNASSOCIATEVPDCIDRBLOCKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class UnAssociateVpdCidrBlockResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UnAssociateVpdCidrBlockResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UnAssociateVpdCidrBlockResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UnAssociateVpdCidrBlockResponseBody() = default ;
    UnAssociateVpdCidrBlockResponseBody(const UnAssociateVpdCidrBlockResponseBody &) = default ;
    UnAssociateVpdCidrBlockResponseBody(UnAssociateVpdCidrBlockResponseBody &&) = default ;
    UnAssociateVpdCidrBlockResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UnAssociateVpdCidrBlockResponseBody() = default ;
    UnAssociateVpdCidrBlockResponseBody& operator=(const UnAssociateVpdCidrBlockResponseBody &) = default ;
    UnAssociateVpdCidrBlockResponseBody& operator=(UnAssociateVpdCidrBlockResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Content : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Content& obj) { 
        DARABONBA_PTR_TO_JSON(VpdId, vpdId_);
      };
      friend void from_json(const Darabonba::Json& j, Content& obj) { 
        DARABONBA_PTR_FROM_JSON(VpdId, vpdId_);
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
      virtual bool empty() const override { return this->vpdId_ == nullptr; };
      // vpdId Field Functions 
      bool hasVpdId() const { return this->vpdId_ != nullptr;};
      void deleteVpdId() { this->vpdId_ = nullptr;};
      inline string getVpdId() const { DARABONBA_PTR_GET_DEFAULT(vpdId_, "") };
      inline Content& setVpdId(string vpdId) { DARABONBA_PTR_SET_VALUE(vpdId_, vpdId) };


    protected:
      // The ID of the Lingjun CIDR block.
      shared_ptr<string> vpdId_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->content_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline UnAssociateVpdCidrBlockResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline UnAssociateVpdCidrBlockResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const UnAssociateVpdCidrBlockResponseBody::Content & getContent() const { DARABONBA_PTR_GET_CONST(content_, UnAssociateVpdCidrBlockResponseBody::Content) };
    inline UnAssociateVpdCidrBlockResponseBody::Content getContent() { DARABONBA_PTR_GET(content_, UnAssociateVpdCidrBlockResponseBody::Content) };
    inline UnAssociateVpdCidrBlockResponseBody& setContent(const UnAssociateVpdCidrBlockResponseBody::Content & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline UnAssociateVpdCidrBlockResponseBody& setContent(UnAssociateVpdCidrBlockResponseBody::Content && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline UnAssociateVpdCidrBlockResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UnAssociateVpdCidrBlockResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // 访问被拒绝详细信息。
    shared_ptr<string> accessDeniedDetail_ {};
    // The response status code.
    shared_ptr<int32_t> code_ {};
    // The response data.
    shared_ptr<UnAssociateVpdCidrBlockResponseBody::Content> content_ {};
    // The error message. (If the instance is in the Exception state, the exception cause is prompted.)
    shared_ptr<string> message_ {};
    // Request ID of the current request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
