// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDFILESFROMAUTHORIZEDOSSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDFILESFROMAUTHORIZEDOSSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class AddFilesFromAuthorizedOssRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddFilesFromAuthorizedOssRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_TO_JSON(CategoryType, categoryType_);
      DARABONBA_PTR_TO_JSON(FileDetails, fileDetails_);
      DARABONBA_PTR_TO_JSON(OssBucketName, ossBucketName_);
      DARABONBA_PTR_TO_JSON(OssRegionId, ossRegionId_);
      DARABONBA_PTR_TO_JSON(OverWriteFileByOssKey, overWriteFileByOssKey_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, AddFilesFromAuthorizedOssRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_FROM_JSON(CategoryType, categoryType_);
      DARABONBA_PTR_FROM_JSON(FileDetails, fileDetails_);
      DARABONBA_PTR_FROM_JSON(OssBucketName, ossBucketName_);
      DARABONBA_PTR_FROM_JSON(OssRegionId, ossRegionId_);
      DARABONBA_PTR_FROM_JSON(OverWriteFileByOssKey, overWriteFileByOssKey_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    AddFilesFromAuthorizedOssRequest() = default ;
    AddFilesFromAuthorizedOssRequest(const AddFilesFromAuthorizedOssRequest &) = default ;
    AddFilesFromAuthorizedOssRequest(AddFilesFromAuthorizedOssRequest &&) = default ;
    AddFilesFromAuthorizedOssRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddFilesFromAuthorizedOssRequest() = default ;
    AddFilesFromAuthorizedOssRequest& operator=(const AddFilesFromAuthorizedOssRequest &) = default ;
    AddFilesFromAuthorizedOssRequest& operator=(AddFilesFromAuthorizedOssRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class FileDetails : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FileDetails& obj) { 
        DARABONBA_PTR_TO_JSON(FileName, fileName_);
        DARABONBA_PTR_TO_JSON(OssKey, ossKey_);
      };
      friend void from_json(const Darabonba::Json& j, FileDetails& obj) { 
        DARABONBA_PTR_FROM_JSON(FileName, fileName_);
        DARABONBA_PTR_FROM_JSON(OssKey, ossKey_);
      };
      FileDetails() = default ;
      FileDetails(const FileDetails &) = default ;
      FileDetails(FileDetails &&) = default ;
      FileDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FileDetails() = default ;
      FileDetails& operator=(const FileDetails &) = default ;
      FileDetails& operator=(FileDetails &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->fileName_ == nullptr
        && this->ossKey_ == nullptr; };
      // fileName Field Functions 
      bool hasFileName() const { return this->fileName_ != nullptr;};
      void deleteFileName() { this->fileName_ = nullptr;};
      inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
      inline FileDetails& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


      // ossKey Field Functions 
      bool hasOssKey() const { return this->ossKey_ != nullptr;};
      void deleteOssKey() { this->ossKey_ = nullptr;};
      inline string getOssKey() const { DARABONBA_PTR_GET_DEFAULT(ossKey_, "") };
      inline FileDetails& setOssKey(string ossKey) { DARABONBA_PTR_SET_VALUE(ossKey_, ossKey) };


    protected:
      // This parameter is required.
      shared_ptr<string> fileName_ {};
      // This parameter is required.
      shared_ptr<string> ossKey_ {};
    };

    virtual bool empty() const override { return this->categoryId_ == nullptr
        && this->categoryType_ == nullptr && this->fileDetails_ == nullptr && this->ossBucketName_ == nullptr && this->ossRegionId_ == nullptr && this->overWriteFileByOssKey_ == nullptr
        && this->tags_ == nullptr; };
    // categoryId Field Functions 
    bool hasCategoryId() const { return this->categoryId_ != nullptr;};
    void deleteCategoryId() { this->categoryId_ = nullptr;};
    inline string getCategoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, "") };
    inline AddFilesFromAuthorizedOssRequest& setCategoryId(string categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


    // categoryType Field Functions 
    bool hasCategoryType() const { return this->categoryType_ != nullptr;};
    void deleteCategoryType() { this->categoryType_ = nullptr;};
    inline string getCategoryType() const { DARABONBA_PTR_GET_DEFAULT(categoryType_, "") };
    inline AddFilesFromAuthorizedOssRequest& setCategoryType(string categoryType) { DARABONBA_PTR_SET_VALUE(categoryType_, categoryType) };


    // fileDetails Field Functions 
    bool hasFileDetails() const { return this->fileDetails_ != nullptr;};
    void deleteFileDetails() { this->fileDetails_ = nullptr;};
    inline const vector<AddFilesFromAuthorizedOssRequest::FileDetails> & getFileDetails() const { DARABONBA_PTR_GET_CONST(fileDetails_, vector<AddFilesFromAuthorizedOssRequest::FileDetails>) };
    inline vector<AddFilesFromAuthorizedOssRequest::FileDetails> getFileDetails() { DARABONBA_PTR_GET(fileDetails_, vector<AddFilesFromAuthorizedOssRequest::FileDetails>) };
    inline AddFilesFromAuthorizedOssRequest& setFileDetails(const vector<AddFilesFromAuthorizedOssRequest::FileDetails> & fileDetails) { DARABONBA_PTR_SET_VALUE(fileDetails_, fileDetails) };
    inline AddFilesFromAuthorizedOssRequest& setFileDetails(vector<AddFilesFromAuthorizedOssRequest::FileDetails> && fileDetails) { DARABONBA_PTR_SET_RVALUE(fileDetails_, fileDetails) };


    // ossBucketName Field Functions 
    bool hasOssBucketName() const { return this->ossBucketName_ != nullptr;};
    void deleteOssBucketName() { this->ossBucketName_ = nullptr;};
    inline string getOssBucketName() const { DARABONBA_PTR_GET_DEFAULT(ossBucketName_, "") };
    inline AddFilesFromAuthorizedOssRequest& setOssBucketName(string ossBucketName) { DARABONBA_PTR_SET_VALUE(ossBucketName_, ossBucketName) };


    // ossRegionId Field Functions 
    bool hasOssRegionId() const { return this->ossRegionId_ != nullptr;};
    void deleteOssRegionId() { this->ossRegionId_ = nullptr;};
    inline string getOssRegionId() const { DARABONBA_PTR_GET_DEFAULT(ossRegionId_, "") };
    inline AddFilesFromAuthorizedOssRequest& setOssRegionId(string ossRegionId) { DARABONBA_PTR_SET_VALUE(ossRegionId_, ossRegionId) };


    // overWriteFileByOssKey Field Functions 
    bool hasOverWriteFileByOssKey() const { return this->overWriteFileByOssKey_ != nullptr;};
    void deleteOverWriteFileByOssKey() { this->overWriteFileByOssKey_ = nullptr;};
    inline bool getOverWriteFileByOssKey() const { DARABONBA_PTR_GET_DEFAULT(overWriteFileByOssKey_, false) };
    inline AddFilesFromAuthorizedOssRequest& setOverWriteFileByOssKey(bool overWriteFileByOssKey) { DARABONBA_PTR_SET_VALUE(overWriteFileByOssKey_, overWriteFileByOssKey) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<string> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<string>) };
    inline vector<string> getTags() { DARABONBA_PTR_GET(tags_, vector<string>) };
    inline AddFilesFromAuthorizedOssRequest& setTags(const vector<string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline AddFilesFromAuthorizedOssRequest& setTags(vector<string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // This parameter is required.
    shared_ptr<string> categoryId_ {};
    // This parameter is required.
    shared_ptr<string> categoryType_ {};
    // This parameter is required.
    shared_ptr<vector<AddFilesFromAuthorizedOssRequest::FileDetails>> fileDetails_ {};
    // This parameter is required.
    shared_ptr<string> ossBucketName_ {};
    // This parameter is required.
    shared_ptr<string> ossRegionId_ {};
    shared_ptr<bool> overWriteFileByOssKey_ {};
    shared_ptr<vector<string>> tags_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
