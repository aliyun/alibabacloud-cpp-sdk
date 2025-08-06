// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVODREALTIMELOGDELIVERYDOMAINSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTVODREALTIMELOGDELIVERYDOMAINSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListVodRealtimeLogDeliveryDomainsResponseBodyContent.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListVodRealtimeLogDeliveryDomainsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVodRealtimeLogDeliveryDomainsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListVodRealtimeLogDeliveryDomainsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListVodRealtimeLogDeliveryDomainsResponseBody() = default ;
    ListVodRealtimeLogDeliveryDomainsResponseBody(const ListVodRealtimeLogDeliveryDomainsResponseBody &) = default ;
    ListVodRealtimeLogDeliveryDomainsResponseBody(ListVodRealtimeLogDeliveryDomainsResponseBody &&) = default ;
    ListVodRealtimeLogDeliveryDomainsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVodRealtimeLogDeliveryDomainsResponseBody() = default ;
    ListVodRealtimeLogDeliveryDomainsResponseBody& operator=(const ListVodRealtimeLogDeliveryDomainsResponseBody &) = default ;
    ListVodRealtimeLogDeliveryDomainsResponseBody& operator=(ListVodRealtimeLogDeliveryDomainsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->requestId_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const ListVodRealtimeLogDeliveryDomainsResponseBodyContent & content() const { DARABONBA_PTR_GET_CONST(content_, ListVodRealtimeLogDeliveryDomainsResponseBodyContent) };
    inline ListVodRealtimeLogDeliveryDomainsResponseBodyContent content() { DARABONBA_PTR_GET(content_, ListVodRealtimeLogDeliveryDomainsResponseBodyContent) };
    inline ListVodRealtimeLogDeliveryDomainsResponseBody& setContent(const ListVodRealtimeLogDeliveryDomainsResponseBodyContent & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline ListVodRealtimeLogDeliveryDomainsResponseBody& setContent(ListVodRealtimeLogDeliveryDomainsResponseBodyContent && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListVodRealtimeLogDeliveryDomainsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<ListVodRealtimeLogDeliveryDomainsResponseBodyContent> content_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
