// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCETRAFFICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCETRAFFICRESPONSEBODY_HPP_
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
  class DescribeInstanceTrafficResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceTrafficResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceTraffic, instanceTraffic_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceTrafficResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceTraffic, instanceTraffic_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeInstanceTrafficResponseBody() = default ;
    DescribeInstanceTrafficResponseBody(const DescribeInstanceTrafficResponseBody &) = default ;
    DescribeInstanceTrafficResponseBody(DescribeInstanceTrafficResponseBody &&) = default ;
    DescribeInstanceTrafficResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceTrafficResponseBody() = default ;
    DescribeInstanceTrafficResponseBody& operator=(const DescribeInstanceTrafficResponseBody &) = default ;
    DescribeInstanceTrafficResponseBody& operator=(DescribeInstanceTrafficResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InstanceTraffic : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceTraffic& obj) { 
        DARABONBA_PTR_TO_JSON(MonitorItem, monitorItem_);
      };
      friend void from_json(const Darabonba::Json& j, InstanceTraffic& obj) { 
        DARABONBA_PTR_FROM_JSON(MonitorItem, monitorItem_);
      };
      InstanceTraffic() = default ;
      InstanceTraffic(const InstanceTraffic &) = default ;
      InstanceTraffic(InstanceTraffic &&) = default ;
      InstanceTraffic(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstanceTraffic() = default ;
      InstanceTraffic& operator=(const InstanceTraffic &) = default ;
      InstanceTraffic& operator=(InstanceTraffic &&) = default ;
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
        // The monitoring time. The time follows the ISO 8601 standard and UTC time is used. Format: YYYY-MM-DDThh:mm:ssZ
        shared_ptr<string> itemTime_ {};
        // The amount of traffic consumed by the requests and responses in the instance.
        shared_ptr<string> itemValue_ {};
      };

      virtual bool empty() const override { return this->monitorItem_ == nullptr; };
      // monitorItem Field Functions 
      bool hasMonitorItem() const { return this->monitorItem_ != nullptr;};
      void deleteMonitorItem() { this->monitorItem_ = nullptr;};
      inline const vector<InstanceTraffic::MonitorItem> & getMonitorItem() const { DARABONBA_PTR_GET_CONST(monitorItem_, vector<InstanceTraffic::MonitorItem>) };
      inline vector<InstanceTraffic::MonitorItem> getMonitorItem() { DARABONBA_PTR_GET(monitorItem_, vector<InstanceTraffic::MonitorItem>) };
      inline InstanceTraffic& setMonitorItem(const vector<InstanceTraffic::MonitorItem> & monitorItem) { DARABONBA_PTR_SET_VALUE(monitorItem_, monitorItem) };
      inline InstanceTraffic& setMonitorItem(vector<InstanceTraffic::MonitorItem> && monitorItem) { DARABONBA_PTR_SET_RVALUE(monitorItem_, monitorItem) };


    protected:
      shared_ptr<vector<InstanceTraffic::MonitorItem>> monitorItem_ {};
    };

    virtual bool empty() const override { return this->instanceTraffic_ == nullptr
        && this->requestId_ == nullptr; };
    // instanceTraffic Field Functions 
    bool hasInstanceTraffic() const { return this->instanceTraffic_ != nullptr;};
    void deleteInstanceTraffic() { this->instanceTraffic_ = nullptr;};
    inline const DescribeInstanceTrafficResponseBody::InstanceTraffic & getInstanceTraffic() const { DARABONBA_PTR_GET_CONST(instanceTraffic_, DescribeInstanceTrafficResponseBody::InstanceTraffic) };
    inline DescribeInstanceTrafficResponseBody::InstanceTraffic getInstanceTraffic() { DARABONBA_PTR_GET(instanceTraffic_, DescribeInstanceTrafficResponseBody::InstanceTraffic) };
    inline DescribeInstanceTrafficResponseBody& setInstanceTraffic(const DescribeInstanceTrafficResponseBody::InstanceTraffic & instanceTraffic) { DARABONBA_PTR_SET_VALUE(instanceTraffic_, instanceTraffic) };
    inline DescribeInstanceTrafficResponseBody& setInstanceTraffic(DescribeInstanceTrafficResponseBody::InstanceTraffic && instanceTraffic) { DARABONBA_PTR_SET_RVALUE(instanceTraffic_, instanceTraffic) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceTrafficResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The traffic consumed by the requests and responses in the instance.
    shared_ptr<DescribeInstanceTrafficResponseBody::InstanceTraffic> instanceTraffic_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
