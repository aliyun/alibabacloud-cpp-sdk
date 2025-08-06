// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLICENSEINFOSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTLICENSEINFOSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListLicenseInfosRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLicenseInfosRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(BusinessType, businessType_);
      DARABONBA_PTR_TO_JSON(ContractNo, contractNo_);
      DARABONBA_PTR_TO_JSON(CustomerId, customerId_);
      DARABONBA_PTR_TO_JSON(EndBeginTime, endBeginTime_);
      DARABONBA_PTR_TO_JSON(EndExpiredOn, endExpiredOn_);
      DARABONBA_PTR_TO_JSON(ExtraInfo, extraInfo_);
      DARABONBA_PTR_TO_JSON(LicenseId, licenseId_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(StartBeginTime, startBeginTime_);
      DARABONBA_PTR_TO_JSON(StartExpiredOn, startExpiredOn_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListLicenseInfosRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(BusinessType, businessType_);
      DARABONBA_PTR_FROM_JSON(ContractNo, contractNo_);
      DARABONBA_PTR_FROM_JSON(CustomerId, customerId_);
      DARABONBA_PTR_FROM_JSON(EndBeginTime, endBeginTime_);
      DARABONBA_PTR_FROM_JSON(EndExpiredOn, endExpiredOn_);
      DARABONBA_PTR_FROM_JSON(ExtraInfo, extraInfo_);
      DARABONBA_PTR_FROM_JSON(LicenseId, licenseId_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(StartBeginTime, startBeginTime_);
      DARABONBA_PTR_FROM_JSON(StartExpiredOn, startExpiredOn_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListLicenseInfosRequest() = default ;
    ListLicenseInfosRequest(const ListLicenseInfosRequest &) = default ;
    ListLicenseInfosRequest(ListLicenseInfosRequest &&) = default ;
    ListLicenseInfosRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLicenseInfosRequest() = default ;
    ListLicenseInfosRequest& operator=(const ListLicenseInfosRequest &) = default ;
    ListLicenseInfosRequest& operator=(ListLicenseInfosRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountId_ != nullptr
        && this->businessType_ != nullptr && this->contractNo_ != nullptr && this->customerId_ != nullptr && this->endBeginTime_ != nullptr && this->endExpiredOn_ != nullptr
        && this->extraInfo_ != nullptr && this->licenseId_ != nullptr && this->pageNo_ != nullptr && this->pageSize_ != nullptr && this->sortBy_ != nullptr
        && this->startBeginTime_ != nullptr && this->startExpiredOn_ != nullptr && this->status_ != nullptr && this->type_ != nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline int64_t accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, 0L) };
    inline ListLicenseInfosRequest& setAccountId(int64_t accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // businessType Field Functions 
    bool hasBusinessType() const { return this->businessType_ != nullptr;};
    void deleteBusinessType() { this->businessType_ = nullptr;};
    inline string businessType() const { DARABONBA_PTR_GET_DEFAULT(businessType_, "") };
    inline ListLicenseInfosRequest& setBusinessType(string businessType) { DARABONBA_PTR_SET_VALUE(businessType_, businessType) };


    // contractNo Field Functions 
    bool hasContractNo() const { return this->contractNo_ != nullptr;};
    void deleteContractNo() { this->contractNo_ = nullptr;};
    inline string contractNo() const { DARABONBA_PTR_GET_DEFAULT(contractNo_, "") };
    inline ListLicenseInfosRequest& setContractNo(string contractNo) { DARABONBA_PTR_SET_VALUE(contractNo_, contractNo) };


    // customerId Field Functions 
    bool hasCustomerId() const { return this->customerId_ != nullptr;};
    void deleteCustomerId() { this->customerId_ = nullptr;};
    inline int64_t customerId() const { DARABONBA_PTR_GET_DEFAULT(customerId_, 0L) };
    inline ListLicenseInfosRequest& setCustomerId(int64_t customerId) { DARABONBA_PTR_SET_VALUE(customerId_, customerId) };


    // endBeginTime Field Functions 
    bool hasEndBeginTime() const { return this->endBeginTime_ != nullptr;};
    void deleteEndBeginTime() { this->endBeginTime_ = nullptr;};
    inline string endBeginTime() const { DARABONBA_PTR_GET_DEFAULT(endBeginTime_, "") };
    inline ListLicenseInfosRequest& setEndBeginTime(string endBeginTime) { DARABONBA_PTR_SET_VALUE(endBeginTime_, endBeginTime) };


    // endExpiredOn Field Functions 
    bool hasEndExpiredOn() const { return this->endExpiredOn_ != nullptr;};
    void deleteEndExpiredOn() { this->endExpiredOn_ = nullptr;};
    inline string endExpiredOn() const { DARABONBA_PTR_GET_DEFAULT(endExpiredOn_, "") };
    inline ListLicenseInfosRequest& setEndExpiredOn(string endExpiredOn) { DARABONBA_PTR_SET_VALUE(endExpiredOn_, endExpiredOn) };


    // extraInfo Field Functions 
    bool hasExtraInfo() const { return this->extraInfo_ != nullptr;};
    void deleteExtraInfo() { this->extraInfo_ = nullptr;};
    inline string extraInfo() const { DARABONBA_PTR_GET_DEFAULT(extraInfo_, "") };
    inline ListLicenseInfosRequest& setExtraInfo(string extraInfo) { DARABONBA_PTR_SET_VALUE(extraInfo_, extraInfo) };


    // licenseId Field Functions 
    bool hasLicenseId() const { return this->licenseId_ != nullptr;};
    void deleteLicenseId() { this->licenseId_ = nullptr;};
    inline string licenseId() const { DARABONBA_PTR_GET_DEFAULT(licenseId_, "") };
    inline ListLicenseInfosRequest& setLicenseId(string licenseId) { DARABONBA_PTR_SET_VALUE(licenseId_, licenseId) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int64_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0L) };
    inline ListLicenseInfosRequest& setPageNo(int64_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListLicenseInfosRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string sortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListLicenseInfosRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // startBeginTime Field Functions 
    bool hasStartBeginTime() const { return this->startBeginTime_ != nullptr;};
    void deleteStartBeginTime() { this->startBeginTime_ = nullptr;};
    inline string startBeginTime() const { DARABONBA_PTR_GET_DEFAULT(startBeginTime_, "") };
    inline ListLicenseInfosRequest& setStartBeginTime(string startBeginTime) { DARABONBA_PTR_SET_VALUE(startBeginTime_, startBeginTime) };


    // startExpiredOn Field Functions 
    bool hasStartExpiredOn() const { return this->startExpiredOn_ != nullptr;};
    void deleteStartExpiredOn() { this->startExpiredOn_ = nullptr;};
    inline string startExpiredOn() const { DARABONBA_PTR_GET_DEFAULT(startExpiredOn_, "") };
    inline ListLicenseInfosRequest& setStartExpiredOn(string startExpiredOn) { DARABONBA_PTR_SET_VALUE(startExpiredOn_, startExpiredOn) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListLicenseInfosRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListLicenseInfosRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<int64_t> accountId_ = nullptr;
    std::shared_ptr<string> businessType_ = nullptr;
    std::shared_ptr<string> contractNo_ = nullptr;
    std::shared_ptr<int64_t> customerId_ = nullptr;
    std::shared_ptr<string> endBeginTime_ = nullptr;
    std::shared_ptr<string> endExpiredOn_ = nullptr;
    std::shared_ptr<string> extraInfo_ = nullptr;
    std::shared_ptr<string> licenseId_ = nullptr;
    std::shared_ptr<int64_t> pageNo_ = nullptr;
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    std::shared_ptr<string> sortBy_ = nullptr;
    std::shared_ptr<string> startBeginTime_ = nullptr;
    std::shared_ptr<string> startExpiredOn_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
