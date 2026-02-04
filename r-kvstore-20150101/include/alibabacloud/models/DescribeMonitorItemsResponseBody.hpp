// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMONITORITEMSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMONITORITEMSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RKvstore20150101
{
namespace Models
{
  class DescribeMonitorItemsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMonitorItemsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MonitorItems, monitorItems_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMonitorItemsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MonitorItems, monitorItems_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeMonitorItemsResponseBody() = default ;
    DescribeMonitorItemsResponseBody(const DescribeMonitorItemsResponseBody &) = default ;
    DescribeMonitorItemsResponseBody(DescribeMonitorItemsResponseBody &&) = default ;
    DescribeMonitorItemsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMonitorItemsResponseBody() = default ;
    DescribeMonitorItemsResponseBody& operator=(const DescribeMonitorItemsResponseBody &) = default ;
    DescribeMonitorItemsResponseBody& operator=(DescribeMonitorItemsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MonitorItems : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MonitorItems& obj) { 
        DARABONBA_PTR_TO_JSON(KVStoreMonitorItem, KVStoreMonitorItem_);
      };
      friend void from_json(const Darabonba::Json& j, MonitorItems& obj) { 
        DARABONBA_PTR_FROM_JSON(KVStoreMonitorItem, KVStoreMonitorItem_);
      };
      MonitorItems() = default ;
      MonitorItems(const MonitorItems &) = default ;
      MonitorItems(MonitorItems &&) = default ;
      MonitorItems(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MonitorItems() = default ;
      MonitorItems& operator=(const MonitorItems &) = default ;
      MonitorItems& operator=(MonitorItems &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class KVStoreMonitorItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const KVStoreMonitorItem& obj) { 
          DARABONBA_PTR_TO_JSON(MonitorKey, monitorKey_);
          DARABONBA_PTR_TO_JSON(Unit, unit_);
        };
        friend void from_json(const Darabonba::Json& j, KVStoreMonitorItem& obj) { 
          DARABONBA_PTR_FROM_JSON(MonitorKey, monitorKey_);
          DARABONBA_PTR_FROM_JSON(Unit, unit_);
        };
        KVStoreMonitorItem() = default ;
        KVStoreMonitorItem(const KVStoreMonitorItem &) = default ;
        KVStoreMonitorItem(KVStoreMonitorItem &&) = default ;
        KVStoreMonitorItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~KVStoreMonitorItem() = default ;
        KVStoreMonitorItem& operator=(const KVStoreMonitorItem &) = default ;
        KVStoreMonitorItem& operator=(KVStoreMonitorItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->monitorKey_ == nullptr
        && this->unit_ == nullptr; };
        // monitorKey Field Functions 
        bool hasMonitorKey() const { return this->monitorKey_ != nullptr;};
        void deleteMonitorKey() { this->monitorKey_ = nullptr;};
        inline string getMonitorKey() const { DARABONBA_PTR_GET_DEFAULT(monitorKey_, "") };
        inline KVStoreMonitorItem& setMonitorKey(string monitorKey) { DARABONBA_PTR_SET_VALUE(monitorKey_, monitorKey) };


        // unit Field Functions 
        bool hasUnit() const { return this->unit_ != nullptr;};
        void deleteUnit() { this->unit_ = nullptr;};
        inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
        inline KVStoreMonitorItem& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


      protected:
        // The metric.
        shared_ptr<string> monitorKey_ {};
        // The unit of the metric.
        shared_ptr<string> unit_ {};
      };

      virtual bool empty() const override { return this->KVStoreMonitorItem_ == nullptr; };
      // KVStoreMonitorItem Field Functions 
      bool hasKVStoreMonitorItem() const { return this->KVStoreMonitorItem_ != nullptr;};
      void deleteKVStoreMonitorItem() { this->KVStoreMonitorItem_ = nullptr;};
      inline const vector<MonitorItems::KVStoreMonitorItem> & getKVStoreMonitorItem() const { DARABONBA_PTR_GET_CONST(KVStoreMonitorItem_, vector<MonitorItems::KVStoreMonitorItem>) };
      inline vector<MonitorItems::KVStoreMonitorItem> getKVStoreMonitorItem() { DARABONBA_PTR_GET(KVStoreMonitorItem_, vector<MonitorItems::KVStoreMonitorItem>) };
      inline MonitorItems& setKVStoreMonitorItem(const vector<MonitorItems::KVStoreMonitorItem> & kVStoreMonitorItem) { DARABONBA_PTR_SET_VALUE(KVStoreMonitorItem_, kVStoreMonitorItem) };
      inline MonitorItems& setKVStoreMonitorItem(vector<MonitorItems::KVStoreMonitorItem> && kVStoreMonitorItem) { DARABONBA_PTR_SET_RVALUE(KVStoreMonitorItem_, kVStoreMonitorItem) };


    protected:
      shared_ptr<vector<MonitorItems::KVStoreMonitorItem>> KVStoreMonitorItem_ {};
    };

    virtual bool empty() const override { return this->monitorItems_ == nullptr
        && this->requestId_ == nullptr; };
    // monitorItems Field Functions 
    bool hasMonitorItems() const { return this->monitorItems_ != nullptr;};
    void deleteMonitorItems() { this->monitorItems_ = nullptr;};
    inline const DescribeMonitorItemsResponseBody::MonitorItems & getMonitorItems() const { DARABONBA_PTR_GET_CONST(monitorItems_, DescribeMonitorItemsResponseBody::MonitorItems) };
    inline DescribeMonitorItemsResponseBody::MonitorItems getMonitorItems() { DARABONBA_PTR_GET(monitorItems_, DescribeMonitorItemsResponseBody::MonitorItems) };
    inline DescribeMonitorItemsResponseBody& setMonitorItems(const DescribeMonitorItemsResponseBody::MonitorItems & monitorItems) { DARABONBA_PTR_SET_VALUE(monitorItems_, monitorItems) };
    inline DescribeMonitorItemsResponseBody& setMonitorItems(DescribeMonitorItemsResponseBody::MonitorItems && monitorItems) { DARABONBA_PTR_SET_RVALUE(monitorItems_, monitorItems) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMonitorItemsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned metrics.
    // 
    // > *   **memoryUsage**, **GetQps**, and **PutQps** are supported only by Tair instances that use Redis 4.0 or later. **GetQps** and **PutQps** require the latest minor version. You can upgrade the major version or minor version of the instance as needed. For more information, see [Upgrade the major version](https://help.aliyun.com/document_detail/101764.html) and [Upgrade the minor version](https://help.aliyun.com/document_detail/56450.html).
    // > *   When you use instances of Redis 2.8, if the **hit_rate** metric is not displayed, you must upgrade the minor version of the instance. For more information, see [Upgrade the minor version](https://help.aliyun.com/document_detail/56450.html).
    shared_ptr<DescribeMonitorItemsResponseBody::MonitorItems> monitorItems_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RKvstore20150101
#endif
