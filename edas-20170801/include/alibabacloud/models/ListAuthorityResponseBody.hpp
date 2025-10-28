// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAUTHORITYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAUTHORITYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListAuthorityResponseBodyAuthorityList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListAuthorityResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAuthorityResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorityList, authorityList_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAuthorityResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorityList, authorityList_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAuthorityResponseBody() = default ;
    ListAuthorityResponseBody(const ListAuthorityResponseBody &) = default ;
    ListAuthorityResponseBody(ListAuthorityResponseBody &&) = default ;
    ListAuthorityResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAuthorityResponseBody() = default ;
    ListAuthorityResponseBody& operator=(const ListAuthorityResponseBody &) = default ;
    ListAuthorityResponseBody& operator=(ListAuthorityResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authorityList_ == nullptr
        && return this->code_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr; };
    // authorityList Field Functions 
    bool hasAuthorityList() const { return this->authorityList_ != nullptr;};
    void deleteAuthorityList() { this->authorityList_ = nullptr;};
    inline const ListAuthorityResponseBodyAuthorityList & authorityList() const { DARABONBA_PTR_GET_CONST(authorityList_, ListAuthorityResponseBodyAuthorityList) };
    inline ListAuthorityResponseBodyAuthorityList authorityList() { DARABONBA_PTR_GET(authorityList_, ListAuthorityResponseBodyAuthorityList) };
    inline ListAuthorityResponseBody& setAuthorityList(const ListAuthorityResponseBodyAuthorityList & authorityList) { DARABONBA_PTR_SET_VALUE(authorityList_, authorityList) };
    inline ListAuthorityResponseBody& setAuthorityList(ListAuthorityResponseBodyAuthorityList && authorityList) { DARABONBA_PTR_SET_RVALUE(authorityList_, authorityList) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListAuthorityResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListAuthorityResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAuthorityResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The permissions.
    std::shared_ptr<ListAuthorityResponseBodyAuthorityList> authorityList_ = nullptr;
    // The HTTP status code that is returned.
    std::shared_ptr<int32_t> code_ = nullptr;
    // The additional information that is returned.
    std::shared_ptr<string> message_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
