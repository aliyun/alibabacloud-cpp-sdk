// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTEREVENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTEREVENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeClusterEventsResponseBodyEvents.hpp>
#include <alibabacloud/models/DescribeClusterEventsResponseBodyPageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeClusterEventsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterEventsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(events, events_);
      DARABONBA_PTR_TO_JSON(page_info, pageInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterEventsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(events, events_);
      DARABONBA_PTR_FROM_JSON(page_info, pageInfo_);
    };
    DescribeClusterEventsResponseBody() = default ;
    DescribeClusterEventsResponseBody(const DescribeClusterEventsResponseBody &) = default ;
    DescribeClusterEventsResponseBody(DescribeClusterEventsResponseBody &&) = default ;
    DescribeClusterEventsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterEventsResponseBody() = default ;
    DescribeClusterEventsResponseBody& operator=(const DescribeClusterEventsResponseBody &) = default ;
    DescribeClusterEventsResponseBody& operator=(DescribeClusterEventsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->events_ == nullptr
        && return this->pageInfo_ == nullptr; };
    // events Field Functions 
    bool hasEvents() const { return this->events_ != nullptr;};
    void deleteEvents() { this->events_ = nullptr;};
    inline const vector<DescribeClusterEventsResponseBodyEvents> & events() const { DARABONBA_PTR_GET_CONST(events_, vector<DescribeClusterEventsResponseBodyEvents>) };
    inline vector<DescribeClusterEventsResponseBodyEvents> events() { DARABONBA_PTR_GET(events_, vector<DescribeClusterEventsResponseBodyEvents>) };
    inline DescribeClusterEventsResponseBody& setEvents(const vector<DescribeClusterEventsResponseBodyEvents> & events) { DARABONBA_PTR_SET_VALUE(events_, events) };
    inline DescribeClusterEventsResponseBody& setEvents(vector<DescribeClusterEventsResponseBodyEvents> && events) { DARABONBA_PTR_SET_RVALUE(events_, events) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeClusterEventsResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeClusterEventsResponseBodyPageInfo) };
    inline DescribeClusterEventsResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeClusterEventsResponseBodyPageInfo) };
    inline DescribeClusterEventsResponseBody& setPageInfo(const DescribeClusterEventsResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeClusterEventsResponseBody& setPageInfo(DescribeClusterEventsResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


  protected:
    // The list of events.
    std::shared_ptr<vector<DescribeClusterEventsResponseBodyEvents>> events_ = nullptr;
    // The pagination information.
    std::shared_ptr<DescribeClusterEventsResponseBodyPageInfo> pageInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
