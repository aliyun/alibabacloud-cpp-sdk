// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDPUTILIZATIONDETAILRESPONSEBODYDATADETAILLISTDETAILLIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYDPUTILIZATIONDETAILRESPONSEBODYDATADETAILLISTDETAILLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryDPUtilizationDetailResponseBodyDataDetailListDetailList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDPUtilizationDetailResponseBodyDataDetailListDetailList& obj) { 
      DARABONBA_PTR_TO_JSON(DeductDate, deductDate_);
      DARABONBA_PTR_TO_JSON(DeductFactorTotal, deductFactorTotal_);
      DARABONBA_PTR_TO_JSON(DeductHours, deductHours_);
      DARABONBA_PTR_TO_JSON(DeductMeasure, deductMeasure_);
      DARABONBA_PTR_TO_JSON(DeductQuantity, deductQuantity_);
      DARABONBA_PTR_TO_JSON(DeductedCommodityCode, deductedCommodityCode_);
      DARABONBA_PTR_TO_JSON(DeductedInstanceId, deductedInstanceId_);
      DARABONBA_PTR_TO_JSON(DeductedProductDetail, deductedProductDetail_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceSpec, instanceSpec_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(ResCode, resCode_);
      DARABONBA_PTR_TO_JSON(ShareUid, shareUid_);
      DARABONBA_PTR_TO_JSON(Uid, uid_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDPUtilizationDetailResponseBodyDataDetailListDetailList& obj) { 
      DARABONBA_PTR_FROM_JSON(DeductDate, deductDate_);
      DARABONBA_PTR_FROM_JSON(DeductFactorTotal, deductFactorTotal_);
      DARABONBA_PTR_FROM_JSON(DeductHours, deductHours_);
      DARABONBA_PTR_FROM_JSON(DeductMeasure, deductMeasure_);
      DARABONBA_PTR_FROM_JSON(DeductQuantity, deductQuantity_);
      DARABONBA_PTR_FROM_JSON(DeductedCommodityCode, deductedCommodityCode_);
      DARABONBA_PTR_FROM_JSON(DeductedInstanceId, deductedInstanceId_);
      DARABONBA_PTR_FROM_JSON(DeductedProductDetail, deductedProductDetail_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceSpec, instanceSpec_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(ResCode, resCode_);
      DARABONBA_PTR_FROM_JSON(ShareUid, shareUid_);
      DARABONBA_PTR_FROM_JSON(Uid, uid_);
    };
    QueryDPUtilizationDetailResponseBodyDataDetailListDetailList() = default ;
    QueryDPUtilizationDetailResponseBodyDataDetailListDetailList(const QueryDPUtilizationDetailResponseBodyDataDetailListDetailList &) = default ;
    QueryDPUtilizationDetailResponseBodyDataDetailListDetailList(QueryDPUtilizationDetailResponseBodyDataDetailListDetailList &&) = default ;
    QueryDPUtilizationDetailResponseBodyDataDetailListDetailList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDPUtilizationDetailResponseBodyDataDetailListDetailList() = default ;
    QueryDPUtilizationDetailResponseBodyDataDetailListDetailList& operator=(const QueryDPUtilizationDetailResponseBodyDataDetailListDetailList &) = default ;
    QueryDPUtilizationDetailResponseBodyDataDetailListDetailList& operator=(QueryDPUtilizationDetailResponseBodyDataDetailListDetailList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deductDate_ != nullptr
        && this->deductFactorTotal_ != nullptr && this->deductHours_ != nullptr && this->deductMeasure_ != nullptr && this->deductQuantity_ != nullptr && this->deductedCommodityCode_ != nullptr
        && this->deductedInstanceId_ != nullptr && this->deductedProductDetail_ != nullptr && this->instanceId_ != nullptr && this->instanceSpec_ != nullptr && this->region_ != nullptr
        && this->resCode_ != nullptr && this->shareUid_ != nullptr && this->uid_ != nullptr; };
    // deductDate Field Functions 
    bool hasDeductDate() const { return this->deductDate_ != nullptr;};
    void deleteDeductDate() { this->deductDate_ = nullptr;};
    inline string deductDate() const { DARABONBA_PTR_GET_DEFAULT(deductDate_, "") };
    inline QueryDPUtilizationDetailResponseBodyDataDetailListDetailList& setDeductDate(string deductDate) { DARABONBA_PTR_SET_VALUE(deductDate_, deductDate) };


    // deductFactorTotal Field Functions 
    bool hasDeductFactorTotal() const { return this->deductFactorTotal_ != nullptr;};
    void deleteDeductFactorTotal() { this->deductFactorTotal_ = nullptr;};
    inline float deductFactorTotal() const { DARABONBA_PTR_GET_DEFAULT(deductFactorTotal_, 0.0) };
    inline QueryDPUtilizationDetailResponseBodyDataDetailListDetailList& setDeductFactorTotal(float deductFactorTotal) { DARABONBA_PTR_SET_VALUE(deductFactorTotal_, deductFactorTotal) };


    // deductHours Field Functions 
    bool hasDeductHours() const { return this->deductHours_ != nullptr;};
    void deleteDeductHours() { this->deductHours_ = nullptr;};
    inline float deductHours() const { DARABONBA_PTR_GET_DEFAULT(deductHours_, 0.0) };
    inline QueryDPUtilizationDetailResponseBodyDataDetailListDetailList& setDeductHours(float deductHours) { DARABONBA_PTR_SET_VALUE(deductHours_, deductHours) };


    // deductMeasure Field Functions 
    bool hasDeductMeasure() const { return this->deductMeasure_ != nullptr;};
    void deleteDeductMeasure() { this->deductMeasure_ = nullptr;};
    inline float deductMeasure() const { DARABONBA_PTR_GET_DEFAULT(deductMeasure_, 0.0) };
    inline QueryDPUtilizationDetailResponseBodyDataDetailListDetailList& setDeductMeasure(float deductMeasure) { DARABONBA_PTR_SET_VALUE(deductMeasure_, deductMeasure) };


    // deductQuantity Field Functions 
    bool hasDeductQuantity() const { return this->deductQuantity_ != nullptr;};
    void deleteDeductQuantity() { this->deductQuantity_ = nullptr;};
    inline float deductQuantity() const { DARABONBA_PTR_GET_DEFAULT(deductQuantity_, 0.0) };
    inline QueryDPUtilizationDetailResponseBodyDataDetailListDetailList& setDeductQuantity(float deductQuantity) { DARABONBA_PTR_SET_VALUE(deductQuantity_, deductQuantity) };


    // deductedCommodityCode Field Functions 
    bool hasDeductedCommodityCode() const { return this->deductedCommodityCode_ != nullptr;};
    void deleteDeductedCommodityCode() { this->deductedCommodityCode_ = nullptr;};
    inline string deductedCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(deductedCommodityCode_, "") };
    inline QueryDPUtilizationDetailResponseBodyDataDetailListDetailList& setDeductedCommodityCode(string deductedCommodityCode) { DARABONBA_PTR_SET_VALUE(deductedCommodityCode_, deductedCommodityCode) };


    // deductedInstanceId Field Functions 
    bool hasDeductedInstanceId() const { return this->deductedInstanceId_ != nullptr;};
    void deleteDeductedInstanceId() { this->deductedInstanceId_ = nullptr;};
    inline string deductedInstanceId() const { DARABONBA_PTR_GET_DEFAULT(deductedInstanceId_, "") };
    inline QueryDPUtilizationDetailResponseBodyDataDetailListDetailList& setDeductedInstanceId(string deductedInstanceId) { DARABONBA_PTR_SET_VALUE(deductedInstanceId_, deductedInstanceId) };


    // deductedProductDetail Field Functions 
    bool hasDeductedProductDetail() const { return this->deductedProductDetail_ != nullptr;};
    void deleteDeductedProductDetail() { this->deductedProductDetail_ = nullptr;};
    inline string deductedProductDetail() const { DARABONBA_PTR_GET_DEFAULT(deductedProductDetail_, "") };
    inline QueryDPUtilizationDetailResponseBodyDataDetailListDetailList& setDeductedProductDetail(string deductedProductDetail) { DARABONBA_PTR_SET_VALUE(deductedProductDetail_, deductedProductDetail) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline QueryDPUtilizationDetailResponseBodyDataDetailListDetailList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceSpec Field Functions 
    bool hasInstanceSpec() const { return this->instanceSpec_ != nullptr;};
    void deleteInstanceSpec() { this->instanceSpec_ = nullptr;};
    inline string instanceSpec() const { DARABONBA_PTR_GET_DEFAULT(instanceSpec_, "") };
    inline QueryDPUtilizationDetailResponseBodyDataDetailListDetailList& setInstanceSpec(string instanceSpec) { DARABONBA_PTR_SET_VALUE(instanceSpec_, instanceSpec) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline QueryDPUtilizationDetailResponseBodyDataDetailListDetailList& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // resCode Field Functions 
    bool hasResCode() const { return this->resCode_ != nullptr;};
    void deleteResCode() { this->resCode_ = nullptr;};
    inline string resCode() const { DARABONBA_PTR_GET_DEFAULT(resCode_, "") };
    inline QueryDPUtilizationDetailResponseBodyDataDetailListDetailList& setResCode(string resCode) { DARABONBA_PTR_SET_VALUE(resCode_, resCode) };


    // shareUid Field Functions 
    bool hasShareUid() const { return this->shareUid_ != nullptr;};
    void deleteShareUid() { this->shareUid_ = nullptr;};
    inline int64_t shareUid() const { DARABONBA_PTR_GET_DEFAULT(shareUid_, 0L) };
    inline QueryDPUtilizationDetailResponseBodyDataDetailListDetailList& setShareUid(int64_t shareUid) { DARABONBA_PTR_SET_VALUE(shareUid_, shareUid) };


    // uid Field Functions 
    bool hasUid() const { return this->uid_ != nullptr;};
    void deleteUid() { this->uid_ = nullptr;};
    inline int64_t uid() const { DARABONBA_PTR_GET_DEFAULT(uid_, 0L) };
    inline QueryDPUtilizationDetailResponseBodyDataDetailListDetailList& setUid(int64_t uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


  protected:
    // The deduction date.
    std::shared_ptr<string> deductDate_ = nullptr;
    // The total computing capacity or storage capacity of the RI or SCU during the deduction.
    std::shared_ptr<float> deductFactorTotal_ = nullptr;
    // The deduct factor. This parameter is returned only if the CommodityCode parameter is set to ecsRi.
    std::shared_ptr<float> deductHours_ = nullptr;
    // The original measured amount.
    std::shared_ptr<float> deductMeasure_ = nullptr;
    // The computing capacity or storage capacity that is deducted in a pay-as-you-go instance.
    std::shared_ptr<float> deductQuantity_ = nullptr;
    // The code of the deducted service.
    std::shared_ptr<string> deductedCommodityCode_ = nullptr;
    // The ID of the deducted instance.
    std::shared_ptr<string> deductedInstanceId_ = nullptr;
    // The name of the deducted service.
    std::shared_ptr<string> deductedProductDetail_ = nullptr;
    // The ID of the RI.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The instance type of the deducted instance.
    std::shared_ptr<string> instanceSpec_ = nullptr;
    // The region in which the instance resides. This parameter can be left empty.
    std::shared_ptr<string> region_ = nullptr;
    // The billable item.
    std::shared_ptr<string> resCode_ = nullptr;
    // The UID of the deducted instance.
    // 
    // *   If the deduction is shared, the value of this parameter indicates the UID of the deducted instance.
    // *   If the deduction is not shared, the value of this parameter is the same as that of the uid parameter.
    std::shared_ptr<int64_t> shareUid_ = nullptr;
    // The UID of the deducted instance.
    std::shared_ptr<int64_t> uid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
