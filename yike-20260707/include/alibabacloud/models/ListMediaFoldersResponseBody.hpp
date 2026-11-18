// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMEDIAFOLDERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMEDIAFOLDERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yike20260707
{
namespace Models
{
  class ListMediaFoldersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMediaFoldersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FolderList, folderList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListMediaFoldersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FolderList, folderList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListMediaFoldersResponseBody() = default ;
    ListMediaFoldersResponseBody(const ListMediaFoldersResponseBody &) = default ;
    ListMediaFoldersResponseBody(ListMediaFoldersResponseBody &&) = default ;
    ListMediaFoldersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMediaFoldersResponseBody() = default ;
    ListMediaFoldersResponseBody& operator=(const ListMediaFoldersResponseBody &) = default ;
    ListMediaFoldersResponseBody& operator=(ListMediaFoldersResponseBody &&) = default ;
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
        DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
        DARABONBA_PTR_TO_JSON(ProductionId, productionId_);
      };
      friend void from_json(const Darabonba::Json& j, FolderList& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(FolderId, folderId_);
        DARABONBA_PTR_FROM_JSON(FolderName, folderName_);
        DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
        DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
        DARABONBA_PTR_FROM_JSON(ProductionId, productionId_);
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
        && this->folderId_ == nullptr && this->folderName_ == nullptr && this->isDefault_ == nullptr && this->modifiedTime_ == nullptr && this->productionId_ == nullptr; };
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


      // modifiedTime Field Functions 
      bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
      void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
      inline string getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
      inline FolderList& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


      // productionId Field Functions 
      bool hasProductionId() const { return this->productionId_ != nullptr;};
      void deleteProductionId() { this->productionId_ = nullptr;};
      inline string getProductionId() const { DARABONBA_PTR_GET_DEFAULT(productionId_, "") };
      inline FolderList& setProductionId(string productionId) { DARABONBA_PTR_SET_VALUE(productionId_, productionId) };


    protected:
      // The creation time.
      shared_ptr<string> createTime_ {};
      // The folder ID. The ID of the default folder is fixed to `fd_{ProductionId}_default`.
      shared_ptr<string> folderId_ {};
      // The folder name.
      shared_ptr<string> folderName_ {};
      // Indicates whether the folder is the default folder. Each project has exactly one default folder.
      shared_ptr<bool> isDefault_ {};
      // The modification time.
      shared_ptr<string> modifiedTime_ {};
      // The ID of the project to which the folder belongs.
      shared_ptr<string> productionId_ {};
    };

    virtual bool empty() const override { return this->folderList_ == nullptr
        && this->requestId_ == nullptr; };
    // folderList Field Functions 
    bool hasFolderList() const { return this->folderList_ != nullptr;};
    void deleteFolderList() { this->folderList_ = nullptr;};
    inline const vector<ListMediaFoldersResponseBody::FolderList> & getFolderList() const { DARABONBA_PTR_GET_CONST(folderList_, vector<ListMediaFoldersResponseBody::FolderList>) };
    inline vector<ListMediaFoldersResponseBody::FolderList> getFolderList() { DARABONBA_PTR_GET(folderList_, vector<ListMediaFoldersResponseBody::FolderList>) };
    inline ListMediaFoldersResponseBody& setFolderList(const vector<ListMediaFoldersResponseBody::FolderList> & folderList) { DARABONBA_PTR_SET_VALUE(folderList_, folderList) };
    inline ListMediaFoldersResponseBody& setFolderList(vector<ListMediaFoldersResponseBody::FolderList> && folderList) { DARABONBA_PTR_SET_RVALUE(folderList_, folderList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMediaFoldersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of folders.
    shared_ptr<vector<ListMediaFoldersResponseBody::FolderList>> folderList_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yike20260707
#endif
