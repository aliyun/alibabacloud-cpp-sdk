// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPILATENCYDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPILATENCYDATARESPONSEBODY_HPP_
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
  class DescribeApiLatencyDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApiLatencyDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CallLatencys, callLatencys_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApiLatencyDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CallLatencys, callLatencys_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeApiLatencyDataResponseBody() = default ;
    DescribeApiLatencyDataResponseBody(const DescribeApiLatencyDataResponseBody &) = default ;
    DescribeApiLatencyDataResponseBody(DescribeApiLatencyDataResponseBody &&) = default ;
    DescribeApiLatencyDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApiLatencyDataResponseBody() = default ;
    DescribeApiLatencyDataResponseBody& operator=(const DescribeApiLatencyDataResponseBody &) = default ;
    DescribeApiLatencyDataResponseBody& operator=(DescribeApiLatencyDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CallLatencys : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CallLatencys& obj) { 
        DARABONBA_PTR_TO_JSON(MonitorItem, monitorItem_);
      };
      friend void from_json(const Darabonba::Json& j, CallLatencys& obj) { 
        DARABONBA_PTR_FROM_JSON(MonitorItem, monitorItem_);
      };
      CallLatencys() = default ;
      CallLatencys(const CallLatencys &) = default ;
      CallLatencys(CallLatencys &&) = default ;
      CallLatencys(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CallLatencys() = default ;
      CallLatencys& operator=(const CallLatencys &) = default ;
      CallLatencys& operator=(CallLatencys &&) = default ;
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
        // The time of the monitoring metric. The time format follows the ISO 8601 standard and UTC time is used. Format: YYYY-MM-DDThh:mm:ssZ
        shared_ptr<string> itemTime_ {};
        // The value corresponding to the monitoring metric.
        shared_ptr<string> itemValue_ {};
      };

      virtual bool empty() const override { return this->monitorItem_ == nullptr; };
      // monitorItem Field Functions 
      bool hasMonitorItem() const { return this->monitorItem_ != nullptr;};
      void deleteMonitorItem() { this->monitorItem_ = nullptr;};
      inline const vector<CallLatencys::MonitorItem> & getMonitorItem() const { DARABONBA_PTR_GET_CONST(monitorItem_, vector<CallLatencys::MonitorItem>) };
      inline vector<CallLatencys::MonitorItem> getMonitorItem() { DARABONBA_PTR_GET(monitorItem_, vector<CallLatencys::MonitorItem>) };
      inline CallLatencys& setMonitorItem(const vector<CallLatencys::MonitorItem> & monitorItem) { DARABONBA_PTR_SET_VALUE(monitorItem_, monitorItem) };
      inline CallLatencys& setMonitorItem(vector<CallLatencys::MonitorItem> && monitorItem) { DARABONBA_PTR_SET_RVALUE(monitorItem_, monitorItem) };


    protected:
      shared_ptr<vector<CallLatencys::MonitorItem>> monitorItem_ {};
    };

    virtual bool empty() const override { return this->callLatencys_ == nullptr
        && this->requestId_ == nullptr; };
    // callLatencys Field Functions 
    bool hasCallLatencys() const { return this->callLatencys_ != nullptr;};
    void deleteCallLatencys() { this->callLatencys_ = nullptr;};
    inline const DescribeApiLatencyDataResponseBody::CallLatencys & getCallLatencys() const { DARABONBA_PTR_GET_CONST(callLatencys_, DescribeApiLatencyDataResponseBody::CallLatencys) };
    inline DescribeApiLatencyDataResponseBody::CallLatencys getCallLatencys() { DARABONBA_PTR_GET(callLatencys_, DescribeApiLatencyDataResponseBody::CallLatencys) };
    inline DescribeApiLatencyDataResponseBody& setCallLatencys(const DescribeApiLatencyDataResponseBody::CallLatencys & callLatencys) { DARABONBA_PTR_SET_VALUE(callLatencys_, callLatencys) };
    inline DescribeApiLatencyDataResponseBody& setCallLatencys(DescribeApiLatencyDataResponseBody::CallLatencys && callLatencys) { DARABONBA_PTR_SET_RVALUE(callLatencys_, callLatencys) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApiLatencyDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned information about API call latency. It is an array consisting of MonitorItem data.
    shared_ptr<DescribeApiLatencyDataResponseBody::CallLatencys> callLatencys_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
