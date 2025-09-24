// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYRIUTILIZATIONDETAILRESPONSEBODYDATADETAILLISTDETAILLIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYRIUTILIZATIONDETAILRESPONSEBODYDATADETAILLISTDETAILLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryRIUtilizationDetailResponseBodyDataDetailListDetailList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryRIUtilizationDetailResponseBodyDataDetailListDetailList& obj) { 
      DARABONBA_PTR_TO_JSON(DeductDate, deductDate_);
      DARABONBA_PTR_TO_JSON(DeductFactorTotal, deductFactorTotal_);
      DARABONBA_PTR_TO_JSON(DeductHours, deductHours_);
      DARABONBA_PTR_TO_JSON(DeductQuantity, deductQuantity_);
      DARABONBA_PTR_TO_JSON(DeductedCommodityCode, deductedCommodityCode_);
      DARABONBA_PTR_TO_JSON(DeductedInstanceId, deductedInstanceId_);
      DARABONBA_PTR_TO_JSON(DeductedProductDetail, deductedProductDetail_);
      DARABONBA_PTR_TO_JSON(InstanceSpec, instanceSpec_);
      DARABONBA_PTR_TO_JSON(RIInstanceId, RIInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryRIUtilizationDetailResponseBodyDataDetailListDetailList& obj) { 
      DARABONBA_PTR_FROM_JSON(DeductDate, deductDate_);
      DARABONBA_PTR_FROM_JSON(DeductFactorTotal, deductFactorTotal_);
      DARABONBA_PTR_FROM_JSON(DeductHours, deductHours_);
      DARABONBA_PTR_FROM_JSON(DeductQuantity, deductQuantity_);
      DARABONBA_PTR_FROM_JSON(DeductedCommodityCode, deductedCommodityCode_);
      DARABONBA_PTR_FROM_JSON(DeductedInstanceId, deductedInstanceId_);
      DARABONBA_PTR_FROM_JSON(DeductedProductDetail, deductedProductDetail_);
      DARABONBA_PTR_FROM_JSON(InstanceSpec, instanceSpec_);
      DARABONBA_PTR_FROM_JSON(RIInstanceId, RIInstanceId_);
    };
    QueryRIUtilizationDetailResponseBodyDataDetailListDetailList() = default ;
    QueryRIUtilizationDetailResponseBodyDataDetailListDetailList(const QueryRIUtilizationDetailResponseBodyDataDetailListDetailList &) = default ;
    QueryRIUtilizationDetailResponseBodyDataDetailListDetailList(QueryRIUtilizationDetailResponseBodyDataDetailListDetailList &&) = default ;
    QueryRIUtilizationDetailResponseBodyDataDetailListDetailList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryRIUtilizationDetailResponseBodyDataDetailListDetailList() = default ;
    QueryRIUtilizationDetailResponseBodyDataDetailListDetailList& operator=(const QueryRIUtilizationDetailResponseBodyDataDetailListDetailList &) = default ;
    QueryRIUtilizationDetailResponseBodyDataDetailListDetailList& operator=(QueryRIUtilizationDetailResponseBodyDataDetailListDetailList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deductDate_ != nullptr
        && this->deductFactorTotal_ != nullptr && this->deductHours_ != nullptr && this->deductQuantity_ != nullptr && this->deductedCommodityCode_ != nullptr && this->deductedInstanceId_ != nullptr
        && this->deductedProductDetail_ != nullptr && this->instanceSpec_ != nullptr && this->RIInstanceId_ != nullptr; };
    // deductDate Field Functions 
    bool hasDeductDate() const { return this->deductDate_ != nullptr;};
    void deleteDeductDate() { this->deductDate_ = nullptr;};
    inline string deductDate() const { DARABONBA_PTR_GET_DEFAULT(deductDate_, "") };
    inline QueryRIUtilizationDetailResponseBodyDataDetailListDetailList& setDeductDate(string deductDate) { DARABONBA_PTR_SET_VALUE(deductDate_, deductDate) };


    // deductFactorTotal Field Functions 
    bool hasDeductFactorTotal() const { return this->deductFactorTotal_ != nullptr;};
    void deleteDeductFactorTotal() { this->deductFactorTotal_ = nullptr;};
    inline float deductFactorTotal() const { DARABONBA_PTR_GET_DEFAULT(deductFactorTotal_, 0.0) };
    inline QueryRIUtilizationDetailResponseBodyDataDetailListDetailList& setDeductFactorTotal(float deductFactorTotal) { DARABONBA_PTR_SET_VALUE(deductFactorTotal_, deductFactorTotal) };


    // deductHours Field Functions 
    bool hasDeductHours() const { return this->deductHours_ != nullptr;};
    void deleteDeductHours() { this->deductHours_ = nullptr;};
    inline string deductHours() const { DARABONBA_PTR_GET_DEFAULT(deductHours_, "") };
    inline QueryRIUtilizationDetailResponseBodyDataDetailListDetailList& setDeductHours(string deductHours) { DARABONBA_PTR_SET_VALUE(deductHours_, deductHours) };


    // deductQuantity Field Functions 
    bool hasDeductQuantity() const { return this->deductQuantity_ != nullptr;};
    void deleteDeductQuantity() { this->deductQuantity_ = nullptr;};
    inline float deductQuantity() const { DARABONBA_PTR_GET_DEFAULT(deductQuantity_, 0.0) };
    inline QueryRIUtilizationDetailResponseBodyDataDetailListDetailList& setDeductQuantity(float deductQuantity) { DARABONBA_PTR_SET_VALUE(deductQuantity_, deductQuantity) };


    // deductedCommodityCode Field Functions 
    bool hasDeductedCommodityCode() const { return this->deductedCommodityCode_ != nullptr;};
    void deleteDeductedCommodityCode() { this->deductedCommodityCode_ = nullptr;};
    inline string deductedCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(deductedCommodityCode_, "") };
    inline QueryRIUtilizationDetailResponseBodyDataDetailListDetailList& setDeductedCommodityCode(string deductedCommodityCode) { DARABONBA_PTR_SET_VALUE(deductedCommodityCode_, deductedCommodityCode) };


    // deductedInstanceId Field Functions 
    bool hasDeductedInstanceId() const { return this->deductedInstanceId_ != nullptr;};
    void deleteDeductedInstanceId() { this->deductedInstanceId_ = nullptr;};
    inline string deductedInstanceId() const { DARABONBA_PTR_GET_DEFAULT(deductedInstanceId_, "") };
    inline QueryRIUtilizationDetailResponseBodyDataDetailListDetailList& setDeductedInstanceId(string deductedInstanceId) { DARABONBA_PTR_SET_VALUE(deductedInstanceId_, deductedInstanceId) };


    // deductedProductDetail Field Functions 
    bool hasDeductedProductDetail() const { return this->deductedProductDetail_ != nullptr;};
    void deleteDeductedProductDetail() { this->deductedProductDetail_ = nullptr;};
    inline string deductedProductDetail() const { DARABONBA_PTR_GET_DEFAULT(deductedProductDetail_, "") };
    inline QueryRIUtilizationDetailResponseBodyDataDetailListDetailList& setDeductedProductDetail(string deductedProductDetail) { DARABONBA_PTR_SET_VALUE(deductedProductDetail_, deductedProductDetail) };


    // instanceSpec Field Functions 
    bool hasInstanceSpec() const { return this->instanceSpec_ != nullptr;};
    void deleteInstanceSpec() { this->instanceSpec_ = nullptr;};
    inline string instanceSpec() const { DARABONBA_PTR_GET_DEFAULT(instanceSpec_, "") };
    inline QueryRIUtilizationDetailResponseBodyDataDetailListDetailList& setInstanceSpec(string instanceSpec) { DARABONBA_PTR_SET_VALUE(instanceSpec_, instanceSpec) };


    // RIInstanceId Field Functions 
    bool hasRIInstanceId() const { return this->RIInstanceId_ != nullptr;};
    void deleteRIInstanceId() { this->RIInstanceId_ = nullptr;};
    inline string RIInstanceId() const { DARABONBA_PTR_GET_DEFAULT(RIInstanceId_, "") };
    inline QueryRIUtilizationDetailResponseBodyDataDetailListDetailList& setRIInstanceId(string RIInstanceId) { DARABONBA_PTR_SET_VALUE(RIInstanceId_, RIInstanceId) };


  protected:
    // The time when the fees are deducted by using the RI.
    std::shared_ptr<string> deductDate_ = nullptr;
    // The total amount of computing power of the RI or capacity of SCU in the time period.
    std::shared_ptr<float> deductFactorTotal_ = nullptr;
    // The deduct factor. This parameter is returned only if the RICommodityCode parameter is set to ecsRi.
    std::shared_ptr<string> deductHours_ = nullptr;
    // The computing power or capacity of the pay-as-you-go instance whose fees are deducted by using the RI.
    std::shared_ptr<float> deductQuantity_ = nullptr;
    // The code of the service whose fees are deducted by using the RI.
    std::shared_ptr<string> deductedCommodityCode_ = nullptr;
    // The ID of the instance whose fees are deducted by using the RI.
    std::shared_ptr<string> deductedInstanceId_ = nullptr;
    // The name of the service whose fees are deducted by using the RI.
    std::shared_ptr<string> deductedProductDetail_ = nullptr;
    // The instance type of the instance whose fees are deducted by using the RI.
    std::shared_ptr<string> instanceSpec_ = nullptr;
    // The ID of the RI.
    std::shared_ptr<string> RIInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
