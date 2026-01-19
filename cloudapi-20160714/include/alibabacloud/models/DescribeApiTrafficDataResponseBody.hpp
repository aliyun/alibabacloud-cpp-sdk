// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPITRAFFICDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPITRAFFICDATARESPONSEBODY_HPP_
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
  class DescribeApiTrafficDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApiTrafficDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CallDownloads, callDownloads_);
      DARABONBA_PTR_TO_JSON(CallUploads, callUploads_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApiTrafficDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CallDownloads, callDownloads_);
      DARABONBA_PTR_FROM_JSON(CallUploads, callUploads_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeApiTrafficDataResponseBody() = default ;
    DescribeApiTrafficDataResponseBody(const DescribeApiTrafficDataResponseBody &) = default ;
    DescribeApiTrafficDataResponseBody(DescribeApiTrafficDataResponseBody &&) = default ;
    DescribeApiTrafficDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApiTrafficDataResponseBody() = default ;
    DescribeApiTrafficDataResponseBody& operator=(const DescribeApiTrafficDataResponseBody &) = default ;
    DescribeApiTrafficDataResponseBody& operator=(DescribeApiTrafficDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CallUploads : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CallUploads& obj) { 
        DARABONBA_PTR_TO_JSON(MonitorItem, monitorItem_);
      };
      friend void from_json(const Darabonba::Json& j, CallUploads& obj) { 
        DARABONBA_PTR_FROM_JSON(MonitorItem, monitorItem_);
      };
      CallUploads() = default ;
      CallUploads(const CallUploads &) = default ;
      CallUploads(CallUploads &&) = default ;
      CallUploads(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CallUploads() = default ;
      CallUploads& operator=(const CallUploads &) = default ;
      CallUploads& operator=(CallUploads &&) = default ;
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
      inline const vector<CallUploads::MonitorItem> & getMonitorItem() const { DARABONBA_PTR_GET_CONST(monitorItem_, vector<CallUploads::MonitorItem>) };
      inline vector<CallUploads::MonitorItem> getMonitorItem() { DARABONBA_PTR_GET(monitorItem_, vector<CallUploads::MonitorItem>) };
      inline CallUploads& setMonitorItem(const vector<CallUploads::MonitorItem> & monitorItem) { DARABONBA_PTR_SET_VALUE(monitorItem_, monitorItem) };
      inline CallUploads& setMonitorItem(vector<CallUploads::MonitorItem> && monitorItem) { DARABONBA_PTR_SET_RVALUE(monitorItem_, monitorItem) };


    protected:
      shared_ptr<vector<CallUploads::MonitorItem>> monitorItem_ {};
    };

    class CallDownloads : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CallDownloads& obj) { 
        DARABONBA_PTR_TO_JSON(MonitorItem, monitorItem_);
      };
      friend void from_json(const Darabonba::Json& j, CallDownloads& obj) { 
        DARABONBA_PTR_FROM_JSON(MonitorItem, monitorItem_);
      };
      CallDownloads() = default ;
      CallDownloads(const CallDownloads &) = default ;
      CallDownloads(CallDownloads &&) = default ;
      CallDownloads(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CallDownloads() = default ;
      CallDownloads& operator=(const CallDownloads &) = default ;
      CallDownloads& operator=(CallDownloads &&) = default ;
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
      inline const vector<CallDownloads::MonitorItem> & getMonitorItem() const { DARABONBA_PTR_GET_CONST(monitorItem_, vector<CallDownloads::MonitorItem>) };
      inline vector<CallDownloads::MonitorItem> getMonitorItem() { DARABONBA_PTR_GET(monitorItem_, vector<CallDownloads::MonitorItem>) };
      inline CallDownloads& setMonitorItem(const vector<CallDownloads::MonitorItem> & monitorItem) { DARABONBA_PTR_SET_VALUE(monitorItem_, monitorItem) };
      inline CallDownloads& setMonitorItem(vector<CallDownloads::MonitorItem> && monitorItem) { DARABONBA_PTR_SET_RVALUE(monitorItem_, monitorItem) };


    protected:
      shared_ptr<vector<CallDownloads::MonitorItem>> monitorItem_ {};
    };

    virtual bool empty() const override { return this->callDownloads_ == nullptr
        && this->callUploads_ == nullptr && this->requestId_ == nullptr; };
    // callDownloads Field Functions 
    bool hasCallDownloads() const { return this->callDownloads_ != nullptr;};
    void deleteCallDownloads() { this->callDownloads_ = nullptr;};
    inline const DescribeApiTrafficDataResponseBody::CallDownloads & getCallDownloads() const { DARABONBA_PTR_GET_CONST(callDownloads_, DescribeApiTrafficDataResponseBody::CallDownloads) };
    inline DescribeApiTrafficDataResponseBody::CallDownloads getCallDownloads() { DARABONBA_PTR_GET(callDownloads_, DescribeApiTrafficDataResponseBody::CallDownloads) };
    inline DescribeApiTrafficDataResponseBody& setCallDownloads(const DescribeApiTrafficDataResponseBody::CallDownloads & callDownloads) { DARABONBA_PTR_SET_VALUE(callDownloads_, callDownloads) };
    inline DescribeApiTrafficDataResponseBody& setCallDownloads(DescribeApiTrafficDataResponseBody::CallDownloads && callDownloads) { DARABONBA_PTR_SET_RVALUE(callDownloads_, callDownloads) };


    // callUploads Field Functions 
    bool hasCallUploads() const { return this->callUploads_ != nullptr;};
    void deleteCallUploads() { this->callUploads_ = nullptr;};
    inline const DescribeApiTrafficDataResponseBody::CallUploads & getCallUploads() const { DARABONBA_PTR_GET_CONST(callUploads_, DescribeApiTrafficDataResponseBody::CallUploads) };
    inline DescribeApiTrafficDataResponseBody::CallUploads getCallUploads() { DARABONBA_PTR_GET(callUploads_, DescribeApiTrafficDataResponseBody::CallUploads) };
    inline DescribeApiTrafficDataResponseBody& setCallUploads(const DescribeApiTrafficDataResponseBody::CallUploads & callUploads) { DARABONBA_PTR_SET_VALUE(callUploads_, callUploads) };
    inline DescribeApiTrafficDataResponseBody& setCallUploads(DescribeApiTrafficDataResponseBody::CallUploads && callUploads) { DARABONBA_PTR_SET_RVALUE(callUploads_, callUploads) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApiTrafficDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned downlink traffic data of API calls. It is an array consisting of MonitorItem data.
    shared_ptr<DescribeApiTrafficDataResponseBody::CallDownloads> callDownloads_ {};
    // The returned uplink traffic data of API calls. It is an array consisting of MonitorItem data.
    shared_ptr<DescribeApiTrafficDataResponseBody::CallUploads> callUploads_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
