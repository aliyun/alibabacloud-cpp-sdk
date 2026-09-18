// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTATTACKTARGETSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTATTACKTARGETSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AISC20260101
{
namespace Models
{
  class ListAttackTargetsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAttackTargetsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FirstScanTimeEnd, firstScanTimeEnd_);
      DARABONBA_PTR_TO_JSON(FirstScanTimeStart, firstScanTimeStart_);
      DARABONBA_PTR_TO_JSON(LastScanStatus, lastScanStatus_);
      DARABONBA_PTR_TO_JSON(LastScanTimeEnd, lastScanTimeEnd_);
      DARABONBA_PTR_TO_JSON(LastScanTimeStart, lastScanTimeStart_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Provider, provider_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_TO_JSON(SortField, sortField_);
      DARABONBA_PTR_TO_JSON(SortOrder, sortOrder_);
      DARABONBA_PTR_TO_JSON(TargetName, targetName_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
    };
    friend void from_json(const Darabonba::Json& j, ListAttackTargetsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FirstScanTimeEnd, firstScanTimeEnd_);
      DARABONBA_PTR_FROM_JSON(FirstScanTimeStart, firstScanTimeStart_);
      DARABONBA_PTR_FROM_JSON(LastScanStatus, lastScanStatus_);
      DARABONBA_PTR_FROM_JSON(LastScanTimeEnd, lastScanTimeEnd_);
      DARABONBA_PTR_FROM_JSON(LastScanTimeStart, lastScanTimeStart_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Provider, provider_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_FROM_JSON(SortField, sortField_);
      DARABONBA_PTR_FROM_JSON(SortOrder, sortOrder_);
      DARABONBA_PTR_FROM_JSON(TargetName, targetName_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
    };
    ListAttackTargetsRequest() = default ;
    ListAttackTargetsRequest(const ListAttackTargetsRequest &) = default ;
    ListAttackTargetsRequest(ListAttackTargetsRequest &&) = default ;
    ListAttackTargetsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAttackTargetsRequest() = default ;
    ListAttackTargetsRequest& operator=(const ListAttackTargetsRequest &) = default ;
    ListAttackTargetsRequest& operator=(ListAttackTargetsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->firstScanTimeEnd_ == nullptr
        && this->firstScanTimeStart_ == nullptr && this->lastScanStatus_ == nullptr && this->lastScanTimeEnd_ == nullptr && this->lastScanTimeStart_ == nullptr && this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->provider_ == nullptr && this->riskLevel_ == nullptr && this->sortField_ == nullptr && this->sortOrder_ == nullptr
        && this->targetName_ == nullptr && this->targetType_ == nullptr; };
    // firstScanTimeEnd Field Functions 
    bool hasFirstScanTimeEnd() const { return this->firstScanTimeEnd_ != nullptr;};
    void deleteFirstScanTimeEnd() { this->firstScanTimeEnd_ = nullptr;};
    inline string getFirstScanTimeEnd() const { DARABONBA_PTR_GET_DEFAULT(firstScanTimeEnd_, "") };
    inline ListAttackTargetsRequest& setFirstScanTimeEnd(string firstScanTimeEnd) { DARABONBA_PTR_SET_VALUE(firstScanTimeEnd_, firstScanTimeEnd) };


    // firstScanTimeStart Field Functions 
    bool hasFirstScanTimeStart() const { return this->firstScanTimeStart_ != nullptr;};
    void deleteFirstScanTimeStart() { this->firstScanTimeStart_ = nullptr;};
    inline string getFirstScanTimeStart() const { DARABONBA_PTR_GET_DEFAULT(firstScanTimeStart_, "") };
    inline ListAttackTargetsRequest& setFirstScanTimeStart(string firstScanTimeStart) { DARABONBA_PTR_SET_VALUE(firstScanTimeStart_, firstScanTimeStart) };


    // lastScanStatus Field Functions 
    bool hasLastScanStatus() const { return this->lastScanStatus_ != nullptr;};
    void deleteLastScanStatus() { this->lastScanStatus_ = nullptr;};
    inline string getLastScanStatus() const { DARABONBA_PTR_GET_DEFAULT(lastScanStatus_, "") };
    inline ListAttackTargetsRequest& setLastScanStatus(string lastScanStatus) { DARABONBA_PTR_SET_VALUE(lastScanStatus_, lastScanStatus) };


    // lastScanTimeEnd Field Functions 
    bool hasLastScanTimeEnd() const { return this->lastScanTimeEnd_ != nullptr;};
    void deleteLastScanTimeEnd() { this->lastScanTimeEnd_ = nullptr;};
    inline string getLastScanTimeEnd() const { DARABONBA_PTR_GET_DEFAULT(lastScanTimeEnd_, "") };
    inline ListAttackTargetsRequest& setLastScanTimeEnd(string lastScanTimeEnd) { DARABONBA_PTR_SET_VALUE(lastScanTimeEnd_, lastScanTimeEnd) };


    // lastScanTimeStart Field Functions 
    bool hasLastScanTimeStart() const { return this->lastScanTimeStart_ != nullptr;};
    void deleteLastScanTimeStart() { this->lastScanTimeStart_ = nullptr;};
    inline string getLastScanTimeStart() const { DARABONBA_PTR_GET_DEFAULT(lastScanTimeStart_, "") };
    inline ListAttackTargetsRequest& setLastScanTimeStart(string lastScanTimeStart) { DARABONBA_PTR_SET_VALUE(lastScanTimeStart_, lastScanTimeStart) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListAttackTargetsRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListAttackTargetsRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // provider Field Functions 
    bool hasProvider() const { return this->provider_ != nullptr;};
    void deleteProvider() { this->provider_ = nullptr;};
    inline string getProvider() const { DARABONBA_PTR_GET_DEFAULT(provider_, "") };
    inline ListAttackTargetsRequest& setProvider(string provider) { DARABONBA_PTR_SET_VALUE(provider_, provider) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
    inline ListAttackTargetsRequest& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // sortField Field Functions 
    bool hasSortField() const { return this->sortField_ != nullptr;};
    void deleteSortField() { this->sortField_ = nullptr;};
    inline string getSortField() const { DARABONBA_PTR_GET_DEFAULT(sortField_, "") };
    inline ListAttackTargetsRequest& setSortField(string sortField) { DARABONBA_PTR_SET_VALUE(sortField_, sortField) };


    // sortOrder Field Functions 
    bool hasSortOrder() const { return this->sortOrder_ != nullptr;};
    void deleteSortOrder() { this->sortOrder_ = nullptr;};
    inline string getSortOrder() const { DARABONBA_PTR_GET_DEFAULT(sortOrder_, "") };
    inline ListAttackTargetsRequest& setSortOrder(string sortOrder) { DARABONBA_PTR_SET_VALUE(sortOrder_, sortOrder) };


    // targetName Field Functions 
    bool hasTargetName() const { return this->targetName_ != nullptr;};
    void deleteTargetName() { this->targetName_ = nullptr;};
    inline string getTargetName() const { DARABONBA_PTR_GET_DEFAULT(targetName_, "") };
    inline ListAttackTargetsRequest& setTargetName(string targetName) { DARABONBA_PTR_SET_VALUE(targetName_, targetName) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline ListAttackTargetsRequest& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


  protected:
    // The upper bound (inclusive) of the first scan time range. The value is a UNIX timestamp in milliseconds.
    shared_ptr<string> firstScanTimeEnd_ {};
    // The lower bound (inclusive) of the first scan time range. The value is a UNIX timestamp in milliseconds.
    shared_ptr<string> firstScanTimeStart_ {};
    // Filters targets by the status of the most recent scan task.
    shared_ptr<string> lastScanStatus_ {};
    // The upper bound (inclusive) of the last scan time range. The value is a UNIX timestamp in milliseconds.
    shared_ptr<string> lastScanTimeEnd_ {};
    // The lower bound (inclusive) of the last scan time range. The value is a UNIX timestamp in milliseconds.
    shared_ptr<string> lastScanTimeStart_ {};
    // The page number. Pages start from 1. Values less than 1 are normalized to 1.
    // 
    // This parameter is required.
    shared_ptr<int64_t> pageNumber_ {};
    // The number of entries per page. Default value: 10. Maximum value: 100. Values greater than 100 are clamped to 100. Values less than 1 return HTTP status code 400.
    // 
    // This parameter is required.
    shared_ptr<int64_t> pageSize_ {};
    // Filters targets by the exact business label of the model or agent provider. This parameter is decoupled from ConnectionMethod (technical protocol).
    shared_ptr<string> provider_ {};
    // Filters targets by the risk level derived from the most recent completed scan task. Targets that have never been scanned do not have a risk level and are not matched by any value.
    shared_ptr<string> riskLevel_ {};
    // The field used for sorting. Only the following three aggregate fields are supported. Sorting is performed in memory. If this parameter is not specified, no additional sorting is applied.
    shared_ptr<string> sortField_ {};
    // The sort order. Targets with null aggregate values are always placed last regardless of the sort order.
    shared_ptr<string> sortOrder_ {};
    // Filters targets by name using fuzzy match (substring match). If this parameter is not specified, all targets are returned.
    shared_ptr<string> targetName_ {};
    // Filters targets by the exact scan target type.
    shared_ptr<string> targetType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AISC20260101
#endif
