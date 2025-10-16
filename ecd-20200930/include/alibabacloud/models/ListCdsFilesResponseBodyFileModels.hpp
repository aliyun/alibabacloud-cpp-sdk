// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCDSFILESRESPONSEBODYFILEMODELS_HPP_
#define ALIBABACLOUD_MODELS_LISTCDSFILESRESPONSEBODYFILEMODELS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ListCdsFilesResponseBodyFileModels : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCdsFilesResponseBodyFileModels& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListCdsFilesResponseBodyFileModels& obj) { 
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
    ListCdsFilesResponseBodyFileModels() = default ;
    ListCdsFilesResponseBodyFileModels(const ListCdsFilesResponseBodyFileModels &) = default ;
    ListCdsFilesResponseBodyFileModels(ListCdsFilesResponseBodyFileModels &&) = default ;
    ListCdsFilesResponseBodyFileModels(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCdsFilesResponseBodyFileModels() = default ;
    ListCdsFilesResponseBodyFileModels& operator=(const ListCdsFilesResponseBodyFileModels &) = default ;
    ListCdsFilesResponseBodyFileModels& operator=(ListCdsFilesResponseBodyFileModels &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr
        && return this->contentType_ == nullptr && return this->createTime_ == nullptr && return this->creator_ == nullptr && return this->description_ == nullptr && return this->downloadUrl_ == nullptr
        && return this->fileExtension_ == nullptr && return this->fileId_ == nullptr && return this->filePath_ == nullptr && return this->fileType_ == nullptr && return this->md5_ == nullptr
        && return this->modifiedTime_ == nullptr && return this->modifier_ == nullptr && return this->name_ == nullptr && return this->openTime_ == nullptr && return this->openTimeStamp_ == nullptr
        && return this->parentId_ == nullptr && return this->regionId_ == nullptr && return this->sha1_ == nullptr && return this->size_ == nullptr && return this->thumbnail_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline ListCdsFilesResponseBodyFileModels& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // contentType Field Functions 
    bool hasContentType() const { return this->contentType_ != nullptr;};
    void deleteContentType() { this->contentType_ = nullptr;};
    inline string contentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
    inline ListCdsFilesResponseBodyFileModels& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListCdsFilesResponseBodyFileModels& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline ListCdsFilesResponseBodyFileModels& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListCdsFilesResponseBodyFileModels& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // downloadUrl Field Functions 
    bool hasDownloadUrl() const { return this->downloadUrl_ != nullptr;};
    void deleteDownloadUrl() { this->downloadUrl_ = nullptr;};
    inline string downloadUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadUrl_, "") };
    inline ListCdsFilesResponseBodyFileModels& setDownloadUrl(string downloadUrl) { DARABONBA_PTR_SET_VALUE(downloadUrl_, downloadUrl) };


    // fileExtension Field Functions 
    bool hasFileExtension() const { return this->fileExtension_ != nullptr;};
    void deleteFileExtension() { this->fileExtension_ = nullptr;};
    inline string fileExtension() const { DARABONBA_PTR_GET_DEFAULT(fileExtension_, "") };
    inline ListCdsFilesResponseBodyFileModels& setFileExtension(string fileExtension) { DARABONBA_PTR_SET_VALUE(fileExtension_, fileExtension) };


    // fileId Field Functions 
    bool hasFileId() const { return this->fileId_ != nullptr;};
    void deleteFileId() { this->fileId_ = nullptr;};
    inline string fileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
    inline ListCdsFilesResponseBodyFileModels& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


    // filePath Field Functions 
    bool hasFilePath() const { return this->filePath_ != nullptr;};
    void deleteFilePath() { this->filePath_ = nullptr;};
    inline string filePath() const { DARABONBA_PTR_GET_DEFAULT(filePath_, "") };
    inline ListCdsFilesResponseBodyFileModels& setFilePath(string filePath) { DARABONBA_PTR_SET_VALUE(filePath_, filePath) };


    // fileType Field Functions 
    bool hasFileType() const { return this->fileType_ != nullptr;};
    void deleteFileType() { this->fileType_ = nullptr;};
    inline string fileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, "") };
    inline ListCdsFilesResponseBodyFileModels& setFileType(string fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


    // md5 Field Functions 
    bool hasMd5() const { return this->md5_ != nullptr;};
    void deleteMd5() { this->md5_ = nullptr;};
    inline string md5() const { DARABONBA_PTR_GET_DEFAULT(md5_, "") };
    inline ListCdsFilesResponseBodyFileModels& setMd5(string md5) { DARABONBA_PTR_SET_VALUE(md5_, md5) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline string modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
    inline ListCdsFilesResponseBodyFileModels& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // modifier Field Functions 
    bool hasModifier() const { return this->modifier_ != nullptr;};
    void deleteModifier() { this->modifier_ = nullptr;};
    inline string modifier() const { DARABONBA_PTR_GET_DEFAULT(modifier_, "") };
    inline ListCdsFilesResponseBodyFileModels& setModifier(string modifier) { DARABONBA_PTR_SET_VALUE(modifier_, modifier) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListCdsFilesResponseBodyFileModels& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // openTime Field Functions 
    bool hasOpenTime() const { return this->openTime_ != nullptr;};
    void deleteOpenTime() { this->openTime_ = nullptr;};
    inline string openTime() const { DARABONBA_PTR_GET_DEFAULT(openTime_, "") };
    inline ListCdsFilesResponseBodyFileModels& setOpenTime(string openTime) { DARABONBA_PTR_SET_VALUE(openTime_, openTime) };


    // openTimeStamp Field Functions 
    bool hasOpenTimeStamp() const { return this->openTimeStamp_ != nullptr;};
    void deleteOpenTimeStamp() { this->openTimeStamp_ = nullptr;};
    inline int64_t openTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(openTimeStamp_, 0L) };
    inline ListCdsFilesResponseBodyFileModels& setOpenTimeStamp(int64_t openTimeStamp) { DARABONBA_PTR_SET_VALUE(openTimeStamp_, openTimeStamp) };


    // parentId Field Functions 
    bool hasParentId() const { return this->parentId_ != nullptr;};
    void deleteParentId() { this->parentId_ = nullptr;};
    inline string parentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, "") };
    inline ListCdsFilesResponseBodyFileModels& setParentId(string parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListCdsFilesResponseBodyFileModels& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sha1 Field Functions 
    bool hasSha1() const { return this->sha1_ != nullptr;};
    void deleteSha1() { this->sha1_ = nullptr;};
    inline string sha1() const { DARABONBA_PTR_GET_DEFAULT(sha1_, "") };
    inline ListCdsFilesResponseBodyFileModels& setSha1(string sha1) { DARABONBA_PTR_SET_VALUE(sha1_, sha1) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline ListCdsFilesResponseBodyFileModels& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // thumbnail Field Functions 
    bool hasThumbnail() const { return this->thumbnail_ != nullptr;};
    void deleteThumbnail() { this->thumbnail_ = nullptr;};
    inline string thumbnail() const { DARABONBA_PTR_GET_DEFAULT(thumbnail_, "") };
    inline ListCdsFilesResponseBodyFileModels& setThumbnail(string thumbnail) { DARABONBA_PTR_SET_VALUE(thumbnail_, thumbnail) };


  protected:
    // The file category. PDS categorizes files based on their suffixes and MIME types. The following major categories are included: doc, image, audio, and video.
    std::shared_ptr<string> category_ = nullptr;
    // The content type of the file.
    std::shared_ptr<string> contentType_ = nullptr;
    // The time when the file was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The file creator.
    std::shared_ptr<string> creator_ = nullptr;
    // The file description.
    std::shared_ptr<string> description_ = nullptr;
    // The URL that is used to download the file. The download URL is valid for only 15 minutes. If the URL is expired, you can call the GetFile operation to obtain the file.
    std::shared_ptr<string> downloadUrl_ = nullptr;
    // The filename extension.
    std::shared_ptr<string> fileExtension_ = nullptr;
    // The file ID.
    std::shared_ptr<string> fileId_ = nullptr;
    // The file path.
    std::shared_ptr<string> filePath_ = nullptr;
    // The file type.
    std::shared_ptr<string> fileType_ = nullptr;
    // The MD5 value of the file.
    std::shared_ptr<string> md5_ = nullptr;
    // The time when the file was last modified.
    std::shared_ptr<string> modifiedTime_ = nullptr;
    // The user who modified the file.
    std::shared_ptr<string> modifier_ = nullptr;
    // The file name.
    std::shared_ptr<string> name_ = nullptr;
    // The time when the file was last opened.
    std::shared_ptr<string> openTime_ = nullptr;
    // The timestamp that indicates the time when the file was last opened.
    std::shared_ptr<int64_t> openTimeStamp_ = nullptr;
    // The ID of the parent folder.
    std::shared_ptr<string> parentId_ = nullptr;
    // The region ID You can call the [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) operation to query the most recent region list.
    std::shared_ptr<string> regionId_ = nullptr;
    // The SHA 1 file.
    std::shared_ptr<string> sha1_ = nullptr;
    // The file size. Unit: bits.
    std::shared_ptr<int64_t> size_ = nullptr;
    // The URL of the thumbnail.
    std::shared_ptr<string> thumbnail_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
