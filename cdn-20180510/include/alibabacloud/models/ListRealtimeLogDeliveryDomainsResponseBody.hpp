// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREALTIMELOGDELIVERYDOMAINSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTREALTIMELOGDELIVERYDOMAINSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListRealtimeLogDeliveryDomainsResponseBodyContent.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class ListRealtimeLogDeliveryDomainsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRealtimeLogDeliveryDomainsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListRealtimeLogDeliveryDomainsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListRealtimeLogDeliveryDomainsResponseBody() = default ;
    ListRealtimeLogDeliveryDomainsResponseBody(const ListRealtimeLogDeliveryDomainsResponseBody &) = default ;
    ListRealtimeLogDeliveryDomainsResponseBody(ListRealtimeLogDeliveryDomainsResponseBody &&) = default ;
    ListRealtimeLogDeliveryDomainsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRealtimeLogDeliveryDomainsResponseBody() = default ;
    ListRealtimeLogDeliveryDomainsResponseBody& operator=(const ListRealtimeLogDeliveryDomainsResponseBody &) = default ;
    ListRealtimeLogDeliveryDomainsResponseBody& operator=(ListRealtimeLogDeliveryDomainsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->requestId_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const ListRealtimeLogDeliveryDomainsResponseBodyContent & content() const { DARABONBA_PTR_GET_CONST(content_, ListRealtimeLogDeliveryDomainsResponseBodyContent) };
    inline ListRealtimeLogDeliveryDomainsResponseBodyContent content() { DARABONBA_PTR_GET(content_, ListRealtimeLogDeliveryDomainsResponseBodyContent) };
    inline ListRealtimeLogDeliveryDomainsResponseBody& setContent(const ListRealtimeLogDeliveryDomainsResponseBodyContent & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline ListRealtimeLogDeliveryDomainsResponseBody& setContent(ListRealtimeLogDeliveryDomainsResponseBodyContent && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRealtimeLogDeliveryDomainsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the accelerated domain names.
    std::shared_ptr<ListRealtimeLogDeliveryDomainsResponseBodyContent> content_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
