// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPREPAYDAILYBILLSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPREPAYDAILYBILLSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribePrepayDailyBillsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePrepayDailyBillsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Bills, bills_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePrepayDailyBillsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Bills, bills_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribePrepayDailyBillsResponseBody() = default ;
    DescribePrepayDailyBillsResponseBody(const DescribePrepayDailyBillsResponseBody &) = default ;
    DescribePrepayDailyBillsResponseBody(DescribePrepayDailyBillsResponseBody &&) = default ;
    DescribePrepayDailyBillsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePrepayDailyBillsResponseBody() = default ;
    DescribePrepayDailyBillsResponseBody& operator=(const DescribePrepayDailyBillsResponseBody &) = default ;
    DescribePrepayDailyBillsResponseBody& operator=(DescribePrepayDailyBillsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Bills : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Bills& obj) { 
        DARABONBA_PTR_TO_JSON(ElasticQpsSetValue, elasticQpsSetValue_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(ExceedStatus, exceedStatus_);
        DARABONBA_PTR_TO_JSON(MaxQps, maxQps_);
        DARABONBA_PTR_TO_JSON(Price, price_);
        DARABONBA_PTR_TO_JSON(Qps, qps_);
        DARABONBA_PTR_TO_JSON(QpsVersion, qpsVersion_);
        DARABONBA_PTR_TO_JSON(RiskControl, riskControl_);
        DARABONBA_PTR_TO_JSON(RiskTraffic, riskTraffic_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(Total, total_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Bills& obj) { 
        DARABONBA_PTR_FROM_JSON(ElasticQpsSetValue, elasticQpsSetValue_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(ExceedStatus, exceedStatus_);
        DARABONBA_PTR_FROM_JSON(MaxQps, maxQps_);
        DARABONBA_PTR_FROM_JSON(Price, price_);
        DARABONBA_PTR_FROM_JSON(Qps, qps_);
        DARABONBA_PTR_FROM_JSON(QpsVersion, qpsVersion_);
        DARABONBA_PTR_FROM_JSON(RiskControl, riskControl_);
        DARABONBA_PTR_FROM_JSON(RiskTraffic, riskTraffic_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Bills() = default ;
      Bills(const Bills &) = default ;
      Bills(Bills &&) = default ;
      Bills(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Bills() = default ;
      Bills& operator=(const Bills &) = default ;
      Bills& operator=(Bills &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->elasticQpsSetValue_ == nullptr
        && this->endTime_ == nullptr && this->exceedStatus_ == nullptr && this->maxQps_ == nullptr && this->price_ == nullptr && this->qps_ == nullptr
        && this->qpsVersion_ == nullptr && this->riskControl_ == nullptr && this->riskTraffic_ == nullptr && this->startTime_ == nullptr && this->total_ == nullptr
        && this->type_ == nullptr; };
      // elasticQpsSetValue Field Functions 
      bool hasElasticQpsSetValue() const { return this->elasticQpsSetValue_ != nullptr;};
      void deleteElasticQpsSetValue() { this->elasticQpsSetValue_ = nullptr;};
      inline int64_t getElasticQpsSetValue() const { DARABONBA_PTR_GET_DEFAULT(elasticQpsSetValue_, 0L) };
      inline Bills& setElasticQpsSetValue(int64_t elasticQpsSetValue) { DARABONBA_PTR_SET_VALUE(elasticQpsSetValue_, elasticQpsSetValue) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline Bills& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // exceedStatus Field Functions 
      bool hasExceedStatus() const { return this->exceedStatus_ != nullptr;};
      void deleteExceedStatus() { this->exceedStatus_ = nullptr;};
      inline int32_t getExceedStatus() const { DARABONBA_PTR_GET_DEFAULT(exceedStatus_, 0) };
      inline Bills& setExceedStatus(int32_t exceedStatus) { DARABONBA_PTR_SET_VALUE(exceedStatus_, exceedStatus) };


      // maxQps Field Functions 
      bool hasMaxQps() const { return this->maxQps_ != nullptr;};
      void deleteMaxQps() { this->maxQps_ = nullptr;};
      inline int64_t getMaxQps() const { DARABONBA_PTR_GET_DEFAULT(maxQps_, 0L) };
      inline Bills& setMaxQps(int64_t maxQps) { DARABONBA_PTR_SET_VALUE(maxQps_, maxQps) };


      // price Field Functions 
      bool hasPrice() const { return this->price_ != nullptr;};
      void deletePrice() { this->price_ = nullptr;};
      inline float getPrice() const { DARABONBA_PTR_GET_DEFAULT(price_, 0.0) };
      inline Bills& setPrice(float price) { DARABONBA_PTR_SET_VALUE(price_, price) };


      // qps Field Functions 
      bool hasQps() const { return this->qps_ != nullptr;};
      void deleteQps() { this->qps_ = nullptr;};
      inline int64_t getQps() const { DARABONBA_PTR_GET_DEFAULT(qps_, 0L) };
      inline Bills& setQps(int64_t qps) { DARABONBA_PTR_SET_VALUE(qps_, qps) };


      // qpsVersion Field Functions 
      bool hasQpsVersion() const { return this->qpsVersion_ != nullptr;};
      void deleteQpsVersion() { this->qpsVersion_ = nullptr;};
      inline int64_t getQpsVersion() const { DARABONBA_PTR_GET_DEFAULT(qpsVersion_, 0L) };
      inline Bills& setQpsVersion(int64_t qpsVersion) { DARABONBA_PTR_SET_VALUE(qpsVersion_, qpsVersion) };


      // riskControl Field Functions 
      bool hasRiskControl() const { return this->riskControl_ != nullptr;};
      void deleteRiskControl() { this->riskControl_ = nullptr;};
      inline bool getRiskControl() const { DARABONBA_PTR_GET_DEFAULT(riskControl_, false) };
      inline Bills& setRiskControl(bool riskControl) { DARABONBA_PTR_SET_VALUE(riskControl_, riskControl) };


      // riskTraffic Field Functions 
      bool hasRiskTraffic() const { return this->riskTraffic_ != nullptr;};
      void deleteRiskTraffic() { this->riskTraffic_ = nullptr;};
      inline int64_t getRiskTraffic() const { DARABONBA_PTR_GET_DEFAULT(riskTraffic_, 0L) };
      inline Bills& setRiskTraffic(int64_t riskTraffic) { DARABONBA_PTR_SET_VALUE(riskTraffic_, riskTraffic) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline Bills& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
      inline Bills& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline const vector<string> & getType() const { DARABONBA_PTR_GET_CONST(type_, vector<string>) };
      inline vector<string> getType() { DARABONBA_PTR_GET(type_, vector<string>) };
      inline Bills& setType(const vector<string> & type) { DARABONBA_PTR_SET_VALUE(type_, type) };
      inline Bills& setType(vector<string> && type) { DARABONBA_PTR_SET_RVALUE(type_, type) };


    protected:
      // The burstable QPS of the WAF instance.
      shared_ptr<int64_t> elasticQpsSetValue_ {};
      // The billing end time. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
      shared_ptr<int64_t> endTime_ {};
      // The status of QPS usage within the current period of time. Valid values:
      // 
      // *   **0**: normal.
      // *   **1**: excess.
      // *   **2**: sandbox.
      shared_ptr<int32_t> exceedStatus_ {};
      // The peak QPS within the current period of time.
      shared_ptr<int64_t> maxQps_ {};
      // The unit price in the bill. The price is measured in CNY for bills at the China site (aliyun.com) and in USD for bills at the international site (alibabacloud.com).
      shared_ptr<float> price_ {};
      // The extended QPS of the WAF instance.
      shared_ptr<int64_t> qps_ {};
      // The default QPS of the WAF instance.
      shared_ptr<int64_t> qpsVersion_ {};
      // Indicates whether risk identification is enabled. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> riskControl_ {};
      // The number of times that risk identification is performed.
      shared_ptr<int64_t> riskTraffic_ {};
      // The billing start time. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
      shared_ptr<int64_t> startTime_ {};
      // The actual QPS in total.
      shared_ptr<int64_t> total_ {};
      // The billing types.
      shared_ptr<vector<string>> type_ {};
    };

    virtual bool empty() const override { return this->bills_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // bills Field Functions 
    bool hasBills() const { return this->bills_ != nullptr;};
    void deleteBills() { this->bills_ = nullptr;};
    inline const vector<DescribePrepayDailyBillsResponseBody::Bills> & getBills() const { DARABONBA_PTR_GET_CONST(bills_, vector<DescribePrepayDailyBillsResponseBody::Bills>) };
    inline vector<DescribePrepayDailyBillsResponseBody::Bills> getBills() { DARABONBA_PTR_GET(bills_, vector<DescribePrepayDailyBillsResponseBody::Bills>) };
    inline DescribePrepayDailyBillsResponseBody& setBills(const vector<DescribePrepayDailyBillsResponseBody::Bills> & bills) { DARABONBA_PTR_SET_VALUE(bills_, bills) };
    inline DescribePrepayDailyBillsResponseBody& setBills(vector<DescribePrepayDailyBillsResponseBody::Bills> && bills) { DARABONBA_PTR_SET_RVALUE(bills_, bills) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePrepayDailyBillsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribePrepayDailyBillsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The bills of the burstable QPS (pay-as-you-go) feature.
    shared_ptr<vector<DescribePrepayDailyBillsResponseBody::Bills>> bills_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
