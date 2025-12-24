// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESOARTASKANDACTIONSRESPONSEBODYPAGE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESOARTASKANDACTIONSRESPONSEBODYPAGE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class DescribeSoarTaskAndActionsResponseBodyPage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSoarTaskAndActionsResponseBodyPage& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSoarTaskAndActionsResponseBodyPage& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeSoarTaskAndActionsResponseBodyPage() = default ;
    DescribeSoarTaskAndActionsResponseBodyPage(const DescribeSoarTaskAndActionsResponseBodyPage &) = default ;
    DescribeSoarTaskAndActionsResponseBodyPage(DescribeSoarTaskAndActionsResponseBodyPage &&) = default ;
    DescribeSoarTaskAndActionsResponseBodyPage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSoarTaskAndActionsResponseBodyPage() = default ;
    DescribeSoarTaskAndActionsResponseBodyPage& operator=(const DescribeSoarTaskAndActionsResponseBodyPage &) = default ;
    DescribeSoarTaskAndActionsResponseBodyPage& operator=(DescribeSoarTaskAndActionsResponseBodyPage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && return this->pageSize_ == nullptr && return this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline DescribeSoarTaskAndActionsResponseBodyPage& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeSoarTaskAndActionsResponseBodyPage& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline DescribeSoarTaskAndActionsResponseBodyPage& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<string> pageNumber_ = nullptr;
    std::shared_ptr<string> pageSize_ = nullptr;
    std::shared_ptr<string> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
