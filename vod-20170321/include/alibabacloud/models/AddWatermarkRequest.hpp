// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDWATERMARKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDWATERMARKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class AddWatermarkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddWatermarkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(WatermarkConfig, watermarkConfig_);
    };
    friend void from_json(const Darabonba::Json& j, AddWatermarkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(WatermarkConfig, watermarkConfig_);
    };
    AddWatermarkRequest() = default ;
    AddWatermarkRequest(const AddWatermarkRequest &) = default ;
    AddWatermarkRequest(AddWatermarkRequest &&) = default ;
    AddWatermarkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddWatermarkRequest() = default ;
    AddWatermarkRequest& operator=(const AddWatermarkRequest &) = default ;
    AddWatermarkRequest& operator=(AddWatermarkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->fileUrl_ == nullptr && this->name_ == nullptr && this->type_ == nullptr && this->watermarkConfig_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline AddWatermarkRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // fileUrl Field Functions 
    bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
    void deleteFileUrl() { this->fileUrl_ = nullptr;};
    inline string getFileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
    inline AddWatermarkRequest& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline AddWatermarkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline AddWatermarkRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // watermarkConfig Field Functions 
    bool hasWatermarkConfig() const { return this->watermarkConfig_ != nullptr;};
    void deleteWatermarkConfig() { this->watermarkConfig_ = nullptr;};
    inline string getWatermarkConfig() const { DARABONBA_PTR_GET_DEFAULT(watermarkConfig_, "") };
    inline AddWatermarkRequest& setWatermarkConfig(string watermarkConfig) { DARABONBA_PTR_SET_VALUE(watermarkConfig_, watermarkConfig) };


  protected:
    // The application ID. Default value: **app-1000000**. If you have activated the multi-application service, specify the application ID to add the watermark template to the specified application. For more information, see [Multi-application service](https://help.aliyun.com/document_detail/113600.html).
    shared_ptr<string> appId_ {};
    // The Object Storage Service (OSS) URL of the watermark image file (without authentication).
    // >- Request parameter is required when you set an image watermark template (`Type` is `Image`).
    // >- You can call [CreateUploadAttachedMedia](~~CreateUploadAttachedMedia~~) to upload the watermark image to ApsaraVideo VOD. The value of the `FileURL` parameter returned after the upload can be used as the value of request parameter.
    shared_ptr<string> fileUrl_ {};
    // The name of the watermark template.
    // - Only Chinese characters, letters, and digits are supported.
    // - The name can be up to 128 bytes in length.
    // - UTF-8 encoding.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The templatetype of the watermark. Valid values:
    // - **Image** (default): image watermark template.
    // - **Text**: text watermark template.
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
    // The configuration information of the watermark (JSON string), including the display position and effect of the watermark. The configuration parameters differ between image watermarks and text watermarks. For more information about the parameter structure, see [WatermarkConfig](~~98618#section-h01-44s-2lr~~).
    // 
    // This parameter is required.
    shared_ptr<string> watermarkConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
