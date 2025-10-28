// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLUSTERMEMBERSRESPONSEBODYCLUSTERMEMBERPAGE_HPP_
#define ALIBABACLOUD_MODELS_LISTCLUSTERMEMBERSRESPONSEBODYCLUSTERMEMBERPAGE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListClusterMembersResponseBodyClusterMemberPageClusterMemberList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListClusterMembersResponseBodyClusterMemberPage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClusterMembersResponseBodyClusterMemberPage& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterMemberList, clusterMemberList_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalSize, totalSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListClusterMembersResponseBodyClusterMemberPage& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterMemberList, clusterMemberList_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalSize, totalSize_);
    };
    ListClusterMembersResponseBodyClusterMemberPage() = default ;
    ListClusterMembersResponseBodyClusterMemberPage(const ListClusterMembersResponseBodyClusterMemberPage &) = default ;
    ListClusterMembersResponseBodyClusterMemberPage(ListClusterMembersResponseBodyClusterMemberPage &&) = default ;
    ListClusterMembersResponseBodyClusterMemberPage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClusterMembersResponseBodyClusterMemberPage() = default ;
    ListClusterMembersResponseBodyClusterMemberPage& operator=(const ListClusterMembersResponseBodyClusterMemberPage &) = default ;
    ListClusterMembersResponseBodyClusterMemberPage& operator=(ListClusterMembersResponseBodyClusterMemberPage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterMemberList_ == nullptr
        && return this->currentPage_ == nullptr && return this->pageSize_ == nullptr && return this->totalSize_ == nullptr; };
    // clusterMemberList Field Functions 
    bool hasClusterMemberList() const { return this->clusterMemberList_ != nullptr;};
    void deleteClusterMemberList() { this->clusterMemberList_ = nullptr;};
    inline const Models::ListClusterMembersResponseBodyClusterMemberPageClusterMemberList & clusterMemberList() const { DARABONBA_PTR_GET_CONST(clusterMemberList_, Models::ListClusterMembersResponseBodyClusterMemberPageClusterMemberList) };
    inline Models::ListClusterMembersResponseBodyClusterMemberPageClusterMemberList clusterMemberList() { DARABONBA_PTR_GET(clusterMemberList_, Models::ListClusterMembersResponseBodyClusterMemberPageClusterMemberList) };
    inline ListClusterMembersResponseBodyClusterMemberPage& setClusterMemberList(const Models::ListClusterMembersResponseBodyClusterMemberPageClusterMemberList & clusterMemberList) { DARABONBA_PTR_SET_VALUE(clusterMemberList_, clusterMemberList) };
    inline ListClusterMembersResponseBodyClusterMemberPage& setClusterMemberList(Models::ListClusterMembersResponseBodyClusterMemberPageClusterMemberList && clusterMemberList) { DARABONBA_PTR_SET_RVALUE(clusterMemberList_, clusterMemberList) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListClusterMembersResponseBodyClusterMemberPage& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListClusterMembersResponseBodyClusterMemberPage& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalSize Field Functions 
    bool hasTotalSize() const { return this->totalSize_ != nullptr;};
    void deleteTotalSize() { this->totalSize_ = nullptr;};
    inline int32_t totalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0) };
    inline ListClusterMembersResponseBodyClusterMemberPage& setTotalSize(int32_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


  protected:
    // The list of ECS instances in the cluster.
    std::shared_ptr<Models::ListClusterMembersResponseBodyClusterMemberPageClusterMemberList> clusterMemberList_ = nullptr;
    // The page number of the returned page. If this parameter is not returned, the first page is returned.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The number of ECS instances returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The total number of pages returned when all ECS instances are returned based on the specified PageSize parameter.
    std::shared_ptr<int32_t> totalSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
