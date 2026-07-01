// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEDIARESOURCEIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETMEDIARESOURCEIDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class GetMediaResourceIdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMediaResourceIdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ExtendInfo, extendInfo_);
      DARABONBA_PTR_TO_JSON(FileSize, fileSize_);
      DARABONBA_PTR_TO_JSON(Memo, memo_);
      DARABONBA_PTR_TO_JSON(OssKey, ossKey_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, GetMediaResourceIdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ExtendInfo, extendInfo_);
      DARABONBA_PTR_FROM_JSON(FileSize, fileSize_);
      DARABONBA_PTR_FROM_JSON(Memo, memo_);
      DARABONBA_PTR_FROM_JSON(OssKey, ossKey_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
    };
    GetMediaResourceIdRequest() = default ;
    GetMediaResourceIdRequest(const GetMediaResourceIdRequest &) = default ;
    GetMediaResourceIdRequest(GetMediaResourceIdRequest &&) = default ;
    GetMediaResourceIdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMediaResourceIdRequest() = default ;
    GetMediaResourceIdRequest& operator=(const GetMediaResourceIdRequest &) = default ;
    GetMediaResourceIdRequest& operator=(GetMediaResourceIdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->extendInfo_ == nullptr
        && this->fileSize_ == nullptr && this->memo_ == nullptr && this->ossKey_ == nullptr && this->resourceType_ == nullptr; };
    // extendInfo Field Functions 
    bool hasExtendInfo() const { return this->extendInfo_ != nullptr;};
    void deleteExtendInfo() { this->extendInfo_ = nullptr;};
    inline string getExtendInfo() const { DARABONBA_PTR_GET_DEFAULT(extendInfo_, "") };
    inline GetMediaResourceIdRequest& setExtendInfo(string extendInfo) { DARABONBA_PTR_SET_VALUE(extendInfo_, extendInfo) };


    // fileSize Field Functions 
    bool hasFileSize() const { return this->fileSize_ != nullptr;};
    void deleteFileSize() { this->fileSize_ = nullptr;};
    inline int64_t getFileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, 0L) };
    inline GetMediaResourceIdRequest& setFileSize(int64_t fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


    // memo Field Functions 
    bool hasMemo() const { return this->memo_ != nullptr;};
    void deleteMemo() { this->memo_ = nullptr;};
    inline string getMemo() const { DARABONBA_PTR_GET_DEFAULT(memo_, "") };
    inline GetMediaResourceIdRequest& setMemo(string memo) { DARABONBA_PTR_SET_VALUE(memo_, memo) };


    // ossKey Field Functions 
    bool hasOssKey() const { return this->ossKey_ != nullptr;};
    void deleteOssKey() { this->ossKey_ = nullptr;};
    inline string getOssKey() const { DARABONBA_PTR_GET_DEFAULT(ossKey_, "") };
    inline GetMediaResourceIdRequest& setOssKey(string ossKey) { DARABONBA_PTR_SET_VALUE(ossKey_, ossKey) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline int32_t getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, 0) };
    inline GetMediaResourceIdRequest& setResourceType(int32_t resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    // The extended field.
    // 
    // > Required when the resource type is **image**.
    shared_ptr<string> extendInfo_ {};
    // The file size. Unit: bytes.
    // 
    // This parameter is required.
    shared_ptr<int64_t> fileSize_ {};
    // The description of the uploaded resource.
    shared_ptr<string> memo_ {};
    // The address of the resource to retrieve.
    // 
    // This parameter is required.
    shared_ptr<string> ossKey_ {};
    // The resource type.
    // 
    // - **1**: Text
    // - **2**: Image. Small images must not exceed 100 KB. Large images must not exceed 2 MB. Images must be clear. Supported formats: JPG, JPEG, PNG.
    // - **3**: Audio
    // - **4**: Video. Supported format: MP4.
    // > 
    // > - If the resource type is image, **img_rate** is required.
    // > - 1:1 ratio: oneToOne
    // > - 16:9 ratio: sixteenToNine
    // > - 3:1 ratio: threeToOne
    // > - 48:65 ratio: fortyEightToSixtyFiv.
    // 
    // This parameter is required.
    shared_ptr<int32_t> resourceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
