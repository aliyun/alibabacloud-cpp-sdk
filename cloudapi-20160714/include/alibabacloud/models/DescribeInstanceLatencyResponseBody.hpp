// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCELATENCYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCELATENCYRESPONSEBODY_HPP_
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
  class DescribeInstanceLatencyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceLatencyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceLatency, instanceLatency_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceLatencyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceLatency, instanceLatency_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeInstanceLatencyResponseBody() = default ;
    DescribeInstanceLatencyResponseBody(const DescribeInstanceLatencyResponseBody &) = default ;
    DescribeInstanceLatencyResponseBody(DescribeInstanceLatencyResponseBody &&) = default ;
    DescribeInstanceLatencyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceLatencyResponseBody() = default ;
    DescribeInstanceLatencyResponseBody& operator=(const DescribeInstanceLatencyResponseBody &) = default ;
    DescribeInstanceLatencyResponseBody& operator=(DescribeInstanceLatencyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InstanceLatency : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceLatency& obj) { 
        DARABONBA_PTR_TO_JSON(MonitorItem, monitorItem_);
      };
      friend void from_json(const Darabonba::Json& j, InstanceLatency& obj) { 
        DARABONBA_PTR_FROM_JSON(MonitorItem, monitorItem_);
      };
      InstanceLatency() = default ;
      InstanceLatency(const InstanceLatency &) = default ;
      InstanceLatency(InstanceLatency &&) = default ;
      InstanceLatency(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstanceLatency() = default ;
      InstanceLatency& operator=(const InstanceLatency &) = default ;
      InstanceLatency& operator=(InstanceLatency &&) = default ;
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
        // *   gatewayLatency API: the processing latency of API Gateway
        // *   latency: the processing latency of the backend service.
        shared_ptr<string> item_ {};
        // The monitoring time. The time follows the ISO 8601 standard and UTC time is used. Format: YYYY-MM-DDThh:mm:ssZ
        shared_ptr<string> itemTime_ {};
        // The value of the average latency.
        shared_ptr<string> itemValue_ {};
      };

      virtual bool empty() const override { return this->monitorItem_ == nullptr; };
      // monitorItem Field Functions 
      bool hasMonitorItem() const { return this->monitorItem_ != nullptr;};
      void deleteMonitorItem() { this->monitorItem_ = nullptr;};
      inline const vector<InstanceLatency::MonitorItem> & getMonitorItem() const { DARABONBA_PTR_GET_CONST(monitorItem_, vector<InstanceLatency::MonitorItem>) };
      inline vector<InstanceLatency::MonitorItem> getMonitorItem() { DARABONBA_PTR_GET(monitorItem_, vector<InstanceLatency::MonitorItem>) };
      inline InstanceLatency& setMonitorItem(const vector<InstanceLatency::MonitorItem> & monitorItem) { DARABONBA_PTR_SET_VALUE(monitorItem_, monitorItem) };
      inline InstanceLatency& setMonitorItem(vector<InstanceLatency::MonitorItem> && monitorItem) { DARABONBA_PTR_SET_RVALUE(monitorItem_, monitorItem) };


    protected:
      shared_ptr<vector<InstanceLatency::MonitorItem>> monitorItem_ {};
    };

    virtual bool empty() const override { return this->instanceLatency_ == nullptr
        && this->requestId_ == nullptr; };
    // instanceLatency Field Functions 
    bool hasInstanceLatency() const { return this->instanceLatency_ != nullptr;};
    void deleteInstanceLatency() { this->instanceLatency_ = nullptr;};
    inline const DescribeInstanceLatencyResponseBody::InstanceLatency & getInstanceLatency() const { DARABONBA_PTR_GET_CONST(instanceLatency_, DescribeInstanceLatencyResponseBody::InstanceLatency) };
    inline DescribeInstanceLatencyResponseBody::InstanceLatency getInstanceLatency() { DARABONBA_PTR_GET(instanceLatency_, DescribeInstanceLatencyResponseBody::InstanceLatency) };
    inline DescribeInstanceLatencyResponseBody& setInstanceLatency(const DescribeInstanceLatencyResponseBody::InstanceLatency & instanceLatency) { DARABONBA_PTR_SET_VALUE(instanceLatency_, instanceLatency) };
    inline DescribeInstanceLatencyResponseBody& setInstanceLatency(DescribeInstanceLatencyResponseBody::InstanceLatency && instanceLatency) { DARABONBA_PTR_SET_RVALUE(instanceLatency_, instanceLatency) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceLatencyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of average latencies in the instance.
    shared_ptr<DescribeInstanceLatencyResponseBody::InstanceLatency> instanceLatency_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
