// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESLRRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESLRRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class DescribeSlrResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSlrResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSlrResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeSlrResponseBody() = default ;
    DescribeSlrResponseBody(const DescribeSlrResponseBody &) = default ;
    DescribeSlrResponseBody(DescribeSlrResponseBody &&) = default ;
    DescribeSlrResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSlrResponseBody() = default ;
    DescribeSlrResponseBody& operator=(const DescribeSlrResponseBody &) = default ;
    DescribeSlrResponseBody& operator=(DescribeSlrResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Content : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Content& obj) { 
        DARABONBA_PTR_TO_JSON(HasRole, hasRole_);
      };
      friend void from_json(const Darabonba::Json& j, Content& obj) { 
        DARABONBA_PTR_FROM_JSON(HasRole, hasRole_);
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
      virtual bool empty() const override { return this->hasRole_ == nullptr; };
      // hasRole Field Functions 
      bool hasHasRole() const { return this->hasRole_ != nullptr;};
      void deleteHasRole() { this->hasRole_ = nullptr;};
      inline bool getHasRole() const { DARABONBA_PTR_GET_DEFAULT(hasRole_, false) };
      inline Content& setHasRole(bool hasRole) { DARABONBA_PTR_SET_VALUE(hasRole_, hasRole) };


    protected:
      // Whether the role exists
      shared_ptr<bool> hasRole_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->content_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline DescribeSlrResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DescribeSlrResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const DescribeSlrResponseBody::Content & getContent() const { DARABONBA_PTR_GET_CONST(content_, DescribeSlrResponseBody::Content) };
    inline DescribeSlrResponseBody::Content getContent() { DARABONBA_PTR_GET(content_, DescribeSlrResponseBody::Content) };
    inline DescribeSlrResponseBody& setContent(const DescribeSlrResponseBody::Content & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline DescribeSlrResponseBody& setContent(DescribeSlrResponseBody::Content && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeSlrResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSlrResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the request denial.
    shared_ptr<string> accessDeniedDetail_ {};
    // The response status code.
    shared_ptr<int32_t> code_ {};
    // The returned data.
    shared_ptr<DescribeSlrResponseBody::Content> content_ {};
    // The error message. (If the instance is in the Exception state, the exception cause is prompted.)
    shared_ptr<string> message_ {};
    // Request ID of the current request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
