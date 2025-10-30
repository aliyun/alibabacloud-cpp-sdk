// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTSFORREGIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTSFORREGIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeEventsForRegionResponseBodyEvents.hpp>
#include <alibabacloud/models/DescribeEventsForRegionResponseBodyPageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeEventsForRegionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventsForRegionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(events, events_);
      DARABONBA_PTR_TO_JSON(page_info, pageInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventsForRegionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(events, events_);
      DARABONBA_PTR_FROM_JSON(page_info, pageInfo_);
    };
    DescribeEventsForRegionResponseBody() = default ;
    DescribeEventsForRegionResponseBody(const DescribeEventsForRegionResponseBody &) = default ;
    DescribeEventsForRegionResponseBody(DescribeEventsForRegionResponseBody &&) = default ;
    DescribeEventsForRegionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventsForRegionResponseBody() = default ;
    DescribeEventsForRegionResponseBody& operator=(const DescribeEventsForRegionResponseBody &) = default ;
    DescribeEventsForRegionResponseBody& operator=(DescribeEventsForRegionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->events_ == nullptr
        && return this->pageInfo_ == nullptr; };
    // events Field Functions 
    bool hasEvents() const { return this->events_ != nullptr;};
    void deleteEvents() { this->events_ = nullptr;};
    inline const vector<DescribeEventsForRegionResponseBodyEvents> & events() const { DARABONBA_PTR_GET_CONST(events_, vector<DescribeEventsForRegionResponseBodyEvents>) };
    inline vector<DescribeEventsForRegionResponseBodyEvents> events() { DARABONBA_PTR_GET(events_, vector<DescribeEventsForRegionResponseBodyEvents>) };
    inline DescribeEventsForRegionResponseBody& setEvents(const vector<DescribeEventsForRegionResponseBodyEvents> & events) { DARABONBA_PTR_SET_VALUE(events_, events) };
    inline DescribeEventsForRegionResponseBody& setEvents(vector<DescribeEventsForRegionResponseBodyEvents> && events) { DARABONBA_PTR_SET_RVALUE(events_, events) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeEventsForRegionResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeEventsForRegionResponseBodyPageInfo) };
    inline DescribeEventsForRegionResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeEventsForRegionResponseBodyPageInfo) };
    inline DescribeEventsForRegionResponseBody& setPageInfo(const DescribeEventsForRegionResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeEventsForRegionResponseBody& setPageInfo(DescribeEventsForRegionResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


  protected:
    // The events.
    std::shared_ptr<vector<DescribeEventsForRegionResponseBodyEvents>> events_ = nullptr;
    // The pagination details.
    std::shared_ptr<DescribeEventsForRegionResponseBodyPageInfo> pageInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
