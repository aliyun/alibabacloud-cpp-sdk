// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BILLINGBILLSUMMARYRESPDTO_HPP_
#define ALIBABACLOUD_MODELS_BILLINGBILLSUMMARYRESPDTO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/BillingBillSummaryPointDTO.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class BillingBillSummaryRespDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BillingBillSummaryRespDTO& obj) { 
      DARABONBA_PTR_TO_JSON(points, points_);
      DARABONBA_PTR_TO_JSON(totalAmount, totalAmount_);
    };
    friend void from_json(const Darabonba::Json& j, BillingBillSummaryRespDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(points, points_);
      DARABONBA_PTR_FROM_JSON(totalAmount, totalAmount_);
    };
    BillingBillSummaryRespDTO() = default ;
    BillingBillSummaryRespDTO(const BillingBillSummaryRespDTO &) = default ;
    BillingBillSummaryRespDTO(BillingBillSummaryRespDTO &&) = default ;
    BillingBillSummaryRespDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BillingBillSummaryRespDTO() = default ;
    BillingBillSummaryRespDTO& operator=(const BillingBillSummaryRespDTO &) = default ;
    BillingBillSummaryRespDTO& operator=(BillingBillSummaryRespDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->points_ == nullptr
        && this->totalAmount_ == nullptr; };
    // points Field Functions 
    bool hasPoints() const { return this->points_ != nullptr;};
    void deletePoints() { this->points_ = nullptr;};
    inline const vector<BillingBillSummaryPointDTO> & getPoints() const { DARABONBA_PTR_GET_CONST(points_, vector<BillingBillSummaryPointDTO>) };
    inline vector<BillingBillSummaryPointDTO> getPoints() { DARABONBA_PTR_GET(points_, vector<BillingBillSummaryPointDTO>) };
    inline BillingBillSummaryRespDTO& setPoints(const vector<BillingBillSummaryPointDTO> & points) { DARABONBA_PTR_SET_VALUE(points_, points) };
    inline BillingBillSummaryRespDTO& setPoints(vector<BillingBillSummaryPointDTO> && points) { DARABONBA_PTR_SET_RVALUE(points_, points) };


    // totalAmount Field Functions 
    bool hasTotalAmount() const { return this->totalAmount_ != nullptr;};
    void deleteTotalAmount() { this->totalAmount_ = nullptr;};
    inline float getTotalAmount() const { DARABONBA_PTR_GET_DEFAULT(totalAmount_, 0.0) };
    inline BillingBillSummaryRespDTO& setTotalAmount(float totalAmount) { DARABONBA_PTR_SET_VALUE(totalAmount_, totalAmount) };


  protected:
    shared_ptr<vector<BillingBillSummaryPointDTO>> points_ {};
    shared_ptr<float> totalAmount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
