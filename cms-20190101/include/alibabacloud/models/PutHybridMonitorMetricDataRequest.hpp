// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTHYBRIDMONITORMETRICDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUTHYBRIDMONITORMETRICDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class PutHybridMonitorMetricDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutHybridMonitorMetricDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MetricList, metricList_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, PutHybridMonitorMetricDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MetricList, metricList_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    PutHybridMonitorMetricDataRequest() = default ;
    PutHybridMonitorMetricDataRequest(const PutHybridMonitorMetricDataRequest &) = default ;
    PutHybridMonitorMetricDataRequest(PutHybridMonitorMetricDataRequest &&) = default ;
    PutHybridMonitorMetricDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutHybridMonitorMetricDataRequest() = default ;
    PutHybridMonitorMetricDataRequest& operator=(const PutHybridMonitorMetricDataRequest &) = default ;
    PutHybridMonitorMetricDataRequest& operator=(PutHybridMonitorMetricDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MetricList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MetricList& obj) { 
        DARABONBA_PTR_TO_JSON(Labels, labels_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(TS, TS_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, MetricList& obj) { 
        DARABONBA_PTR_FROM_JSON(Labels, labels_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(TS, TS_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      MetricList() = default ;
      MetricList(const MetricList &) = default ;
      MetricList(MetricList &&) = default ;
      MetricList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MetricList() = default ;
      MetricList& operator=(const MetricList &) = default ;
      MetricList& operator=(MetricList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Labels : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Labels& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Labels& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Labels() = default ;
        Labels(const Labels &) = default ;
        Labels(Labels &&) = default ;
        Labels(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Labels() = default ;
        Labels& operator=(const Labels &) = default ;
        Labels& operator=(Labels &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Labels& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Labels& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The tag key of the metric.
        // 
        // Valid values of N: 1 to 100.
        // 
        // The key can contain letters, digits, and underscores (_). The key must start with a letter or an underscore (_).
        // 
        // >  You must specify both the Key and Value parameters.
        shared_ptr<string> key_ {};
        // The tag value of the metric.
        // 
        // Valid values of N: 1 to 100.
        // 
        // >  You must specify both the Key and Value parameters.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->labels_ == nullptr
        && this->name_ == nullptr && this->TS_ == nullptr && this->value_ == nullptr; };
      // labels Field Functions 
      bool hasLabels() const { return this->labels_ != nullptr;};
      void deleteLabels() { this->labels_ = nullptr;};
      inline const vector<MetricList::Labels> & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, vector<MetricList::Labels>) };
      inline vector<MetricList::Labels> getLabels() { DARABONBA_PTR_GET(labels_, vector<MetricList::Labels>) };
      inline MetricList& setLabels(const vector<MetricList::Labels> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
      inline MetricList& setLabels(vector<MetricList::Labels> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline MetricList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // TS Field Functions 
      bool hasTS() const { return this->TS_ != nullptr;};
      void deleteTS() { this->TS_ = nullptr;};
      inline int64_t getTS() const { DARABONBA_PTR_GET_DEFAULT(TS_, 0L) };
      inline MetricList& setTS(int64_t TS) { DARABONBA_PTR_SET_VALUE(TS_, TS) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline MetricList& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The tags of the metric.
      // 
      // Valid values of N: 1 to 100.
      shared_ptr<vector<MetricList::Labels>> labels_ {};
      // The metric name.
      // 
      // Valid values of N: 1 to 100.
      // 
      // The name can contain letters, digits, and underscores (_). The name must start with a letter.
      // 
      // This parameter is required.
      shared_ptr<string> name_ {};
      // The time when the monitoring data is imported. The value is a timestamp.
      // 
      // Valid values of N: 1 to 100.
      // 
      // Unit: milliseconds. By default, the current time is used.
      shared_ptr<int64_t> TS_ {};
      // The value of the metric.
      // 
      // Valid values of N: 1 to 100.
      // 
      // The value must be an integer or a floating-point number.
      // 
      // This parameter is required.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->metricList_ == nullptr
        && this->namespace_ == nullptr && this->regionId_ == nullptr; };
    // metricList Field Functions 
    bool hasMetricList() const { return this->metricList_ != nullptr;};
    void deleteMetricList() { this->metricList_ = nullptr;};
    inline const vector<PutHybridMonitorMetricDataRequest::MetricList> & getMetricList() const { DARABONBA_PTR_GET_CONST(metricList_, vector<PutHybridMonitorMetricDataRequest::MetricList>) };
    inline vector<PutHybridMonitorMetricDataRequest::MetricList> getMetricList() { DARABONBA_PTR_GET(metricList_, vector<PutHybridMonitorMetricDataRequest::MetricList>) };
    inline PutHybridMonitorMetricDataRequest& setMetricList(const vector<PutHybridMonitorMetricDataRequest::MetricList> & metricList) { DARABONBA_PTR_SET_VALUE(metricList_, metricList) };
    inline PutHybridMonitorMetricDataRequest& setMetricList(vector<PutHybridMonitorMetricDataRequest::MetricList> && metricList) { DARABONBA_PTR_SET_RVALUE(metricList_, metricList) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline PutHybridMonitorMetricDataRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline PutHybridMonitorMetricDataRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The monitoring data.
    // 
    // Valid values of N: 1 to 100.
    // 
    // This parameter is required.
    shared_ptr<vector<PutHybridMonitorMetricDataRequest::MetricList>> metricList_ {};
    // The name of the namespace.
    // 
    // For information about how to obtain the name of a namespace, see [DescribeHybridMonitorNamespaceList](https://help.aliyun.com/document_detail/428880.html).
    // 
    // This parameter is required.
    shared_ptr<string> namespace_ {};
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
