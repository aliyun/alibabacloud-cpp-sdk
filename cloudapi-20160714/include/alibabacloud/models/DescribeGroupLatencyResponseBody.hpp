// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGROUPLATENCYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGROUPLATENCYRESPONSEBODY_HPP_
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
  class DescribeGroupLatencyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGroupLatencyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LatencyPacket, latencyPacket_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGroupLatencyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LatencyPacket, latencyPacket_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeGroupLatencyResponseBody() = default ;
    DescribeGroupLatencyResponseBody(const DescribeGroupLatencyResponseBody &) = default ;
    DescribeGroupLatencyResponseBody(DescribeGroupLatencyResponseBody &&) = default ;
    DescribeGroupLatencyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGroupLatencyResponseBody() = default ;
    DescribeGroupLatencyResponseBody& operator=(const DescribeGroupLatencyResponseBody &) = default ;
    DescribeGroupLatencyResponseBody& operator=(DescribeGroupLatencyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LatencyPacket : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LatencyPacket& obj) { 
        DARABONBA_PTR_TO_JSON(MonitorItem, monitorItem_);
      };
      friend void from_json(const Darabonba::Json& j, LatencyPacket& obj) { 
        DARABONBA_PTR_FROM_JSON(MonitorItem, monitorItem_);
      };
      LatencyPacket() = default ;
      LatencyPacket(const LatencyPacket &) = default ;
      LatencyPacket(LatencyPacket &&) = default ;
      LatencyPacket(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LatencyPacket() = default ;
      LatencyPacket& operator=(const LatencyPacket &) = default ;
      LatencyPacket& operator=(LatencyPacket &&) = default ;
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
        // *   latency: the backend processing latency
        // *   gatewayLatency: the API Gateway processing latency
        shared_ptr<string> item_ {};
        // The point in time when the latency data was collected. The format is YYYY-MM-DDThh:mm:ssZ.
        shared_ptr<string> itemTime_ {};
        // The latency. Unit: ms.
        shared_ptr<string> itemValue_ {};
      };

      virtual bool empty() const override { return this->monitorItem_ == nullptr; };
      // monitorItem Field Functions 
      bool hasMonitorItem() const { return this->monitorItem_ != nullptr;};
      void deleteMonitorItem() { this->monitorItem_ = nullptr;};
      inline const vector<LatencyPacket::MonitorItem> & getMonitorItem() const { DARABONBA_PTR_GET_CONST(monitorItem_, vector<LatencyPacket::MonitorItem>) };
      inline vector<LatencyPacket::MonitorItem> getMonitorItem() { DARABONBA_PTR_GET(monitorItem_, vector<LatencyPacket::MonitorItem>) };
      inline LatencyPacket& setMonitorItem(const vector<LatencyPacket::MonitorItem> & monitorItem) { DARABONBA_PTR_SET_VALUE(monitorItem_, monitorItem) };
      inline LatencyPacket& setMonitorItem(vector<LatencyPacket::MonitorItem> && monitorItem) { DARABONBA_PTR_SET_RVALUE(monitorItem_, monitorItem) };


    protected:
      shared_ptr<vector<LatencyPacket::MonitorItem>> monitorItem_ {};
    };

    virtual bool empty() const override { return this->latencyPacket_ == nullptr
        && this->requestId_ == nullptr; };
    // latencyPacket Field Functions 
    bool hasLatencyPacket() const { return this->latencyPacket_ != nullptr;};
    void deleteLatencyPacket() { this->latencyPacket_ = nullptr;};
    inline const DescribeGroupLatencyResponseBody::LatencyPacket & getLatencyPacket() const { DARABONBA_PTR_GET_CONST(latencyPacket_, DescribeGroupLatencyResponseBody::LatencyPacket) };
    inline DescribeGroupLatencyResponseBody::LatencyPacket getLatencyPacket() { DARABONBA_PTR_GET(latencyPacket_, DescribeGroupLatencyResponseBody::LatencyPacket) };
    inline DescribeGroupLatencyResponseBody& setLatencyPacket(const DescribeGroupLatencyResponseBody::LatencyPacket & latencyPacket) { DARABONBA_PTR_SET_VALUE(latencyPacket_, latencyPacket) };
    inline DescribeGroupLatencyResponseBody& setLatencyPacket(DescribeGroupLatencyResponseBody::LatencyPacket && latencyPacket) { DARABONBA_PTR_SET_RVALUE(latencyPacket_, latencyPacket) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeGroupLatencyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The latency information.
    shared_ptr<DescribeGroupLatencyResponseBody::LatencyPacket> latencyPacket_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
