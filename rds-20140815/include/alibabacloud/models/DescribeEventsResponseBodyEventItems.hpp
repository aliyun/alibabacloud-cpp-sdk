// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTSRESPONSEBODYEVENTITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTSRESPONSEBODYEVENTITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeEventsResponseBodyEventItemsEventItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeEventsResponseBodyEventItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventsResponseBodyEventItems& obj) { 
      DARABONBA_PTR_TO_JSON(EventItems, eventItems_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventsResponseBodyEventItems& obj) { 
      DARABONBA_PTR_FROM_JSON(EventItems, eventItems_);
    };
    DescribeEventsResponseBodyEventItems() = default ;
    DescribeEventsResponseBodyEventItems(const DescribeEventsResponseBodyEventItems &) = default ;
    DescribeEventsResponseBodyEventItems(DescribeEventsResponseBodyEventItems &&) = default ;
    DescribeEventsResponseBodyEventItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventsResponseBodyEventItems() = default ;
    DescribeEventsResponseBodyEventItems& operator=(const DescribeEventsResponseBodyEventItems &) = default ;
    DescribeEventsResponseBodyEventItems& operator=(DescribeEventsResponseBodyEventItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eventItems_ == nullptr; };
    // eventItems Field Functions 
    bool hasEventItems() const { return this->eventItems_ != nullptr;};
    void deleteEventItems() { this->eventItems_ = nullptr;};
    inline const vector<Models::DescribeEventsResponseBodyEventItemsEventItems> & eventItems() const { DARABONBA_PTR_GET_CONST(eventItems_, vector<Models::DescribeEventsResponseBodyEventItemsEventItems>) };
    inline vector<Models::DescribeEventsResponseBodyEventItemsEventItems> eventItems() { DARABONBA_PTR_GET(eventItems_, vector<Models::DescribeEventsResponseBodyEventItemsEventItems>) };
    inline DescribeEventsResponseBodyEventItems& setEventItems(const vector<Models::DescribeEventsResponseBodyEventItemsEventItems> & eventItems) { DARABONBA_PTR_SET_VALUE(eventItems_, eventItems) };
    inline DescribeEventsResponseBodyEventItems& setEventItems(vector<Models::DescribeEventsResponseBodyEventItemsEventItems> && eventItems) { DARABONBA_PTR_SET_RVALUE(eventItems_, eventItems) };


  protected:
    std::shared_ptr<vector<Models::DescribeEventsResponseBodyEventItemsEventItems>> eventItems_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
