// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHTRACEAPPBYPAGERESPONSEBODYPAGEBEAN_HPP_
#define ALIBABACLOUD_MODELS_SEARCHTRACEAPPBYPAGERESPONSEBODYPAGEBEAN_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SearchTraceAppByPageResponseBodyPageBeanTraceApps.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class SearchTraceAppByPageResponseBodyPageBean : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchTraceAppByPageResponseBodyPageBean& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TraceApps, traceApps_);
    };
    friend void from_json(const Darabonba::Json& j, SearchTraceAppByPageResponseBodyPageBean& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TraceApps, traceApps_);
    };
    SearchTraceAppByPageResponseBodyPageBean() = default ;
    SearchTraceAppByPageResponseBodyPageBean(const SearchTraceAppByPageResponseBodyPageBean &) = default ;
    SearchTraceAppByPageResponseBodyPageBean(SearchTraceAppByPageResponseBodyPageBean &&) = default ;
    SearchTraceAppByPageResponseBodyPageBean(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchTraceAppByPageResponseBodyPageBean() = default ;
    SearchTraceAppByPageResponseBodyPageBean& operator=(const SearchTraceAppByPageResponseBodyPageBean &) = default ;
    SearchTraceAppByPageResponseBodyPageBean& operator=(SearchTraceAppByPageResponseBodyPageBean &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageNumber_ != nullptr
        && this->pageSize_ != nullptr && this->totalCount_ != nullptr && this->traceApps_ != nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline SearchTraceAppByPageResponseBodyPageBean& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline SearchTraceAppByPageResponseBodyPageBean& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline SearchTraceAppByPageResponseBodyPageBean& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // traceApps Field Functions 
    bool hasTraceApps() const { return this->traceApps_ != nullptr;};
    void deleteTraceApps() { this->traceApps_ = nullptr;};
    inline const vector<Models::SearchTraceAppByPageResponseBodyPageBeanTraceApps> & traceApps() const { DARABONBA_PTR_GET_CONST(traceApps_, vector<Models::SearchTraceAppByPageResponseBodyPageBeanTraceApps>) };
    inline vector<Models::SearchTraceAppByPageResponseBodyPageBeanTraceApps> traceApps() { DARABONBA_PTR_GET(traceApps_, vector<Models::SearchTraceAppByPageResponseBodyPageBeanTraceApps>) };
    inline SearchTraceAppByPageResponseBodyPageBean& setTraceApps(const vector<Models::SearchTraceAppByPageResponseBodyPageBeanTraceApps> & traceApps) { DARABONBA_PTR_SET_VALUE(traceApps_, traceApps) };
    inline SearchTraceAppByPageResponseBodyPageBean& setTraceApps(vector<Models::SearchTraceAppByPageResponseBodyPageBeanTraceApps> && traceApps) { DARABONBA_PTR_SET_RVALUE(traceApps_, traceApps) };


  protected:
    // The page number of the returned page.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    // The information about the monitoring task.
    std::shared_ptr<vector<Models::SearchTraceAppByPageResponseBodyPageBeanTraceApps>> traceApps_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
