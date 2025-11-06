// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMSESERVICEAPPLICATIONRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATEMSESERVICEAPPLICATIONRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class CreateMseServiceApplicationResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMseServiceApplicationResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(ExtraInfo, extraInfo_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(LicenseKey, licenseKey_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMseServiceApplicationResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(ExtraInfo, extraInfo_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(LicenseKey, licenseKey_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    CreateMseServiceApplicationResponseBodyData() = default ;
    CreateMseServiceApplicationResponseBodyData(const CreateMseServiceApplicationResponseBodyData &) = default ;
    CreateMseServiceApplicationResponseBodyData(CreateMseServiceApplicationResponseBodyData &&) = default ;
    CreateMseServiceApplicationResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMseServiceApplicationResponseBodyData() = default ;
    CreateMseServiceApplicationResponseBodyData& operator=(const CreateMseServiceApplicationResponseBodyData &) = default ;
    CreateMseServiceApplicationResponseBodyData& operator=(CreateMseServiceApplicationResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->appName_ == nullptr && return this->createTime_ == nullptr && return this->extraInfo_ == nullptr && return this->language_ == nullptr && return this->licenseKey_ == nullptr
        && return this->regionId_ == nullptr && return this->source_ == nullptr && return this->status_ == nullptr && return this->updateTime_ == nullptr && return this->userId_ == nullptr
        && return this->version_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline CreateMseServiceApplicationResponseBodyData& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline CreateMseServiceApplicationResponseBodyData& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline CreateMseServiceApplicationResponseBodyData& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // extraInfo Field Functions 
    bool hasExtraInfo() const { return this->extraInfo_ != nullptr;};
    void deleteExtraInfo() { this->extraInfo_ = nullptr;};
    inline string extraInfo() const { DARABONBA_PTR_GET_DEFAULT(extraInfo_, "") };
    inline CreateMseServiceApplicationResponseBodyData& setExtraInfo(string extraInfo) { DARABONBA_PTR_SET_VALUE(extraInfo_, extraInfo) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string language() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline CreateMseServiceApplicationResponseBodyData& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // licenseKey Field Functions 
    bool hasLicenseKey() const { return this->licenseKey_ != nullptr;};
    void deleteLicenseKey() { this->licenseKey_ = nullptr;};
    inline string licenseKey() const { DARABONBA_PTR_GET_DEFAULT(licenseKey_, "") };
    inline CreateMseServiceApplicationResponseBodyData& setLicenseKey(string licenseKey) { DARABONBA_PTR_SET_VALUE(licenseKey_, licenseKey) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateMseServiceApplicationResponseBodyData& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline CreateMseServiceApplicationResponseBodyData& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline CreateMseServiceApplicationResponseBodyData& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline CreateMseServiceApplicationResponseBodyData& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline CreateMseServiceApplicationResponseBodyData& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline CreateMseServiceApplicationResponseBodyData& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The application ID.
    std::shared_ptr<string> appId_ = nullptr;
    // The name of the application.
    std::shared_ptr<string> appName_ = nullptr;
    // The creation time.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The additional information.
    std::shared_ptr<string> extraInfo_ = nullptr;
    // The programming language of the application.
    std::shared_ptr<string> language_ = nullptr;
    // The license key in use.
    std::shared_ptr<string> licenseKey_ = nullptr;
    // The ID of the region.
    std::shared_ptr<string> regionId_ = nullptr;
    // The source type.
    std::shared_ptr<string> source_ = nullptr;
    // The status. Valid values: 1: available; 2: deleted.
    std::shared_ptr<int32_t> status_ = nullptr;
    // The last modification time.
    std::shared_ptr<int64_t> updateTime_ = nullptr;
    // The ID of the user.
    std::shared_ptr<string> userId_ = nullptr;
    // The version information.
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
