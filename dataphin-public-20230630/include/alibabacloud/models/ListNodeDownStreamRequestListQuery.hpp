// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNODEDOWNSTREAMREQUESTLISTQUERY_HPP_
#define ALIBABACLOUD_MODELS_LISTNODEDOWNSTREAMREQUESTLISTQUERY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListNodeDownStreamRequestListQueryFilterList.hpp>
#include <alibabacloud/models/ListNodeDownStreamRequestListQueryNodeIdList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListNodeDownStreamRequestListQuery : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNodeDownStreamRequestListQuery& obj) { 
      DARABONBA_PTR_TO_JSON(DownStreamDepth, downStreamDepth_);
      DARABONBA_PTR_TO_JSON(FilterList, filterList_);
      DARABONBA_PTR_TO_JSON(NodeIdList, nodeIdList_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, ListNodeDownStreamRequestListQuery& obj) { 
      DARABONBA_PTR_FROM_JSON(DownStreamDepth, downStreamDepth_);
      DARABONBA_PTR_FROM_JSON(FilterList, filterList_);
      DARABONBA_PTR_FROM_JSON(NodeIdList, nodeIdList_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
    };
    ListNodeDownStreamRequestListQuery() = default ;
    ListNodeDownStreamRequestListQuery(const ListNodeDownStreamRequestListQuery &) = default ;
    ListNodeDownStreamRequestListQuery(ListNodeDownStreamRequestListQuery &&) = default ;
    ListNodeDownStreamRequestListQuery(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNodeDownStreamRequestListQuery() = default ;
    ListNodeDownStreamRequestListQuery& operator=(const ListNodeDownStreamRequestListQuery &) = default ;
    ListNodeDownStreamRequestListQuery& operator=(ListNodeDownStreamRequestListQuery &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->downStreamDepth_ != nullptr
        && this->filterList_ != nullptr && this->nodeIdList_ != nullptr && this->projectId_ != nullptr; };
    // downStreamDepth Field Functions 
    bool hasDownStreamDepth() const { return this->downStreamDepth_ != nullptr;};
    void deleteDownStreamDepth() { this->downStreamDepth_ = nullptr;};
    inline int32_t downStreamDepth() const { DARABONBA_PTR_GET_DEFAULT(downStreamDepth_, 0) };
    inline ListNodeDownStreamRequestListQuery& setDownStreamDepth(int32_t downStreamDepth) { DARABONBA_PTR_SET_VALUE(downStreamDepth_, downStreamDepth) };


    // filterList Field Functions 
    bool hasFilterList() const { return this->filterList_ != nullptr;};
    void deleteFilterList() { this->filterList_ = nullptr;};
    inline const vector<Models::ListNodeDownStreamRequestListQueryFilterList> & filterList() const { DARABONBA_PTR_GET_CONST(filterList_, vector<Models::ListNodeDownStreamRequestListQueryFilterList>) };
    inline vector<Models::ListNodeDownStreamRequestListQueryFilterList> filterList() { DARABONBA_PTR_GET(filterList_, vector<Models::ListNodeDownStreamRequestListQueryFilterList>) };
    inline ListNodeDownStreamRequestListQuery& setFilterList(const vector<Models::ListNodeDownStreamRequestListQueryFilterList> & filterList) { DARABONBA_PTR_SET_VALUE(filterList_, filterList) };
    inline ListNodeDownStreamRequestListQuery& setFilterList(vector<Models::ListNodeDownStreamRequestListQueryFilterList> && filterList) { DARABONBA_PTR_SET_RVALUE(filterList_, filterList) };


    // nodeIdList Field Functions 
    bool hasNodeIdList() const { return this->nodeIdList_ != nullptr;};
    void deleteNodeIdList() { this->nodeIdList_ = nullptr;};
    inline const vector<Models::ListNodeDownStreamRequestListQueryNodeIdList> & nodeIdList() const { DARABONBA_PTR_GET_CONST(nodeIdList_, vector<Models::ListNodeDownStreamRequestListQueryNodeIdList>) };
    inline vector<Models::ListNodeDownStreamRequestListQueryNodeIdList> nodeIdList() { DARABONBA_PTR_GET(nodeIdList_, vector<Models::ListNodeDownStreamRequestListQueryNodeIdList>) };
    inline ListNodeDownStreamRequestListQuery& setNodeIdList(const vector<Models::ListNodeDownStreamRequestListQueryNodeIdList> & nodeIdList) { DARABONBA_PTR_SET_VALUE(nodeIdList_, nodeIdList) };
    inline ListNodeDownStreamRequestListQuery& setNodeIdList(vector<Models::ListNodeDownStreamRequestListQueryNodeIdList> && nodeIdList) { DARABONBA_PTR_SET_RVALUE(nodeIdList_, nodeIdList) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ListNodeDownStreamRequestListQuery& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    std::shared_ptr<int32_t> downStreamDepth_ = nullptr;
    std::shared_ptr<vector<Models::ListNodeDownStreamRequestListQueryFilterList>> filterList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<Models::ListNodeDownStreamRequestListQueryNodeIdList>> nodeIdList_ = nullptr;
    std::shared_ptr<int64_t> projectId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
