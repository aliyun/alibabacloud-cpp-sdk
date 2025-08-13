// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYGOVERNANCEKUBERNETESCLUSTERRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYGOVERNANCEKUBERNETESCLUSTERRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryGovernanceKubernetesClusterResponseBodyDataResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class QueryGovernanceKubernetesClusterResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryGovernanceKubernetesClusterResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(TotalSize, totalSize_);
    };
    friend void from_json(const Darabonba::Json& j, QueryGovernanceKubernetesClusterResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(TotalSize, totalSize_);
    };
    QueryGovernanceKubernetesClusterResponseBodyData() = default ;
    QueryGovernanceKubernetesClusterResponseBodyData(const QueryGovernanceKubernetesClusterResponseBodyData &) = default ;
    QueryGovernanceKubernetesClusterResponseBodyData(QueryGovernanceKubernetesClusterResponseBodyData &&) = default ;
    QueryGovernanceKubernetesClusterResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryGovernanceKubernetesClusterResponseBodyData() = default ;
    QueryGovernanceKubernetesClusterResponseBodyData& operator=(const QueryGovernanceKubernetesClusterResponseBodyData &) = default ;
    QueryGovernanceKubernetesClusterResponseBodyData& operator=(QueryGovernanceKubernetesClusterResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageNumber_ != nullptr
        && this->pageSize_ != nullptr && this->result_ != nullptr && this->totalSize_ != nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline QueryGovernanceKubernetesClusterResponseBodyData& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryGovernanceKubernetesClusterResponseBodyData& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<Models::QueryGovernanceKubernetesClusterResponseBodyDataResult> & result() const { DARABONBA_PTR_GET_CONST(result_, vector<Models::QueryGovernanceKubernetesClusterResponseBodyDataResult>) };
    inline vector<Models::QueryGovernanceKubernetesClusterResponseBodyDataResult> result() { DARABONBA_PTR_GET(result_, vector<Models::QueryGovernanceKubernetesClusterResponseBodyDataResult>) };
    inline QueryGovernanceKubernetesClusterResponseBodyData& setResult(const vector<Models::QueryGovernanceKubernetesClusterResponseBodyDataResult> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline QueryGovernanceKubernetesClusterResponseBodyData& setResult(vector<Models::QueryGovernanceKubernetesClusterResponseBodyDataResult> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // totalSize Field Functions 
    bool hasTotalSize() const { return this->totalSize_ != nullptr;};
    void deleteTotalSize() { this->totalSize_ = nullptr;};
    inline int32_t totalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0) };
    inline QueryGovernanceKubernetesClusterResponseBodyData& setTotalSize(int32_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


  protected:
    // The page number of the returned page.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The details of the data.
    std::shared_ptr<vector<Models::QueryGovernanceKubernetesClusterResponseBodyDataResult>> result_ = nullptr;
    // The total number of clusters.
    std::shared_ptr<int32_t> totalSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
