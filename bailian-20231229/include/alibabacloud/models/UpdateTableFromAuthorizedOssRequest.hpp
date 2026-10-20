// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETABLEFROMAUTHORIZEDOSSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETABLEFROMAUTHORIZEDOSSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class UpdateTableFromAuthorizedOssRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTableFromAuthorizedOssRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OssBucket, ossBucket_);
      DARABONBA_PTR_TO_JSON(OssKey, ossKey_);
      DARABONBA_PTR_TO_JSON(OssRegionId, ossRegionId_);
      DARABONBA_PTR_TO_JSON(UpdateMode, updateMode_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTableFromAuthorizedOssRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OssBucket, ossBucket_);
      DARABONBA_PTR_FROM_JSON(OssKey, ossKey_);
      DARABONBA_PTR_FROM_JSON(OssRegionId, ossRegionId_);
      DARABONBA_PTR_FROM_JSON(UpdateMode, updateMode_);
    };
    UpdateTableFromAuthorizedOssRequest() = default ;
    UpdateTableFromAuthorizedOssRequest(const UpdateTableFromAuthorizedOssRequest &) = default ;
    UpdateTableFromAuthorizedOssRequest(UpdateTableFromAuthorizedOssRequest &&) = default ;
    UpdateTableFromAuthorizedOssRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTableFromAuthorizedOssRequest() = default ;
    UpdateTableFromAuthorizedOssRequest& operator=(const UpdateTableFromAuthorizedOssRequest &) = default ;
    UpdateTableFromAuthorizedOssRequest& operator=(UpdateTableFromAuthorizedOssRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ossBucket_ == nullptr
        && this->ossKey_ == nullptr && this->ossRegionId_ == nullptr && this->updateMode_ == nullptr; };
    // ossBucket Field Functions 
    bool hasOssBucket() const { return this->ossBucket_ != nullptr;};
    void deleteOssBucket() { this->ossBucket_ = nullptr;};
    inline string getOssBucket() const { DARABONBA_PTR_GET_DEFAULT(ossBucket_, "") };
    inline UpdateTableFromAuthorizedOssRequest& setOssBucket(string ossBucket) { DARABONBA_PTR_SET_VALUE(ossBucket_, ossBucket) };


    // ossKey Field Functions 
    bool hasOssKey() const { return this->ossKey_ != nullptr;};
    void deleteOssKey() { this->ossKey_ = nullptr;};
    inline string getOssKey() const { DARABONBA_PTR_GET_DEFAULT(ossKey_, "") };
    inline UpdateTableFromAuthorizedOssRequest& setOssKey(string ossKey) { DARABONBA_PTR_SET_VALUE(ossKey_, ossKey) };


    // ossRegionId Field Functions 
    bool hasOssRegionId() const { return this->ossRegionId_ != nullptr;};
    void deleteOssRegionId() { this->ossRegionId_ = nullptr;};
    inline string getOssRegionId() const { DARABONBA_PTR_GET_DEFAULT(ossRegionId_, "") };
    inline UpdateTableFromAuthorizedOssRequest& setOssRegionId(string ossRegionId) { DARABONBA_PTR_SET_VALUE(ossRegionId_, ossRegionId) };


    // updateMode Field Functions 
    bool hasUpdateMode() const { return this->updateMode_ != nullptr;};
    void deleteUpdateMode() { this->updateMode_ = nullptr;};
    inline string getUpdateMode() const { DARABONBA_PTR_GET_DEFAULT(updateMode_, "") };
    inline UpdateTableFromAuthorizedOssRequest& setUpdateMode(string updateMode) { DARABONBA_PTR_SET_VALUE(updateMode_, updateMode) };


  protected:
    // The name of the OSS bucket. For more information, see [Buckets](https://help.aliyun.com/document_detail/177682.html). The target bucket must have the tag key `bailian-datahub-access` and tag value `read` added.
    // 
    // This parameter is required.
    shared_ptr<string> ossBucket_ {};
    // The key of the file to import in the OSS bucket. For more information, see [Object naming](https://help.aliyun.com/document_detail/273129.html).
    // 
    // This parameter is required.
    shared_ptr<string> ossKey_ {};
    // The region ID of the OSS bucket. For more information, see [OSS regions and endpoints](https://help.aliyun.com/document_detail/31837.html).
    // 
    // This parameter is required.
    shared_ptr<string> ossRegionId_ {};
    // The update mode. Valid values:
    // - OVERWRITE: overwrites existing data.
    // - APPEND: appends data to existing data.
    // 
    // This parameter is required.
    shared_ptr<string> updateMode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
