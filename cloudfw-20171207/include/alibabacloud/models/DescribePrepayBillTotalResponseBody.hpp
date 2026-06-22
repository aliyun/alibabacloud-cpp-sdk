// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPREPAYBILLTOTALRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPREPAYBILLTOTALRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribePrepayBillTotalResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePrepayBillTotalResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BillList, billList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePrepayBillTotalResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BillList, billList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribePrepayBillTotalResponseBody() = default ;
    DescribePrepayBillTotalResponseBody(const DescribePrepayBillTotalResponseBody &) = default ;
    DescribePrepayBillTotalResponseBody(DescribePrepayBillTotalResponseBody &&) = default ;
    DescribePrepayBillTotalResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePrepayBillTotalResponseBody() = default ;
    DescribePrepayBillTotalResponseBody& operator=(const DescribePrepayBillTotalResponseBody &) = default ;
    DescribePrepayBillTotalResponseBody& operator=(DescribePrepayBillTotalResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class BillList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BillList& obj) { 
        DARABONBA_PTR_TO_JSON(BilledDetectionTraffic, billedDetectionTraffic_);
        DARABONBA_PTR_TO_JSON(DailyDetectionTraffic, dailyDetectionTraffic_);
        DARABONBA_PTR_TO_JSON(DailyOverflowTraffic, dailyOverflowTraffic_);
        DARABONBA_PTR_TO_JSON(DefaultBandwidth, defaultBandwidth_);
        DARABONBA_PTR_TO_JSON(ElasticBandwidth, elasticBandwidth_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(ExtensionBandwidth, extensionBandwidth_);
        DARABONBA_PTR_TO_JSON(InternetTrafficBandwidth, internetTrafficBandwidth_);
        DARABONBA_PTR_TO_JSON(MonthlyRemainingFreeTraffic, monthlyRemainingFreeTraffic_);
        DARABONBA_PTR_TO_JSON(NatTrafficBandwidth, natTrafficBandwidth_);
        DARABONBA_PTR_TO_JSON(OverflowTime, overflowTime_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(TemporaryBandwidth, temporaryBandwidth_);
        DARABONBA_PTR_TO_JSON(VpcTrafficBandwidth, vpcTrafficBandwidth_);
      };
      friend void from_json(const Darabonba::Json& j, BillList& obj) { 
        DARABONBA_PTR_FROM_JSON(BilledDetectionTraffic, billedDetectionTraffic_);
        DARABONBA_PTR_FROM_JSON(DailyDetectionTraffic, dailyDetectionTraffic_);
        DARABONBA_PTR_FROM_JSON(DailyOverflowTraffic, dailyOverflowTraffic_);
        DARABONBA_PTR_FROM_JSON(DefaultBandwidth, defaultBandwidth_);
        DARABONBA_PTR_FROM_JSON(ElasticBandwidth, elasticBandwidth_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(ExtensionBandwidth, extensionBandwidth_);
        DARABONBA_PTR_FROM_JSON(InternetTrafficBandwidth, internetTrafficBandwidth_);
        DARABONBA_PTR_FROM_JSON(MonthlyRemainingFreeTraffic, monthlyRemainingFreeTraffic_);
        DARABONBA_PTR_FROM_JSON(NatTrafficBandwidth, natTrafficBandwidth_);
        DARABONBA_PTR_FROM_JSON(OverflowTime, overflowTime_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(TemporaryBandwidth, temporaryBandwidth_);
        DARABONBA_PTR_FROM_JSON(VpcTrafficBandwidth, vpcTrafficBandwidth_);
      };
      BillList() = default ;
      BillList(const BillList &) = default ;
      BillList(BillList &&) = default ;
      BillList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BillList() = default ;
      BillList& operator=(const BillList &) = default ;
      BillList& operator=(BillList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->billedDetectionTraffic_ == nullptr
        && this->dailyDetectionTraffic_ == nullptr && this->dailyOverflowTraffic_ == nullptr && this->defaultBandwidth_ == nullptr && this->elasticBandwidth_ == nullptr && this->endTime_ == nullptr
        && this->extensionBandwidth_ == nullptr && this->internetTrafficBandwidth_ == nullptr && this->monthlyRemainingFreeTraffic_ == nullptr && this->natTrafficBandwidth_ == nullptr && this->overflowTime_ == nullptr
        && this->startTime_ == nullptr && this->temporaryBandwidth_ == nullptr && this->vpcTrafficBandwidth_ == nullptr; };
      // billedDetectionTraffic Field Functions 
      bool hasBilledDetectionTraffic() const { return this->billedDetectionTraffic_ != nullptr;};
      void deleteBilledDetectionTraffic() { this->billedDetectionTraffic_ = nullptr;};
      inline float getBilledDetectionTraffic() const { DARABONBA_PTR_GET_DEFAULT(billedDetectionTraffic_, 0.0) };
      inline BillList& setBilledDetectionTraffic(float billedDetectionTraffic) { DARABONBA_PTR_SET_VALUE(billedDetectionTraffic_, billedDetectionTraffic) };


      // dailyDetectionTraffic Field Functions 
      bool hasDailyDetectionTraffic() const { return this->dailyDetectionTraffic_ != nullptr;};
      void deleteDailyDetectionTraffic() { this->dailyDetectionTraffic_ = nullptr;};
      inline float getDailyDetectionTraffic() const { DARABONBA_PTR_GET_DEFAULT(dailyDetectionTraffic_, 0.0) };
      inline BillList& setDailyDetectionTraffic(float dailyDetectionTraffic) { DARABONBA_PTR_SET_VALUE(dailyDetectionTraffic_, dailyDetectionTraffic) };


      // dailyOverflowTraffic Field Functions 
      bool hasDailyOverflowTraffic() const { return this->dailyOverflowTraffic_ != nullptr;};
      void deleteDailyOverflowTraffic() { this->dailyOverflowTraffic_ = nullptr;};
      inline float getDailyOverflowTraffic() const { DARABONBA_PTR_GET_DEFAULT(dailyOverflowTraffic_, 0.0) };
      inline BillList& setDailyOverflowTraffic(float dailyOverflowTraffic) { DARABONBA_PTR_SET_VALUE(dailyOverflowTraffic_, dailyOverflowTraffic) };


      // defaultBandwidth Field Functions 
      bool hasDefaultBandwidth() const { return this->defaultBandwidth_ != nullptr;};
      void deleteDefaultBandwidth() { this->defaultBandwidth_ = nullptr;};
      inline int64_t getDefaultBandwidth() const { DARABONBA_PTR_GET_DEFAULT(defaultBandwidth_, 0L) };
      inline BillList& setDefaultBandwidth(int64_t defaultBandwidth) { DARABONBA_PTR_SET_VALUE(defaultBandwidth_, defaultBandwidth) };


      // elasticBandwidth Field Functions 
      bool hasElasticBandwidth() const { return this->elasticBandwidth_ != nullptr;};
      void deleteElasticBandwidth() { this->elasticBandwidth_ = nullptr;};
      inline int64_t getElasticBandwidth() const { DARABONBA_PTR_GET_DEFAULT(elasticBandwidth_, 0L) };
      inline BillList& setElasticBandwidth(int64_t elasticBandwidth) { DARABONBA_PTR_SET_VALUE(elasticBandwidth_, elasticBandwidth) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline BillList& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // extensionBandwidth Field Functions 
      bool hasExtensionBandwidth() const { return this->extensionBandwidth_ != nullptr;};
      void deleteExtensionBandwidth() { this->extensionBandwidth_ = nullptr;};
      inline int64_t getExtensionBandwidth() const { DARABONBA_PTR_GET_DEFAULT(extensionBandwidth_, 0L) };
      inline BillList& setExtensionBandwidth(int64_t extensionBandwidth) { DARABONBA_PTR_SET_VALUE(extensionBandwidth_, extensionBandwidth) };


      // internetTrafficBandwidth Field Functions 
      bool hasInternetTrafficBandwidth() const { return this->internetTrafficBandwidth_ != nullptr;};
      void deleteInternetTrafficBandwidth() { this->internetTrafficBandwidth_ = nullptr;};
      inline float getInternetTrafficBandwidth() const { DARABONBA_PTR_GET_DEFAULT(internetTrafficBandwidth_, 0.0) };
      inline BillList& setInternetTrafficBandwidth(float internetTrafficBandwidth) { DARABONBA_PTR_SET_VALUE(internetTrafficBandwidth_, internetTrafficBandwidth) };


      // monthlyRemainingFreeTraffic Field Functions 
      bool hasMonthlyRemainingFreeTraffic() const { return this->monthlyRemainingFreeTraffic_ != nullptr;};
      void deleteMonthlyRemainingFreeTraffic() { this->monthlyRemainingFreeTraffic_ = nullptr;};
      inline float getMonthlyRemainingFreeTraffic() const { DARABONBA_PTR_GET_DEFAULT(monthlyRemainingFreeTraffic_, 0.0) };
      inline BillList& setMonthlyRemainingFreeTraffic(float monthlyRemainingFreeTraffic) { DARABONBA_PTR_SET_VALUE(monthlyRemainingFreeTraffic_, monthlyRemainingFreeTraffic) };


      // natTrafficBandwidth Field Functions 
      bool hasNatTrafficBandwidth() const { return this->natTrafficBandwidth_ != nullptr;};
      void deleteNatTrafficBandwidth() { this->natTrafficBandwidth_ = nullptr;};
      inline float getNatTrafficBandwidth() const { DARABONBA_PTR_GET_DEFAULT(natTrafficBandwidth_, 0.0) };
      inline BillList& setNatTrafficBandwidth(float natTrafficBandwidth) { DARABONBA_PTR_SET_VALUE(natTrafficBandwidth_, natTrafficBandwidth) };


      // overflowTime Field Functions 
      bool hasOverflowTime() const { return this->overflowTime_ != nullptr;};
      void deleteOverflowTime() { this->overflowTime_ = nullptr;};
      inline int64_t getOverflowTime() const { DARABONBA_PTR_GET_DEFAULT(overflowTime_, 0L) };
      inline BillList& setOverflowTime(int64_t overflowTime) { DARABONBA_PTR_SET_VALUE(overflowTime_, overflowTime) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline BillList& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // temporaryBandwidth Field Functions 
      bool hasTemporaryBandwidth() const { return this->temporaryBandwidth_ != nullptr;};
      void deleteTemporaryBandwidth() { this->temporaryBandwidth_ = nullptr;};
      inline int64_t getTemporaryBandwidth() const { DARABONBA_PTR_GET_DEFAULT(temporaryBandwidth_, 0L) };
      inline BillList& setTemporaryBandwidth(int64_t temporaryBandwidth) { DARABONBA_PTR_SET_VALUE(temporaryBandwidth_, temporaryBandwidth) };


      // vpcTrafficBandwidth Field Functions 
      bool hasVpcTrafficBandwidth() const { return this->vpcTrafficBandwidth_ != nullptr;};
      void deleteVpcTrafficBandwidth() { this->vpcTrafficBandwidth_ = nullptr;};
      inline float getVpcTrafficBandwidth() const { DARABONBA_PTR_GET_DEFAULT(vpcTrafficBandwidth_, 0.0) };
      inline BillList& setVpcTrafficBandwidth(float vpcTrafficBandwidth) { DARABONBA_PTR_SET_VALUE(vpcTrafficBandwidth_, vpcTrafficBandwidth) };


    protected:
      shared_ptr<float> billedDetectionTraffic_ {};
      shared_ptr<float> dailyDetectionTraffic_ {};
      shared_ptr<float> dailyOverflowTraffic_ {};
      shared_ptr<int64_t> defaultBandwidth_ {};
      shared_ptr<int64_t> elasticBandwidth_ {};
      shared_ptr<int64_t> endTime_ {};
      shared_ptr<int64_t> extensionBandwidth_ {};
      shared_ptr<float> internetTrafficBandwidth_ {};
      shared_ptr<float> monthlyRemainingFreeTraffic_ {};
      shared_ptr<float> natTrafficBandwidth_ {};
      shared_ptr<int64_t> overflowTime_ {};
      shared_ptr<int64_t> startTime_ {};
      shared_ptr<int64_t> temporaryBandwidth_ {};
      shared_ptr<float> vpcTrafficBandwidth_ {};
    };

    virtual bool empty() const override { return this->billList_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // billList Field Functions 
    bool hasBillList() const { return this->billList_ != nullptr;};
    void deleteBillList() { this->billList_ = nullptr;};
    inline const vector<DescribePrepayBillTotalResponseBody::BillList> & getBillList() const { DARABONBA_PTR_GET_CONST(billList_, vector<DescribePrepayBillTotalResponseBody::BillList>) };
    inline vector<DescribePrepayBillTotalResponseBody::BillList> getBillList() { DARABONBA_PTR_GET(billList_, vector<DescribePrepayBillTotalResponseBody::BillList>) };
    inline DescribePrepayBillTotalResponseBody& setBillList(const vector<DescribePrepayBillTotalResponseBody::BillList> & billList) { DARABONBA_PTR_SET_VALUE(billList_, billList) };
    inline DescribePrepayBillTotalResponseBody& setBillList(vector<DescribePrepayBillTotalResponseBody::BillList> && billList) { DARABONBA_PTR_SET_RVALUE(billList_, billList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePrepayBillTotalResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribePrepayBillTotalResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<DescribePrepayBillTotalResponseBody::BillList>> billList_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
