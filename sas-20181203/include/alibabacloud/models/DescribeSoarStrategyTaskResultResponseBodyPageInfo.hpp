// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESOARSTRATEGYTASKRESULTRESPONSEBODYPAGEINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESOARSTRATEGYTASKRESULTRESPONSEBODYPAGEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeSoarStrategyTaskResultResponseBodyPageInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSoarStrategyTaskResultResponseBodyPageInfo& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSoarStrategyTaskResultResponseBodyPageInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeSoarStrategyTaskResultResponseBodyPageInfo() = default ;
    DescribeSoarStrategyTaskResultResponseBodyPageInfo(const DescribeSoarStrategyTaskResultResponseBodyPageInfo &) = default ;
    DescribeSoarStrategyTaskResultResponseBodyPageInfo(DescribeSoarStrategyTaskResultResponseBodyPageInfo &&) = default ;
    DescribeSoarStrategyTaskResultResponseBodyPageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSoarStrategyTaskResultResponseBodyPageInfo() = default ;
    DescribeSoarStrategyTaskResultResponseBodyPageInfo& operator=(const DescribeSoarStrategyTaskResultResponseBodyPageInfo &) = default ;
    DescribeSoarStrategyTaskResultResponseBodyPageInfo& operator=(DescribeSoarStrategyTaskResultResponseBodyPageInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && return this->pageSize_ == nullptr && return this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeSoarStrategyTaskResultResponseBodyPageInfo& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeSoarStrategyTaskResultResponseBodyPageInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeSoarStrategyTaskResultResponseBodyPageInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The current page number during paginated queries.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The maximum number of entries to display per page during paginated queries.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // 总条数。
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
