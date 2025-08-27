// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BTRIPBILLINFOADJUSTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BTRIPBILLINFOADJUSTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class BtripBillInfoAdjustRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BtripBillInfoAdjustRequest& obj) { 
      DARABONBA_PTR_TO_JSON(primary_id, primaryId_);
      DARABONBA_PTR_TO_JSON(third_part_cost_center_id, thirdPartCostCenterId_);
      DARABONBA_PTR_TO_JSON(third_part_department_id, thirdPartDepartmentId_);
      DARABONBA_PTR_TO_JSON(third_part_invoice_id, thirdPartInvoiceId_);
      DARABONBA_PTR_TO_JSON(third_part_project_id, thirdPartProjectId_);
      DARABONBA_PTR_TO_JSON(user_id, userId_);
    };
    friend void from_json(const Darabonba::Json& j, BtripBillInfoAdjustRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(primary_id, primaryId_);
      DARABONBA_PTR_FROM_JSON(third_part_cost_center_id, thirdPartCostCenterId_);
      DARABONBA_PTR_FROM_JSON(third_part_department_id, thirdPartDepartmentId_);
      DARABONBA_PTR_FROM_JSON(third_part_invoice_id, thirdPartInvoiceId_);
      DARABONBA_PTR_FROM_JSON(third_part_project_id, thirdPartProjectId_);
      DARABONBA_PTR_FROM_JSON(user_id, userId_);
    };
    BtripBillInfoAdjustRequest() = default ;
    BtripBillInfoAdjustRequest(const BtripBillInfoAdjustRequest &) = default ;
    BtripBillInfoAdjustRequest(BtripBillInfoAdjustRequest &&) = default ;
    BtripBillInfoAdjustRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BtripBillInfoAdjustRequest() = default ;
    BtripBillInfoAdjustRequest& operator=(const BtripBillInfoAdjustRequest &) = default ;
    BtripBillInfoAdjustRequest& operator=(BtripBillInfoAdjustRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->primaryId_ != nullptr
        && this->thirdPartCostCenterId_ != nullptr && this->thirdPartDepartmentId_ != nullptr && this->thirdPartInvoiceId_ != nullptr && this->thirdPartProjectId_ != nullptr && this->userId_ != nullptr; };
    // primaryId Field Functions 
    bool hasPrimaryId() const { return this->primaryId_ != nullptr;};
    void deletePrimaryId() { this->primaryId_ = nullptr;};
    inline int64_t primaryId() const { DARABONBA_PTR_GET_DEFAULT(primaryId_, 0L) };
    inline BtripBillInfoAdjustRequest& setPrimaryId(int64_t primaryId) { DARABONBA_PTR_SET_VALUE(primaryId_, primaryId) };


    // thirdPartCostCenterId Field Functions 
    bool hasThirdPartCostCenterId() const { return this->thirdPartCostCenterId_ != nullptr;};
    void deleteThirdPartCostCenterId() { this->thirdPartCostCenterId_ = nullptr;};
    inline string thirdPartCostCenterId() const { DARABONBA_PTR_GET_DEFAULT(thirdPartCostCenterId_, "") };
    inline BtripBillInfoAdjustRequest& setThirdPartCostCenterId(string thirdPartCostCenterId) { DARABONBA_PTR_SET_VALUE(thirdPartCostCenterId_, thirdPartCostCenterId) };


    // thirdPartDepartmentId Field Functions 
    bool hasThirdPartDepartmentId() const { return this->thirdPartDepartmentId_ != nullptr;};
    void deleteThirdPartDepartmentId() { this->thirdPartDepartmentId_ = nullptr;};
    inline string thirdPartDepartmentId() const { DARABONBA_PTR_GET_DEFAULT(thirdPartDepartmentId_, "") };
    inline BtripBillInfoAdjustRequest& setThirdPartDepartmentId(string thirdPartDepartmentId) { DARABONBA_PTR_SET_VALUE(thirdPartDepartmentId_, thirdPartDepartmentId) };


    // thirdPartInvoiceId Field Functions 
    bool hasThirdPartInvoiceId() const { return this->thirdPartInvoiceId_ != nullptr;};
    void deleteThirdPartInvoiceId() { this->thirdPartInvoiceId_ = nullptr;};
    inline string thirdPartInvoiceId() const { DARABONBA_PTR_GET_DEFAULT(thirdPartInvoiceId_, "") };
    inline BtripBillInfoAdjustRequest& setThirdPartInvoiceId(string thirdPartInvoiceId) { DARABONBA_PTR_SET_VALUE(thirdPartInvoiceId_, thirdPartInvoiceId) };


    // thirdPartProjectId Field Functions 
    bool hasThirdPartProjectId() const { return this->thirdPartProjectId_ != nullptr;};
    void deleteThirdPartProjectId() { this->thirdPartProjectId_ = nullptr;};
    inline string thirdPartProjectId() const { DARABONBA_PTR_GET_DEFAULT(thirdPartProjectId_, "") };
    inline BtripBillInfoAdjustRequest& setThirdPartProjectId(string thirdPartProjectId) { DARABONBA_PTR_SET_VALUE(thirdPartProjectId_, thirdPartProjectId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline BtripBillInfoAdjustRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> primaryId_ = nullptr;
    std::shared_ptr<string> thirdPartCostCenterId_ = nullptr;
    std::shared_ptr<string> thirdPartDepartmentId_ = nullptr;
    std::shared_ptr<string> thirdPartInvoiceId_ = nullptr;
    std::shared_ptr<string> thirdPartProjectId_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
