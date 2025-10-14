// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCALENDARSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCALENDARSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListCalendarsResponseBodyResponse.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class ListCalendarsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCalendarsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(response, response_);
    };
    friend void from_json(const Darabonba::Json& j, ListCalendarsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(response, response_);
    };
    ListCalendarsResponseBody() = default ;
    ListCalendarsResponseBody(const ListCalendarsResponseBody &) = default ;
    ListCalendarsResponseBody(ListCalendarsResponseBody &&) = default ;
    ListCalendarsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCalendarsResponseBody() = default ;
    ListCalendarsResponseBody& operator=(const ListCalendarsResponseBody &) = default ;
    ListCalendarsResponseBody& operator=(ListCalendarsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->response_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCalendarsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // response Field Functions 
    bool hasResponse() const { return this->response_ != nullptr;};
    void deleteResponse() { this->response_ = nullptr;};
    inline const ListCalendarsResponseBodyResponse & response() const { DARABONBA_PTR_GET_CONST(response_, ListCalendarsResponseBodyResponse) };
    inline ListCalendarsResponseBodyResponse response() { DARABONBA_PTR_GET(response_, ListCalendarsResponseBodyResponse) };
    inline ListCalendarsResponseBody& setResponse(const ListCalendarsResponseBodyResponse & response) { DARABONBA_PTR_SET_VALUE(response_, response) };
    inline ListCalendarsResponseBody& setResponse(ListCalendarsResponseBodyResponse && response) { DARABONBA_PTR_SET_RVALUE(response_, response) };


  protected:
    // requestId
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<ListCalendarsResponseBodyResponse> response_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
