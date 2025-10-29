// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDEPLOYMENTPACKAGESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTDEPLOYMENTPACKAGESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDeploymentPackagesResponseBodyDataDeployments.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListDeploymentPackagesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDeploymentPackagesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Deployments, deployments_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDeploymentPackagesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Deployments, deployments_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListDeploymentPackagesResponseBodyData() = default ;
    ListDeploymentPackagesResponseBodyData(const ListDeploymentPackagesResponseBodyData &) = default ;
    ListDeploymentPackagesResponseBodyData(ListDeploymentPackagesResponseBodyData &&) = default ;
    ListDeploymentPackagesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDeploymentPackagesResponseBodyData() = default ;
    ListDeploymentPackagesResponseBodyData& operator=(const ListDeploymentPackagesResponseBodyData &) = default ;
    ListDeploymentPackagesResponseBodyData& operator=(ListDeploymentPackagesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deployments_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->totalCount_ == nullptr; };
    // deployments Field Functions 
    bool hasDeployments() const { return this->deployments_ != nullptr;};
    void deleteDeployments() { this->deployments_ = nullptr;};
    inline const vector<Models::ListDeploymentPackagesResponseBodyDataDeployments> & deployments() const { DARABONBA_PTR_GET_CONST(deployments_, vector<Models::ListDeploymentPackagesResponseBodyDataDeployments>) };
    inline vector<Models::ListDeploymentPackagesResponseBodyDataDeployments> deployments() { DARABONBA_PTR_GET(deployments_, vector<Models::ListDeploymentPackagesResponseBodyDataDeployments>) };
    inline ListDeploymentPackagesResponseBodyData& setDeployments(const vector<Models::ListDeploymentPackagesResponseBodyDataDeployments> & deployments) { DARABONBA_PTR_SET_VALUE(deployments_, deployments) };
    inline ListDeploymentPackagesResponseBodyData& setDeployments(vector<Models::ListDeploymentPackagesResponseBodyDataDeployments> && deployments) { DARABONBA_PTR_SET_RVALUE(deployments_, deployments) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListDeploymentPackagesResponseBodyData& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListDeploymentPackagesResponseBodyData& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListDeploymentPackagesResponseBodyData& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The returned list of deployment packages.
    std::shared_ptr<vector<Models::ListDeploymentPackagesResponseBodyDataDeployments>> deployments_ = nullptr;
    // The page number.
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    // The number of records per page.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The total number of records that meet the conditions.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
