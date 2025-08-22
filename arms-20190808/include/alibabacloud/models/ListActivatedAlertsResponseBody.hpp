// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACTIVATEDALERTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTACTIVATEDALERTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListActivatedAlertsResponseBodyPage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListActivatedAlertsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListActivatedAlertsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListActivatedAlertsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListActivatedAlertsResponseBody() = default ;
    ListActivatedAlertsResponseBody(const ListActivatedAlertsResponseBody &) = default ;
    ListActivatedAlertsResponseBody(ListActivatedAlertsResponseBody &&) = default ;
    ListActivatedAlertsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListActivatedAlertsResponseBody() = default ;
    ListActivatedAlertsResponseBody& operator=(const ListActivatedAlertsResponseBody &) = default ;
    ListActivatedAlertsResponseBody& operator=(ListActivatedAlertsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->message_ != nullptr
        && this->page_ != nullptr && this->requestId_ != nullptr; };
    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListActivatedAlertsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline const ListActivatedAlertsResponseBodyPage & page() const { DARABONBA_PTR_GET_CONST(page_, ListActivatedAlertsResponseBodyPage) };
    inline ListActivatedAlertsResponseBodyPage page() { DARABONBA_PTR_GET(page_, ListActivatedAlertsResponseBodyPage) };
    inline ListActivatedAlertsResponseBody& setPage(const ListActivatedAlertsResponseBodyPage & page) { DARABONBA_PTR_SET_VALUE(page_, page) };
    inline ListActivatedAlertsResponseBody& setPage(ListActivatedAlertsResponseBodyPage && page) { DARABONBA_PTR_SET_RVALUE(page_, page) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListActivatedAlertsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> message_ = nullptr;
    // The struct returned.
    std::shared_ptr<ListActivatedAlertsResponseBodyPage> page_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
