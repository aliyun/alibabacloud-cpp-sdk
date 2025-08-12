// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECUSTOMEVENTATTRIBUTERESPONSEBODYCUSTOMEVENTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECUSTOMEVENTATTRIBUTERESPONSEBODYCUSTOMEVENTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCustomEventAttributeResponseBodyCustomEventsCustomEvent.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeCustomEventAttributeResponseBodyCustomEvents : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCustomEventAttributeResponseBodyCustomEvents& obj) { 
      DARABONBA_PTR_TO_JSON(CustomEvent, customEvent_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCustomEventAttributeResponseBodyCustomEvents& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomEvent, customEvent_);
    };
    DescribeCustomEventAttributeResponseBodyCustomEvents() = default ;
    DescribeCustomEventAttributeResponseBodyCustomEvents(const DescribeCustomEventAttributeResponseBodyCustomEvents &) = default ;
    DescribeCustomEventAttributeResponseBodyCustomEvents(DescribeCustomEventAttributeResponseBodyCustomEvents &&) = default ;
    DescribeCustomEventAttributeResponseBodyCustomEvents(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCustomEventAttributeResponseBodyCustomEvents() = default ;
    DescribeCustomEventAttributeResponseBodyCustomEvents& operator=(const DescribeCustomEventAttributeResponseBodyCustomEvents &) = default ;
    DescribeCustomEventAttributeResponseBodyCustomEvents& operator=(DescribeCustomEventAttributeResponseBodyCustomEvents &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->customEvent_ != nullptr; };
    // customEvent Field Functions 
    bool hasCustomEvent() const { return this->customEvent_ != nullptr;};
    void deleteCustomEvent() { this->customEvent_ = nullptr;};
    inline const vector<Models::DescribeCustomEventAttributeResponseBodyCustomEventsCustomEvent> & customEvent() const { DARABONBA_PTR_GET_CONST(customEvent_, vector<Models::DescribeCustomEventAttributeResponseBodyCustomEventsCustomEvent>) };
    inline vector<Models::DescribeCustomEventAttributeResponseBodyCustomEventsCustomEvent> customEvent() { DARABONBA_PTR_GET(customEvent_, vector<Models::DescribeCustomEventAttributeResponseBodyCustomEventsCustomEvent>) };
    inline DescribeCustomEventAttributeResponseBodyCustomEvents& setCustomEvent(const vector<Models::DescribeCustomEventAttributeResponseBodyCustomEventsCustomEvent> & customEvent) { DARABONBA_PTR_SET_VALUE(customEvent_, customEvent) };
    inline DescribeCustomEventAttributeResponseBodyCustomEvents& setCustomEvent(vector<Models::DescribeCustomEventAttributeResponseBodyCustomEventsCustomEvent> && customEvent) { DARABONBA_PTR_SET_RVALUE(customEvent_, customEvent) };


  protected:
    std::shared_ptr<vector<Models::DescribeCustomEventAttributeResponseBodyCustomEventsCustomEvent>> customEvent_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
