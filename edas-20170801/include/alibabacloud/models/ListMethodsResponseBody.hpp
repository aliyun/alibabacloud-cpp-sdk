// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMETHODSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMETHODSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListMethodsResponseBodyServiceMethodList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListMethodsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMethodsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ServiceMethodList, serviceMethodList_);
    };
    friend void from_json(const Darabonba::Json& j, ListMethodsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ServiceMethodList, serviceMethodList_);
    };
    ListMethodsResponseBody() = default ;
    ListMethodsResponseBody(const ListMethodsResponseBody &) = default ;
    ListMethodsResponseBody(ListMethodsResponseBody &&) = default ;
    ListMethodsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMethodsResponseBody() = default ;
    ListMethodsResponseBody& operator=(const ListMethodsResponseBody &) = default ;
    ListMethodsResponseBody& operator=(ListMethodsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->serviceMethodList_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListMethodsResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListMethodsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMethodsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // serviceMethodList Field Functions 
    bool hasServiceMethodList() const { return this->serviceMethodList_ != nullptr;};
    void deleteServiceMethodList() { this->serviceMethodList_ = nullptr;};
    inline const ListMethodsResponseBodyServiceMethodList & serviceMethodList() const { DARABONBA_PTR_GET_CONST(serviceMethodList_, ListMethodsResponseBodyServiceMethodList) };
    inline ListMethodsResponseBodyServiceMethodList serviceMethodList() { DARABONBA_PTR_GET(serviceMethodList_, ListMethodsResponseBodyServiceMethodList) };
    inline ListMethodsResponseBody& setServiceMethodList(const ListMethodsResponseBodyServiceMethodList & serviceMethodList) { DARABONBA_PTR_SET_VALUE(serviceMethodList_, serviceMethodList) };
    inline ListMethodsResponseBody& setServiceMethodList(ListMethodsResponseBodyServiceMethodList && serviceMethodList) { DARABONBA_PTR_SET_RVALUE(serviceMethodList_, serviceMethodList) };


  protected:
    // The HTTP status code that is returned.
    std::shared_ptr<int32_t> code_ = nullptr;
    // The returned message that indicates whether the request is successful.
    std::shared_ptr<string> message_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about service methods.
    std::shared_ptr<ListMethodsResponseBodyServiceMethodList> serviceMethodList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
