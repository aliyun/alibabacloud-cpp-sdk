// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOLLECTIONSRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTCOLLECTIONSRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class ListCollectionsResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCollectionsResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(FavoriteId, favoriteId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(WorksId, worksId_);
      DARABONBA_PTR_TO_JSON(WorksName, worksName_);
      DARABONBA_PTR_TO_JSON(WorksType, worksType_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_TO_JSON(WorkspaceName, workspaceName_);
    };
    friend void from_json(const Darabonba::Json& j, ListCollectionsResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(FavoriteId, favoriteId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(WorksId, worksId_);
      DARABONBA_PTR_FROM_JSON(WorksName, worksName_);
      DARABONBA_PTR_FROM_JSON(WorksType, worksType_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceName, workspaceName_);
    };
    ListCollectionsResponseBodyResult() = default ;
    ListCollectionsResponseBodyResult(const ListCollectionsResponseBodyResult &) = default ;
    ListCollectionsResponseBodyResult(ListCollectionsResponseBodyResult &&) = default ;
    ListCollectionsResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCollectionsResponseBodyResult() = default ;
    ListCollectionsResponseBodyResult& operator=(const ListCollectionsResponseBodyResult &) = default ;
    ListCollectionsResponseBodyResult& operator=(ListCollectionsResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->favoriteId_ == nullptr
        && return this->ownerId_ == nullptr && return this->worksId_ == nullptr && return this->worksName_ == nullptr && return this->worksType_ == nullptr && return this->workspaceId_ == nullptr
        && return this->workspaceName_ == nullptr; };
    // favoriteId Field Functions 
    bool hasFavoriteId() const { return this->favoriteId_ != nullptr;};
    void deleteFavoriteId() { this->favoriteId_ = nullptr;};
    inline int32_t favoriteId() const { DARABONBA_PTR_GET_DEFAULT(favoriteId_, 0) };
    inline ListCollectionsResponseBodyResult& setFavoriteId(int32_t favoriteId) { DARABONBA_PTR_SET_VALUE(favoriteId_, favoriteId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline ListCollectionsResponseBodyResult& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // worksId Field Functions 
    bool hasWorksId() const { return this->worksId_ != nullptr;};
    void deleteWorksId() { this->worksId_ = nullptr;};
    inline string worksId() const { DARABONBA_PTR_GET_DEFAULT(worksId_, "") };
    inline ListCollectionsResponseBodyResult& setWorksId(string worksId) { DARABONBA_PTR_SET_VALUE(worksId_, worksId) };


    // worksName Field Functions 
    bool hasWorksName() const { return this->worksName_ != nullptr;};
    void deleteWorksName() { this->worksName_ = nullptr;};
    inline string worksName() const { DARABONBA_PTR_GET_DEFAULT(worksName_, "") };
    inline ListCollectionsResponseBodyResult& setWorksName(string worksName) { DARABONBA_PTR_SET_VALUE(worksName_, worksName) };


    // worksType Field Functions 
    bool hasWorksType() const { return this->worksType_ != nullptr;};
    void deleteWorksType() { this->worksType_ = nullptr;};
    inline string worksType() const { DARABONBA_PTR_GET_DEFAULT(worksType_, "") };
    inline ListCollectionsResponseBodyResult& setWorksType(string worksType) { DARABONBA_PTR_SET_VALUE(worksType_, worksType) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ListCollectionsResponseBodyResult& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    // workspaceName Field Functions 
    bool hasWorkspaceName() const { return this->workspaceName_ != nullptr;};
    void deleteWorkspaceName() { this->workspaceName_ = nullptr;};
    inline string workspaceName() const { DARABONBA_PTR_GET_DEFAULT(workspaceName_, "") };
    inline ListCollectionsResponseBodyResult& setWorkspaceName(string workspaceName) { DARABONBA_PTR_SET_VALUE(workspaceName_, workspaceName) };


  protected:
    // The primary key ID of the favorite record.
    std::shared_ptr<int32_t> favoriteId_ = nullptr;
    // The user ID of the work owner. This refers to the UserID in Quick BI, not the Alibaba Cloud UID.
    std::shared_ptr<string> ownerId_ = nullptr;
    // The ID of the work.
    std::shared_ptr<string> worksId_ = nullptr;
    // The name of the work.
    std::shared_ptr<string> worksName_ = nullptr;
    // The type of the work. Possible values:
    // 
    // - DATAPRODUCT: Data Portal
    // - PAGE: Dashboard
    // - REPORT: Spreadsheet
    // - dataForm: Data Entry Form
    // - dashboardOfflineQuery: Self-service Data Extraction
    std::shared_ptr<string> worksType_ = nullptr;
    // Workspace ID.
    std::shared_ptr<string> workspaceId_ = nullptr;
    // Workspace Name.
    std::shared_ptr<string> workspaceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
