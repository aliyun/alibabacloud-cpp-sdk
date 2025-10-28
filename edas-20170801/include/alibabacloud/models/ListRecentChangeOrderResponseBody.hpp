// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRECENTCHANGEORDERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRECENTCHANGEORDERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListRecentChangeOrderResponseBodyChangeOrderList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListRecentChangeOrderResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRecentChangeOrderResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ChangeOrderList, changeOrderList_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListRecentChangeOrderResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ChangeOrderList, changeOrderList_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListRecentChangeOrderResponseBody() = default ;
    ListRecentChangeOrderResponseBody(const ListRecentChangeOrderResponseBody &) = default ;
    ListRecentChangeOrderResponseBody(ListRecentChangeOrderResponseBody &&) = default ;
    ListRecentChangeOrderResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRecentChangeOrderResponseBody() = default ;
    ListRecentChangeOrderResponseBody& operator=(const ListRecentChangeOrderResponseBody &) = default ;
    ListRecentChangeOrderResponseBody& operator=(ListRecentChangeOrderResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->changeOrderList_ == nullptr
        && return this->code_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr; };
    // changeOrderList Field Functions 
    bool hasChangeOrderList() const { return this->changeOrderList_ != nullptr;};
    void deleteChangeOrderList() { this->changeOrderList_ = nullptr;};
    inline const ListRecentChangeOrderResponseBodyChangeOrderList & changeOrderList() const { DARABONBA_PTR_GET_CONST(changeOrderList_, ListRecentChangeOrderResponseBodyChangeOrderList) };
    inline ListRecentChangeOrderResponseBodyChangeOrderList changeOrderList() { DARABONBA_PTR_GET(changeOrderList_, ListRecentChangeOrderResponseBodyChangeOrderList) };
    inline ListRecentChangeOrderResponseBody& setChangeOrderList(const ListRecentChangeOrderResponseBodyChangeOrderList & changeOrderList) { DARABONBA_PTR_SET_VALUE(changeOrderList_, changeOrderList) };
    inline ListRecentChangeOrderResponseBody& setChangeOrderList(ListRecentChangeOrderResponseBodyChangeOrderList && changeOrderList) { DARABONBA_PTR_SET_RVALUE(changeOrderList_, changeOrderList) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListRecentChangeOrderResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListRecentChangeOrderResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRecentChangeOrderResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about change processes.
    std::shared_ptr<ListRecentChangeOrderResponseBodyChangeOrderList> changeOrderList_ = nullptr;
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
