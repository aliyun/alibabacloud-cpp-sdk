// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECHANNELUSERMETRICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECHANNELUSERMETRICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeChannelUserMetricsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeChannelUserMetricsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MetricDatas, metricDatas_);
      DARABONBA_PTR_TO_JSON(OverallData, overallData_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeChannelUserMetricsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MetricDatas, metricDatas_);
      DARABONBA_PTR_FROM_JSON(OverallData, overallData_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeChannelUserMetricsResponseBody() = default ;
    DescribeChannelUserMetricsResponseBody(const DescribeChannelUserMetricsResponseBody &) = default ;
    DescribeChannelUserMetricsResponseBody(DescribeChannelUserMetricsResponseBody &&) = default ;
    DescribeChannelUserMetricsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeChannelUserMetricsResponseBody() = default ;
    DescribeChannelUserMetricsResponseBody& operator=(const DescribeChannelUserMetricsResponseBody &) = default ;
    DescribeChannelUserMetricsResponseBody& operator=(DescribeChannelUserMetricsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class OverallData : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OverallData& obj) { 
        DARABONBA_PTR_TO_JSON(TotalBadExpNum, totalBadExpNum_);
        DARABONBA_PTR_TO_JSON(TotalJoinFailNum, totalJoinFailNum_);
        DARABONBA_PTR_TO_JSON(TotalPubUserNum, totalPubUserNum_);
        DARABONBA_PTR_TO_JSON(TotalSubUserNum, totalSubUserNum_);
        DARABONBA_PTR_TO_JSON(TotalUserNum, totalUserNum_);
      };
      friend void from_json(const Darabonba::Json& j, OverallData& obj) { 
        DARABONBA_PTR_FROM_JSON(TotalBadExpNum, totalBadExpNum_);
        DARABONBA_PTR_FROM_JSON(TotalJoinFailNum, totalJoinFailNum_);
        DARABONBA_PTR_FROM_JSON(TotalPubUserNum, totalPubUserNum_);
        DARABONBA_PTR_FROM_JSON(TotalSubUserNum, totalSubUserNum_);
        DARABONBA_PTR_FROM_JSON(TotalUserNum, totalUserNum_);
      };
      OverallData() = default ;
      OverallData(const OverallData &) = default ;
      OverallData(OverallData &&) = default ;
      OverallData(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OverallData() = default ;
      OverallData& operator=(const OverallData &) = default ;
      OverallData& operator=(OverallData &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->totalBadExpNum_ == nullptr
        && this->totalJoinFailNum_ == nullptr && this->totalPubUserNum_ == nullptr && this->totalSubUserNum_ == nullptr && this->totalUserNum_ == nullptr; };
      // totalBadExpNum Field Functions 
      bool hasTotalBadExpNum() const { return this->totalBadExpNum_ != nullptr;};
      void deleteTotalBadExpNum() { this->totalBadExpNum_ = nullptr;};
      inline int64_t getTotalBadExpNum() const { DARABONBA_PTR_GET_DEFAULT(totalBadExpNum_, 0L) };
      inline OverallData& setTotalBadExpNum(int64_t totalBadExpNum) { DARABONBA_PTR_SET_VALUE(totalBadExpNum_, totalBadExpNum) };


      // totalJoinFailNum Field Functions 
      bool hasTotalJoinFailNum() const { return this->totalJoinFailNum_ != nullptr;};
      void deleteTotalJoinFailNum() { this->totalJoinFailNum_ = nullptr;};
      inline int64_t getTotalJoinFailNum() const { DARABONBA_PTR_GET_DEFAULT(totalJoinFailNum_, 0L) };
      inline OverallData& setTotalJoinFailNum(int64_t totalJoinFailNum) { DARABONBA_PTR_SET_VALUE(totalJoinFailNum_, totalJoinFailNum) };


      // totalPubUserNum Field Functions 
      bool hasTotalPubUserNum() const { return this->totalPubUserNum_ != nullptr;};
      void deleteTotalPubUserNum() { this->totalPubUserNum_ = nullptr;};
      inline int64_t getTotalPubUserNum() const { DARABONBA_PTR_GET_DEFAULT(totalPubUserNum_, 0L) };
      inline OverallData& setTotalPubUserNum(int64_t totalPubUserNum) { DARABONBA_PTR_SET_VALUE(totalPubUserNum_, totalPubUserNum) };


      // totalSubUserNum Field Functions 
      bool hasTotalSubUserNum() const { return this->totalSubUserNum_ != nullptr;};
      void deleteTotalSubUserNum() { this->totalSubUserNum_ = nullptr;};
      inline int64_t getTotalSubUserNum() const { DARABONBA_PTR_GET_DEFAULT(totalSubUserNum_, 0L) };
      inline OverallData& setTotalSubUserNum(int64_t totalSubUserNum) { DARABONBA_PTR_SET_VALUE(totalSubUserNum_, totalSubUserNum) };


      // totalUserNum Field Functions 
      bool hasTotalUserNum() const { return this->totalUserNum_ != nullptr;};
      void deleteTotalUserNum() { this->totalUserNum_ = nullptr;};
      inline int64_t getTotalUserNum() const { DARABONBA_PTR_GET_DEFAULT(totalUserNum_, 0L) };
      inline OverallData& setTotalUserNum(int64_t totalUserNum) { DARABONBA_PTR_SET_VALUE(totalUserNum_, totalUserNum) };


    protected:
      shared_ptr<int64_t> totalBadExpNum_ {};
      shared_ptr<int64_t> totalJoinFailNum_ {};
      shared_ptr<int64_t> totalPubUserNum_ {};
      shared_ptr<int64_t> totalSubUserNum_ {};
      shared_ptr<int64_t> totalUserNum_ {};
    };

    class MetricDatas : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MetricDatas& obj) { 
        DARABONBA_PTR_TO_JSON(Nodes, nodes_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, MetricDatas& obj) { 
        DARABONBA_PTR_FROM_JSON(Nodes, nodes_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      MetricDatas() = default ;
      MetricDatas(const MetricDatas &) = default ;
      MetricDatas(MetricDatas &&) = default ;
      MetricDatas(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MetricDatas() = default ;
      MetricDatas& operator=(const MetricDatas &) = default ;
      MetricDatas& operator=(MetricDatas &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Nodes : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Nodes& obj) { 
          DARABONBA_ANY_TO_JSON(Ext, ext_);
          DARABONBA_PTR_TO_JSON(X, x_);
          DARABONBA_PTR_TO_JSON(Y, y_);
        };
        friend void from_json(const Darabonba::Json& j, Nodes& obj) { 
          DARABONBA_ANY_FROM_JSON(Ext, ext_);
          DARABONBA_PTR_FROM_JSON(X, x_);
          DARABONBA_PTR_FROM_JSON(Y, y_);
        };
        Nodes() = default ;
        Nodes(const Nodes &) = default ;
        Nodes(Nodes &&) = default ;
        Nodes(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Nodes() = default ;
        Nodes& operator=(const Nodes &) = default ;
        Nodes& operator=(Nodes &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->ext_ == nullptr
        && this->x_ == nullptr && this->y_ == nullptr; };
        // ext Field Functions 
        bool hasExt() const { return this->ext_ != nullptr;};
        void deleteExt() { this->ext_ = nullptr;};
        inline         const Darabonba::Json & getExt() const { DARABONBA_GET(ext_) };
        Darabonba::Json & getExt() { DARABONBA_GET(ext_) };
        inline Nodes& setExt(const Darabonba::Json & ext) { DARABONBA_SET_VALUE(ext_, ext) };
        inline Nodes& setExt(Darabonba::Json && ext) { DARABONBA_SET_RVALUE(ext_, ext) };


        // x Field Functions 
        bool hasX() const { return this->x_ != nullptr;};
        void deleteX() { this->x_ = nullptr;};
        inline string getX() const { DARABONBA_PTR_GET_DEFAULT(x_, "") };
        inline Nodes& setX(string x) { DARABONBA_PTR_SET_VALUE(x_, x) };


        // y Field Functions 
        bool hasY() const { return this->y_ != nullptr;};
        void deleteY() { this->y_ = nullptr;};
        inline string getY() const { DARABONBA_PTR_GET_DEFAULT(y_, "") };
        inline Nodes& setY(string y) { DARABONBA_PTR_SET_VALUE(y_, y) };


      protected:
        Darabonba::Json ext_ {};
        shared_ptr<string> x_ {};
        shared_ptr<string> y_ {};
      };

      virtual bool empty() const override { return this->nodes_ == nullptr
        && this->type_ == nullptr; };
      // nodes Field Functions 
      bool hasNodes() const { return this->nodes_ != nullptr;};
      void deleteNodes() { this->nodes_ = nullptr;};
      inline const vector<MetricDatas::Nodes> & getNodes() const { DARABONBA_PTR_GET_CONST(nodes_, vector<MetricDatas::Nodes>) };
      inline vector<MetricDatas::Nodes> getNodes() { DARABONBA_PTR_GET(nodes_, vector<MetricDatas::Nodes>) };
      inline MetricDatas& setNodes(const vector<MetricDatas::Nodes> & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
      inline MetricDatas& setNodes(vector<MetricDatas::Nodes> && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline MetricDatas& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<vector<MetricDatas::Nodes>> nodes_ {};
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->metricDatas_ == nullptr
        && this->overallData_ == nullptr && this->requestId_ == nullptr; };
    // metricDatas Field Functions 
    bool hasMetricDatas() const { return this->metricDatas_ != nullptr;};
    void deleteMetricDatas() { this->metricDatas_ = nullptr;};
    inline const vector<DescribeChannelUserMetricsResponseBody::MetricDatas> & getMetricDatas() const { DARABONBA_PTR_GET_CONST(metricDatas_, vector<DescribeChannelUserMetricsResponseBody::MetricDatas>) };
    inline vector<DescribeChannelUserMetricsResponseBody::MetricDatas> getMetricDatas() { DARABONBA_PTR_GET(metricDatas_, vector<DescribeChannelUserMetricsResponseBody::MetricDatas>) };
    inline DescribeChannelUserMetricsResponseBody& setMetricDatas(const vector<DescribeChannelUserMetricsResponseBody::MetricDatas> & metricDatas) { DARABONBA_PTR_SET_VALUE(metricDatas_, metricDatas) };
    inline DescribeChannelUserMetricsResponseBody& setMetricDatas(vector<DescribeChannelUserMetricsResponseBody::MetricDatas> && metricDatas) { DARABONBA_PTR_SET_RVALUE(metricDatas_, metricDatas) };


    // overallData Field Functions 
    bool hasOverallData() const { return this->overallData_ != nullptr;};
    void deleteOverallData() { this->overallData_ = nullptr;};
    inline const DescribeChannelUserMetricsResponseBody::OverallData & getOverallData() const { DARABONBA_PTR_GET_CONST(overallData_, DescribeChannelUserMetricsResponseBody::OverallData) };
    inline DescribeChannelUserMetricsResponseBody::OverallData getOverallData() { DARABONBA_PTR_GET(overallData_, DescribeChannelUserMetricsResponseBody::OverallData) };
    inline DescribeChannelUserMetricsResponseBody& setOverallData(const DescribeChannelUserMetricsResponseBody::OverallData & overallData) { DARABONBA_PTR_SET_VALUE(overallData_, overallData) };
    inline DescribeChannelUserMetricsResponseBody& setOverallData(DescribeChannelUserMetricsResponseBody::OverallData && overallData) { DARABONBA_PTR_SET_RVALUE(overallData_, overallData) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeChannelUserMetricsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<DescribeChannelUserMetricsResponseBody::MetricDatas>> metricDatas_ {};
    shared_ptr<DescribeChannelUserMetricsResponseBody::OverallData> overallData_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
