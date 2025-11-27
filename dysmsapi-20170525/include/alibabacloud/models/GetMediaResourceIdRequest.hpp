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
        && return this->fileSize_ == nullptr && return this->memo_ == nullptr && return this->ossKey_ == nullptr && return this->resourceType_ == nullptr; };
    // extendInfo Field Functions 
    bool hasExtendInfo() const { return this->extendInfo_ != nullptr;};
    void deleteExtendInfo() { this->extendInfo_ = nullptr;};
    inline string extendInfo() const { DARABONBA_PTR_GET_DEFAULT(extendInfo_, "") };
    inline GetMediaResourceIdRequest& setExtendInfo(string extendInfo) { DARABONBA_PTR_SET_VALUE(extendInfo_, extendInfo) };


    // fileSize Field Functions 
    bool hasFileSize() const { return this->fileSize_ != nullptr;};
    void deleteFileSize() { this->fileSize_ = nullptr;};
    inline int64_t fileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, 0L) };
    inline GetMediaResourceIdRequest& setFileSize(int64_t fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


    // memo Field Functions 
    bool hasMemo() const { return this->memo_ != nullptr;};
    void deleteMemo() { this->memo_ = nullptr;};
    inline string memo() const { DARABONBA_PTR_GET_DEFAULT(memo_, "") };
    inline GetMediaResourceIdRequest& setMemo(string memo) { DARABONBA_PTR_SET_VALUE(memo_, memo) };


    // ossKey Field Functions 
    bool hasOssKey() const { return this->ossKey_ != nullptr;};
    void deleteOssKey() { this->ossKey_ = nullptr;};
    inline string ossKey() const { DARABONBA_PTR_GET_DEFAULT(ossKey_, "") };
    inline GetMediaResourceIdRequest& setOssKey(string ossKey) { DARABONBA_PTR_SET_VALUE(ossKey_, ossKey) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline int32_t resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, 0) };
    inline GetMediaResourceIdRequest& setResourceType(int32_t resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    // The extended fields.
    // 
    // > If you set the ResourceType parameter to **2**, this parameter is required.
    std::shared_ptr<string> extendInfo_ = nullptr;
    // The size of the resource. Unit: bytes.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> fileSize_ = nullptr;
    // The description of the resource.
    std::shared_ptr<string> memo_ = nullptr;
    // The address of the resource.
    // 
    // This parameter is required.
    std::shared_ptr<string> ossKey_ = nullptr;
    // The type of the resource.
    // 
    // *   **1**: text.
    // *   **2**: image. A small image cannot exceed 100 KB in size, and a large image cannot exceed 2 MB in size. The image must be clear. Supported format: JPG, JPEG, and PNG.
    // *   **3**: audio.
    // *   **4**: video. Supported format: MP4.
    // 
    // > 
    // 
    // *   If you set the ResourceType parameter to 2, the **img_rate** required is required. Valid values:
    // 
    // *   1:1
    // 
    // *   16:9
    // 
    // *   3:1
    // 
    // *   48:65
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> resourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
