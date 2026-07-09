// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEDUCTLOGSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEDUCTLOGSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class DescribeDeductLogsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDeductLogsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BillInstanceId, billInstanceId_);
      DARABONBA_PTR_TO_JSON(BillingCommodityCode, billingCommodityCode_);
      DARABONBA_PTR_TO_JSON(BillingEndTime, billingEndTime_);
      DARABONBA_PTR_TO_JSON(BillingStartTime, billingStartTime_);
      DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_TO_JSON(EcIdAccountIds, ecIdAccountIdsShrink_);
      DARABONBA_PTR_TO_JSON(Group, group_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Nbid, nbid_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RelationAccountIds, relationAccountIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDeductLogsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BillInstanceId, billInstanceId_);
      DARABONBA_PTR_FROM_JSON(BillingCommodityCode, billingCommodityCode_);
      DARABONBA_PTR_FROM_JSON(BillingEndTime, billingEndTime_);
      DARABONBA_PTR_FROM_JSON(BillingStartTime, billingStartTime_);
      DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_FROM_JSON(EcIdAccountIds, ecIdAccountIdsShrink_);
      DARABONBA_PTR_FROM_JSON(Group, group_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Nbid, nbid_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RelationAccountIds, relationAccountIdsShrink_);
    };
    DescribeDeductLogsShrinkRequest() = default ;
    DescribeDeductLogsShrinkRequest(const DescribeDeductLogsShrinkRequest &) = default ;
    DescribeDeductLogsShrinkRequest(DescribeDeductLogsShrinkRequest &&) = default ;
    DescribeDeductLogsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDeductLogsShrinkRequest() = default ;
    DescribeDeductLogsShrinkRequest& operator=(const DescribeDeductLogsShrinkRequest &) = default ;
    DescribeDeductLogsShrinkRequest& operator=(DescribeDeductLogsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->billInstanceId_ == nullptr
        && this->billingCommodityCode_ == nullptr && this->billingEndTime_ == nullptr && this->billingStartTime_ == nullptr && this->commodityCode_ == nullptr && this->ecIdAccountIdsShrink_ == nullptr
        && this->group_ == nullptr && this->instanceId_ == nullptr && this->nbid_ == nullptr && this->pageNum_ == nullptr && this->pageSize_ == nullptr
        && this->relationAccountIdsShrink_ == nullptr; };
    // billInstanceId Field Functions 
    bool hasBillInstanceId() const { return this->billInstanceId_ != nullptr;};
    void deleteBillInstanceId() { this->billInstanceId_ = nullptr;};
    inline string getBillInstanceId() const { DARABONBA_PTR_GET_DEFAULT(billInstanceId_, "") };
    inline DescribeDeductLogsShrinkRequest& setBillInstanceId(string billInstanceId) { DARABONBA_PTR_SET_VALUE(billInstanceId_, billInstanceId) };


    // billingCommodityCode Field Functions 
    bool hasBillingCommodityCode() const { return this->billingCommodityCode_ != nullptr;};
    void deleteBillingCommodityCode() { this->billingCommodityCode_ = nullptr;};
    inline string getBillingCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(billingCommodityCode_, "") };
    inline DescribeDeductLogsShrinkRequest& setBillingCommodityCode(string billingCommodityCode) { DARABONBA_PTR_SET_VALUE(billingCommodityCode_, billingCommodityCode) };


    // billingEndTime Field Functions 
    bool hasBillingEndTime() const { return this->billingEndTime_ != nullptr;};
    void deleteBillingEndTime() { this->billingEndTime_ = nullptr;};
    inline int64_t getBillingEndTime() const { DARABONBA_PTR_GET_DEFAULT(billingEndTime_, 0L) };
    inline DescribeDeductLogsShrinkRequest& setBillingEndTime(int64_t billingEndTime) { DARABONBA_PTR_SET_VALUE(billingEndTime_, billingEndTime) };


    // billingStartTime Field Functions 
    bool hasBillingStartTime() const { return this->billingStartTime_ != nullptr;};
    void deleteBillingStartTime() { this->billingStartTime_ = nullptr;};
    inline int64_t getBillingStartTime() const { DARABONBA_PTR_GET_DEFAULT(billingStartTime_, 0L) };
    inline DescribeDeductLogsShrinkRequest& setBillingStartTime(int64_t billingStartTime) { DARABONBA_PTR_SET_VALUE(billingStartTime_, billingStartTime) };


    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string getCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline DescribeDeductLogsShrinkRequest& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // ecIdAccountIdsShrink Field Functions 
    bool hasEcIdAccountIdsShrink() const { return this->ecIdAccountIdsShrink_ != nullptr;};
    void deleteEcIdAccountIdsShrink() { this->ecIdAccountIdsShrink_ = nullptr;};
    inline string getEcIdAccountIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(ecIdAccountIdsShrink_, "") };
    inline DescribeDeductLogsShrinkRequest& setEcIdAccountIdsShrink(string ecIdAccountIdsShrink) { DARABONBA_PTR_SET_VALUE(ecIdAccountIdsShrink_, ecIdAccountIdsShrink) };


    // group Field Functions 
    bool hasGroup() const { return this->group_ != nullptr;};
    void deleteGroup() { this->group_ = nullptr;};
    inline string getGroup() const { DARABONBA_PTR_GET_DEFAULT(group_, "") };
    inline DescribeDeductLogsShrinkRequest& setGroup(string group) { DARABONBA_PTR_SET_VALUE(group_, group) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeDeductLogsShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // nbid Field Functions 
    bool hasNbid() const { return this->nbid_ != nullptr;};
    void deleteNbid() { this->nbid_ = nullptr;};
    inline string getNbid() const { DARABONBA_PTR_GET_DEFAULT(nbid_, "") };
    inline DescribeDeductLogsShrinkRequest& setNbid(string nbid) { DARABONBA_PTR_SET_VALUE(nbid_, nbid) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline DescribeDeductLogsShrinkRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDeductLogsShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // relationAccountIdsShrink Field Functions 
    bool hasRelationAccountIdsShrink() const { return this->relationAccountIdsShrink_ != nullptr;};
    void deleteRelationAccountIdsShrink() { this->relationAccountIdsShrink_ = nullptr;};
    inline string getRelationAccountIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(relationAccountIdsShrink_, "") };
    inline DescribeDeductLogsShrinkRequest& setRelationAccountIdsShrink(string relationAccountIdsShrink) { DARABONBA_PTR_SET_VALUE(relationAccountIdsShrink_, relationAccountIdsShrink) };


  protected:
    // The instance ID for billing deduction.
    shared_ptr<string> billInstanceId_ {};
    // The commodity code of the deducted item.
    shared_ptr<string> billingCommodityCode_ {};
    // The billing end time.
    // 
    // This parameter is required.
    shared_ptr<int64_t> billingEndTime_ {};
    // The billing start time.
    // 
    // This parameter is required.
    shared_ptr<int64_t> billingStartTime_ {};
    // The commodity code.
    shared_ptr<string> commodityCode_ {};
    // The enterprise and account list. If this parameter is empty, the current account is queried.
    shared_ptr<string> ecIdAccountIdsShrink_ {};
    // The resource dimension for the query.
    shared_ptr<string> group_ {};
    // The instance name.
    shared_ptr<string> instanceId_ {};
    // The primary marketplace ID. If this parameter is empty, the marketplace ID of the current user is used by default.
    shared_ptr<string> nbid_ {};
    // The current page number.
    shared_ptr<int32_t> pageNum_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The list of deduction accounts.
    shared_ptr<string> relationAccountIdsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
