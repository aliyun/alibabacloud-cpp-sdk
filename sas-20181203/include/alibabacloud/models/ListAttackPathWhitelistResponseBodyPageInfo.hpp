// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTATTACKPATHWHITELISTRESPONSEBODYPAGEINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTATTACKPATHWHITELISTRESPONSEBODYPAGEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListAttackPathWhitelistResponseBodyPageInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAttackPathWhitelistResponseBodyPageInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListAttackPathWhitelistResponseBodyPageInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListAttackPathWhitelistResponseBodyPageInfo() = default ;
    ListAttackPathWhitelistResponseBodyPageInfo(const ListAttackPathWhitelistResponseBodyPageInfo &) = default ;
    ListAttackPathWhitelistResponseBodyPageInfo(ListAttackPathWhitelistResponseBodyPageInfo &&) = default ;
    ListAttackPathWhitelistResponseBodyPageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAttackPathWhitelistResponseBodyPageInfo() = default ;
    ListAttackPathWhitelistResponseBodyPageInfo& operator=(const ListAttackPathWhitelistResponseBodyPageInfo &) = default ;
    ListAttackPathWhitelistResponseBodyPageInfo& operator=(ListAttackPathWhitelistResponseBodyPageInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->count_ == nullptr
        && return this->currentPage_ == nullptr && return this->pageSize_ == nullptr && return this->totalCount_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline ListAttackPathWhitelistResponseBodyPageInfo& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListAttackPathWhitelistResponseBodyPageInfo& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAttackPathWhitelistResponseBodyPageInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListAttackPathWhitelistResponseBodyPageInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Number of items displayed on the current page in a paginated query.
    std::shared_ptr<int32_t> count_ = nullptr;
    // Current page number in a paginated query.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // Number of items per page in the returned data.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // Total number of items.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
