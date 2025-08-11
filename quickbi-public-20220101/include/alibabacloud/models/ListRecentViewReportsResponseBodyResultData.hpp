// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRECENTVIEWREPORTSRESPONSEBODYRESULTDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTRECENTVIEWREPORTSRESPONSEBODYRESULTDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class ListRecentViewReportsResponseBodyResultData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRecentViewReportsResponseBodyResultData& obj) { 
      DARABONBA_PTR_TO_JSON(Favorite, favorite_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(HasEditAuth, hasEditAuth_);
      DARABONBA_PTR_TO_JSON(HasViewAuth, hasViewAuth_);
      DARABONBA_PTR_TO_JSON(LatestViewTime, latestViewTime_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OwnerName, ownerName_);
      DARABONBA_PTR_TO_JSON(OwnerNum, ownerNum_);
      DARABONBA_PTR_TO_JSON(PublishStatus, publishStatus_);
      DARABONBA_PTR_TO_JSON(TreeId, treeId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(ViewCount, viewCount_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_TO_JSON(WorkspaceName, workspaceName_);
    };
    friend void from_json(const Darabonba::Json& j, ListRecentViewReportsResponseBodyResultData& obj) { 
      DARABONBA_PTR_FROM_JSON(Favorite, favorite_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(HasEditAuth, hasEditAuth_);
      DARABONBA_PTR_FROM_JSON(HasViewAuth, hasViewAuth_);
      DARABONBA_PTR_FROM_JSON(LatestViewTime, latestViewTime_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OwnerName, ownerName_);
      DARABONBA_PTR_FROM_JSON(OwnerNum, ownerNum_);
      DARABONBA_PTR_FROM_JSON(PublishStatus, publishStatus_);
      DARABONBA_PTR_FROM_JSON(TreeId, treeId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(ViewCount, viewCount_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceName, workspaceName_);
    };
    ListRecentViewReportsResponseBodyResultData() = default ;
    ListRecentViewReportsResponseBodyResultData(const ListRecentViewReportsResponseBodyResultData &) = default ;
    ListRecentViewReportsResponseBodyResultData(ListRecentViewReportsResponseBodyResultData &&) = default ;
    ListRecentViewReportsResponseBodyResultData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRecentViewReportsResponseBodyResultData() = default ;
    ListRecentViewReportsResponseBodyResultData& operator=(const ListRecentViewReportsResponseBodyResultData &) = default ;
    ListRecentViewReportsResponseBodyResultData& operator=(ListRecentViewReportsResponseBodyResultData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->favorite_ != nullptr
        && this->gmtCreate_ != nullptr && this->gmtModified_ != nullptr && this->hasEditAuth_ != nullptr && this->hasViewAuth_ != nullptr && this->latestViewTime_ != nullptr
        && this->name_ != nullptr && this->ownerName_ != nullptr && this->ownerNum_ != nullptr && this->publishStatus_ != nullptr && this->treeId_ != nullptr
        && this->type_ != nullptr && this->viewCount_ != nullptr && this->workspaceId_ != nullptr && this->workspaceName_ != nullptr; };
    // favorite Field Functions 
    bool hasFavorite() const { return this->favorite_ != nullptr;};
    void deleteFavorite() { this->favorite_ = nullptr;};
    inline bool favorite() const { DARABONBA_PTR_GET_DEFAULT(favorite_, false) };
    inline ListRecentViewReportsResponseBodyResultData& setFavorite(bool favorite) { DARABONBA_PTR_SET_VALUE(favorite_, favorite) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline ListRecentViewReportsResponseBodyResultData& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline ListRecentViewReportsResponseBodyResultData& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // hasEditAuth Field Functions 
    bool hasHasEditAuth() const { return this->hasEditAuth_ != nullptr;};
    void deleteHasEditAuth() { this->hasEditAuth_ = nullptr;};
    inline bool hasEditAuth() const { DARABONBA_PTR_GET_DEFAULT(hasEditAuth_, false) };
    inline ListRecentViewReportsResponseBodyResultData& setHasEditAuth(bool hasEditAuth) { DARABONBA_PTR_SET_VALUE(hasEditAuth_, hasEditAuth) };


    // hasViewAuth Field Functions 
    bool hasHasViewAuth() const { return this->hasViewAuth_ != nullptr;};
    void deleteHasViewAuth() { this->hasViewAuth_ = nullptr;};
    inline bool hasViewAuth() const { DARABONBA_PTR_GET_DEFAULT(hasViewAuth_, false) };
    inline ListRecentViewReportsResponseBodyResultData& setHasViewAuth(bool hasViewAuth) { DARABONBA_PTR_SET_VALUE(hasViewAuth_, hasViewAuth) };


    // latestViewTime Field Functions 
    bool hasLatestViewTime() const { return this->latestViewTime_ != nullptr;};
    void deleteLatestViewTime() { this->latestViewTime_ = nullptr;};
    inline string latestViewTime() const { DARABONBA_PTR_GET_DEFAULT(latestViewTime_, "") };
    inline ListRecentViewReportsResponseBodyResultData& setLatestViewTime(string latestViewTime) { DARABONBA_PTR_SET_VALUE(latestViewTime_, latestViewTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListRecentViewReportsResponseBodyResultData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ownerName Field Functions 
    bool hasOwnerName() const { return this->ownerName_ != nullptr;};
    void deleteOwnerName() { this->ownerName_ = nullptr;};
    inline string ownerName() const { DARABONBA_PTR_GET_DEFAULT(ownerName_, "") };
    inline ListRecentViewReportsResponseBodyResultData& setOwnerName(string ownerName) { DARABONBA_PTR_SET_VALUE(ownerName_, ownerName) };


    // ownerNum Field Functions 
    bool hasOwnerNum() const { return this->ownerNum_ != nullptr;};
    void deleteOwnerNum() { this->ownerNum_ = nullptr;};
    inline string ownerNum() const { DARABONBA_PTR_GET_DEFAULT(ownerNum_, "") };
    inline ListRecentViewReportsResponseBodyResultData& setOwnerNum(string ownerNum) { DARABONBA_PTR_SET_VALUE(ownerNum_, ownerNum) };


    // publishStatus Field Functions 
    bool hasPublishStatus() const { return this->publishStatus_ != nullptr;};
    void deletePublishStatus() { this->publishStatus_ = nullptr;};
    inline int32_t publishStatus() const { DARABONBA_PTR_GET_DEFAULT(publishStatus_, 0) };
    inline ListRecentViewReportsResponseBodyResultData& setPublishStatus(int32_t publishStatus) { DARABONBA_PTR_SET_VALUE(publishStatus_, publishStatus) };


    // treeId Field Functions 
    bool hasTreeId() const { return this->treeId_ != nullptr;};
    void deleteTreeId() { this->treeId_ = nullptr;};
    inline string treeId() const { DARABONBA_PTR_GET_DEFAULT(treeId_, "") };
    inline ListRecentViewReportsResponseBodyResultData& setTreeId(string treeId) { DARABONBA_PTR_SET_VALUE(treeId_, treeId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListRecentViewReportsResponseBodyResultData& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // viewCount Field Functions 
    bool hasViewCount() const { return this->viewCount_ != nullptr;};
    void deleteViewCount() { this->viewCount_ = nullptr;};
    inline int64_t viewCount() const { DARABONBA_PTR_GET_DEFAULT(viewCount_, 0L) };
    inline ListRecentViewReportsResponseBodyResultData& setViewCount(int64_t viewCount) { DARABONBA_PTR_SET_VALUE(viewCount_, viewCount) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ListRecentViewReportsResponseBodyResultData& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    // workspaceName Field Functions 
    bool hasWorkspaceName() const { return this->workspaceName_ != nullptr;};
    void deleteWorkspaceName() { this->workspaceName_ = nullptr;};
    inline string workspaceName() const { DARABONBA_PTR_GET_DEFAULT(workspaceName_, "") };
    inline ListRecentViewReportsResponseBodyResultData& setWorkspaceName(string workspaceName) { DARABONBA_PTR_SET_VALUE(workspaceName_, workspaceName) };


  protected:
    // Queries whether the user has collected the work.
    std::shared_ptr<bool> favorite_ = nullptr;
    // The timestamp when the work was created.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // The timestamp when the work was modified.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The query user has the editing rights of the work.
    std::shared_ptr<bool> hasEditAuth_ = nullptr;
    // The query user has the permission to view the work.
    std::shared_ptr<bool> hasViewAuth_ = nullptr;
    // The timestamp when the work was last accessed.
    std::shared_ptr<string> latestViewTime_ = nullptr;
    // The name of the work.
    std::shared_ptr<string> name_ = nullptr;
    // The Alibaba Cloud account name of the work owner.
    std::shared_ptr<string> ownerName_ = nullptr;
    // The UserID of the work owner.
    std::shared_ptr<string> ownerNum_ = nullptr;
    // The publication status of the work. Valid values:
    // 
    // *   0: unpublished
    // *   1: published
    // *   2: modified and saved but not published.
    // *   3: unpublished
    std::shared_ptr<int32_t> publishStatus_ = nullptr;
    // The ID of the work.
    std::shared_ptr<string> treeId_ = nullptr;
    // The type of the work. Valid values:
    // 
    // *   DATAPRODUCT: BI portal
    // *   PAGE: Dashboard
    // *   REPORT: workbook
    std::shared_ptr<string> type_ = nullptr;
    // The number of times the work was accessed.
    std::shared_ptr<int64_t> viewCount_ = nullptr;
    // The ID of the workspace to which the work belongs.
    std::shared_ptr<string> workspaceId_ = nullptr;
    // The name of the workspace to which the work belongs.
    std::shared_ptr<string> workspaceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
