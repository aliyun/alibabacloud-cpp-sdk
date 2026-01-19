// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEDROPPACKETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEDROPPACKETRESPONSEBODY_HPP_
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
  class DescribeInstanceDropPacketResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceDropPacketResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceDropPacket, instanceDropPacket_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceDropPacketResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceDropPacket, instanceDropPacket_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeInstanceDropPacketResponseBody() = default ;
    DescribeInstanceDropPacketResponseBody(const DescribeInstanceDropPacketResponseBody &) = default ;
    DescribeInstanceDropPacketResponseBody(DescribeInstanceDropPacketResponseBody &&) = default ;
    DescribeInstanceDropPacketResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceDropPacketResponseBody() = default ;
    DescribeInstanceDropPacketResponseBody& operator=(const DescribeInstanceDropPacketResponseBody &) = default ;
    DescribeInstanceDropPacketResponseBody& operator=(DescribeInstanceDropPacketResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InstanceDropPacket : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceDropPacket& obj) { 
        DARABONBA_PTR_TO_JSON(MonitorItem, monitorItem_);
      };
      friend void from_json(const Darabonba::Json& j, InstanceDropPacket& obj) { 
        DARABONBA_PTR_FROM_JSON(MonitorItem, monitorItem_);
      };
      InstanceDropPacket() = default ;
      InstanceDropPacket(const InstanceDropPacket &) = default ;
      InstanceDropPacket(InstanceDropPacket &&) = default ;
      InstanceDropPacket(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstanceDropPacket() = default ;
      InstanceDropPacket& operator=(const InstanceDropPacket &) = default ;
      InstanceDropPacket& operator=(InstanceDropPacket &&) = default ;
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
        // *   InstanceDropPacketRX: the number of inbound packets dropped in the instance per second.
        // *   InstanceDropPacketTX: the number of outbound packets dropped in the instance per second.
        shared_ptr<string> item_ {};
        // The monitoring time. The time follows the ISO 8601 standard. Format: YYYY-MM-DDThh:mm:ssZ
        shared_ptr<string> itemTime_ {};
        // The number of dropped packets in the instance.
        shared_ptr<string> itemValue_ {};
      };

      virtual bool empty() const override { return this->monitorItem_ == nullptr; };
      // monitorItem Field Functions 
      bool hasMonitorItem() const { return this->monitorItem_ != nullptr;};
      void deleteMonitorItem() { this->monitorItem_ = nullptr;};
      inline const vector<InstanceDropPacket::MonitorItem> & getMonitorItem() const { DARABONBA_PTR_GET_CONST(monitorItem_, vector<InstanceDropPacket::MonitorItem>) };
      inline vector<InstanceDropPacket::MonitorItem> getMonitorItem() { DARABONBA_PTR_GET(monitorItem_, vector<InstanceDropPacket::MonitorItem>) };
      inline InstanceDropPacket& setMonitorItem(const vector<InstanceDropPacket::MonitorItem> & monitorItem) { DARABONBA_PTR_SET_VALUE(monitorItem_, monitorItem) };
      inline InstanceDropPacket& setMonitorItem(vector<InstanceDropPacket::MonitorItem> && monitorItem) { DARABONBA_PTR_SET_RVALUE(monitorItem_, monitorItem) };


    protected:
      shared_ptr<vector<InstanceDropPacket::MonitorItem>> monitorItem_ {};
    };

    virtual bool empty() const override { return this->instanceDropPacket_ == nullptr
        && this->requestId_ == nullptr; };
    // instanceDropPacket Field Functions 
    bool hasInstanceDropPacket() const { return this->instanceDropPacket_ != nullptr;};
    void deleteInstanceDropPacket() { this->instanceDropPacket_ = nullptr;};
    inline const DescribeInstanceDropPacketResponseBody::InstanceDropPacket & getInstanceDropPacket() const { DARABONBA_PTR_GET_CONST(instanceDropPacket_, DescribeInstanceDropPacketResponseBody::InstanceDropPacket) };
    inline DescribeInstanceDropPacketResponseBody::InstanceDropPacket getInstanceDropPacket() { DARABONBA_PTR_GET(instanceDropPacket_, DescribeInstanceDropPacketResponseBody::InstanceDropPacket) };
    inline DescribeInstanceDropPacketResponseBody& setInstanceDropPacket(const DescribeInstanceDropPacketResponseBody::InstanceDropPacket & instanceDropPacket) { DARABONBA_PTR_SET_VALUE(instanceDropPacket_, instanceDropPacket) };
    inline DescribeInstanceDropPacketResponseBody& setInstanceDropPacket(DescribeInstanceDropPacketResponseBody::InstanceDropPacket && instanceDropPacket) { DARABONBA_PTR_SET_RVALUE(instanceDropPacket_, instanceDropPacket) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceDropPacketResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of dropped packets in the instance.
    shared_ptr<DescribeInstanceDropPacketResponseBody::InstanceDropPacket> instanceDropPacket_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
