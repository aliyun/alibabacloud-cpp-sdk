// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCUSTOMIZERULETESTRESULTRESPONSEBODYDATAPAGEINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTCUSTOMIZERULETESTRESULTRESPONSEBODYDATAPAGEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class ListCustomizeRuleTestResultResponseBodyDataPageInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCustomizeRuleTestResultResponseBodyDataPageInfo& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(VerifiedCount, verifiedCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListCustomizeRuleTestResultResponseBodyDataPageInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(VerifiedCount, verifiedCount_);
    };
    ListCustomizeRuleTestResultResponseBodyDataPageInfo() = default ;
    ListCustomizeRuleTestResultResponseBodyDataPageInfo(const ListCustomizeRuleTestResultResponseBodyDataPageInfo &) = default ;
    ListCustomizeRuleTestResultResponseBodyDataPageInfo(ListCustomizeRuleTestResultResponseBodyDataPageInfo &&) = default ;
    ListCustomizeRuleTestResultResponseBodyDataPageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCustomizeRuleTestResultResponseBodyDataPageInfo() = default ;
    ListCustomizeRuleTestResultResponseBodyDataPageInfo& operator=(const ListCustomizeRuleTestResultResponseBodyDataPageInfo &) = default ;
    ListCustomizeRuleTestResultResponseBodyDataPageInfo& operator=(ListCustomizeRuleTestResultResponseBodyDataPageInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->currentPage_ != nullptr
        && this->pageSize_ != nullptr && this->totalCount_ != nullptr && this->verifiedCount_ != nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListCustomizeRuleTestResultResponseBodyDataPageInfo& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListCustomizeRuleTestResultResponseBodyDataPageInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListCustomizeRuleTestResultResponseBodyDataPageInfo& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // verifiedCount Field Functions 
    bool hasVerifiedCount() const { return this->verifiedCount_ != nullptr;};
    void deleteVerifiedCount() { this->verifiedCount_ = nullptr;};
    inline int64_t verifiedCount() const { DARABONBA_PTR_GET_DEFAULT(verifiedCount_, 0L) };
    inline ListCustomizeRuleTestResultResponseBodyDataPageInfo& setVerifiedCount(int64_t verifiedCount) { DARABONBA_PTR_SET_VALUE(verifiedCount_, verifiedCount) };


  protected:
    // The current page number.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
    std::shared_ptr<int64_t> verifiedCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
