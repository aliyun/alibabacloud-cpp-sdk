// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeEventDetailResponseBodyEvent.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class DescribeEventDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Event, event_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Event, event_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeEventDetailResponseBody() = default ;
    DescribeEventDetailResponseBody(const DescribeEventDetailResponseBody &) = default ;
    DescribeEventDetailResponseBody(DescribeEventDetailResponseBody &&) = default ;
    DescribeEventDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventDetailResponseBody() = default ;
    DescribeEventDetailResponseBody& operator=(const DescribeEventDetailResponseBody &) = default ;
    DescribeEventDetailResponseBody& operator=(DescribeEventDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->event_ != nullptr
        && this->requestId_ != nullptr; };
    // event Field Functions 
    bool hasEvent() const { return this->event_ != nullptr;};
    void deleteEvent() { this->event_ = nullptr;};
    inline const DescribeEventDetailResponseBodyEvent & event() const { DARABONBA_PTR_GET_CONST(event_, DescribeEventDetailResponseBodyEvent) };
    inline DescribeEventDetailResponseBodyEvent event() { DARABONBA_PTR_GET(event_, DescribeEventDetailResponseBodyEvent) };
    inline DescribeEventDetailResponseBody& setEvent(const DescribeEventDetailResponseBodyEvent & event) { DARABONBA_PTR_SET_VALUE(event_, event) };
    inline DescribeEventDetailResponseBody& setEvent(DescribeEventDetailResponseBodyEvent && event) { DARABONBA_PTR_SET_RVALUE(event_, event) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEventDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the anomalous event.
    std::shared_ptr<DescribeEventDetailResponseBodyEvent> event_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
