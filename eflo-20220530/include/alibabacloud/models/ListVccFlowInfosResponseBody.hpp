// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVCCFLOWINFOSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTVCCFLOWINFOSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class ListVccFlowInfosResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVccFlowInfosResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListVccFlowInfosResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListVccFlowInfosResponseBody() = default ;
    ListVccFlowInfosResponseBody(const ListVccFlowInfosResponseBody &) = default ;
    ListVccFlowInfosResponseBody(ListVccFlowInfosResponseBody &&) = default ;
    ListVccFlowInfosResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVccFlowInfosResponseBody() = default ;
    ListVccFlowInfosResponseBody& operator=(const ListVccFlowInfosResponseBody &) = default ;
    ListVccFlowInfosResponseBody& operator=(ListVccFlowInfosResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Content : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Content& obj) { 
        DARABONBA_PTR_TO_JSON(Data, data_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Content& obj) { 
        DARABONBA_PTR_FROM_JSON(Data, data_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
      };
      Content() = default ;
      Content(const Content &) = default ;
      Content(Content &&) = default ;
      Content(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Content() = default ;
      Content& operator=(const Content &) = default ;
      Content& operator=(Content &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Data : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Data& obj) { 
          DARABONBA_PTR_TO_JSON(Direction, direction_);
          DARABONBA_PTR_TO_JSON(MetricName, metricName_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
          DARABONBA_PTR_TO_JSON(Value, value_);
          DARABONBA_PTR_TO_JSON(VccId, vccId_);
        };
        friend void from_json(const Darabonba::Json& j, Data& obj) { 
          DARABONBA_PTR_FROM_JSON(Direction, direction_);
          DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
          DARABONBA_PTR_FROM_JSON(VccId, vccId_);
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
        virtual bool empty() const override { return this->direction_ == nullptr
        && this->metricName_ == nullptr && this->regionId_ == nullptr && this->timestamp_ == nullptr && this->value_ == nullptr && this->vccId_ == nullptr; };
        // direction Field Functions 
        bool hasDirection() const { return this->direction_ != nullptr;};
        void deleteDirection() { this->direction_ = nullptr;};
        inline string getDirection() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
        inline Data& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


        // metricName Field Functions 
        bool hasMetricName() const { return this->metricName_ != nullptr;};
        void deleteMetricName() { this->metricName_ = nullptr;};
        inline string getMetricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
        inline Data& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline Data& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // timestamp Field Functions 
        bool hasTimestamp() const { return this->timestamp_ != nullptr;};
        void deleteTimestamp() { this->timestamp_ = nullptr;};
        inline int64_t getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
        inline Data& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline double getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
        inline Data& setValue(double value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        // vccId Field Functions 
        bool hasVccId() const { return this->vccId_ != nullptr;};
        void deleteVccId() { this->vccId_ = nullptr;};
        inline string getVccId() const { DARABONBA_PTR_GET_DEFAULT(vccId_, "") };
        inline Data& setVccId(string vccId) { DARABONBA_PTR_SET_VALUE(vccId_, vccId) };


      protected:
        // The direction.
        shared_ptr<string> direction_ {};
        // The metric. Valid values:
        shared_ptr<string> metricName_ {};
        // The region ID.
        shared_ptr<string> regionId_ {};
        // Time
        shared_ptr<int64_t> timestamp_ {};
        // Value
        shared_ptr<double> value_ {};
        // Lingjun Connection ID
        shared_ptr<string> vccId_ {};
      };

      virtual bool empty() const override { return this->data_ == nullptr
        && this->total_ == nullptr; };
      // data Field Functions 
      bool hasData() const { return this->data_ != nullptr;};
      void deleteData() { this->data_ = nullptr;};
      inline const vector<Content::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<Content::Data>) };
      inline vector<Content::Data> getData() { DARABONBA_PTR_GET(data_, vector<Content::Data>) };
      inline Content& setData(const vector<Content::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
      inline Content& setData(vector<Content::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
      inline Content& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      // Lingjun Connection Traffic Information
      shared_ptr<vector<Content::Data>> data_ {};
      // The total number of entries returned.
      shared_ptr<int64_t> total_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->content_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline ListVccFlowInfosResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListVccFlowInfosResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const ListVccFlowInfosResponseBody::Content & getContent() const { DARABONBA_PTR_GET_CONST(content_, ListVccFlowInfosResponseBody::Content) };
    inline ListVccFlowInfosResponseBody::Content getContent() { DARABONBA_PTR_GET(content_, ListVccFlowInfosResponseBody::Content) };
    inline ListVccFlowInfosResponseBody& setContent(const ListVccFlowInfosResponseBody::Content & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline ListVccFlowInfosResponseBody& setContent(ListVccFlowInfosResponseBody::Content && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListVccFlowInfosResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListVccFlowInfosResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // 访问被拒绝的详细原因。
    shared_ptr<string> accessDeniedDetail_ {};
    // The response status code.
    shared_ptr<int32_t> code_ {};
    // The returned data.
    shared_ptr<ListVccFlowInfosResponseBody::Content> content_ {};
    // Response
    shared_ptr<string> message_ {};
    // Request ID of the current request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
