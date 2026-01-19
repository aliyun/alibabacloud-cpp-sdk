// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEHTTPCODERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEHTTPCODERESPONSEBODY_HPP_
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
  class DescribeInstanceHttpCodeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceHttpCodeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceHttpCode, instanceHttpCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceHttpCodeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceHttpCode, instanceHttpCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeInstanceHttpCodeResponseBody() = default ;
    DescribeInstanceHttpCodeResponseBody(const DescribeInstanceHttpCodeResponseBody &) = default ;
    DescribeInstanceHttpCodeResponseBody(DescribeInstanceHttpCodeResponseBody &&) = default ;
    DescribeInstanceHttpCodeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceHttpCodeResponseBody() = default ;
    DescribeInstanceHttpCodeResponseBody& operator=(const DescribeInstanceHttpCodeResponseBody &) = default ;
    DescribeInstanceHttpCodeResponseBody& operator=(DescribeInstanceHttpCodeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InstanceHttpCode : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceHttpCode& obj) { 
        DARABONBA_PTR_TO_JSON(MonitorItem, monitorItem_);
      };
      friend void from_json(const Darabonba::Json& j, InstanceHttpCode& obj) { 
        DARABONBA_PTR_FROM_JSON(MonitorItem, monitorItem_);
      };
      InstanceHttpCode() = default ;
      InstanceHttpCode(const InstanceHttpCode &) = default ;
      InstanceHttpCode(InstanceHttpCode &&) = default ;
      InstanceHttpCode(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstanceHttpCode() = default ;
      InstanceHttpCode& operator=(const InstanceHttpCode &) = default ;
      InstanceHttpCode& operator=(InstanceHttpCode &&) = default ;
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
        // The HTTP status code returned.
        shared_ptr<string> itemTime_ {};
        // The corresponding value.
        shared_ptr<string> itemValue_ {};
      };

      virtual bool empty() const override { return this->monitorItem_ == nullptr; };
      // monitorItem Field Functions 
      bool hasMonitorItem() const { return this->monitorItem_ != nullptr;};
      void deleteMonitorItem() { this->monitorItem_ = nullptr;};
      inline const vector<InstanceHttpCode::MonitorItem> & getMonitorItem() const { DARABONBA_PTR_GET_CONST(monitorItem_, vector<InstanceHttpCode::MonitorItem>) };
      inline vector<InstanceHttpCode::MonitorItem> getMonitorItem() { DARABONBA_PTR_GET(monitorItem_, vector<InstanceHttpCode::MonitorItem>) };
      inline InstanceHttpCode& setMonitorItem(const vector<InstanceHttpCode::MonitorItem> & monitorItem) { DARABONBA_PTR_SET_VALUE(monitorItem_, monitorItem) };
      inline InstanceHttpCode& setMonitorItem(vector<InstanceHttpCode::MonitorItem> && monitorItem) { DARABONBA_PTR_SET_RVALUE(monitorItem_, monitorItem) };


    protected:
      shared_ptr<vector<InstanceHttpCode::MonitorItem>> monitorItem_ {};
    };

    virtual bool empty() const override { return this->instanceHttpCode_ == nullptr
        && this->requestId_ == nullptr; };
    // instanceHttpCode Field Functions 
    bool hasInstanceHttpCode() const { return this->instanceHttpCode_ != nullptr;};
    void deleteInstanceHttpCode() { this->instanceHttpCode_ = nullptr;};
    inline const DescribeInstanceHttpCodeResponseBody::InstanceHttpCode & getInstanceHttpCode() const { DARABONBA_PTR_GET_CONST(instanceHttpCode_, DescribeInstanceHttpCodeResponseBody::InstanceHttpCode) };
    inline DescribeInstanceHttpCodeResponseBody::InstanceHttpCode getInstanceHttpCode() { DARABONBA_PTR_GET(instanceHttpCode_, DescribeInstanceHttpCodeResponseBody::InstanceHttpCode) };
    inline DescribeInstanceHttpCodeResponseBody& setInstanceHttpCode(const DescribeInstanceHttpCodeResponseBody::InstanceHttpCode & instanceHttpCode) { DARABONBA_PTR_SET_VALUE(instanceHttpCode_, instanceHttpCode) };
    inline DescribeInstanceHttpCodeResponseBody& setInstanceHttpCode(DescribeInstanceHttpCodeResponseBody::InstanceHttpCode && instanceHttpCode) { DARABONBA_PTR_SET_RVALUE(instanceHttpCode_, instanceHttpCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceHttpCodeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The HTTP status codes.
    shared_ptr<DescribeInstanceHttpCodeResponseBody::InstanceHttpCode> instanceHttpCode_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
