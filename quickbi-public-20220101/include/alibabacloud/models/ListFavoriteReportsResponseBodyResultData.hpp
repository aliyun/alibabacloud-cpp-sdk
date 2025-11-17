// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFAVORITEREPORTSRESPONSEBODYRESULTDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTFAVORITEREPORTSRESPONSEBODYRESULTDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class ListFavoriteReportsResponseBodyResultData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFavoriteReportsResponseBodyResultData& obj) { 
      DARABONBA_PTR_TO_JSON(Favorite, favorite_);
      DARABONBA_PTR_TO_JSON(FavoriteDate, favoriteDate_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(HasEditAuth, hasEditAuth_);
      DARABONBA_PTR_TO_JSON(HasViewAuth, hasViewAuth_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OwnerName, ownerName_);
      DARABONBA_PTR_TO_JSON(OwnerNum, ownerNum_);
      DARABONBA_PTR_TO_JSON(PublishStatus, publishStatus_);
      DARABONBA_PTR_TO_JSON(TreeId, treeId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_TO_JSON(WorkspaceName, workspaceName_);
    };
    friend void from_json(const Darabonba::Json& j, ListFavoriteReportsResponseBodyResultData& obj) { 
      DARABONBA_PTR_FROM_JSON(Favorite, favorite_);
      DARABONBA_PTR_FROM_JSON(FavoriteDate, favoriteDate_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(HasEditAuth, hasEditAuth_);
      DARABONBA_PTR_FROM_JSON(HasViewAuth, hasViewAuth_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OwnerName, ownerName_);
      DARABONBA_PTR_FROM_JSON(OwnerNum, ownerNum_);
      DARABONBA_PTR_FROM_JSON(PublishStatus, publishStatus_);
      DARABONBA_PTR_FROM_JSON(TreeId, treeId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceName, workspaceName_);
    };
    ListFavoriteReportsResponseBodyResultData() = default ;
    ListFavoriteReportsResponseBodyResultData(const ListFavoriteReportsResponseBodyResultData &) = default ;
    ListFavoriteReportsResponseBodyResultData(ListFavoriteReportsResponseBodyResultData &&) = default ;
    ListFavoriteReportsResponseBodyResultData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFavoriteReportsResponseBodyResultData() = default ;
    ListFavoriteReportsResponseBodyResultData& operator=(const ListFavoriteReportsResponseBodyResultData &) = default ;
    ListFavoriteReportsResponseBodyResultData& operator=(ListFavoriteReportsResponseBodyResultData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->favorite_ == nullptr
        && return this->favoriteDate_ == nullptr && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr && return this->hasEditAuth_ == nullptr && return this->hasViewAuth_ == nullptr
        && return this->name_ == nullptr && return this->ownerName_ == nullptr && return this->ownerNum_ == nullptr && return this->publishStatus_ == nullptr && return this->treeId_ == nullptr
        && return this->type_ == nullptr && return this->workspaceId_ == nullptr && return this->workspaceName_ == nullptr; };
    // favorite Field Functions 
    bool hasFavorite() const { return this->favorite_ != nullptr;};
    void deleteFavorite() { this->favorite_ = nullptr;};
    inline bool favorite() const { DARABONBA_PTR_GET_DEFAULT(favorite_, false) };
    inline ListFavoriteReportsResponseBodyResultData& setFavorite(bool favorite) { DARABONBA_PTR_SET_VALUE(favorite_, favorite) };


    // favoriteDate Field Functions 
    bool hasFavoriteDate() const { return this->favoriteDate_ != nullptr;};
    void deleteFavoriteDate() { this->favoriteDate_ = nullptr;};
    inline string favoriteDate() const { DARABONBA_PTR_GET_DEFAULT(favoriteDate_, "") };
    inline ListFavoriteReportsResponseBodyResultData& setFavoriteDate(string favoriteDate) { DARABONBA_PTR_SET_VALUE(favoriteDate_, favoriteDate) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline ListFavoriteReportsResponseBodyResultData& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline ListFavoriteReportsResponseBodyResultData& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // hasEditAuth Field Functions 
    bool hasHasEditAuth() const { return this->hasEditAuth_ != nullptr;};
    void deleteHasEditAuth() { this->hasEditAuth_ = nullptr;};
    inline bool hasEditAuth() const { DARABONBA_PTR_GET_DEFAULT(hasEditAuth_, false) };
    inline ListFavoriteReportsResponseBodyResultData& setHasEditAuth(bool hasEditAuth) { DARABONBA_PTR_SET_VALUE(hasEditAuth_, hasEditAuth) };


    // hasViewAuth Field Functions 
    bool hasHasViewAuth() const { return this->hasViewAuth_ != nullptr;};
    void deleteHasViewAuth() { this->hasViewAuth_ = nullptr;};
    inline bool hasViewAuth() const { DARABONBA_PTR_GET_DEFAULT(hasViewAuth_, false) };
    inline ListFavoriteReportsResponseBodyResultData& setHasViewAuth(bool hasViewAuth) { DARABONBA_PTR_SET_VALUE(hasViewAuth_, hasViewAuth) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListFavoriteReportsResponseBodyResultData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ownerName Field Functions 
    bool hasOwnerName() const { return this->ownerName_ != nullptr;};
    void deleteOwnerName() { this->ownerName_ = nullptr;};
    inline string ownerName() const { DARABONBA_PTR_GET_DEFAULT(ownerName_, "") };
    inline ListFavoriteReportsResponseBodyResultData& setOwnerName(string ownerName) { DARABONBA_PTR_SET_VALUE(ownerName_, ownerName) };


    // ownerNum Field Functions 
    bool hasOwnerNum() const { return this->ownerNum_ != nullptr;};
    void deleteOwnerNum() { this->ownerNum_ = nullptr;};
    inline string ownerNum() const { DARABONBA_PTR_GET_DEFAULT(ownerNum_, "") };
    inline ListFavoriteReportsResponseBodyResultData& setOwnerNum(string ownerNum) { DARABONBA_PTR_SET_VALUE(ownerNum_, ownerNum) };


    // publishStatus Field Functions 
    bool hasPublishStatus() const { return this->publishStatus_ != nullptr;};
    void deletePublishStatus() { this->publishStatus_ = nullptr;};
    inline int32_t publishStatus() const { DARABONBA_PTR_GET_DEFAULT(publishStatus_, 0) };
    inline ListFavoriteReportsResponseBodyResultData& setPublishStatus(int32_t publishStatus) { DARABONBA_PTR_SET_VALUE(publishStatus_, publishStatus) };


    // treeId Field Functions 
    bool hasTreeId() const { return this->treeId_ != nullptr;};
    void deleteTreeId() { this->treeId_ = nullptr;};
    inline string treeId() const { DARABONBA_PTR_GET_DEFAULT(treeId_, "") };
    inline ListFavoriteReportsResponseBodyResultData& setTreeId(string treeId) { DARABONBA_PTR_SET_VALUE(treeId_, treeId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListFavoriteReportsResponseBodyResultData& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ListFavoriteReportsResponseBodyResultData& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    // workspaceName Field Functions 
    bool hasWorkspaceName() const { return this->workspaceName_ != nullptr;};
    void deleteWorkspaceName() { this->workspaceName_ = nullptr;};
    inline string workspaceName() const { DARABONBA_PTR_GET_DEFAULT(workspaceName_, "") };
    inline ListFavoriteReportsResponseBodyResultData& setWorkspaceName(string workspaceName) { DARABONBA_PTR_SET_VALUE(workspaceName_, workspaceName) };


  protected:
    // Indicates whether the user has favorited the work.
    std::shared_ptr<bool> favorite_ = nullptr;
    // The timestamp when the work was favorited.
    std::shared_ptr<string> favoriteDate_ = nullptr;
    // Timestamp of the work creation.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // Timestamp of the work modification.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // Indicates whether the user has edit permission for the work.
    std::shared_ptr<bool> hasEditAuth_ = nullptr;
    // Check if the user has the permission to view the work.
    std::shared_ptr<bool> hasViewAuth_ = nullptr;
    // Name of the work.
    std::shared_ptr<string> name_ = nullptr;
    // Alibaba Cloud account name of the work owner.
    std::shared_ptr<string> ownerName_ = nullptr;
    // UserID of the work owner.
    std::shared_ptr<string> ownerNum_ = nullptr;
    // Publication status of the work. Value range:
    // - 0: Not published
    // - 1: Published
    // - 2: Saved with modifications, not published
    // - 3: Offline
    std::shared_ptr<int32_t> publishStatus_ = nullptr;
    // Work ID.
    std::shared_ptr<string> treeId_ = nullptr;
    // Type of the work. Value range:
    // - DATAPRODUCT: Data Portal
    // - PAGE: Dashboard
    // - REPORT: Spreadsheet
    std::shared_ptr<string> type_ = nullptr;
    // The ID of the workspace to which the work belongs.
    std::shared_ptr<string> workspaceId_ = nullptr;
    // The name of the workspace to which the work belongs.
    std::shared_ptr<string> workspaceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
