// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDFILESFROMAUTHORIZEDOSSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDFILESFROMAUTHORIZEDOSSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AddFilesFromAuthorizedOssRequestFileDetails.hpp>
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
    virtual bool empty() const override { return this->categoryId_ == nullptr
        && return this->categoryType_ == nullptr && return this->fileDetails_ == nullptr && return this->ossBucketName_ == nullptr && return this->ossRegionId_ == nullptr && return this->overWriteFileByOssKey_ == nullptr
        && return this->tags_ == nullptr; };
    // categoryId Field Functions 
    bool hasCategoryId() const { return this->categoryId_ != nullptr;};
    void deleteCategoryId() { this->categoryId_ = nullptr;};
    inline string categoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, "") };
    inline AddFilesFromAuthorizedOssRequest& setCategoryId(string categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


    // categoryType Field Functions 
    bool hasCategoryType() const { return this->categoryType_ != nullptr;};
    void deleteCategoryType() { this->categoryType_ = nullptr;};
    inline string categoryType() const { DARABONBA_PTR_GET_DEFAULT(categoryType_, "") };
    inline AddFilesFromAuthorizedOssRequest& setCategoryType(string categoryType) { DARABONBA_PTR_SET_VALUE(categoryType_, categoryType) };


    // fileDetails Field Functions 
    bool hasFileDetails() const { return this->fileDetails_ != nullptr;};
    void deleteFileDetails() { this->fileDetails_ = nullptr;};
    inline const vector<AddFilesFromAuthorizedOssRequestFileDetails> & fileDetails() const { DARABONBA_PTR_GET_CONST(fileDetails_, vector<AddFilesFromAuthorizedOssRequestFileDetails>) };
    inline vector<AddFilesFromAuthorizedOssRequestFileDetails> fileDetails() { DARABONBA_PTR_GET(fileDetails_, vector<AddFilesFromAuthorizedOssRequestFileDetails>) };
    inline AddFilesFromAuthorizedOssRequest& setFileDetails(const vector<AddFilesFromAuthorizedOssRequestFileDetails> & fileDetails) { DARABONBA_PTR_SET_VALUE(fileDetails_, fileDetails) };
    inline AddFilesFromAuthorizedOssRequest& setFileDetails(vector<AddFilesFromAuthorizedOssRequestFileDetails> && fileDetails) { DARABONBA_PTR_SET_RVALUE(fileDetails_, fileDetails) };


    // ossBucketName Field Functions 
    bool hasOssBucketName() const { return this->ossBucketName_ != nullptr;};
    void deleteOssBucketName() { this->ossBucketName_ = nullptr;};
    inline string ossBucketName() const { DARABONBA_PTR_GET_DEFAULT(ossBucketName_, "") };
    inline AddFilesFromAuthorizedOssRequest& setOssBucketName(string ossBucketName) { DARABONBA_PTR_SET_VALUE(ossBucketName_, ossBucketName) };


    // ossRegionId Field Functions 
    bool hasOssRegionId() const { return this->ossRegionId_ != nullptr;};
    void deleteOssRegionId() { this->ossRegionId_ = nullptr;};
    inline string ossRegionId() const { DARABONBA_PTR_GET_DEFAULT(ossRegionId_, "") };
    inline AddFilesFromAuthorizedOssRequest& setOssRegionId(string ossRegionId) { DARABONBA_PTR_SET_VALUE(ossRegionId_, ossRegionId) };


    // overWriteFileByOssKey Field Functions 
    bool hasOverWriteFileByOssKey() const { return this->overWriteFileByOssKey_ != nullptr;};
    void deleteOverWriteFileByOssKey() { this->overWriteFileByOssKey_ = nullptr;};
    inline bool overWriteFileByOssKey() const { DARABONBA_PTR_GET_DEFAULT(overWriteFileByOssKey_, false) };
    inline AddFilesFromAuthorizedOssRequest& setOverWriteFileByOssKey(bool overWriteFileByOssKey) { DARABONBA_PTR_SET_VALUE(overWriteFileByOssKey_, overWriteFileByOssKey) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<string> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<string>) };
    inline vector<string> tags() { DARABONBA_PTR_GET(tags_, vector<string>) };
    inline AddFilesFromAuthorizedOssRequest& setTags(const vector<string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline AddFilesFromAuthorizedOssRequest& setTags(vector<string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> categoryId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> categoryType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<AddFilesFromAuthorizedOssRequestFileDetails>> fileDetails_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> ossBucketName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> ossRegionId_ = nullptr;
    std::shared_ptr<bool> overWriteFileByOssKey_ = nullptr;
    std::shared_ptr<vector<string>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
