// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREALTIMELOGDELIVERYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTREALTIMELOGDELIVERYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListRealtimeLogDeliveryResponseBodyContent.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class ListRealtimeLogDeliveryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRealtimeLogDeliveryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListRealtimeLogDeliveryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListRealtimeLogDeliveryResponseBody() = default ;
    ListRealtimeLogDeliveryResponseBody(const ListRealtimeLogDeliveryResponseBody &) = default ;
    ListRealtimeLogDeliveryResponseBody(ListRealtimeLogDeliveryResponseBody &&) = default ;
    ListRealtimeLogDeliveryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRealtimeLogDeliveryResponseBody() = default ;
    ListRealtimeLogDeliveryResponseBody& operator=(const ListRealtimeLogDeliveryResponseBody &) = default ;
    ListRealtimeLogDeliveryResponseBody& operator=(ListRealtimeLogDeliveryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->requestId_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const ListRealtimeLogDeliveryResponseBodyContent & content() const { DARABONBA_PTR_GET_CONST(content_, ListRealtimeLogDeliveryResponseBodyContent) };
    inline ListRealtimeLogDeliveryResponseBodyContent content() { DARABONBA_PTR_GET(content_, ListRealtimeLogDeliveryResponseBodyContent) };
    inline ListRealtimeLogDeliveryResponseBody& setContent(const ListRealtimeLogDeliveryResponseBodyContent & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline ListRealtimeLogDeliveryResponseBody& setContent(ListRealtimeLogDeliveryResponseBodyContent && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRealtimeLogDeliveryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The logging information.
    std::shared_ptr<ListRealtimeLogDeliveryResponseBodyContent> content_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
