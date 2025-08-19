// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeEventsResponseBodyEvents.hpp>
#include <alibabacloud/models/DescribeEventsResponseBodyPageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeEventsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(events, events_);
      DARABONBA_PTR_TO_JSON(page_info, pageInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(events, events_);
      DARABONBA_PTR_FROM_JSON(page_info, pageInfo_);
    };
    DescribeEventsResponseBody() = default ;
    DescribeEventsResponseBody(const DescribeEventsResponseBody &) = default ;
    DescribeEventsResponseBody(DescribeEventsResponseBody &&) = default ;
    DescribeEventsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventsResponseBody() = default ;
    DescribeEventsResponseBody& operator=(const DescribeEventsResponseBody &) = default ;
    DescribeEventsResponseBody& operator=(DescribeEventsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->events_ != nullptr
        && this->pageInfo_ != nullptr; };
    // events Field Functions 
    bool hasEvents() const { return this->events_ != nullptr;};
    void deleteEvents() { this->events_ = nullptr;};
    inline const vector<DescribeEventsResponseBodyEvents> & events() const { DARABONBA_PTR_GET_CONST(events_, vector<DescribeEventsResponseBodyEvents>) };
    inline vector<DescribeEventsResponseBodyEvents> events() { DARABONBA_PTR_GET(events_, vector<DescribeEventsResponseBodyEvents>) };
    inline DescribeEventsResponseBody& setEvents(const vector<DescribeEventsResponseBodyEvents> & events) { DARABONBA_PTR_SET_VALUE(events_, events) };
    inline DescribeEventsResponseBody& setEvents(vector<DescribeEventsResponseBodyEvents> && events) { DARABONBA_PTR_SET_RVALUE(events_, events) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeEventsResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeEventsResponseBodyPageInfo) };
    inline DescribeEventsResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeEventsResponseBodyPageInfo) };
    inline DescribeEventsResponseBody& setPageInfo(const DescribeEventsResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeEventsResponseBody& setPageInfo(DescribeEventsResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


  protected:
    // The details of the events.
    std::shared_ptr<vector<DescribeEventsResponseBodyEvents>> events_ = nullptr;
    // The pagination information.
    std::shared_ptr<DescribeEventsResponseBodyPageInfo> pageInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
