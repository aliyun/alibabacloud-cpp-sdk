// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHTRACESBYPAGERESPONSEBODYPAGEBEAN_HPP_
#define ALIBABACLOUD_MODELS_SEARCHTRACESBYPAGERESPONSEBODYPAGEBEAN_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SearchTracesByPageResponseBodyPageBeanTraceInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class SearchTracesByPageResponseBodyPageBean : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchTracesByPageResponseBodyPageBean& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Total, total_);
      DARABONBA_PTR_TO_JSON(TraceInfos, traceInfos_);
    };
    friend void from_json(const Darabonba::Json& j, SearchTracesByPageResponseBodyPageBean& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
      DARABONBA_PTR_FROM_JSON(TraceInfos, traceInfos_);
    };
    SearchTracesByPageResponseBodyPageBean() = default ;
    SearchTracesByPageResponseBodyPageBean(const SearchTracesByPageResponseBodyPageBean &) = default ;
    SearchTracesByPageResponseBodyPageBean(SearchTracesByPageResponseBodyPageBean &&) = default ;
    SearchTracesByPageResponseBodyPageBean(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchTracesByPageResponseBodyPageBean() = default ;
    SearchTracesByPageResponseBodyPageBean& operator=(const SearchTracesByPageResponseBodyPageBean &) = default ;
    SearchTracesByPageResponseBodyPageBean& operator=(SearchTracesByPageResponseBodyPageBean &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageNumber_ != nullptr
        && this->pageSize_ != nullptr && this->total_ != nullptr && this->traceInfos_ != nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline SearchTracesByPageResponseBodyPageBean& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline SearchTracesByPageResponseBodyPageBean& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline SearchTracesByPageResponseBodyPageBean& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    // traceInfos Field Functions 
    bool hasTraceInfos() const { return this->traceInfos_ != nullptr;};
    void deleteTraceInfos() { this->traceInfos_ = nullptr;};
    inline const vector<Models::SearchTracesByPageResponseBodyPageBeanTraceInfos> & traceInfos() const { DARABONBA_PTR_GET_CONST(traceInfos_, vector<Models::SearchTracesByPageResponseBodyPageBeanTraceInfos>) };
    inline vector<Models::SearchTracesByPageResponseBodyPageBeanTraceInfos> traceInfos() { DARABONBA_PTR_GET(traceInfos_, vector<Models::SearchTracesByPageResponseBodyPageBeanTraceInfos>) };
    inline SearchTracesByPageResponseBodyPageBean& setTraceInfos(const vector<Models::SearchTracesByPageResponseBodyPageBeanTraceInfos> & traceInfos) { DARABONBA_PTR_SET_VALUE(traceInfos_, traceInfos) };
    inline SearchTracesByPageResponseBodyPageBean& setTraceInfos(vector<Models::SearchTracesByPageResponseBodyPageBeanTraceInfos> && traceInfos) { DARABONBA_PTR_SET_RVALUE(traceInfos_, traceInfos) };


  protected:
    // The page number of the returned page.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The total number of returned entries.
    std::shared_ptr<int32_t> total_ = nullptr;
    // The details of the returned traces.
    std::shared_ptr<vector<Models::SearchTracesByPageResponseBodyPageBeanTraceInfos>> traceInfos_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
