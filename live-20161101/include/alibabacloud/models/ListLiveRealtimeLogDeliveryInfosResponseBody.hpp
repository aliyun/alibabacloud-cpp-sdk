// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLIVEREALTIMELOGDELIVERYINFOSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTLIVEREALTIMELOGDELIVERYINFOSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListLiveRealtimeLogDeliveryInfosResponseBodyContent.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class ListLiveRealtimeLogDeliveryInfosResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLiveRealtimeLogDeliveryInfosResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListLiveRealtimeLogDeliveryInfosResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListLiveRealtimeLogDeliveryInfosResponseBody() = default ;
    ListLiveRealtimeLogDeliveryInfosResponseBody(const ListLiveRealtimeLogDeliveryInfosResponseBody &) = default ;
    ListLiveRealtimeLogDeliveryInfosResponseBody(ListLiveRealtimeLogDeliveryInfosResponseBody &&) = default ;
    ListLiveRealtimeLogDeliveryInfosResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLiveRealtimeLogDeliveryInfosResponseBody() = default ;
    ListLiveRealtimeLogDeliveryInfosResponseBody& operator=(const ListLiveRealtimeLogDeliveryInfosResponseBody &) = default ;
    ListLiveRealtimeLogDeliveryInfosResponseBody& operator=(ListLiveRealtimeLogDeliveryInfosResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->requestId_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const ListLiveRealtimeLogDeliveryInfosResponseBodyContent & content() const { DARABONBA_PTR_GET_CONST(content_, ListLiveRealtimeLogDeliveryInfosResponseBodyContent) };
    inline ListLiveRealtimeLogDeliveryInfosResponseBodyContent content() { DARABONBA_PTR_GET(content_, ListLiveRealtimeLogDeliveryInfosResponseBodyContent) };
    inline ListLiveRealtimeLogDeliveryInfosResponseBody& setContent(const ListLiveRealtimeLogDeliveryInfosResponseBodyContent & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline ListLiveRealtimeLogDeliveryInfosResponseBody& setContent(ListLiveRealtimeLogDeliveryInfosResponseBodyContent && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListLiveRealtimeLogDeliveryInfosResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Details about the configuration of real-time log delivery.
    std::shared_ptr<ListLiveRealtimeLogDeliveryInfosResponseBodyContent> content_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
