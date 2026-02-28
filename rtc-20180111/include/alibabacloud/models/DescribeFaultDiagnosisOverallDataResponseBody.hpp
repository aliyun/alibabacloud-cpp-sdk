// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFAULTDIAGNOSISOVERALLDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFAULTDIAGNOSISOVERALLDATARESPONSEBODY_HPP_
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
  class DescribeFaultDiagnosisOverallDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFaultDiagnosisOverallDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MetricData, metricData_);
      DARABONBA_PTR_TO_JSON(OverallData, overallData_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFaultDiagnosisOverallDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MetricData, metricData_);
      DARABONBA_PTR_FROM_JSON(OverallData, overallData_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeFaultDiagnosisOverallDataResponseBody() = default ;
    DescribeFaultDiagnosisOverallDataResponseBody(const DescribeFaultDiagnosisOverallDataResponseBody &) = default ;
    DescribeFaultDiagnosisOverallDataResponseBody(DescribeFaultDiagnosisOverallDataResponseBody &&) = default ;
    DescribeFaultDiagnosisOverallDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFaultDiagnosisOverallDataResponseBody() = default ;
    DescribeFaultDiagnosisOverallDataResponseBody& operator=(const DescribeFaultDiagnosisOverallDataResponseBody &) = default ;
    DescribeFaultDiagnosisOverallDataResponseBody& operator=(DescribeFaultDiagnosisOverallDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class OverallData : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OverallData& obj) { 
        DARABONBA_PTR_TO_JSON(FaultUserCount, faultUserCount_);
        DARABONBA_PTR_TO_JSON(FaultUserRatio, faultUserRatio_);
        DARABONBA_PTR_TO_JSON(TotalUserCount, totalUserCount_);
      };
      friend void from_json(const Darabonba::Json& j, OverallData& obj) { 
        DARABONBA_PTR_FROM_JSON(FaultUserCount, faultUserCount_);
        DARABONBA_PTR_FROM_JSON(FaultUserRatio, faultUserRatio_);
        DARABONBA_PTR_FROM_JSON(TotalUserCount, totalUserCount_);
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
      virtual bool empty() const override { return this->faultUserCount_ == nullptr
        && this->faultUserRatio_ == nullptr && this->totalUserCount_ == nullptr; };
      // faultUserCount Field Functions 
      bool hasFaultUserCount() const { return this->faultUserCount_ != nullptr;};
      void deleteFaultUserCount() { this->faultUserCount_ = nullptr;};
      inline int32_t getFaultUserCount() const { DARABONBA_PTR_GET_DEFAULT(faultUserCount_, 0) };
      inline OverallData& setFaultUserCount(int32_t faultUserCount) { DARABONBA_PTR_SET_VALUE(faultUserCount_, faultUserCount) };


      // faultUserRatio Field Functions 
      bool hasFaultUserRatio() const { return this->faultUserRatio_ != nullptr;};
      void deleteFaultUserRatio() { this->faultUserRatio_ = nullptr;};
      inline float getFaultUserRatio() const { DARABONBA_PTR_GET_DEFAULT(faultUserRatio_, 0.0) };
      inline OverallData& setFaultUserRatio(float faultUserRatio) { DARABONBA_PTR_SET_VALUE(faultUserRatio_, faultUserRatio) };


      // totalUserCount Field Functions 
      bool hasTotalUserCount() const { return this->totalUserCount_ != nullptr;};
      void deleteTotalUserCount() { this->totalUserCount_ = nullptr;};
      inline int32_t getTotalUserCount() const { DARABONBA_PTR_GET_DEFAULT(totalUserCount_, 0) };
      inline OverallData& setTotalUserCount(int32_t totalUserCount) { DARABONBA_PTR_SET_VALUE(totalUserCount_, totalUserCount) };


    protected:
      shared_ptr<int32_t> faultUserCount_ {};
      shared_ptr<float> faultUserRatio_ {};
      shared_ptr<int32_t> totalUserCount_ {};
    };

    class MetricData : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MetricData& obj) { 
        DARABONBA_PTR_TO_JSON(Nodes, nodes_);
      };
      friend void from_json(const Darabonba::Json& j, MetricData& obj) { 
        DARABONBA_PTR_FROM_JSON(Nodes, nodes_);
      };
      MetricData() = default ;
      MetricData(const MetricData &) = default ;
      MetricData(MetricData &&) = default ;
      MetricData(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MetricData() = default ;
      MetricData& operator=(const MetricData &) = default ;
      MetricData& operator=(MetricData &&) = default ;
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

      virtual bool empty() const override { return this->nodes_ == nullptr; };
      // nodes Field Functions 
      bool hasNodes() const { return this->nodes_ != nullptr;};
      void deleteNodes() { this->nodes_ = nullptr;};
      inline const vector<MetricData::Nodes> & getNodes() const { DARABONBA_PTR_GET_CONST(nodes_, vector<MetricData::Nodes>) };
      inline vector<MetricData::Nodes> getNodes() { DARABONBA_PTR_GET(nodes_, vector<MetricData::Nodes>) };
      inline MetricData& setNodes(const vector<MetricData::Nodes> & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
      inline MetricData& setNodes(vector<MetricData::Nodes> && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


    protected:
      shared_ptr<vector<MetricData::Nodes>> nodes_ {};
    };

    virtual bool empty() const override { return this->metricData_ == nullptr
        && this->overallData_ == nullptr && this->requestId_ == nullptr; };
    // metricData Field Functions 
    bool hasMetricData() const { return this->metricData_ != nullptr;};
    void deleteMetricData() { this->metricData_ = nullptr;};
    inline const DescribeFaultDiagnosisOverallDataResponseBody::MetricData & getMetricData() const { DARABONBA_PTR_GET_CONST(metricData_, DescribeFaultDiagnosisOverallDataResponseBody::MetricData) };
    inline DescribeFaultDiagnosisOverallDataResponseBody::MetricData getMetricData() { DARABONBA_PTR_GET(metricData_, DescribeFaultDiagnosisOverallDataResponseBody::MetricData) };
    inline DescribeFaultDiagnosisOverallDataResponseBody& setMetricData(const DescribeFaultDiagnosisOverallDataResponseBody::MetricData & metricData) { DARABONBA_PTR_SET_VALUE(metricData_, metricData) };
    inline DescribeFaultDiagnosisOverallDataResponseBody& setMetricData(DescribeFaultDiagnosisOverallDataResponseBody::MetricData && metricData) { DARABONBA_PTR_SET_RVALUE(metricData_, metricData) };


    // overallData Field Functions 
    bool hasOverallData() const { return this->overallData_ != nullptr;};
    void deleteOverallData() { this->overallData_ = nullptr;};
    inline const DescribeFaultDiagnosisOverallDataResponseBody::OverallData & getOverallData() const { DARABONBA_PTR_GET_CONST(overallData_, DescribeFaultDiagnosisOverallDataResponseBody::OverallData) };
    inline DescribeFaultDiagnosisOverallDataResponseBody::OverallData getOverallData() { DARABONBA_PTR_GET(overallData_, DescribeFaultDiagnosisOverallDataResponseBody::OverallData) };
    inline DescribeFaultDiagnosisOverallDataResponseBody& setOverallData(const DescribeFaultDiagnosisOverallDataResponseBody::OverallData & overallData) { DARABONBA_PTR_SET_VALUE(overallData_, overallData) };
    inline DescribeFaultDiagnosisOverallDataResponseBody& setOverallData(DescribeFaultDiagnosisOverallDataResponseBody::OverallData && overallData) { DARABONBA_PTR_SET_RVALUE(overallData_, overallData) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeFaultDiagnosisOverallDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribeFaultDiagnosisOverallDataResponseBody::MetricData> metricData_ {};
    shared_ptr<DescribeFaultDiagnosisOverallDataResponseBody::OverallData> overallData_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
