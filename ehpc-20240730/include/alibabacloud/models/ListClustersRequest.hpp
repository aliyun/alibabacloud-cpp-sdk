// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLUSTERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCLUSTERSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class ListClustersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClustersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterIds, clusterIds_);
      DARABONBA_PTR_TO_JSON(ClusterNames, clusterNames_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListClustersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterIds, clusterIds_);
      DARABONBA_PTR_FROM_JSON(ClusterNames, clusterNames_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListClustersRequest() = default ;
    ListClustersRequest(const ListClustersRequest &) = default ;
    ListClustersRequest(ListClustersRequest &&) = default ;
    ListClustersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClustersRequest() = default ;
    ListClustersRequest& operator=(const ListClustersRequest &) = default ;
    ListClustersRequest& operator=(ListClustersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterIds_ == nullptr
        && return this->clusterNames_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr; };
    // clusterIds Field Functions 
    bool hasClusterIds() const { return this->clusterIds_ != nullptr;};
    void deleteClusterIds() { this->clusterIds_ = nullptr;};
    inline const vector<string> & clusterIds() const { DARABONBA_PTR_GET_CONST(clusterIds_, vector<string>) };
    inline vector<string> clusterIds() { DARABONBA_PTR_GET(clusterIds_, vector<string>) };
    inline ListClustersRequest& setClusterIds(const vector<string> & clusterIds) { DARABONBA_PTR_SET_VALUE(clusterIds_, clusterIds) };
    inline ListClustersRequest& setClusterIds(vector<string> && clusterIds) { DARABONBA_PTR_SET_RVALUE(clusterIds_, clusterIds) };


    // clusterNames Field Functions 
    bool hasClusterNames() const { return this->clusterNames_ != nullptr;};
    void deleteClusterNames() { this->clusterNames_ = nullptr;};
    inline const vector<string> & clusterNames() const { DARABONBA_PTR_GET_CONST(clusterNames_, vector<string>) };
    inline vector<string> clusterNames() { DARABONBA_PTR_GET(clusterNames_, vector<string>) };
    inline ListClustersRequest& setClusterNames(const vector<string> & clusterNames) { DARABONBA_PTR_SET_VALUE(clusterNames_, clusterNames) };
    inline ListClustersRequest& setClusterNames(vector<string> && clusterNames) { DARABONBA_PTR_SET_RVALUE(clusterNames_, clusterNames) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListClustersRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListClustersRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The cluster IDs. You can specify up to 20 IDs.
    std::shared_ptr<vector<string>> clusterIds_ = nullptr;
    // The cluster names. You can specify up to 20 names.
    std::shared_ptr<vector<string>> clusterNames_ = nullptr;
    // The page number of the page to return. Default value: 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Valid values: 10 to 100. Default value: 10
    std::shared_ptr<int32_t> pageSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
