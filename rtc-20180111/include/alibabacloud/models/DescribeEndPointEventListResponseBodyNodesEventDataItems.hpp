// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENDPOINTEVENTLISTRESPONSEBODYNODESEVENTDATAITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENDPOINTEVENTLISTRESPONSEBODYNODESEVENTDATAITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeEndPointEventListResponseBodyNodesEventDataItemsEventList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeEndPointEventListResponseBodyNodesEventDataItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEndPointEventListResponseBodyNodesEventDataItems& obj) { 
      DARABONBA_PTR_TO_JSON(EventList, eventList_);
      DARABONBA_PTR_TO_JSON(Ts, ts_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEndPointEventListResponseBodyNodesEventDataItems& obj) { 
      DARABONBA_PTR_FROM_JSON(EventList, eventList_);
      DARABONBA_PTR_FROM_JSON(Ts, ts_);
    };
    DescribeEndPointEventListResponseBodyNodesEventDataItems() = default ;
    DescribeEndPointEventListResponseBodyNodesEventDataItems(const DescribeEndPointEventListResponseBodyNodesEventDataItems &) = default ;
    DescribeEndPointEventListResponseBodyNodesEventDataItems(DescribeEndPointEventListResponseBodyNodesEventDataItems &&) = default ;
    DescribeEndPointEventListResponseBodyNodesEventDataItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEndPointEventListResponseBodyNodesEventDataItems() = default ;
    DescribeEndPointEventListResponseBodyNodesEventDataItems& operator=(const DescribeEndPointEventListResponseBodyNodesEventDataItems &) = default ;
    DescribeEndPointEventListResponseBodyNodesEventDataItems& operator=(DescribeEndPointEventListResponseBodyNodesEventDataItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->eventList_ != nullptr
        && this->ts_ != nullptr; };
    // eventList Field Functions 
    bool hasEventList() const { return this->eventList_ != nullptr;};
    void deleteEventList() { this->eventList_ = nullptr;};
    inline const vector<Models::DescribeEndPointEventListResponseBodyNodesEventDataItemsEventList> & eventList() const { DARABONBA_PTR_GET_CONST(eventList_, vector<Models::DescribeEndPointEventListResponseBodyNodesEventDataItemsEventList>) };
    inline vector<Models::DescribeEndPointEventListResponseBodyNodesEventDataItemsEventList> eventList() { DARABONBA_PTR_GET(eventList_, vector<Models::DescribeEndPointEventListResponseBodyNodesEventDataItemsEventList>) };
    inline DescribeEndPointEventListResponseBodyNodesEventDataItems& setEventList(const vector<Models::DescribeEndPointEventListResponseBodyNodesEventDataItemsEventList> & eventList) { DARABONBA_PTR_SET_VALUE(eventList_, eventList) };
    inline DescribeEndPointEventListResponseBodyNodesEventDataItems& setEventList(vector<Models::DescribeEndPointEventListResponseBodyNodesEventDataItemsEventList> && eventList) { DARABONBA_PTR_SET_RVALUE(eventList_, eventList) };


    // ts Field Functions 
    bool hasTs() const { return this->ts_ != nullptr;};
    void deleteTs() { this->ts_ = nullptr;};
    inline int64_t ts() const { DARABONBA_PTR_GET_DEFAULT(ts_, 0L) };
    inline DescribeEndPointEventListResponseBodyNodesEventDataItems& setTs(int64_t ts) { DARABONBA_PTR_SET_VALUE(ts_, ts) };


  protected:
    std::shared_ptr<vector<Models::DescribeEndPointEventListResponseBodyNodesEventDataItemsEventList>> eventList_ = nullptr;
    std::shared_ptr<int64_t> ts_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
