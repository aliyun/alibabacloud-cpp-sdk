// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESYSTEMEVENTATTRIBUTERESPONSEBODYSYSTEMEVENTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESYSTEMEVENTATTRIBUTERESPONSEBODYSYSTEMEVENTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSystemEventAttributeResponseBodySystemEventsSystemEvent.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeSystemEventAttributeResponseBodySystemEvents : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSystemEventAttributeResponseBodySystemEvents& obj) { 
      DARABONBA_PTR_TO_JSON(SystemEvent, systemEvent_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSystemEventAttributeResponseBodySystemEvents& obj) { 
      DARABONBA_PTR_FROM_JSON(SystemEvent, systemEvent_);
    };
    DescribeSystemEventAttributeResponseBodySystemEvents() = default ;
    DescribeSystemEventAttributeResponseBodySystemEvents(const DescribeSystemEventAttributeResponseBodySystemEvents &) = default ;
    DescribeSystemEventAttributeResponseBodySystemEvents(DescribeSystemEventAttributeResponseBodySystemEvents &&) = default ;
    DescribeSystemEventAttributeResponseBodySystemEvents(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSystemEventAttributeResponseBodySystemEvents() = default ;
    DescribeSystemEventAttributeResponseBodySystemEvents& operator=(const DescribeSystemEventAttributeResponseBodySystemEvents &) = default ;
    DescribeSystemEventAttributeResponseBodySystemEvents& operator=(DescribeSystemEventAttributeResponseBodySystemEvents &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->systemEvent_ == nullptr; };
    // systemEvent Field Functions 
    bool hasSystemEvent() const { return this->systemEvent_ != nullptr;};
    void deleteSystemEvent() { this->systemEvent_ = nullptr;};
    inline const vector<Models::DescribeSystemEventAttributeResponseBodySystemEventsSystemEvent> & systemEvent() const { DARABONBA_PTR_GET_CONST(systemEvent_, vector<Models::DescribeSystemEventAttributeResponseBodySystemEventsSystemEvent>) };
    inline vector<Models::DescribeSystemEventAttributeResponseBodySystemEventsSystemEvent> systemEvent() { DARABONBA_PTR_GET(systemEvent_, vector<Models::DescribeSystemEventAttributeResponseBodySystemEventsSystemEvent>) };
    inline DescribeSystemEventAttributeResponseBodySystemEvents& setSystemEvent(const vector<Models::DescribeSystemEventAttributeResponseBodySystemEventsSystemEvent> & systemEvent) { DARABONBA_PTR_SET_VALUE(systemEvent_, systemEvent) };
    inline DescribeSystemEventAttributeResponseBodySystemEvents& setSystemEvent(vector<Models::DescribeSystemEventAttributeResponseBodySystemEventsSystemEvent> && systemEvent) { DARABONBA_PTR_SET_RVALUE(systemEvent_, systemEvent) };


  protected:
    std::shared_ptr<vector<Models::DescribeSystemEventAttributeResponseBodySystemEventsSystemEvent>> systemEvent_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
