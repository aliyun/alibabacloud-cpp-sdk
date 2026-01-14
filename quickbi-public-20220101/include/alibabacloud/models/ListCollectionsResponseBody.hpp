// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOLLECTIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCOLLECTIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class ListCollectionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCollectionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListCollectionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListCollectionsResponseBody() = default ;
    ListCollectionsResponseBody(const ListCollectionsResponseBody &) = default ;
    ListCollectionsResponseBody(ListCollectionsResponseBody &&) = default ;
    ListCollectionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCollectionsResponseBody() = default ;
    ListCollectionsResponseBody& operator=(const ListCollectionsResponseBody &) = default ;
    ListCollectionsResponseBody& operator=(ListCollectionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(FavoriteId, favoriteId_);
        DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
        DARABONBA_PTR_TO_JSON(WorksId, worksId_);
        DARABONBA_PTR_TO_JSON(WorksName, worksName_);
        DARABONBA_PTR_TO_JSON(WorksType, worksType_);
        DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
        DARABONBA_PTR_TO_JSON(WorkspaceName, workspaceName_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(FavoriteId, favoriteId_);
        DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
        DARABONBA_PTR_FROM_JSON(WorksId, worksId_);
        DARABONBA_PTR_FROM_JSON(WorksName, worksName_);
        DARABONBA_PTR_FROM_JSON(WorksType, worksType_);
        DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
        DARABONBA_PTR_FROM_JSON(WorkspaceName, workspaceName_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->favoriteId_ == nullptr
        && this->ownerId_ == nullptr && this->worksId_ == nullptr && this->worksName_ == nullptr && this->worksType_ == nullptr && this->workspaceId_ == nullptr
        && this->workspaceName_ == nullptr; };
      // favoriteId Field Functions 
      bool hasFavoriteId() const { return this->favoriteId_ != nullptr;};
      void deleteFavoriteId() { this->favoriteId_ = nullptr;};
      inline int32_t getFavoriteId() const { DARABONBA_PTR_GET_DEFAULT(favoriteId_, 0) };
      inline Result& setFavoriteId(int32_t favoriteId) { DARABONBA_PTR_SET_VALUE(favoriteId_, favoriteId) };


      // ownerId Field Functions 
      bool hasOwnerId() const { return this->ownerId_ != nullptr;};
      void deleteOwnerId() { this->ownerId_ = nullptr;};
      inline string getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
      inline Result& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


      // worksId Field Functions 
      bool hasWorksId() const { return this->worksId_ != nullptr;};
      void deleteWorksId() { this->worksId_ = nullptr;};
      inline string getWorksId() const { DARABONBA_PTR_GET_DEFAULT(worksId_, "") };
      inline Result& setWorksId(string worksId) { DARABONBA_PTR_SET_VALUE(worksId_, worksId) };


      // worksName Field Functions 
      bool hasWorksName() const { return this->worksName_ != nullptr;};
      void deleteWorksName() { this->worksName_ = nullptr;};
      inline string getWorksName() const { DARABONBA_PTR_GET_DEFAULT(worksName_, "") };
      inline Result& setWorksName(string worksName) { DARABONBA_PTR_SET_VALUE(worksName_, worksName) };


      // worksType Field Functions 
      bool hasWorksType() const { return this->worksType_ != nullptr;};
      void deleteWorksType() { this->worksType_ = nullptr;};
      inline string getWorksType() const { DARABONBA_PTR_GET_DEFAULT(worksType_, "") };
      inline Result& setWorksType(string worksType) { DARABONBA_PTR_SET_VALUE(worksType_, worksType) };


      // workspaceId Field Functions 
      bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
      void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
      inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
      inline Result& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


      // workspaceName Field Functions 
      bool hasWorkspaceName() const { return this->workspaceName_ != nullptr;};
      void deleteWorkspaceName() { this->workspaceName_ = nullptr;};
      inline string getWorkspaceName() const { DARABONBA_PTR_GET_DEFAULT(workspaceName_, "") };
      inline Result& setWorkspaceName(string workspaceName) { DARABONBA_PTR_SET_VALUE(workspaceName_, workspaceName) };


    protected:
      // The primary key ID of the favorite record.
      shared_ptr<int32_t> favoriteId_ {};
      // The user ID of the work owner. This refers to the UserID in Quick BI, not the Alibaba Cloud UID.
      shared_ptr<string> ownerId_ {};
      // The ID of the work.
      shared_ptr<string> worksId_ {};
      // The name of the work.
      shared_ptr<string> worksName_ {};
      // The type of the work. Possible values:
      // 
      // - DATAPRODUCT: Data Portal
      // - PAGE: Dashboard
      // - REPORT: Spreadsheet
      // - dataForm: Data Entry Form
      // - dashboardOfflineQuery: Self-service Data Extraction
      shared_ptr<string> worksType_ {};
      // Workspace ID.
      shared_ptr<string> workspaceId_ {};
      // Workspace Name.
      shared_ptr<string> workspaceName_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr && this->success_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCollectionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<ListCollectionsResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<ListCollectionsResponseBody::Result>) };
    inline vector<ListCollectionsResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<ListCollectionsResponseBody::Result>) };
    inline ListCollectionsResponseBody& setResult(const vector<ListCollectionsResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListCollectionsResponseBody& setResult(vector<ListCollectionsResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListCollectionsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Details of the list of reports favored by the user.
    shared_ptr<vector<ListCollectionsResponseBody::Result>> result_ {};
    // The primary key ID of the favorite record.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
