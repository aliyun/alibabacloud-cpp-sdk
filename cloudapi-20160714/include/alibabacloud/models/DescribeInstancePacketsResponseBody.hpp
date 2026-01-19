// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEPACKETSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEPACKETSRESPONSEBODY_HPP_
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
  class DescribeInstancePacketsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstancePacketsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstancePackets, instancePackets_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstancePacketsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstancePackets, instancePackets_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeInstancePacketsResponseBody() = default ;
    DescribeInstancePacketsResponseBody(const DescribeInstancePacketsResponseBody &) = default ;
    DescribeInstancePacketsResponseBody(DescribeInstancePacketsResponseBody &&) = default ;
    DescribeInstancePacketsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstancePacketsResponseBody() = default ;
    DescribeInstancePacketsResponseBody& operator=(const DescribeInstancePacketsResponseBody &) = default ;
    DescribeInstancePacketsResponseBody& operator=(DescribeInstancePacketsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InstancePackets : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstancePackets& obj) { 
        DARABONBA_PTR_TO_JSON(MonitorItem, monitorItem_);
      };
      friend void from_json(const Darabonba::Json& j, InstancePackets& obj) { 
        DARABONBA_PTR_FROM_JSON(MonitorItem, monitorItem_);
      };
      InstancePackets() = default ;
      InstancePackets(const InstancePackets &) = default ;
      InstancePackets(InstancePackets &&) = default ;
      InstancePackets(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstancePackets() = default ;
      InstancePackets& operator=(const InstancePackets &) = default ;
      InstancePackets& operator=(InstancePackets &&) = default ;
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
        // *   InstancePacketRX: inbound data packets
        // *   InstancePacketTX: outbound data packets
        shared_ptr<string> item_ {};
        // The monitoring time. The time follows the ISO 8601 standard and UTC time is used. Format: YYYY-MM-DDThh:mm:ssZ
        shared_ptr<string> itemTime_ {};
        // The number of inbound and outbound data packets in the instance.
        shared_ptr<string> itemValue_ {};
      };

      virtual bool empty() const override { return this->monitorItem_ == nullptr; };
      // monitorItem Field Functions 
      bool hasMonitorItem() const { return this->monitorItem_ != nullptr;};
      void deleteMonitorItem() { this->monitorItem_ = nullptr;};
      inline const vector<InstancePackets::MonitorItem> & getMonitorItem() const { DARABONBA_PTR_GET_CONST(monitorItem_, vector<InstancePackets::MonitorItem>) };
      inline vector<InstancePackets::MonitorItem> getMonitorItem() { DARABONBA_PTR_GET(monitorItem_, vector<InstancePackets::MonitorItem>) };
      inline InstancePackets& setMonitorItem(const vector<InstancePackets::MonitorItem> & monitorItem) { DARABONBA_PTR_SET_VALUE(monitorItem_, monitorItem) };
      inline InstancePackets& setMonitorItem(vector<InstancePackets::MonitorItem> && monitorItem) { DARABONBA_PTR_SET_RVALUE(monitorItem_, monitorItem) };


    protected:
      shared_ptr<vector<InstancePackets::MonitorItem>> monitorItem_ {};
    };

    virtual bool empty() const override { return this->instancePackets_ == nullptr
        && this->requestId_ == nullptr; };
    // instancePackets Field Functions 
    bool hasInstancePackets() const { return this->instancePackets_ != nullptr;};
    void deleteInstancePackets() { this->instancePackets_ = nullptr;};
    inline const DescribeInstancePacketsResponseBody::InstancePackets & getInstancePackets() const { DARABONBA_PTR_GET_CONST(instancePackets_, DescribeInstancePacketsResponseBody::InstancePackets) };
    inline DescribeInstancePacketsResponseBody::InstancePackets getInstancePackets() { DARABONBA_PTR_GET(instancePackets_, DescribeInstancePacketsResponseBody::InstancePackets) };
    inline DescribeInstancePacketsResponseBody& setInstancePackets(const DescribeInstancePacketsResponseBody::InstancePackets & instancePackets) { DARABONBA_PTR_SET_VALUE(instancePackets_, instancePackets) };
    inline DescribeInstancePacketsResponseBody& setInstancePackets(DescribeInstancePacketsResponseBody::InstancePackets && instancePackets) { DARABONBA_PTR_SET_RVALUE(instancePackets_, instancePackets) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstancePacketsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of inbound and outbound data packets in the instance.
    shared_ptr<DescribeInstancePacketsResponseBody::InstancePackets> instancePackets_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
