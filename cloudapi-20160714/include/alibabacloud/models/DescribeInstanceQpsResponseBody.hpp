// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEQPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEQPSRESPONSEBODY_HPP_
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
  class DescribeInstanceQpsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceQpsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceQps, instanceQps_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceQpsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceQps, instanceQps_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeInstanceQpsResponseBody() = default ;
    DescribeInstanceQpsResponseBody(const DescribeInstanceQpsResponseBody &) = default ;
    DescribeInstanceQpsResponseBody(DescribeInstanceQpsResponseBody &&) = default ;
    DescribeInstanceQpsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceQpsResponseBody() = default ;
    DescribeInstanceQpsResponseBody& operator=(const DescribeInstanceQpsResponseBody &) = default ;
    DescribeInstanceQpsResponseBody& operator=(DescribeInstanceQpsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InstanceQps : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceQps& obj) { 
        DARABONBA_PTR_TO_JSON(MonitorItem, monitorItem_);
      };
      friend void from_json(const Darabonba::Json& j, InstanceQps& obj) { 
        DARABONBA_PTR_FROM_JSON(MonitorItem, monitorItem_);
      };
      InstanceQps() = default ;
      InstanceQps(const InstanceQps &) = default ;
      InstanceQps(InstanceQps &&) = default ;
      InstanceQps(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstanceQps() = default ;
      InstanceQps& operator=(const InstanceQps &) = default ;
      InstanceQps& operator=(InstanceQps &&) = default ;
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
        // The number of requests sent to the APIs in the instance.
        shared_ptr<string> itemValue_ {};
      };

      virtual bool empty() const override { return this->monitorItem_ == nullptr; };
      // monitorItem Field Functions 
      bool hasMonitorItem() const { return this->monitorItem_ != nullptr;};
      void deleteMonitorItem() { this->monitorItem_ = nullptr;};
      inline const vector<InstanceQps::MonitorItem> & getMonitorItem() const { DARABONBA_PTR_GET_CONST(monitorItem_, vector<InstanceQps::MonitorItem>) };
      inline vector<InstanceQps::MonitorItem> getMonitorItem() { DARABONBA_PTR_GET(monitorItem_, vector<InstanceQps::MonitorItem>) };
      inline InstanceQps& setMonitorItem(const vector<InstanceQps::MonitorItem> & monitorItem) { DARABONBA_PTR_SET_VALUE(monitorItem_, monitorItem) };
      inline InstanceQps& setMonitorItem(vector<InstanceQps::MonitorItem> && monitorItem) { DARABONBA_PTR_SET_RVALUE(monitorItem_, monitorItem) };


    protected:
      shared_ptr<vector<InstanceQps::MonitorItem>> monitorItem_ {};
    };

    virtual bool empty() const override { return this->instanceQps_ == nullptr
        && this->requestId_ == nullptr; };
    // instanceQps Field Functions 
    bool hasInstanceQps() const { return this->instanceQps_ != nullptr;};
    void deleteInstanceQps() { this->instanceQps_ = nullptr;};
    inline const DescribeInstanceQpsResponseBody::InstanceQps & getInstanceQps() const { DARABONBA_PTR_GET_CONST(instanceQps_, DescribeInstanceQpsResponseBody::InstanceQps) };
    inline DescribeInstanceQpsResponseBody::InstanceQps getInstanceQps() { DARABONBA_PTR_GET(instanceQps_, DescribeInstanceQpsResponseBody::InstanceQps) };
    inline DescribeInstanceQpsResponseBody& setInstanceQps(const DescribeInstanceQpsResponseBody::InstanceQps & instanceQps) { DARABONBA_PTR_SET_VALUE(instanceQps_, instanceQps) };
    inline DescribeInstanceQpsResponseBody& setInstanceQps(DescribeInstanceQpsResponseBody::InstanceQps && instanceQps) { DARABONBA_PTR_SET_RVALUE(instanceQps_, instanceQps) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceQpsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of requests sent to the APIs in the instance.
    shared_ptr<DescribeInstanceQpsResponseBody::InstanceQps> instanceQps_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
