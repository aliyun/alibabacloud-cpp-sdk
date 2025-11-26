// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCETAGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCETAGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListResourceTagsResponseBodyResourceTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ListResourceTagsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceTagsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceTags, resourceTags_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceTagsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceTags, resourceTags_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListResourceTagsResponseBody() = default ;
    ListResourceTagsResponseBody(const ListResourceTagsResponseBody &) = default ;
    ListResourceTagsResponseBody(ListResourceTagsResponseBody &&) = default ;
    ListResourceTagsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceTagsResponseBody() = default ;
    ListResourceTagsResponseBody& operator=(const ListResourceTagsResponseBody &) = default ;
    ListResourceTagsResponseBody& operator=(ListResourceTagsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->httpStatusCode_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->resourceTags_ == nullptr && return this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListResourceTagsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListResourceTagsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListResourceTagsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListResourceTagsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceTags Field Functions 
    bool hasResourceTags() const { return this->resourceTags_ != nullptr;};
    void deleteResourceTags() { this->resourceTags_ = nullptr;};
    inline const ListResourceTagsResponseBodyResourceTags & resourceTags() const { DARABONBA_PTR_GET_CONST(resourceTags_, ListResourceTagsResponseBodyResourceTags) };
    inline ListResourceTagsResponseBodyResourceTags resourceTags() { DARABONBA_PTR_GET(resourceTags_, ListResourceTagsResponseBodyResourceTags) };
    inline ListResourceTagsResponseBody& setResourceTags(const ListResourceTagsResponseBodyResourceTags & resourceTags) { DARABONBA_PTR_SET_VALUE(resourceTags_, resourceTags) };
    inline ListResourceTagsResponseBody& setResourceTags(ListResourceTagsResponseBodyResourceTags && resourceTags) { DARABONBA_PTR_SET_RVALUE(resourceTags_, resourceTags) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListResourceTagsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<ListResourceTagsResponseBodyResourceTags> resourceTags_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
