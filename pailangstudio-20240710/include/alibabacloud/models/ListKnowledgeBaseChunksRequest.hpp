// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTKNOWLEDGEBASECHUNKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTKNOWLEDGEBASECHUNKSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAILangStudio20240710
{
namespace Models
{
  class ListKnowledgeBaseChunksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListKnowledgeBaseChunksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ChunkStatus, chunkStatus_);
      DARABONBA_PTR_TO_JSON(MetaData, metaData_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(VersionName, versionName_);
    };
    friend void from_json(const Darabonba::Json& j, ListKnowledgeBaseChunksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ChunkStatus, chunkStatus_);
      DARABONBA_PTR_FROM_JSON(MetaData, metaData_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(VersionName, versionName_);
    };
    ListKnowledgeBaseChunksRequest() = default ;
    ListKnowledgeBaseChunksRequest(const ListKnowledgeBaseChunksRequest &) = default ;
    ListKnowledgeBaseChunksRequest(ListKnowledgeBaseChunksRequest &&) = default ;
    ListKnowledgeBaseChunksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListKnowledgeBaseChunksRequest() = default ;
    ListKnowledgeBaseChunksRequest& operator=(const ListKnowledgeBaseChunksRequest &) = default ;
    ListKnowledgeBaseChunksRequest& operator=(ListKnowledgeBaseChunksRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MetaData : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MetaData& obj) { 
        DARABONBA_PTR_TO_JSON(FileMetaId, fileMetaId_);
        DARABONBA_PTR_TO_JSON(FileUri, fileUri_);
      };
      friend void from_json(const Darabonba::Json& j, MetaData& obj) { 
        DARABONBA_PTR_FROM_JSON(FileMetaId, fileMetaId_);
        DARABONBA_PTR_FROM_JSON(FileUri, fileUri_);
      };
      MetaData() = default ;
      MetaData(const MetaData &) = default ;
      MetaData(MetaData &&) = default ;
      MetaData(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MetaData() = default ;
      MetaData& operator=(const MetaData &) = default ;
      MetaData& operator=(MetaData &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->fileMetaId_ == nullptr
        && this->fileUri_ == nullptr; };
      // fileMetaId Field Functions 
      bool hasFileMetaId() const { return this->fileMetaId_ != nullptr;};
      void deleteFileMetaId() { this->fileMetaId_ = nullptr;};
      inline string getFileMetaId() const { DARABONBA_PTR_GET_DEFAULT(fileMetaId_, "") };
      inline MetaData& setFileMetaId(string fileMetaId) { DARABONBA_PTR_SET_VALUE(fileMetaId_, fileMetaId) };


      // fileUri Field Functions 
      bool hasFileUri() const { return this->fileUri_ != nullptr;};
      void deleteFileUri() { this->fileUri_ = nullptr;};
      inline string getFileUri() const { DARABONBA_PTR_GET_DEFAULT(fileUri_, "") };
      inline MetaData& setFileUri(string fileUri) { DARABONBA_PTR_SET_VALUE(fileUri_, fileUri) };


    protected:
      // 文件元数据ID
      shared_ptr<string> fileMetaId_ {};
      // 文件地址
      shared_ptr<string> fileUri_ {};
    };

    virtual bool empty() const override { return this->chunkStatus_ == nullptr
        && this->metaData_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->versionName_ == nullptr; };
    // chunkStatus Field Functions 
    bool hasChunkStatus() const { return this->chunkStatus_ != nullptr;};
    void deleteChunkStatus() { this->chunkStatus_ = nullptr;};
    inline string getChunkStatus() const { DARABONBA_PTR_GET_DEFAULT(chunkStatus_, "") };
    inline ListKnowledgeBaseChunksRequest& setChunkStatus(string chunkStatus) { DARABONBA_PTR_SET_VALUE(chunkStatus_, chunkStatus) };


    // metaData Field Functions 
    bool hasMetaData() const { return this->metaData_ != nullptr;};
    void deleteMetaData() { this->metaData_ = nullptr;};
    inline const ListKnowledgeBaseChunksRequest::MetaData & getMetaData() const { DARABONBA_PTR_GET_CONST(metaData_, ListKnowledgeBaseChunksRequest::MetaData) };
    inline ListKnowledgeBaseChunksRequest::MetaData getMetaData() { DARABONBA_PTR_GET(metaData_, ListKnowledgeBaseChunksRequest::MetaData) };
    inline ListKnowledgeBaseChunksRequest& setMetaData(const ListKnowledgeBaseChunksRequest::MetaData & metaData) { DARABONBA_PTR_SET_VALUE(metaData_, metaData) };
    inline ListKnowledgeBaseChunksRequest& setMetaData(ListKnowledgeBaseChunksRequest::MetaData && metaData) { DARABONBA_PTR_SET_RVALUE(metaData_, metaData) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListKnowledgeBaseChunksRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListKnowledgeBaseChunksRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // versionName Field Functions 
    bool hasVersionName() const { return this->versionName_ != nullptr;};
    void deleteVersionName() { this->versionName_ = nullptr;};
    inline string getVersionName() const { DARABONBA_PTR_GET_DEFAULT(versionName_, "") };
    inline ListKnowledgeBaseChunksRequest& setVersionName(string versionName) { DARABONBA_PTR_SET_VALUE(versionName_, versionName) };


  protected:
    shared_ptr<string> chunkStatus_ {};
    shared_ptr<ListKnowledgeBaseChunksRequest::MetaData> metaData_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> versionName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAILangStudio20240710
#endif
