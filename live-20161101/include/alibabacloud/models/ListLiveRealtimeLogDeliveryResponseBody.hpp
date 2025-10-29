// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLIVEREALTIMELOGDELIVERYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTLIVEREALTIMELOGDELIVERYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListLiveRealtimeLogDeliveryResponseBodyContent.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class ListLiveRealtimeLogDeliveryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLiveRealtimeLogDeliveryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListLiveRealtimeLogDeliveryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListLiveRealtimeLogDeliveryResponseBody() = default ;
    ListLiveRealtimeLogDeliveryResponseBody(const ListLiveRealtimeLogDeliveryResponseBody &) = default ;
    ListLiveRealtimeLogDeliveryResponseBody(ListLiveRealtimeLogDeliveryResponseBody &&) = default ;
    ListLiveRealtimeLogDeliveryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLiveRealtimeLogDeliveryResponseBody() = default ;
    ListLiveRealtimeLogDeliveryResponseBody& operator=(const ListLiveRealtimeLogDeliveryResponseBody &) = default ;
    ListLiveRealtimeLogDeliveryResponseBody& operator=(ListLiveRealtimeLogDeliveryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->requestId_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const ListLiveRealtimeLogDeliveryResponseBodyContent & content() const { DARABONBA_PTR_GET_CONST(content_, ListLiveRealtimeLogDeliveryResponseBodyContent) };
    inline ListLiveRealtimeLogDeliveryResponseBodyContent content() { DARABONBA_PTR_GET(content_, ListLiveRealtimeLogDeliveryResponseBodyContent) };
    inline ListLiveRealtimeLogDeliveryResponseBody& setContent(const ListLiveRealtimeLogDeliveryResponseBodyContent & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline ListLiveRealtimeLogDeliveryResponseBody& setContent(ListLiveRealtimeLogDeliveryResponseBodyContent && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListLiveRealtimeLogDeliveryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The configurations of real-time log delivery.
    std::shared_ptr<ListLiveRealtimeLogDeliveryResponseBodyContent> content_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
