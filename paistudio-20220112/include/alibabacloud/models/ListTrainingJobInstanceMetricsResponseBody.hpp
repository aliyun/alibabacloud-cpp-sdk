// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRAININGJOBINSTANCEMETRICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTRAININGJOBINSTANCEMETRICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class ListTrainingJobInstanceMetricsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTrainingJobInstanceMetricsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceMetrics, instanceMetrics_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListTrainingJobInstanceMetricsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceMetrics, instanceMetrics_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListTrainingJobInstanceMetricsResponseBody() = default ;
    ListTrainingJobInstanceMetricsResponseBody(const ListTrainingJobInstanceMetricsResponseBody &) = default ;
    ListTrainingJobInstanceMetricsResponseBody(ListTrainingJobInstanceMetricsResponseBody &&) = default ;
    ListTrainingJobInstanceMetricsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTrainingJobInstanceMetricsResponseBody() = default ;
    ListTrainingJobInstanceMetricsResponseBody& operator=(const ListTrainingJobInstanceMetricsResponseBody &) = default ;
    ListTrainingJobInstanceMetricsResponseBody& operator=(ListTrainingJobInstanceMetricsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InstanceMetrics : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceMetrics& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(Metrics, metrics_);
        DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
      };
      friend void from_json(const Darabonba::Json& j, InstanceMetrics& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(Metrics, metrics_);
        DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
      };
      InstanceMetrics() = default ;
      InstanceMetrics(const InstanceMetrics &) = default ;
      InstanceMetrics(InstanceMetrics &&) = default ;
      InstanceMetrics(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstanceMetrics() = default ;
      InstanceMetrics& operator=(const InstanceMetrics &) = default ;
      InstanceMetrics& operator=(InstanceMetrics &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Metrics : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Metrics& obj) { 
          DARABONBA_PTR_TO_JSON(Time, time_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Metrics& obj) { 
          DARABONBA_PTR_FROM_JSON(Time, time_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Metrics() = default ;
        Metrics(const Metrics &) = default ;
        Metrics(Metrics &&) = default ;
        Metrics(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Metrics() = default ;
        Metrics& operator=(const Metrics &) = default ;
        Metrics& operator=(Metrics &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->time_ == nullptr
        && this->value_ == nullptr; };
        // time Field Functions 
        bool hasTime() const { return this->time_ != nullptr;};
        void deleteTime() { this->time_ = nullptr;};
        inline string getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
        inline Metrics& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline double getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
        inline Metrics& setValue(double value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        shared_ptr<string> time_ {};
        shared_ptr<double> value_ {};
      };

      virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->metrics_ == nullptr && this->nodeName_ == nullptr; };
      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline InstanceMetrics& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // metrics Field Functions 
      bool hasMetrics() const { return this->metrics_ != nullptr;};
      void deleteMetrics() { this->metrics_ = nullptr;};
      inline const vector<InstanceMetrics::Metrics> & getMetrics() const { DARABONBA_PTR_GET_CONST(metrics_, vector<InstanceMetrics::Metrics>) };
      inline vector<InstanceMetrics::Metrics> getMetrics() { DARABONBA_PTR_GET(metrics_, vector<InstanceMetrics::Metrics>) };
      inline InstanceMetrics& setMetrics(const vector<InstanceMetrics::Metrics> & metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };
      inline InstanceMetrics& setMetrics(vector<InstanceMetrics::Metrics> && metrics) { DARABONBA_PTR_SET_RVALUE(metrics_, metrics) };


      // nodeName Field Functions 
      bool hasNodeName() const { return this->nodeName_ != nullptr;};
      void deleteNodeName() { this->nodeName_ = nullptr;};
      inline string getNodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
      inline InstanceMetrics& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


    protected:
      shared_ptr<string> instanceId_ {};
      shared_ptr<vector<InstanceMetrics::Metrics>> metrics_ {};
      shared_ptr<string> nodeName_ {};
    };

    virtual bool empty() const override { return this->instanceMetrics_ == nullptr
        && this->requestId_ == nullptr; };
    // instanceMetrics Field Functions 
    bool hasInstanceMetrics() const { return this->instanceMetrics_ != nullptr;};
    void deleteInstanceMetrics() { this->instanceMetrics_ = nullptr;};
    inline const vector<ListTrainingJobInstanceMetricsResponseBody::InstanceMetrics> & getInstanceMetrics() const { DARABONBA_PTR_GET_CONST(instanceMetrics_, vector<ListTrainingJobInstanceMetricsResponseBody::InstanceMetrics>) };
    inline vector<ListTrainingJobInstanceMetricsResponseBody::InstanceMetrics> getInstanceMetrics() { DARABONBA_PTR_GET(instanceMetrics_, vector<ListTrainingJobInstanceMetricsResponseBody::InstanceMetrics>) };
    inline ListTrainingJobInstanceMetricsResponseBody& setInstanceMetrics(const vector<ListTrainingJobInstanceMetricsResponseBody::InstanceMetrics> & instanceMetrics) { DARABONBA_PTR_SET_VALUE(instanceMetrics_, instanceMetrics) };
    inline ListTrainingJobInstanceMetricsResponseBody& setInstanceMetrics(vector<ListTrainingJobInstanceMetricsResponseBody::InstanceMetrics> && instanceMetrics) { DARABONBA_PTR_SET_RVALUE(instanceMetrics_, instanceMetrics) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTrainingJobInstanceMetricsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<ListTrainingJobInstanceMetricsResponseBody::InstanceMetrics>> instanceMetrics_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
