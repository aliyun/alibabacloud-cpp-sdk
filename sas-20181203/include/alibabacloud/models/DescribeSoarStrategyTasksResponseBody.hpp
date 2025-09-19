// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESOARSTRATEGYTASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESOARSTRATEGYTASKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSoarStrategyTasksResponseBodySoarStrategyTasks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeSoarStrategyTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSoarStrategyTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SoarStrategyTasks, soarStrategyTasks_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSoarStrategyTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SoarStrategyTasks, soarStrategyTasks_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeSoarStrategyTasksResponseBody() = default ;
    DescribeSoarStrategyTasksResponseBody(const DescribeSoarStrategyTasksResponseBody &) = default ;
    DescribeSoarStrategyTasksResponseBody(DescribeSoarStrategyTasksResponseBody &&) = default ;
    DescribeSoarStrategyTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSoarStrategyTasksResponseBody() = default ;
    DescribeSoarStrategyTasksResponseBody& operator=(const DescribeSoarStrategyTasksResponseBody &) = default ;
    DescribeSoarStrategyTasksResponseBody& operator=(DescribeSoarStrategyTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageNumber_ != nullptr
        && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->soarStrategyTasks_ != nullptr && this->totalCount_ != nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeSoarStrategyTasksResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeSoarStrategyTasksResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSoarStrategyTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // soarStrategyTasks Field Functions 
    bool hasSoarStrategyTasks() const { return this->soarStrategyTasks_ != nullptr;};
    void deleteSoarStrategyTasks() { this->soarStrategyTasks_ = nullptr;};
    inline const vector<DescribeSoarStrategyTasksResponseBodySoarStrategyTasks> & soarStrategyTasks() const { DARABONBA_PTR_GET_CONST(soarStrategyTasks_, vector<DescribeSoarStrategyTasksResponseBodySoarStrategyTasks>) };
    inline vector<DescribeSoarStrategyTasksResponseBodySoarStrategyTasks> soarStrategyTasks() { DARABONBA_PTR_GET(soarStrategyTasks_, vector<DescribeSoarStrategyTasksResponseBodySoarStrategyTasks>) };
    inline DescribeSoarStrategyTasksResponseBody& setSoarStrategyTasks(const vector<DescribeSoarStrategyTasksResponseBodySoarStrategyTasks> & soarStrategyTasks) { DARABONBA_PTR_SET_VALUE(soarStrategyTasks_, soarStrategyTasks) };
    inline DescribeSoarStrategyTasksResponseBody& setSoarStrategyTasks(vector<DescribeSoarStrategyTasksResponseBodySoarStrategyTasks> && soarStrategyTasks) { DARABONBA_PTR_SET_RVALUE(soarStrategyTasks_, soarStrategyTasks) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeSoarStrategyTasksResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number. Pages start from page 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The policy tasks.
    std::shared_ptr<vector<DescribeSoarStrategyTasksResponseBodySoarStrategyTasks>> soarStrategyTasks_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
