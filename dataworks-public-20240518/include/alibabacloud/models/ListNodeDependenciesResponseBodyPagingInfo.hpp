// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNODEDEPENDENCIESRESPONSEBODYPAGINGINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTNODEDEPENDENCIESRESPONSEBODYPAGINGINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListNodeDependenciesResponseBodyPagingInfoNodes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListNodeDependenciesResponseBodyPagingInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNodeDependenciesResponseBodyPagingInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Nodes, nodes_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListNodeDependenciesResponseBodyPagingInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Nodes, nodes_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListNodeDependenciesResponseBodyPagingInfo() = default ;
    ListNodeDependenciesResponseBodyPagingInfo(const ListNodeDependenciesResponseBodyPagingInfo &) = default ;
    ListNodeDependenciesResponseBodyPagingInfo(ListNodeDependenciesResponseBodyPagingInfo &&) = default ;
    ListNodeDependenciesResponseBodyPagingInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNodeDependenciesResponseBodyPagingInfo() = default ;
    ListNodeDependenciesResponseBodyPagingInfo& operator=(const ListNodeDependenciesResponseBodyPagingInfo &) = default ;
    ListNodeDependenciesResponseBodyPagingInfo& operator=(ListNodeDependenciesResponseBodyPagingInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nodes_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->totalCount_ != nullptr; };
    // nodes Field Functions 
    bool hasNodes() const { return this->nodes_ != nullptr;};
    void deleteNodes() { this->nodes_ = nullptr;};
    inline const vector<Models::ListNodeDependenciesResponseBodyPagingInfoNodes> & nodes() const { DARABONBA_PTR_GET_CONST(nodes_, vector<Models::ListNodeDependenciesResponseBodyPagingInfoNodes>) };
    inline vector<Models::ListNodeDependenciesResponseBodyPagingInfoNodes> nodes() { DARABONBA_PTR_GET(nodes_, vector<Models::ListNodeDependenciesResponseBodyPagingInfoNodes>) };
    inline ListNodeDependenciesResponseBodyPagingInfo& setNodes(const vector<Models::ListNodeDependenciesResponseBodyPagingInfoNodes> & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
    inline ListNodeDependenciesResponseBodyPagingInfo& setNodes(vector<Models::ListNodeDependenciesResponseBodyPagingInfoNodes> && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline ListNodeDependenciesResponseBodyPagingInfo& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline ListNodeDependenciesResponseBodyPagingInfo& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline ListNodeDependenciesResponseBodyPagingInfo& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of dependent nodes.
    std::shared_ptr<vector<Models::ListNodeDependenciesResponseBodyPagingInfoNodes>> nodes_ = nullptr;
    // The page number.
    std::shared_ptr<string> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<string> pageSize_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<string> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
