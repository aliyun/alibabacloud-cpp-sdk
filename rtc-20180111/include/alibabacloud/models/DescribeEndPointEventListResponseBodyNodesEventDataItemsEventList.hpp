// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENDPOINTEVENTLISTRESPONSEBODYNODESEVENTDATAITEMSEVENTLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENDPOINTEVENTLISTRESPONSEBODYNODESEVENTDATAITEMSEVENTLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeEndPointEventListResponseBodyNodesEventDataItemsEventList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEndPointEventListResponseBodyNodesEventDataItemsEventList& obj) { 
      DARABONBA_PTR_TO_JSON(EventName, eventName_);
      DARABONBA_PTR_TO_JSON(EventType, eventType_);
      DARABONBA_PTR_TO_JSON(Ts, ts_);
      DARABONBA_PTR_TO_JSON(TsInMs, tsInMs_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEndPointEventListResponseBodyNodesEventDataItemsEventList& obj) { 
      DARABONBA_PTR_FROM_JSON(EventName, eventName_);
      DARABONBA_PTR_FROM_JSON(EventType, eventType_);
      DARABONBA_PTR_FROM_JSON(Ts, ts_);
      DARABONBA_PTR_FROM_JSON(TsInMs, tsInMs_);
    };
    DescribeEndPointEventListResponseBodyNodesEventDataItemsEventList() = default ;
    DescribeEndPointEventListResponseBodyNodesEventDataItemsEventList(const DescribeEndPointEventListResponseBodyNodesEventDataItemsEventList &) = default ;
    DescribeEndPointEventListResponseBodyNodesEventDataItemsEventList(DescribeEndPointEventListResponseBodyNodesEventDataItemsEventList &&) = default ;
    DescribeEndPointEventListResponseBodyNodesEventDataItemsEventList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEndPointEventListResponseBodyNodesEventDataItemsEventList() = default ;
    DescribeEndPointEventListResponseBodyNodesEventDataItemsEventList& operator=(const DescribeEndPointEventListResponseBodyNodesEventDataItemsEventList &) = default ;
    DescribeEndPointEventListResponseBodyNodesEventDataItemsEventList& operator=(DescribeEndPointEventListResponseBodyNodesEventDataItemsEventList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eventName_ == nullptr
        && return this->eventType_ == nullptr && return this->ts_ == nullptr && return this->tsInMs_ == nullptr; };
    // eventName Field Functions 
    bool hasEventName() const { return this->eventName_ != nullptr;};
    void deleteEventName() { this->eventName_ = nullptr;};
    inline string eventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
    inline DescribeEndPointEventListResponseBodyNodesEventDataItemsEventList& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


    // eventType Field Functions 
    bool hasEventType() const { return this->eventType_ != nullptr;};
    void deleteEventType() { this->eventType_ = nullptr;};
    inline string eventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
    inline DescribeEndPointEventListResponseBodyNodesEventDataItemsEventList& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


    // ts Field Functions 
    bool hasTs() const { return this->ts_ != nullptr;};
    void deleteTs() { this->ts_ = nullptr;};
    inline int64_t ts() const { DARABONBA_PTR_GET_DEFAULT(ts_, 0L) };
    inline DescribeEndPointEventListResponseBodyNodesEventDataItemsEventList& setTs(int64_t ts) { DARABONBA_PTR_SET_VALUE(ts_, ts) };


    // tsInMs Field Functions 
    bool hasTsInMs() const { return this->tsInMs_ != nullptr;};
    void deleteTsInMs() { this->tsInMs_ = nullptr;};
    inline string tsInMs() const { DARABONBA_PTR_GET_DEFAULT(tsInMs_, "") };
    inline DescribeEndPointEventListResponseBodyNodesEventDataItemsEventList& setTsInMs(string tsInMs) { DARABONBA_PTR_SET_VALUE(tsInMs_, tsInMs) };


  protected:
    std::shared_ptr<string> eventName_ = nullptr;
    std::shared_ptr<string> eventType_ = nullptr;
    std::shared_ptr<int64_t> ts_ = nullptr;
    std::shared_ptr<string> tsInMs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
