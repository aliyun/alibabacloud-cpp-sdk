// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDFILESFROMAUTHORIZEDOSSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDFILESFROMAUTHORIZEDOSSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class AddFilesFromAuthorizedOssShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddFilesFromAuthorizedOssShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_TO_JSON(CategoryType, categoryType_);
      DARABONBA_PTR_TO_JSON(FileDetails, fileDetailsShrink_);
      DARABONBA_PTR_TO_JSON(OssBucketName, ossBucketName_);
      DARABONBA_PTR_TO_JSON(OssRegionId, ossRegionId_);
      DARABONBA_PTR_TO_JSON(OverWriteFileByOssKey, overWriteFileByOssKey_);
      DARABONBA_PTR_TO_JSON(Tags, tagsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, AddFilesFromAuthorizedOssShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_FROM_JSON(CategoryType, categoryType_);
      DARABONBA_PTR_FROM_JSON(FileDetails, fileDetailsShrink_);
      DARABONBA_PTR_FROM_JSON(OssBucketName, ossBucketName_);
      DARABONBA_PTR_FROM_JSON(OssRegionId, ossRegionId_);
      DARABONBA_PTR_FROM_JSON(OverWriteFileByOssKey, overWriteFileByOssKey_);
      DARABONBA_PTR_FROM_JSON(Tags, tagsShrink_);
    };
    AddFilesFromAuthorizedOssShrinkRequest() = default ;
    AddFilesFromAuthorizedOssShrinkRequest(const AddFilesFromAuthorizedOssShrinkRequest &) = default ;
    AddFilesFromAuthorizedOssShrinkRequest(AddFilesFromAuthorizedOssShrinkRequest &&) = default ;
    AddFilesFromAuthorizedOssShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddFilesFromAuthorizedOssShrinkRequest() = default ;
    AddFilesFromAuthorizedOssShrinkRequest& operator=(const AddFilesFromAuthorizedOssShrinkRequest &) = default ;
    AddFilesFromAuthorizedOssShrinkRequest& operator=(AddFilesFromAuthorizedOssShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->categoryId_ == nullptr
        && this->categoryType_ == nullptr && this->fileDetailsShrink_ == nullptr && this->ossBucketName_ == nullptr && this->ossRegionId_ == nullptr && this->overWriteFileByOssKey_ == nullptr
        && this->tagsShrink_ == nullptr; };
    // categoryId Field Functions 
    bool hasCategoryId() const { return this->categoryId_ != nullptr;};
    void deleteCategoryId() { this->categoryId_ = nullptr;};
    inline string getCategoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, "") };
    inline AddFilesFromAuthorizedOssShrinkRequest& setCategoryId(string categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


    // categoryType Field Functions 
    bool hasCategoryType() const { return this->categoryType_ != nullptr;};
    void deleteCategoryType() { this->categoryType_ = nullptr;};
    inline string getCategoryType() const { DARABONBA_PTR_GET_DEFAULT(categoryType_, "") };
    inline AddFilesFromAuthorizedOssShrinkRequest& setCategoryType(string categoryType) { DARABONBA_PTR_SET_VALUE(categoryType_, categoryType) };


    // fileDetailsShrink Field Functions 
    bool hasFileDetailsShrink() const { return this->fileDetailsShrink_ != nullptr;};
    void deleteFileDetailsShrink() { this->fileDetailsShrink_ = nullptr;};
    inline string getFileDetailsShrink() const { DARABONBA_PTR_GET_DEFAULT(fileDetailsShrink_, "") };
    inline AddFilesFromAuthorizedOssShrinkRequest& setFileDetailsShrink(string fileDetailsShrink) { DARABONBA_PTR_SET_VALUE(fileDetailsShrink_, fileDetailsShrink) };


    // ossBucketName Field Functions 
    bool hasOssBucketName() const { return this->ossBucketName_ != nullptr;};
    void deleteOssBucketName() { this->ossBucketName_ = nullptr;};
    inline string getOssBucketName() const { DARABONBA_PTR_GET_DEFAULT(ossBucketName_, "") };
    inline AddFilesFromAuthorizedOssShrinkRequest& setOssBucketName(string ossBucketName) { DARABONBA_PTR_SET_VALUE(ossBucketName_, ossBucketName) };


    // ossRegionId Field Functions 
    bool hasOssRegionId() const { return this->ossRegionId_ != nullptr;};
    void deleteOssRegionId() { this->ossRegionId_ = nullptr;};
    inline string getOssRegionId() const { DARABONBA_PTR_GET_DEFAULT(ossRegionId_, "") };
    inline AddFilesFromAuthorizedOssShrinkRequest& setOssRegionId(string ossRegionId) { DARABONBA_PTR_SET_VALUE(ossRegionId_, ossRegionId) };


    // overWriteFileByOssKey Field Functions 
    bool hasOverWriteFileByOssKey() const { return this->overWriteFileByOssKey_ != nullptr;};
    void deleteOverWriteFileByOssKey() { this->overWriteFileByOssKey_ = nullptr;};
    inline bool getOverWriteFileByOssKey() const { DARABONBA_PTR_GET_DEFAULT(overWriteFileByOssKey_, false) };
    inline AddFilesFromAuthorizedOssShrinkRequest& setOverWriteFileByOssKey(bool overWriteFileByOssKey) { DARABONBA_PTR_SET_VALUE(overWriteFileByOssKey_, overWriteFileByOssKey) };


    // tagsShrink Field Functions 
    bool hasTagsShrink() const { return this->tagsShrink_ != nullptr;};
    void deleteTagsShrink() { this->tagsShrink_ = nullptr;};
    inline string getTagsShrink() const { DARABONBA_PTR_GET_DEFAULT(tagsShrink_, "") };
    inline AddFilesFromAuthorizedOssShrinkRequest& setTagsShrink(string tagsShrink) { DARABONBA_PTR_SET_VALUE(tagsShrink_, tagsShrink) };


  protected:
    // The ID of the destination category for the imported files. This is the CategoryId returned by the AddCategory operation. You can also obtain the category ID by clicking the ID icon next to the category name on the <props="china">[Application Data](https://bailian.console.aliyun.com/?tab=app#/data-center) > Files tab<props="intl">[Application Data](https://modelstudio.console.alibabacloud.com/?tab=app#/data-center) > Files tab. You can set this parameter to default to use the default category created by the system.
    // 
    // This parameter is required.
    shared_ptr<string> categoryId_ {};
    // The category type. This parameter is optional. Default value: UNSTRUCTURED. Valid values:
    // - UNSTRUCTURED: category, used for building knowledge bases.
    // 
    // <props="china">
    // 
    // > This operation does not support importing SESSION_FILE for [session interaction](https://www.alibabacloud.com/help/en/model-studio/user-guide/file-interaction) in agent applications. Use the **AddFile** operation to upload SESSION_FILE from your local machine.
    // 
    // This parameter is required.
    shared_ptr<string> categoryType_ {};
    // The list of files to import. You can upload up to 10 files at a time.
    // > You can upload up to 10 files at a time.
    // >
    // 
    // This parameter is required.
    shared_ptr<string> fileDetailsShrink_ {};
    // The name of the OSS bucket. For more information, see [Buckets](https://help.aliyun.com/document_detail/177682.html). Before you import data from OSS for the first time, you must complete the authorization as prompted in the Model Studio console and add a tag with the key bailian-datahub-access and the value read to the destination bucket. You must also authorize the OSS service-linked role as prompted in the Model Studio console (service name: datahub.sfm.aliyuncs.com).
    // 
    // This parameter is required.
    shared_ptr<string> ossBucketName_ {};
    // The region ID of the OSS bucket. For more information about how to obtain the ID, see [OSS regions and endpoints](https://help.aliyun.com/document_detail/31837.html).
    // 
    // This parameter is required.
    shared_ptr<string> ossRegionId_ {};
    // Specifies whether to overwrite identical files in the category based on the OssKey. Default value: false, which means identical files are not overwritten.
    shared_ptr<bool> overWriteFileByOssKey_ {};
    // The list of tags associated with the file. Default value: empty, which means the file is not associated with any tags. You can specify up to 10 tags.
    shared_ptr<string> tagsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
