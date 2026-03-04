// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTYIKEASSETFOLDERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTYIKEASSETFOLDERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListYikeAssetFoldersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListYikeAssetFoldersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FolderList, folderList_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListYikeAssetFoldersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FolderList, folderList_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    ListYikeAssetFoldersResponseBody() = default ;
    ListYikeAssetFoldersResponseBody(const ListYikeAssetFoldersResponseBody &) = default ;
    ListYikeAssetFoldersResponseBody(ListYikeAssetFoldersResponseBody &&) = default ;
    ListYikeAssetFoldersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListYikeAssetFoldersResponseBody() = default ;
    ListYikeAssetFoldersResponseBody& operator=(const ListYikeAssetFoldersResponseBody &) = default ;
    ListYikeAssetFoldersResponseBody& operator=(ListYikeAssetFoldersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class FolderList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FolderList& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(FolderId, folderId_);
        DARABONBA_PTR_TO_JSON(FolderName, folderName_);
        DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
        DARABONBA_PTR_TO_JSON(ProductionId, productionId_);
        DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
      };
      friend void from_json(const Darabonba::Json& j, FolderList& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(FolderId, folderId_);
        DARABONBA_PTR_FROM_JSON(FolderName, folderName_);
        DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
        DARABONBA_PTR_FROM_JSON(ProductionId, productionId_);
        DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
      };
      FolderList() = default ;
      FolderList(const FolderList &) = default ;
      FolderList(FolderList &&) = default ;
      FolderList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FolderList() = default ;
      FolderList& operator=(const FolderList &) = default ;
      FolderList& operator=(FolderList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->folderId_ == nullptr && this->folderName_ == nullptr && this->isDefault_ == nullptr && this->productionId_ == nullptr && this->workspaceId_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline FolderList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // folderId Field Functions 
      bool hasFolderId() const { return this->folderId_ != nullptr;};
      void deleteFolderId() { this->folderId_ = nullptr;};
      inline string getFolderId() const { DARABONBA_PTR_GET_DEFAULT(folderId_, "") };
      inline FolderList& setFolderId(string folderId) { DARABONBA_PTR_SET_VALUE(folderId_, folderId) };


      // folderName Field Functions 
      bool hasFolderName() const { return this->folderName_ != nullptr;};
      void deleteFolderName() { this->folderName_ = nullptr;};
      inline string getFolderName() const { DARABONBA_PTR_GET_DEFAULT(folderName_, "") };
      inline FolderList& setFolderName(string folderName) { DARABONBA_PTR_SET_VALUE(folderName_, folderName) };


      // isDefault Field Functions 
      bool hasIsDefault() const { return this->isDefault_ != nullptr;};
      void deleteIsDefault() { this->isDefault_ = nullptr;};
      inline bool getIsDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
      inline FolderList& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


      // productionId Field Functions 
      bool hasProductionId() const { return this->productionId_ != nullptr;};
      void deleteProductionId() { this->productionId_ = nullptr;};
      inline string getProductionId() const { DARABONBA_PTR_GET_DEFAULT(productionId_, "") };
      inline FolderList& setProductionId(string productionId) { DARABONBA_PTR_SET_VALUE(productionId_, productionId) };


      // workspaceId Field Functions 
      bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
      void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
      inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
      inline FolderList& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    protected:
      shared_ptr<string> createTime_ {};
      shared_ptr<string> folderId_ {};
      shared_ptr<string> folderName_ {};
      shared_ptr<bool> isDefault_ {};
      shared_ptr<string> productionId_ {};
      shared_ptr<string> workspaceId_ {};
    };

    virtual bool empty() const override { return this->folderList_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->total_ == nullptr; };
    // folderList Field Functions 
    bool hasFolderList() const { return this->folderList_ != nullptr;};
    void deleteFolderList() { this->folderList_ = nullptr;};
    inline const vector<ListYikeAssetFoldersResponseBody::FolderList> & getFolderList() const { DARABONBA_PTR_GET_CONST(folderList_, vector<ListYikeAssetFoldersResponseBody::FolderList>) };
    inline vector<ListYikeAssetFoldersResponseBody::FolderList> getFolderList() { DARABONBA_PTR_GET(folderList_, vector<ListYikeAssetFoldersResponseBody::FolderList>) };
    inline ListYikeAssetFoldersResponseBody& setFolderList(const vector<ListYikeAssetFoldersResponseBody::FolderList> & folderList) { DARABONBA_PTR_SET_VALUE(folderList_, folderList) };
    inline ListYikeAssetFoldersResponseBody& setFolderList(vector<ListYikeAssetFoldersResponseBody::FolderList> && folderList) { DARABONBA_PTR_SET_RVALUE(folderList_, folderList) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListYikeAssetFoldersResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListYikeAssetFoldersResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListYikeAssetFoldersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline ListYikeAssetFoldersResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    shared_ptr<vector<ListYikeAssetFoldersResponseBody::FolderList>> folderList_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
