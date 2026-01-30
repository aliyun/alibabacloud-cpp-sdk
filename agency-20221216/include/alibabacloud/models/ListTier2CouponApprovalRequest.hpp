// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTIER2COUPONAPPROVALREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTIER2COUPONAPPROVALREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20221216
{
namespace Models
{
  class ListTier2CouponApprovalRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTier2CouponApprovalRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationSheetId, applicationSheetId_);
      DARABONBA_PTR_TO_JSON(ApprovalStatus, approvalStatus_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(T2PartnerName, t2PartnerName_);
      DARABONBA_PTR_TO_JSON(T2PartnerUid, t2PartnerUid_);
    };
    friend void from_json(const Darabonba::Json& j, ListTier2CouponApprovalRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationSheetId, applicationSheetId_);
      DARABONBA_PTR_FROM_JSON(ApprovalStatus, approvalStatus_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(T2PartnerName, t2PartnerName_);
      DARABONBA_PTR_FROM_JSON(T2PartnerUid, t2PartnerUid_);
    };
    ListTier2CouponApprovalRequest() = default ;
    ListTier2CouponApprovalRequest(const ListTier2CouponApprovalRequest &) = default ;
    ListTier2CouponApprovalRequest(ListTier2CouponApprovalRequest &&) = default ;
    ListTier2CouponApprovalRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTier2CouponApprovalRequest() = default ;
    ListTier2CouponApprovalRequest& operator=(const ListTier2CouponApprovalRequest &) = default ;
    ListTier2CouponApprovalRequest& operator=(ListTier2CouponApprovalRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationSheetId_ == nullptr
        && this->approvalStatus_ == nullptr && this->currentPage_ == nullptr && this->pageSize_ == nullptr && this->t2PartnerName_ == nullptr && this->t2PartnerUid_ == nullptr; };
    // applicationSheetId Field Functions 
    bool hasApplicationSheetId() const { return this->applicationSheetId_ != nullptr;};
    void deleteApplicationSheetId() { this->applicationSheetId_ = nullptr;};
    inline string getApplicationSheetId() const { DARABONBA_PTR_GET_DEFAULT(applicationSheetId_, "") };
    inline ListTier2CouponApprovalRequest& setApplicationSheetId(string applicationSheetId) { DARABONBA_PTR_SET_VALUE(applicationSheetId_, applicationSheetId) };


    // approvalStatus Field Functions 
    bool hasApprovalStatus() const { return this->approvalStatus_ != nullptr;};
    void deleteApprovalStatus() { this->approvalStatus_ = nullptr;};
    inline string getApprovalStatus() const { DARABONBA_PTR_GET_DEFAULT(approvalStatus_, "") };
    inline ListTier2CouponApprovalRequest& setApprovalStatus(string approvalStatus) { DARABONBA_PTR_SET_VALUE(approvalStatus_, approvalStatus) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListTier2CouponApprovalRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListTier2CouponApprovalRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // t2PartnerName Field Functions 
    bool hasT2PartnerName() const { return this->t2PartnerName_ != nullptr;};
    void deleteT2PartnerName() { this->t2PartnerName_ = nullptr;};
    inline string getT2PartnerName() const { DARABONBA_PTR_GET_DEFAULT(t2PartnerName_, "") };
    inline ListTier2CouponApprovalRequest& setT2PartnerName(string t2PartnerName) { DARABONBA_PTR_SET_VALUE(t2PartnerName_, t2PartnerName) };


    // t2PartnerUid Field Functions 
    bool hasT2PartnerUid() const { return this->t2PartnerUid_ != nullptr;};
    void deleteT2PartnerUid() { this->t2PartnerUid_ = nullptr;};
    inline int64_t getT2PartnerUid() const { DARABONBA_PTR_GET_DEFAULT(t2PartnerUid_, 0L) };
    inline ListTier2CouponApprovalRequest& setT2PartnerUid(int64_t t2PartnerUid) { DARABONBA_PTR_SET_VALUE(t2PartnerUid_, t2PartnerUid) };


  protected:
    shared_ptr<string> applicationSheetId_ {};
    shared_ptr<string> approvalStatus_ {};
    // This parameter is required.
    shared_ptr<int32_t> currentPage_ {};
    // This parameter is required.
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> t2PartnerName_ {};
    shared_ptr<int64_t> t2PartnerUid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20221216
#endif
