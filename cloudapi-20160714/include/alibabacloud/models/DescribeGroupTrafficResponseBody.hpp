// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGROUPTRAFFICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGROUPTRAFFICRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeGroupTrafficResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGroupTrafficResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TrafficPerSecond, trafficPerSecond_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGroupTrafficResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TrafficPerSecond, trafficPerSecond_);
    };
    DescribeGroupTrafficResponseBody() = default ;
    DescribeGroupTrafficResponseBody(const DescribeGroupTrafficResponseBody &) = default ;
    DescribeGroupTrafficResponseBody(DescribeGroupTrafficResponseBody &&) = default ;
    DescribeGroupTrafficResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGroupTrafficResponseBody() = default ;
    DescribeGroupTrafficResponseBody& operator=(const DescribeGroupTrafficResponseBody &) = default ;
    DescribeGroupTrafficResponseBody& operator=(DescribeGroupTrafficResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TrafficPerSecond : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TrafficPerSecond& obj) { 
        DARABONBA_PTR_TO_JSON(MonitorItem, monitorItem_);
      };
      friend void from_json(const Darabonba::Json& j, TrafficPerSecond& obj) { 
        DARABONBA_PTR_FROM_JSON(MonitorItem, monitorItem_);
      };
      TrafficPerSecond() = default ;
      TrafficPerSecond(const TrafficPerSecond &) = default ;
      TrafficPerSecond(TrafficPerSecond &&) = default ;
      TrafficPerSecond(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TrafficPerSecond() = default ;
      TrafficPerSecond& operator=(const TrafficPerSecond &) = default ;
      TrafficPerSecond& operator=(TrafficPerSecond &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class MonitorItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MonitorItem& obj) { 
          DARABONBA_PTR_TO_JSON(Item, item_);
          DARABONBA_PTR_TO_JSON(ItemTime, itemTime_);
          DARABONBA_PTR_TO_JSON(ItemValue, itemValue_);
        };
        friend void from_json(const Darabonba::Json& j, MonitorItem& obj) { 
          DARABONBA_PTR_FROM_JSON(Item, item_);
          DARABONBA_PTR_FROM_JSON(ItemTime, itemTime_);
          DARABONBA_PTR_FROM_JSON(ItemValue, itemValue_);
        };
        MonitorItem() = default ;
        MonitorItem(const MonitorItem &) = default ;
        MonitorItem(MonitorItem &&) = default ;
        MonitorItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MonitorItem() = default ;
        MonitorItem& operator=(const MonitorItem &) = default ;
        MonitorItem& operator=(MonitorItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->item_ == nullptr
        && this->itemTime_ == nullptr && this->itemValue_ == nullptr; };
        // item Field Functions 
        bool hasItem() const { return this->item_ != nullptr;};
        void deleteItem() { this->item_ = nullptr;};
        inline string getItem() const { DARABONBA_PTR_GET_DEFAULT(item_, "") };
        inline MonitorItem& setItem(string item) { DARABONBA_PTR_SET_VALUE(item_, item) };


        // itemTime Field Functions 
        bool hasItemTime() const { return this->itemTime_ != nullptr;};
        void deleteItemTime() { this->itemTime_ = nullptr;};
        inline string getItemTime() const { DARABONBA_PTR_GET_DEFAULT(itemTime_, "") };
        inline MonitorItem& setItemTime(string itemTime) { DARABONBA_PTR_SET_VALUE(itemTime_, itemTime) };


        // itemValue Field Functions 
        bool hasItemValue() const { return this->itemValue_ != nullptr;};
        void deleteItemValue() { this->itemValue_ = nullptr;};
        inline string getItemValue() const { DARABONBA_PTR_GET_DEFAULT(itemValue_, "") };
        inline MonitorItem& setItemValue(string itemValue) { DARABONBA_PTR_SET_VALUE(itemValue_, itemValue) };


      protected:
        // The metric. Valid values:
        // 
        // *   inbound: traffic consumed by requests
        // *   outbound: traffic consumed by responses
        shared_ptr<string> item_ {};
        // The corresponding time. The time follows the ISO 8601 standard and UTC time is used. Format: YYYY-MM-DDThh:mm:ssZ.
        shared_ptr<string> itemTime_ {};
        // The traffic volume per second.
        shared_ptr<string> itemValue_ {};
      };

      virtual bool empty() const override { return this->monitorItem_ == nullptr; };
      // monitorItem Field Functions 
      bool hasMonitorItem() const { return this->monitorItem_ != nullptr;};
      void deleteMonitorItem() { this->monitorItem_ = nullptr;};
      inline const vector<TrafficPerSecond::MonitorItem> & getMonitorItem() const { DARABONBA_PTR_GET_CONST(monitorItem_, vector<TrafficPerSecond::MonitorItem>) };
      inline vector<TrafficPerSecond::MonitorItem> getMonitorItem() { DARABONBA_PTR_GET(monitorItem_, vector<TrafficPerSecond::MonitorItem>) };
      inline TrafficPerSecond& setMonitorItem(const vector<TrafficPerSecond::MonitorItem> & monitorItem) { DARABONBA_PTR_SET_VALUE(monitorItem_, monitorItem) };
      inline TrafficPerSecond& setMonitorItem(vector<TrafficPerSecond::MonitorItem> && monitorItem) { DARABONBA_PTR_SET_RVALUE(monitorItem_, monitorItem) };


    protected:
      shared_ptr<vector<TrafficPerSecond::MonitorItem>> monitorItem_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->trafficPerSecond_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeGroupTrafficResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // trafficPerSecond Field Functions 
    bool hasTrafficPerSecond() const { return this->trafficPerSecond_ != nullptr;};
    void deleteTrafficPerSecond() { this->trafficPerSecond_ = nullptr;};
    inline const DescribeGroupTrafficResponseBody::TrafficPerSecond & getTrafficPerSecond() const { DARABONBA_PTR_GET_CONST(trafficPerSecond_, DescribeGroupTrafficResponseBody::TrafficPerSecond) };
    inline DescribeGroupTrafficResponseBody::TrafficPerSecond getTrafficPerSecond() { DARABONBA_PTR_GET(trafficPerSecond_, DescribeGroupTrafficResponseBody::TrafficPerSecond) };
    inline DescribeGroupTrafficResponseBody& setTrafficPerSecond(const DescribeGroupTrafficResponseBody::TrafficPerSecond & trafficPerSecond) { DARABONBA_PTR_SET_VALUE(trafficPerSecond_, trafficPerSecond) };
    inline DescribeGroupTrafficResponseBody& setTrafficPerSecond(DescribeGroupTrafficResponseBody::TrafficPerSecond && trafficPerSecond) { DARABONBA_PTR_SET_RVALUE(trafficPerSecond_, trafficPerSecond) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The traffic information per second.
    shared_ptr<DescribeGroupTrafficResponseBody::TrafficPerSecond> trafficPerSecond_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
