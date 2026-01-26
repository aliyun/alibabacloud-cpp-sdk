// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEADDONMETRICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEADDONMETRICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class DescribeAddonMetricsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAddonMetricsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAddonMetricsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeAddonMetricsResponseBody() = default ;
    DescribeAddonMetricsResponseBody(const DescribeAddonMetricsResponseBody &) = default ;
    DescribeAddonMetricsResponseBody(DescribeAddonMetricsResponseBody &&) = default ;
    DescribeAddonMetricsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAddonMetricsResponseBody() = default ;
    DescribeAddonMetricsResponseBody& operator=(const DescribeAddonMetricsResponseBody &) = default ;
    DescribeAddonMetricsResponseBody& operator=(DescribeAddonMetricsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Group, group_);
        DARABONBA_PTR_TO_JSON(Labels, labels_);
        DARABONBA_PTR_TO_JSON(Metrics, metrics_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Group, group_);
        DARABONBA_PTR_FROM_JSON(Labels, labels_);
        DARABONBA_PTR_FROM_JSON(Metrics, metrics_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Metrics : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Metrics& obj) { 
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Labels, labels_);
          DARABONBA_PTR_TO_JSON(Metric, metric_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(Unit, unit_);
        };
        friend void from_json(const Darabonba::Json& j, Metrics& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Labels, labels_);
          DARABONBA_PTR_FROM_JSON(Metric, metric_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(Unit, unit_);
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
        class Labels : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Labels& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Key, key_);
            DARABONBA_PTR_TO_JSON(Source, source_);
          };
          friend void from_json(const Darabonba::Json& j, Labels& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Key, key_);
            DARABONBA_PTR_FROM_JSON(Source, source_);
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
          virtual bool empty() const override { return this->description_ == nullptr
        && this->key_ == nullptr && this->source_ == nullptr; };
          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline Labels& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // key Field Functions 
          bool hasKey() const { return this->key_ != nullptr;};
          void deleteKey() { this->key_ = nullptr;};
          inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
          inline Labels& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


          // source Field Functions 
          bool hasSource() const { return this->source_ != nullptr;};
          void deleteSource() { this->source_ = nullptr;};
          inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
          inline Labels& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


        protected:
          // The description of the tag.
          shared_ptr<string> description_ {};
          // The tag key.
          shared_ptr<string> key_ {};
          // The source of the tag.
          shared_ptr<string> source_ {};
        };

        virtual bool empty() const override { return this->description_ == nullptr
        && this->labels_ == nullptr && this->metric_ == nullptr && this->type_ == nullptr && this->unit_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Metrics& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // labels Field Functions 
        bool hasLabels() const { return this->labels_ != nullptr;};
        void deleteLabels() { this->labels_ = nullptr;};
        inline const vector<Metrics::Labels> & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, vector<Metrics::Labels>) };
        inline vector<Metrics::Labels> getLabels() { DARABONBA_PTR_GET(labels_, vector<Metrics::Labels>) };
        inline Metrics& setLabels(const vector<Metrics::Labels> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
        inline Metrics& setLabels(vector<Metrics::Labels> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


        // metric Field Functions 
        bool hasMetric() const { return this->metric_ != nullptr;};
        void deleteMetric() { this->metric_ = nullptr;};
        inline string getMetric() const { DARABONBA_PTR_GET_DEFAULT(metric_, "") };
        inline Metrics& setMetric(string metric) { DARABONBA_PTR_SET_VALUE(metric_, metric) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Metrics& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // unit Field Functions 
        bool hasUnit() const { return this->unit_ != nullptr;};
        void deleteUnit() { this->unit_ = nullptr;};
        inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
        inline Metrics& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


      protected:
        // The description of the metric.
        shared_ptr<string> description_ {};
        // The tags.
        shared_ptr<vector<Metrics::Labels>> labels_ {};
        // The metric name.
        shared_ptr<string> metric_ {};
        // The type of the metric.
        shared_ptr<string> type_ {};
        // The unit of the metric.
        shared_ptr<string> unit_ {};
      };

      class Labels : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Labels& obj) { 
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Source, source_);
        };
        friend void from_json(const Darabonba::Json& j, Labels& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Source, source_);
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
        virtual bool empty() const override { return this->description_ == nullptr
        && this->key_ == nullptr && this->source_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Labels& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Labels& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // source Field Functions 
        bool hasSource() const { return this->source_ != nullptr;};
        void deleteSource() { this->source_ = nullptr;};
        inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
        inline Labels& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


      protected:
        // The description of the tag.
        shared_ptr<string> description_ {};
        // The tag key.
        shared_ptr<string> key_ {};
        // The source of the tag.
        shared_ptr<string> source_ {};
      };

      virtual bool empty() const override { return this->group_ == nullptr
        && this->labels_ == nullptr && this->metrics_ == nullptr; };
      // group Field Functions 
      bool hasGroup() const { return this->group_ != nullptr;};
      void deleteGroup() { this->group_ = nullptr;};
      inline string getGroup() const { DARABONBA_PTR_GET_DEFAULT(group_, "") };
      inline Data& setGroup(string group) { DARABONBA_PTR_SET_VALUE(group_, group) };


      // labels Field Functions 
      bool hasLabels() const { return this->labels_ != nullptr;};
      void deleteLabels() { this->labels_ = nullptr;};
      inline const vector<Data::Labels> & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, vector<Data::Labels>) };
      inline vector<Data::Labels> getLabels() { DARABONBA_PTR_GET(labels_, vector<Data::Labels>) };
      inline Data& setLabels(const vector<Data::Labels> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
      inline Data& setLabels(vector<Data::Labels> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


      // metrics Field Functions 
      bool hasMetrics() const { return this->metrics_ != nullptr;};
      void deleteMetrics() { this->metrics_ = nullptr;};
      inline const vector<Data::Metrics> & getMetrics() const { DARABONBA_PTR_GET_CONST(metrics_, vector<Data::Metrics>) };
      inline vector<Data::Metrics> getMetrics() { DARABONBA_PTR_GET(metrics_, vector<Data::Metrics>) };
      inline Data& setMetrics(const vector<Data::Metrics> & metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };
      inline Data& setMetrics(vector<Data::Metrics> && metrics) { DARABONBA_PTR_SET_RVALUE(metrics_, metrics) };


    protected:
      // The metric group.
      shared_ptr<string> group_ {};
      // The tags.
      shared_ptr<vector<Data::Labels>> labels_ {};
      // The metrics.
      shared_ptr<vector<Data::Metrics>> metrics_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DescribeAddonMetricsResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeAddonMetricsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeAddonMetricsResponseBody::Data>) };
    inline vector<DescribeAddonMetricsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<DescribeAddonMetricsResponseBody::Data>) };
    inline DescribeAddonMetricsResponseBody& setData(const vector<DescribeAddonMetricsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeAddonMetricsResponseBody& setData(vector<DescribeAddonMetricsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeAddonMetricsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAddonMetricsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeAddonMetricsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code. The status code 200 indicates that the request was successful.
    shared_ptr<int32_t> code_ {};
    // The metric details.
    shared_ptr<vector<DescribeAddonMetricsResponseBody::Data>> data_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
