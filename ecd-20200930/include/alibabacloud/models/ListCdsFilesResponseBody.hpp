// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCDSFILESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCDSFILESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ListCdsFilesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCdsFilesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(FileModels, fileModels_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListCdsFilesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(FileModels, fileModels_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListCdsFilesResponseBody() = default ;
    ListCdsFilesResponseBody(const ListCdsFilesResponseBody &) = default ;
    ListCdsFilesResponseBody(ListCdsFilesResponseBody &&) = default ;
    ListCdsFilesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCdsFilesResponseBody() = default ;
    ListCdsFilesResponseBody& operator=(const ListCdsFilesResponseBody &) = default ;
    ListCdsFilesResponseBody& operator=(ListCdsFilesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class FileModels : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FileModels& obj) { 
        DARABONBA_PTR_TO_JSON(Category, category_);
        DARABONBA_PTR_TO_JSON(ContentType, contentType_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Creator, creator_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DownloadUrl, downloadUrl_);
        DARABONBA_PTR_TO_JSON(FileExtension, fileExtension_);
        DARABONBA_PTR_TO_JSON(FileId, fileId_);
        DARABONBA_PTR_TO_JSON(FilePath, filePath_);
        DARABONBA_PTR_TO_JSON(FileType, fileType_);
        DARABONBA_PTR_TO_JSON(Md5, md5_);
        DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
        DARABONBA_PTR_TO_JSON(Modifier, modifier_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(OpenTime, openTime_);
        DARABONBA_PTR_TO_JSON(OpenTimeStamp, openTimeStamp_);
        DARABONBA_PTR_TO_JSON(ParentId, parentId_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(Sha1, sha1_);
        DARABONBA_PTR_TO_JSON(Size, size_);
        DARABONBA_PTR_TO_JSON(Thumbnail, thumbnail_);
      };
      friend void from_json(const Darabonba::Json& j, FileModels& obj) { 
        DARABONBA_PTR_FROM_JSON(Category, category_);
        DARABONBA_PTR_FROM_JSON(ContentType, contentType_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Creator, creator_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DownloadUrl, downloadUrl_);
        DARABONBA_PTR_FROM_JSON(FileExtension, fileExtension_);
        DARABONBA_PTR_FROM_JSON(FileId, fileId_);
        DARABONBA_PTR_FROM_JSON(FilePath, filePath_);
        DARABONBA_PTR_FROM_JSON(FileType, fileType_);
        DARABONBA_PTR_FROM_JSON(Md5, md5_);
        DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
        DARABONBA_PTR_FROM_JSON(Modifier, modifier_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(OpenTime, openTime_);
        DARABONBA_PTR_FROM_JSON(OpenTimeStamp, openTimeStamp_);
        DARABONBA_PTR_FROM_JSON(ParentId, parentId_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(Sha1, sha1_);
        DARABONBA_PTR_FROM_JSON(Size, size_);
        DARABONBA_PTR_FROM_JSON(Thumbnail, thumbnail_);
      };
      FileModels() = default ;
      FileModels(const FileModels &) = default ;
      FileModels(FileModels &&) = default ;
      FileModels(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FileModels() = default ;
      FileModels& operator=(const FileModels &) = default ;
      FileModels& operator=(FileModels &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->category_ == nullptr
        && this->contentType_ == nullptr && this->createTime_ == nullptr && this->creator_ == nullptr && this->description_ == nullptr && this->downloadUrl_ == nullptr
        && this->fileExtension_ == nullptr && this->fileId_ == nullptr && this->filePath_ == nullptr && this->fileType_ == nullptr && this->md5_ == nullptr
        && this->modifiedTime_ == nullptr && this->modifier_ == nullptr && this->name_ == nullptr && this->openTime_ == nullptr && this->openTimeStamp_ == nullptr
        && this->parentId_ == nullptr && this->regionId_ == nullptr && this->sha1_ == nullptr && this->size_ == nullptr && this->thumbnail_ == nullptr; };
      // category Field Functions 
      bool hasCategory() const { return this->category_ != nullptr;};
      void deleteCategory() { this->category_ = nullptr;};
      inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
      inline FileModels& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


      // contentType Field Functions 
      bool hasContentType() const { return this->contentType_ != nullptr;};
      void deleteContentType() { this->contentType_ = nullptr;};
      inline string getContentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
      inline FileModels& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline FileModels& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // creator Field Functions 
      bool hasCreator() const { return this->creator_ != nullptr;};
      void deleteCreator() { this->creator_ = nullptr;};
      inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
      inline FileModels& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline FileModels& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // downloadUrl Field Functions 
      bool hasDownloadUrl() const { return this->downloadUrl_ != nullptr;};
      void deleteDownloadUrl() { this->downloadUrl_ = nullptr;};
      inline string getDownloadUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadUrl_, "") };
      inline FileModels& setDownloadUrl(string downloadUrl) { DARABONBA_PTR_SET_VALUE(downloadUrl_, downloadUrl) };


      // fileExtension Field Functions 
      bool hasFileExtension() const { return this->fileExtension_ != nullptr;};
      void deleteFileExtension() { this->fileExtension_ = nullptr;};
      inline string getFileExtension() const { DARABONBA_PTR_GET_DEFAULT(fileExtension_, "") };
      inline FileModels& setFileExtension(string fileExtension) { DARABONBA_PTR_SET_VALUE(fileExtension_, fileExtension) };


      // fileId Field Functions 
      bool hasFileId() const { return this->fileId_ != nullptr;};
      void deleteFileId() { this->fileId_ = nullptr;};
      inline string getFileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
      inline FileModels& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


      // filePath Field Functions 
      bool hasFilePath() const { return this->filePath_ != nullptr;};
      void deleteFilePath() { this->filePath_ = nullptr;};
      inline string getFilePath() const { DARABONBA_PTR_GET_DEFAULT(filePath_, "") };
      inline FileModels& setFilePath(string filePath) { DARABONBA_PTR_SET_VALUE(filePath_, filePath) };


      // fileType Field Functions 
      bool hasFileType() const { return this->fileType_ != nullptr;};
      void deleteFileType() { this->fileType_ = nullptr;};
      inline string getFileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, "") };
      inline FileModels& setFileType(string fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


      // md5 Field Functions 
      bool hasMd5() const { return this->md5_ != nullptr;};
      void deleteMd5() { this->md5_ = nullptr;};
      inline string getMd5() const { DARABONBA_PTR_GET_DEFAULT(md5_, "") };
      inline FileModels& setMd5(string md5) { DARABONBA_PTR_SET_VALUE(md5_, md5) };


      // modifiedTime Field Functions 
      bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
      void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
      inline string getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
      inline FileModels& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


      // modifier Field Functions 
      bool hasModifier() const { return this->modifier_ != nullptr;};
      void deleteModifier() { this->modifier_ = nullptr;};
      inline string getModifier() const { DARABONBA_PTR_GET_DEFAULT(modifier_, "") };
      inline FileModels& setModifier(string modifier) { DARABONBA_PTR_SET_VALUE(modifier_, modifier) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline FileModels& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // openTime Field Functions 
      bool hasOpenTime() const { return this->openTime_ != nullptr;};
      void deleteOpenTime() { this->openTime_ = nullptr;};
      inline string getOpenTime() const { DARABONBA_PTR_GET_DEFAULT(openTime_, "") };
      inline FileModels& setOpenTime(string openTime) { DARABONBA_PTR_SET_VALUE(openTime_, openTime) };


      // openTimeStamp Field Functions 
      bool hasOpenTimeStamp() const { return this->openTimeStamp_ != nullptr;};
      void deleteOpenTimeStamp() { this->openTimeStamp_ = nullptr;};
      inline int64_t getOpenTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(openTimeStamp_, 0L) };
      inline FileModels& setOpenTimeStamp(int64_t openTimeStamp) { DARABONBA_PTR_SET_VALUE(openTimeStamp_, openTimeStamp) };


      // parentId Field Functions 
      bool hasParentId() const { return this->parentId_ != nullptr;};
      void deleteParentId() { this->parentId_ = nullptr;};
      inline string getParentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, "") };
      inline FileModels& setParentId(string parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline FileModels& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // sha1 Field Functions 
      bool hasSha1() const { return this->sha1_ != nullptr;};
      void deleteSha1() { this->sha1_ = nullptr;};
      inline string getSha1() const { DARABONBA_PTR_GET_DEFAULT(sha1_, "") };
      inline FileModels& setSha1(string sha1) { DARABONBA_PTR_SET_VALUE(sha1_, sha1) };


      // size Field Functions 
      bool hasSize() const { return this->size_ != nullptr;};
      void deleteSize() { this->size_ = nullptr;};
      inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
      inline FileModels& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


      // thumbnail Field Functions 
      bool hasThumbnail() const { return this->thumbnail_ != nullptr;};
      void deleteThumbnail() { this->thumbnail_ = nullptr;};
      inline string getThumbnail() const { DARABONBA_PTR_GET_DEFAULT(thumbnail_, "") };
      inline FileModels& setThumbnail(string thumbnail) { DARABONBA_PTR_SET_VALUE(thumbnail_, thumbnail) };


    protected:
      // File type classification. The network disk will classify files according to their suffix and MIME Type. The main categories are `doc`, `image`, `audio` and `video`.
      shared_ptr<string> category_ {};
      // The content type of the file.
      shared_ptr<string> contentType_ {};
      // The time when the file was created.
      shared_ptr<string> createTime_ {};
      // The file creator.
      shared_ptr<string> creator_ {};
      // The file description.
      shared_ptr<string> description_ {};
      // The download link. The default validity period is 15 minutes.
      shared_ptr<string> downloadUrl_ {};
      // The filename extension.
      shared_ptr<string> fileExtension_ {};
      // The file ID.
      shared_ptr<string> fileId_ {};
      // The file path.
      shared_ptr<string> filePath_ {};
      // The file type.
      // 
      // Valid value:
      // 
      // *   file
      // *   folder
      shared_ptr<string> fileType_ {};
      // The MD5 hash of the object.
      shared_ptr<string> md5_ {};
      // The time when the file was last modified.
      shared_ptr<string> modifiedTime_ {};
      // Modifier.
      shared_ptr<string> modifier_ {};
      // The name of the file.
      shared_ptr<string> name_ {};
      // The time when the file was last opened.
      shared_ptr<string> openTime_ {};
      // The timestamp that indicates the time when the file was last opened.
      shared_ptr<int64_t> openTimeStamp_ {};
      // The ID of the parent folder.
      shared_ptr<string> parentId_ {};
      // The ID of the region. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) operation to obtain the list of regions supported by cloud computers.
      shared_ptr<string> regionId_ {};
      // The SHA1 hash of the data file.
      shared_ptr<string> sha1_ {};
      // The size of the file. Unit: bytes.
      shared_ptr<int64_t> size_ {};
      // The URL of the thumbnail.
      shared_ptr<string> thumbnail_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->count_ == nullptr && this->fileModels_ == nullptr && this->message_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListCdsFilesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline string getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, "") };
    inline ListCdsFilesResponseBody& setCount(string count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // fileModels Field Functions 
    bool hasFileModels() const { return this->fileModels_ != nullptr;};
    void deleteFileModels() { this->fileModels_ = nullptr;};
    inline const vector<ListCdsFilesResponseBody::FileModels> & getFileModels() const { DARABONBA_PTR_GET_CONST(fileModels_, vector<ListCdsFilesResponseBody::FileModels>) };
    inline vector<ListCdsFilesResponseBody::FileModels> getFileModels() { DARABONBA_PTR_GET(fileModels_, vector<ListCdsFilesResponseBody::FileModels>) };
    inline ListCdsFilesResponseBody& setFileModels(const vector<ListCdsFilesResponseBody::FileModels> & fileModels) { DARABONBA_PTR_SET_VALUE(fileModels_, fileModels) };
    inline ListCdsFilesResponseBody& setFileModels(vector<ListCdsFilesResponseBody::FileModels> && fileModels) { DARABONBA_PTR_SET_RVALUE(fileModels_, fileModels) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListCdsFilesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListCdsFilesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCdsFilesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListCdsFilesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response parameters. If the request was successful, `success` is returned. If the request failed, an error message is returned.
    shared_ptr<string> code_ {};
    // The total number of file list entries.
    shared_ptr<string> count_ {};
    // The files.
    shared_ptr<vector<ListCdsFilesResponseBody::FileModels>> fileModels_ {};
    // Error message. This parameter is not returned if the value of Code is `success`.
    shared_ptr<string> message_ {};
    // The token used to start the next query. If the `NextToken` is empty, the next query does not exist.
    shared_ptr<string> nextToken_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the operation was successful.
    // 
    // Valid value:
    // 
    // *   true
    // *   false
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
