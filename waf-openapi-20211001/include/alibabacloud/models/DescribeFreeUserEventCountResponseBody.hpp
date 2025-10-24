// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFREEUSEREVENTCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFREEUSEREVENTCOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeFreeUserEventCountResponseBodyEvent.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeFreeUserEventCountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFreeUserEventCountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Event, event_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFreeUserEventCountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Event, event_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeFreeUserEventCountResponseBody() = default ;
    DescribeFreeUserEventCountResponseBody(const DescribeFreeUserEventCountResponseBody &) = default ;
    DescribeFreeUserEventCountResponseBody(DescribeFreeUserEventCountResponseBody &&) = default ;
    DescribeFreeUserEventCountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFreeUserEventCountResponseBody() = default ;
    DescribeFreeUserEventCountResponseBody& operator=(const DescribeFreeUserEventCountResponseBody &) = default ;
    DescribeFreeUserEventCountResponseBody& operator=(DescribeFreeUserEventCountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->event_ == nullptr
        && return this->requestId_ == nullptr; };
    // event Field Functions 
    bool hasEvent() const { return this->event_ != nullptr;};
    void deleteEvent() { this->event_ = nullptr;};
    inline const DescribeFreeUserEventCountResponseBodyEvent & event() const { DARABONBA_PTR_GET_CONST(event_, DescribeFreeUserEventCountResponseBodyEvent) };
    inline DescribeFreeUserEventCountResponseBodyEvent event() { DARABONBA_PTR_GET(event_, DescribeFreeUserEventCountResponseBodyEvent) };
    inline DescribeFreeUserEventCountResponseBody& setEvent(const DescribeFreeUserEventCountResponseBodyEvent & event) { DARABONBA_PTR_SET_VALUE(event_, event) };
    inline DescribeFreeUserEventCountResponseBody& setEvent(DescribeFreeUserEventCountResponseBodyEvent && event) { DARABONBA_PTR_SET_RVALUE(event_, event) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeFreeUserEventCountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the security events that are detected by using the basic detection feature.
    std::shared_ptr<DescribeFreeUserEventCountResponseBodyEvent> event_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
