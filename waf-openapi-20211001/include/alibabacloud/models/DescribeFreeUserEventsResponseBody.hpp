// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFREEUSEREVENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFREEUSEREVENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeFreeUserEventsResponseBodyEvent.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeFreeUserEventsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFreeUserEventsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Event, event_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFreeUserEventsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Event, event_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeFreeUserEventsResponseBody() = default ;
    DescribeFreeUserEventsResponseBody(const DescribeFreeUserEventsResponseBody &) = default ;
    DescribeFreeUserEventsResponseBody(DescribeFreeUserEventsResponseBody &&) = default ;
    DescribeFreeUserEventsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFreeUserEventsResponseBody() = default ;
    DescribeFreeUserEventsResponseBody& operator=(const DescribeFreeUserEventsResponseBody &) = default ;
    DescribeFreeUserEventsResponseBody& operator=(DescribeFreeUserEventsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->event_ != nullptr
        && this->requestId_ != nullptr; };
    // event Field Functions 
    bool hasEvent() const { return this->event_ != nullptr;};
    void deleteEvent() { this->event_ = nullptr;};
    inline const vector<DescribeFreeUserEventsResponseBodyEvent> & event() const { DARABONBA_PTR_GET_CONST(event_, vector<DescribeFreeUserEventsResponseBodyEvent>) };
    inline vector<DescribeFreeUserEventsResponseBodyEvent> event() { DARABONBA_PTR_GET(event_, vector<DescribeFreeUserEventsResponseBodyEvent>) };
    inline DescribeFreeUserEventsResponseBody& setEvent(const vector<DescribeFreeUserEventsResponseBodyEvent> & event) { DARABONBA_PTR_SET_VALUE(event_, event) };
    inline DescribeFreeUserEventsResponseBody& setEvent(vector<DescribeFreeUserEventsResponseBodyEvent> && event) { DARABONBA_PTR_SET_RVALUE(event_, event) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeFreeUserEventsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The security events on which basic detection is performed.
    std::shared_ptr<vector<DescribeFreeUserEventsResponseBodyEvent>> event_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
