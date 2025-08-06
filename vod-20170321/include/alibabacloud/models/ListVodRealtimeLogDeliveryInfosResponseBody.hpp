// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVODREALTIMELOGDELIVERYINFOSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTVODREALTIMELOGDELIVERYINFOSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListVodRealtimeLogDeliveryInfosResponseBodyContent.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListVodRealtimeLogDeliveryInfosResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVodRealtimeLogDeliveryInfosResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListVodRealtimeLogDeliveryInfosResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListVodRealtimeLogDeliveryInfosResponseBody() = default ;
    ListVodRealtimeLogDeliveryInfosResponseBody(const ListVodRealtimeLogDeliveryInfosResponseBody &) = default ;
    ListVodRealtimeLogDeliveryInfosResponseBody(ListVodRealtimeLogDeliveryInfosResponseBody &&) = default ;
    ListVodRealtimeLogDeliveryInfosResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVodRealtimeLogDeliveryInfosResponseBody() = default ;
    ListVodRealtimeLogDeliveryInfosResponseBody& operator=(const ListVodRealtimeLogDeliveryInfosResponseBody &) = default ;
    ListVodRealtimeLogDeliveryInfosResponseBody& operator=(ListVodRealtimeLogDeliveryInfosResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->requestId_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const ListVodRealtimeLogDeliveryInfosResponseBodyContent & content() const { DARABONBA_PTR_GET_CONST(content_, ListVodRealtimeLogDeliveryInfosResponseBodyContent) };
    inline ListVodRealtimeLogDeliveryInfosResponseBodyContent content() { DARABONBA_PTR_GET(content_, ListVodRealtimeLogDeliveryInfosResponseBodyContent) };
    inline ListVodRealtimeLogDeliveryInfosResponseBody& setContent(const ListVodRealtimeLogDeliveryInfosResponseBodyContent & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline ListVodRealtimeLogDeliveryInfosResponseBody& setContent(ListVodRealtimeLogDeliveryInfosResponseBodyContent && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListVodRealtimeLogDeliveryInfosResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<ListVodRealtimeLogDeliveryInfosResponseBodyContent> content_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
