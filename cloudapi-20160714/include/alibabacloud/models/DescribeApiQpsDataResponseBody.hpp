// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPIQPSDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPIQPSDATARESPONSEBODY_HPP_
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
  class DescribeApiQpsDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApiQpsDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CallFails, callFails_);
      DARABONBA_PTR_TO_JSON(CallSuccesses, callSuccesses_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApiQpsDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CallFails, callFails_);
      DARABONBA_PTR_FROM_JSON(CallSuccesses, callSuccesses_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeApiQpsDataResponseBody() = default ;
    DescribeApiQpsDataResponseBody(const DescribeApiQpsDataResponseBody &) = default ;
    DescribeApiQpsDataResponseBody(DescribeApiQpsDataResponseBody &&) = default ;
    DescribeApiQpsDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApiQpsDataResponseBody() = default ;
    DescribeApiQpsDataResponseBody& operator=(const DescribeApiQpsDataResponseBody &) = default ;
    DescribeApiQpsDataResponseBody& operator=(DescribeApiQpsDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CallSuccesses : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CallSuccesses& obj) { 
        DARABONBA_PTR_TO_JSON(MonitorItem, monitorItem_);
      };
      friend void from_json(const Darabonba::Json& j, CallSuccesses& obj) { 
        DARABONBA_PTR_FROM_JSON(MonitorItem, monitorItem_);
      };
      CallSuccesses() = default ;
      CallSuccesses(const CallSuccesses &) = default ;
      CallSuccesses(CallSuccesses &&) = default ;
      CallSuccesses(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CallSuccesses() = default ;
      CallSuccesses& operator=(const CallSuccesses &) = default ;
      CallSuccesses& operator=(CallSuccesses &&) = default ;
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
      inline const vector<CallSuccesses::MonitorItem> & getMonitorItem() const { DARABONBA_PTR_GET_CONST(monitorItem_, vector<CallSuccesses::MonitorItem>) };
      inline vector<CallSuccesses::MonitorItem> getMonitorItem() { DARABONBA_PTR_GET(monitorItem_, vector<CallSuccesses::MonitorItem>) };
      inline CallSuccesses& setMonitorItem(const vector<CallSuccesses::MonitorItem> & monitorItem) { DARABONBA_PTR_SET_VALUE(monitorItem_, monitorItem) };
      inline CallSuccesses& setMonitorItem(vector<CallSuccesses::MonitorItem> && monitorItem) { DARABONBA_PTR_SET_RVALUE(monitorItem_, monitorItem) };


    protected:
      shared_ptr<vector<CallSuccesses::MonitorItem>> monitorItem_ {};
    };

    class CallFails : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CallFails& obj) { 
        DARABONBA_PTR_TO_JSON(MonitorItem, monitorItem_);
      };
      friend void from_json(const Darabonba::Json& j, CallFails& obj) { 
        DARABONBA_PTR_FROM_JSON(MonitorItem, monitorItem_);
      };
      CallFails() = default ;
      CallFails(const CallFails &) = default ;
      CallFails(CallFails &&) = default ;
      CallFails(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CallFails() = default ;
      CallFails& operator=(const CallFails &) = default ;
      CallFails& operator=(CallFails &&) = default ;
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
      inline const vector<CallFails::MonitorItem> & getMonitorItem() const { DARABONBA_PTR_GET_CONST(monitorItem_, vector<CallFails::MonitorItem>) };
      inline vector<CallFails::MonitorItem> getMonitorItem() { DARABONBA_PTR_GET(monitorItem_, vector<CallFails::MonitorItem>) };
      inline CallFails& setMonitorItem(const vector<CallFails::MonitorItem> & monitorItem) { DARABONBA_PTR_SET_VALUE(monitorItem_, monitorItem) };
      inline CallFails& setMonitorItem(vector<CallFails::MonitorItem> && monitorItem) { DARABONBA_PTR_SET_RVALUE(monitorItem_, monitorItem) };


    protected:
      shared_ptr<vector<CallFails::MonitorItem>> monitorItem_ {};
    };

    virtual bool empty() const override { return this->callFails_ == nullptr
        && this->callSuccesses_ == nullptr && this->requestId_ == nullptr; };
    // callFails Field Functions 
    bool hasCallFails() const { return this->callFails_ != nullptr;};
    void deleteCallFails() { this->callFails_ = nullptr;};
    inline const DescribeApiQpsDataResponseBody::CallFails & getCallFails() const { DARABONBA_PTR_GET_CONST(callFails_, DescribeApiQpsDataResponseBody::CallFails) };
    inline DescribeApiQpsDataResponseBody::CallFails getCallFails() { DARABONBA_PTR_GET(callFails_, DescribeApiQpsDataResponseBody::CallFails) };
    inline DescribeApiQpsDataResponseBody& setCallFails(const DescribeApiQpsDataResponseBody::CallFails & callFails) { DARABONBA_PTR_SET_VALUE(callFails_, callFails) };
    inline DescribeApiQpsDataResponseBody& setCallFails(DescribeApiQpsDataResponseBody::CallFails && callFails) { DARABONBA_PTR_SET_RVALUE(callFails_, callFails) };


    // callSuccesses Field Functions 
    bool hasCallSuccesses() const { return this->callSuccesses_ != nullptr;};
    void deleteCallSuccesses() { this->callSuccesses_ = nullptr;};
    inline const DescribeApiQpsDataResponseBody::CallSuccesses & getCallSuccesses() const { DARABONBA_PTR_GET_CONST(callSuccesses_, DescribeApiQpsDataResponseBody::CallSuccesses) };
    inline DescribeApiQpsDataResponseBody::CallSuccesses getCallSuccesses() { DARABONBA_PTR_GET(callSuccesses_, DescribeApiQpsDataResponseBody::CallSuccesses) };
    inline DescribeApiQpsDataResponseBody& setCallSuccesses(const DescribeApiQpsDataResponseBody::CallSuccesses & callSuccesses) { DARABONBA_PTR_SET_VALUE(callSuccesses_, callSuccesses) };
    inline DescribeApiQpsDataResponseBody& setCallSuccesses(DescribeApiQpsDataResponseBody::CallSuccesses && callSuccesses) { DARABONBA_PTR_SET_RVALUE(callSuccesses_, callSuccesses) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApiQpsDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned information about failed API calls. It is an array consisting of MonitorItem data.
    shared_ptr<DescribeApiQpsDataResponseBody::CallFails> callFails_ {};
    // The returned information about successful API calls. It is an array consisting of MonitorItem data.
    shared_ptr<DescribeApiQpsDataResponseBody::CallSuccesses> callSuccesses_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
