// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPUBLISHEDSERVICESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPUBLISHEDSERVICESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListPublishedServicesResponseBodyPublishedServicesList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListPublishedServicesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPublishedServicesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PublishedServicesList, publishedServicesList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListPublishedServicesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PublishedServicesList, publishedServicesList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListPublishedServicesResponseBody() = default ;
    ListPublishedServicesResponseBody(const ListPublishedServicesResponseBody &) = default ;
    ListPublishedServicesResponseBody(ListPublishedServicesResponseBody &&) = default ;
    ListPublishedServicesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPublishedServicesResponseBody() = default ;
    ListPublishedServicesResponseBody& operator=(const ListPublishedServicesResponseBody &) = default ;
    ListPublishedServicesResponseBody& operator=(ListPublishedServicesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->message_ == nullptr && return this->publishedServicesList_ == nullptr && return this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListPublishedServicesResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListPublishedServicesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // publishedServicesList Field Functions 
    bool hasPublishedServicesList() const { return this->publishedServicesList_ != nullptr;};
    void deletePublishedServicesList() { this->publishedServicesList_ = nullptr;};
    inline const ListPublishedServicesResponseBodyPublishedServicesList & publishedServicesList() const { DARABONBA_PTR_GET_CONST(publishedServicesList_, ListPublishedServicesResponseBodyPublishedServicesList) };
    inline ListPublishedServicesResponseBodyPublishedServicesList publishedServicesList() { DARABONBA_PTR_GET(publishedServicesList_, ListPublishedServicesResponseBodyPublishedServicesList) };
    inline ListPublishedServicesResponseBody& setPublishedServicesList(const ListPublishedServicesResponseBodyPublishedServicesList & publishedServicesList) { DARABONBA_PTR_SET_VALUE(publishedServicesList_, publishedServicesList) };
    inline ListPublishedServicesResponseBody& setPublishedServicesList(ListPublishedServicesResponseBodyPublishedServicesList && publishedServicesList) { DARABONBA_PTR_SET_RVALUE(publishedServicesList_, publishedServicesList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPublishedServicesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The HTTP status code that is returned.
    std::shared_ptr<int32_t> code_ = nullptr;
    // The message that is returned.
    std::shared_ptr<string> message_ = nullptr;
    // The published services.
    std::shared_ptr<ListPublishedServicesResponseBodyPublishedServicesList> publishedServicesList_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
