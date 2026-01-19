// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEDROPCONNECTIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEDROPCONNECTIONSRESPONSEBODY_HPP_
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
  class DescribeInstanceDropConnectionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceDropConnectionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceDropConnections, instanceDropConnections_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceDropConnectionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceDropConnections, instanceDropConnections_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeInstanceDropConnectionsResponseBody() = default ;
    DescribeInstanceDropConnectionsResponseBody(const DescribeInstanceDropConnectionsResponseBody &) = default ;
    DescribeInstanceDropConnectionsResponseBody(DescribeInstanceDropConnectionsResponseBody &&) = default ;
    DescribeInstanceDropConnectionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceDropConnectionsResponseBody() = default ;
    DescribeInstanceDropConnectionsResponseBody& operator=(const DescribeInstanceDropConnectionsResponseBody &) = default ;
    DescribeInstanceDropConnectionsResponseBody& operator=(DescribeInstanceDropConnectionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InstanceDropConnections : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceDropConnections& obj) { 
        DARABONBA_PTR_TO_JSON(MonitorItem, monitorItem_);
      };
      friend void from_json(const Darabonba::Json& j, InstanceDropConnections& obj) { 
        DARABONBA_PTR_FROM_JSON(MonitorItem, monitorItem_);
      };
      InstanceDropConnections() = default ;
      InstanceDropConnections(const InstanceDropConnections &) = default ;
      InstanceDropConnections(InstanceDropConnections &&) = default ;
      InstanceDropConnections(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstanceDropConnections() = default ;
      InstanceDropConnections& operator=(const InstanceDropConnections &) = default ;
      InstanceDropConnections& operator=(InstanceDropConnections &&) = default ;
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
        // The monitoring time. The time follows the ISO 8601 standard. Format: YYYY-MM-DDThh:mm:ssZ
        shared_ptr<string> itemTime_ {};
        // The number of dropped packets in the instance.
        shared_ptr<string> itemValue_ {};
      };

      virtual bool empty() const override { return this->monitorItem_ == nullptr; };
      // monitorItem Field Functions 
      bool hasMonitorItem() const { return this->monitorItem_ != nullptr;};
      void deleteMonitorItem() { this->monitorItem_ = nullptr;};
      inline const vector<InstanceDropConnections::MonitorItem> & getMonitorItem() const { DARABONBA_PTR_GET_CONST(monitorItem_, vector<InstanceDropConnections::MonitorItem>) };
      inline vector<InstanceDropConnections::MonitorItem> getMonitorItem() { DARABONBA_PTR_GET(monitorItem_, vector<InstanceDropConnections::MonitorItem>) };
      inline InstanceDropConnections& setMonitorItem(const vector<InstanceDropConnections::MonitorItem> & monitorItem) { DARABONBA_PTR_SET_VALUE(monitorItem_, monitorItem) };
      inline InstanceDropConnections& setMonitorItem(vector<InstanceDropConnections::MonitorItem> && monitorItem) { DARABONBA_PTR_SET_RVALUE(monitorItem_, monitorItem) };


    protected:
      shared_ptr<vector<InstanceDropConnections::MonitorItem>> monitorItem_ {};
    };

    virtual bool empty() const override { return this->instanceDropConnections_ == nullptr
        && this->requestId_ == nullptr; };
    // instanceDropConnections Field Functions 
    bool hasInstanceDropConnections() const { return this->instanceDropConnections_ != nullptr;};
    void deleteInstanceDropConnections() { this->instanceDropConnections_ = nullptr;};
    inline const DescribeInstanceDropConnectionsResponseBody::InstanceDropConnections & getInstanceDropConnections() const { DARABONBA_PTR_GET_CONST(instanceDropConnections_, DescribeInstanceDropConnectionsResponseBody::InstanceDropConnections) };
    inline DescribeInstanceDropConnectionsResponseBody::InstanceDropConnections getInstanceDropConnections() { DARABONBA_PTR_GET(instanceDropConnections_, DescribeInstanceDropConnectionsResponseBody::InstanceDropConnections) };
    inline DescribeInstanceDropConnectionsResponseBody& setInstanceDropConnections(const DescribeInstanceDropConnectionsResponseBody::InstanceDropConnections & instanceDropConnections) { DARABONBA_PTR_SET_VALUE(instanceDropConnections_, instanceDropConnections) };
    inline DescribeInstanceDropConnectionsResponseBody& setInstanceDropConnections(DescribeInstanceDropConnectionsResponseBody::InstanceDropConnections && instanceDropConnections) { DARABONBA_PTR_SET_RVALUE(instanceDropConnections_, instanceDropConnections) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceDropConnectionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of dropped connections in the instance.
    shared_ptr<DescribeInstanceDropConnectionsResponseBody::InstanceDropConnections> instanceDropConnections_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
