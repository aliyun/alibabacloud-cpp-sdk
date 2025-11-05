// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREALTIMELOGDELIVERYINFOSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTREALTIMELOGDELIVERYINFOSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListRealtimeLogDeliveryInfosResponseBodyContent.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class ListRealtimeLogDeliveryInfosResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRealtimeLogDeliveryInfosResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListRealtimeLogDeliveryInfosResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListRealtimeLogDeliveryInfosResponseBody() = default ;
    ListRealtimeLogDeliveryInfosResponseBody(const ListRealtimeLogDeliveryInfosResponseBody &) = default ;
    ListRealtimeLogDeliveryInfosResponseBody(ListRealtimeLogDeliveryInfosResponseBody &&) = default ;
    ListRealtimeLogDeliveryInfosResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRealtimeLogDeliveryInfosResponseBody() = default ;
    ListRealtimeLogDeliveryInfosResponseBody& operator=(const ListRealtimeLogDeliveryInfosResponseBody &) = default ;
    ListRealtimeLogDeliveryInfosResponseBody& operator=(ListRealtimeLogDeliveryInfosResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->requestId_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const ListRealtimeLogDeliveryInfosResponseBodyContent & content() const { DARABONBA_PTR_GET_CONST(content_, ListRealtimeLogDeliveryInfosResponseBodyContent) };
    inline ListRealtimeLogDeliveryInfosResponseBodyContent content() { DARABONBA_PTR_GET(content_, ListRealtimeLogDeliveryInfosResponseBodyContent) };
    inline ListRealtimeLogDeliveryInfosResponseBody& setContent(const ListRealtimeLogDeliveryInfosResponseBodyContent & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline ListRealtimeLogDeliveryInfosResponseBody& setContent(ListRealtimeLogDeliveryInfosResponseBodyContent && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRealtimeLogDeliveryInfosResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about real-time log delivery.
    std::shared_ptr<ListRealtimeLogDeliveryInfosResponseBodyContent> content_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
