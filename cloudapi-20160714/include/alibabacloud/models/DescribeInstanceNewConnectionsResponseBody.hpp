// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCENEWCONNECTIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCENEWCONNECTIONSRESPONSEBODY_HPP_
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
  class DescribeInstanceNewConnectionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceNewConnectionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceNewConnections, instanceNewConnections_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceNewConnectionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceNewConnections, instanceNewConnections_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeInstanceNewConnectionsResponseBody() = default ;
    DescribeInstanceNewConnectionsResponseBody(const DescribeInstanceNewConnectionsResponseBody &) = default ;
    DescribeInstanceNewConnectionsResponseBody(DescribeInstanceNewConnectionsResponseBody &&) = default ;
    DescribeInstanceNewConnectionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceNewConnectionsResponseBody() = default ;
    DescribeInstanceNewConnectionsResponseBody& operator=(const DescribeInstanceNewConnectionsResponseBody &) = default ;
    DescribeInstanceNewConnectionsResponseBody& operator=(DescribeInstanceNewConnectionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InstanceNewConnections : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceNewConnections& obj) { 
        DARABONBA_PTR_TO_JSON(MonitorItem, monitorItem_);
      };
      friend void from_json(const Darabonba::Json& j, InstanceNewConnections& obj) { 
        DARABONBA_PTR_FROM_JSON(MonitorItem, monitorItem_);
      };
      InstanceNewConnections() = default ;
      InstanceNewConnections(const InstanceNewConnections &) = default ;
      InstanceNewConnections(InstanceNewConnections &&) = default ;
      InstanceNewConnections(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstanceNewConnections() = default ;
      InstanceNewConnections& operator=(const InstanceNewConnections &) = default ;
      InstanceNewConnections& operator=(InstanceNewConnections &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class MonitorItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MonitorItem& obj) { 
          DARABONBA_PTR_TO_JSON(ItemTime, itemTime_);
          DARABONBA_PTR_TO_JSON(ItemValue, itemValue_);
        };
        friend void from_json(const Darabonba::Json& j, MonitorItem& obj) { 
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
        virtual bool empty() const override { return this->itemTime_ == nullptr
        && this->itemValue_ == nullptr; };
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
        // The monitoring time. The time follows the ISO 8601 standard and UTC time is used. Format: YYYY-MM-DDThh:mm:ssZ
        shared_ptr<string> itemTime_ {};
        // The number of new connections in the instance.
        shared_ptr<string> itemValue_ {};
      };

      virtual bool empty() const override { return this->monitorItem_ == nullptr; };
      // monitorItem Field Functions 
      bool hasMonitorItem() const { return this->monitorItem_ != nullptr;};
      void deleteMonitorItem() { this->monitorItem_ = nullptr;};
      inline const vector<InstanceNewConnections::MonitorItem> & getMonitorItem() const { DARABONBA_PTR_GET_CONST(monitorItem_, vector<InstanceNewConnections::MonitorItem>) };
      inline vector<InstanceNewConnections::MonitorItem> getMonitorItem() { DARABONBA_PTR_GET(monitorItem_, vector<InstanceNewConnections::MonitorItem>) };
      inline InstanceNewConnections& setMonitorItem(const vector<InstanceNewConnections::MonitorItem> & monitorItem) { DARABONBA_PTR_SET_VALUE(monitorItem_, monitorItem) };
      inline InstanceNewConnections& setMonitorItem(vector<InstanceNewConnections::MonitorItem> && monitorItem) { DARABONBA_PTR_SET_RVALUE(monitorItem_, monitorItem) };


    protected:
      shared_ptr<vector<InstanceNewConnections::MonitorItem>> monitorItem_ {};
    };

    virtual bool empty() const override { return this->instanceNewConnections_ == nullptr
        && this->requestId_ == nullptr; };
    // instanceNewConnections Field Functions 
    bool hasInstanceNewConnections() const { return this->instanceNewConnections_ != nullptr;};
    void deleteInstanceNewConnections() { this->instanceNewConnections_ = nullptr;};
    inline const DescribeInstanceNewConnectionsResponseBody::InstanceNewConnections & getInstanceNewConnections() const { DARABONBA_PTR_GET_CONST(instanceNewConnections_, DescribeInstanceNewConnectionsResponseBody::InstanceNewConnections) };
    inline DescribeInstanceNewConnectionsResponseBody::InstanceNewConnections getInstanceNewConnections() { DARABONBA_PTR_GET(instanceNewConnections_, DescribeInstanceNewConnectionsResponseBody::InstanceNewConnections) };
    inline DescribeInstanceNewConnectionsResponseBody& setInstanceNewConnections(const DescribeInstanceNewConnectionsResponseBody::InstanceNewConnections & instanceNewConnections) { DARABONBA_PTR_SET_VALUE(instanceNewConnections_, instanceNewConnections) };
    inline DescribeInstanceNewConnectionsResponseBody& setInstanceNewConnections(DescribeInstanceNewConnectionsResponseBody::InstanceNewConnections && instanceNewConnections) { DARABONBA_PTR_SET_RVALUE(instanceNewConnections_, instanceNewConnections) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceNewConnectionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of new connections in the instance.
    shared_ptr<DescribeInstanceNewConnectionsResponseBody::InstanceNewConnections> instanceNewConnections_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
