// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWATERMARKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTWATERMARKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListWatermarkResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWatermarkResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(WatermarkInfos, watermarkInfos_);
    };
    friend void from_json(const Darabonba::Json& j, ListWatermarkResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(WatermarkInfos, watermarkInfos_);
    };
    ListWatermarkResponseBody() = default ;
    ListWatermarkResponseBody(const ListWatermarkResponseBody &) = default ;
    ListWatermarkResponseBody(ListWatermarkResponseBody &&) = default ;
    ListWatermarkResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWatermarkResponseBody() = default ;
    ListWatermarkResponseBody& operator=(const ListWatermarkResponseBody &) = default ;
    ListWatermarkResponseBody& operator=(ListWatermarkResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class WatermarkInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const WatermarkInfos& obj) { 
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
        DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(WatermarkConfig, watermarkConfig_);
        DARABONBA_PTR_TO_JSON(WatermarkId, watermarkId_);
      };
      friend void from_json(const Darabonba::Json& j, WatermarkInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
        DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(WatermarkConfig, watermarkConfig_);
        DARABONBA_PTR_FROM_JSON(WatermarkId, watermarkId_);
      };
      WatermarkInfos() = default ;
      WatermarkInfos(const WatermarkInfos &) = default ;
      WatermarkInfos(WatermarkInfos &&) = default ;
      WatermarkInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~WatermarkInfos() = default ;
      WatermarkInfos& operator=(const WatermarkInfos &) = default ;
      WatermarkInfos& operator=(WatermarkInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appId_ == nullptr
        && this->creationTime_ == nullptr && this->fileUrl_ == nullptr && this->isDefault_ == nullptr && this->name_ == nullptr && this->type_ == nullptr
        && this->watermarkConfig_ == nullptr && this->watermarkId_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline WatermarkInfos& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline WatermarkInfos& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // fileUrl Field Functions 
      bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
      void deleteFileUrl() { this->fileUrl_ = nullptr;};
      inline string getFileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
      inline WatermarkInfos& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


      // isDefault Field Functions 
      bool hasIsDefault() const { return this->isDefault_ != nullptr;};
      void deleteIsDefault() { this->isDefault_ = nullptr;};
      inline string getIsDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, "") };
      inline WatermarkInfos& setIsDefault(string isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline WatermarkInfos& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline WatermarkInfos& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // watermarkConfig Field Functions 
      bool hasWatermarkConfig() const { return this->watermarkConfig_ != nullptr;};
      void deleteWatermarkConfig() { this->watermarkConfig_ = nullptr;};
      inline string getWatermarkConfig() const { DARABONBA_PTR_GET_DEFAULT(watermarkConfig_, "") };
      inline WatermarkInfos& setWatermarkConfig(string watermarkConfig) { DARABONBA_PTR_SET_VALUE(watermarkConfig_, watermarkConfig) };


      // watermarkId Field Functions 
      bool hasWatermarkId() const { return this->watermarkId_ != nullptr;};
      void deleteWatermarkId() { this->watermarkId_ = nullptr;};
      inline string getWatermarkId() const { DARABONBA_PTR_GET_DEFAULT(watermarkId_, "") };
      inline WatermarkInfos& setWatermarkId(string watermarkId) { DARABONBA_PTR_SET_VALUE(watermarkId_, watermarkId) };


    protected:
      // The ID of the application.
      shared_ptr<string> appId_ {};
      // The time when the watermark template was created. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
      shared_ptr<string> creationTime_ {};
      // The URL of the watermark file. The URL is an Object Storage Service (OSS) URL or an Alibaba Cloud CDN URL.
      // 
      // >  This parameter is returned only for image watermark templates.
      shared_ptr<string> fileUrl_ {};
      // Indicates whether the watermark template is the default one. Valid values:
      // 
      // *   **Default**
      // *   **NotDefault**
      shared_ptr<string> isDefault_ {};
      // The name of the watermark template.
      shared_ptr<string> name_ {};
      // The type of the watermark template.
      // 
      // *   **Image**: image watermark template
      // *   **Text**: text watermark template
      shared_ptr<string> type_ {};
      // The configuration information of the watermark such as the display position and special effects. The value is a JSON string. The configuration parameters for image and text watermarks are different. For more information about the parameter structure, see [WatermarkConfig](~~98618#section-h01-44s-2lr~~).
      shared_ptr<string> watermarkConfig_ {};
      // The ID of the watermark template.
      shared_ptr<string> watermarkId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->watermarkInfos_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListWatermarkResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // watermarkInfos Field Functions 
    bool hasWatermarkInfos() const { return this->watermarkInfos_ != nullptr;};
    void deleteWatermarkInfos() { this->watermarkInfos_ = nullptr;};
    inline const vector<ListWatermarkResponseBody::WatermarkInfos> & getWatermarkInfos() const { DARABONBA_PTR_GET_CONST(watermarkInfos_, vector<ListWatermarkResponseBody::WatermarkInfos>) };
    inline vector<ListWatermarkResponseBody::WatermarkInfos> getWatermarkInfos() { DARABONBA_PTR_GET(watermarkInfos_, vector<ListWatermarkResponseBody::WatermarkInfos>) };
    inline ListWatermarkResponseBody& setWatermarkInfos(const vector<ListWatermarkResponseBody::WatermarkInfos> & watermarkInfos) { DARABONBA_PTR_SET_VALUE(watermarkInfos_, watermarkInfos) };
    inline ListWatermarkResponseBody& setWatermarkInfos(vector<ListWatermarkResponseBody::WatermarkInfos> && watermarkInfos) { DARABONBA_PTR_SET_RVALUE(watermarkInfos_, watermarkInfos) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The information about the watermark template.
    shared_ptr<vector<ListWatermarkResponseBody::WatermarkInfos>> watermarkInfos_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
