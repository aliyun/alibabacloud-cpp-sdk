// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESOARSTRATEGYTASKRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESOARSTRATEGYTASKRESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeSoarStrategyTaskResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSoarStrategyTaskResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Condition, condition_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(StrategyTaskId, strategyTaskId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSoarStrategyTaskResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Condition, condition_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(StrategyTaskId, strategyTaskId_);
    };
    DescribeSoarStrategyTaskResultRequest() = default ;
    DescribeSoarStrategyTaskResultRequest(const DescribeSoarStrategyTaskResultRequest &) = default ;
    DescribeSoarStrategyTaskResultRequest(DescribeSoarStrategyTaskResultRequest &&) = default ;
    DescribeSoarStrategyTaskResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSoarStrategyTaskResultRequest() = default ;
    DescribeSoarStrategyTaskResultRequest& operator=(const DescribeSoarStrategyTaskResultRequest &) = default ;
    DescribeSoarStrategyTaskResultRequest& operator=(DescribeSoarStrategyTaskResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->condition_ == nullptr
        && return this->currentPage_ == nullptr && return this->pageSize_ == nullptr && return this->strategyTaskId_ == nullptr; };
    // condition Field Functions 
    bool hasCondition() const { return this->condition_ != nullptr;};
    void deleteCondition() { this->condition_ = nullptr;};
    inline string condition() const { DARABONBA_PTR_GET_DEFAULT(condition_, "") };
    inline DescribeSoarStrategyTaskResultRequest& setCondition(string condition) { DARABONBA_PTR_SET_VALUE(condition_, condition) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeSoarStrategyTaskResultRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeSoarStrategyTaskResultRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // strategyTaskId Field Functions 
    bool hasStrategyTaskId() const { return this->strategyTaskId_ != nullptr;};
    void deleteStrategyTaskId() { this->strategyTaskId_ = nullptr;};
    inline int64_t strategyTaskId() const { DARABONBA_PTR_GET_DEFAULT(strategyTaskId_, 0L) };
    inline DescribeSoarStrategyTaskResultRequest& setStrategyTaskId(int64_t strategyTaskId) { DARABONBA_PTR_SET_VALUE(strategyTaskId_, strategyTaskId) };


  protected:
    // Condition parameters for task scheduling.
    std::shared_ptr<string> condition_ = nullptr;
    // The current page number during paginated queries.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The maximum number of entries to display per page during paginated queries.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // Strategy task ID.
    // > You can obtain this parameter by calling the [DescribeSoarStrategyTasks](~~DescribeSoarStrategyTasks~~) interface.
    std::shared_ptr<int64_t> strategyTaskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
