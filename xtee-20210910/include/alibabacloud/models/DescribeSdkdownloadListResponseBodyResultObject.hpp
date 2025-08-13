// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESDKDOWNLOADLISTRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESDKDOWNLOADLISTRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeSDKDownloadListResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSDKDownloadListResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(developer, developer_);
      DARABONBA_PTR_TO_JSON(deviceType, deviceType_);
      DARABONBA_PTR_TO_JSON(downloadUrl, downloadUrl_);
      DARABONBA_PTR_TO_JSON(md5, md5_);
      DARABONBA_PTR_TO_JSON(packageName, packageName_);
      DARABONBA_PTR_TO_JSON(privacyLink, privacyLink_);
      DARABONBA_PTR_TO_JSON(pushTime, pushTime_);
      DARABONBA_PTR_TO_JSON(sdkVersion, sdkVersion_);
      DARABONBA_PTR_TO_JSON(size, size_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSDKDownloadListResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(developer, developer_);
      DARABONBA_PTR_FROM_JSON(deviceType, deviceType_);
      DARABONBA_PTR_FROM_JSON(downloadUrl, downloadUrl_);
      DARABONBA_PTR_FROM_JSON(md5, md5_);
      DARABONBA_PTR_FROM_JSON(packageName, packageName_);
      DARABONBA_PTR_FROM_JSON(privacyLink, privacyLink_);
      DARABONBA_PTR_FROM_JSON(pushTime, pushTime_);
      DARABONBA_PTR_FROM_JSON(sdkVersion, sdkVersion_);
      DARABONBA_PTR_FROM_JSON(size, size_);
    };
    DescribeSDKDownloadListResponseBodyResultObject() = default ;
    DescribeSDKDownloadListResponseBodyResultObject(const DescribeSDKDownloadListResponseBodyResultObject &) = default ;
    DescribeSDKDownloadListResponseBodyResultObject(DescribeSDKDownloadListResponseBodyResultObject &&) = default ;
    DescribeSDKDownloadListResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSDKDownloadListResponseBodyResultObject() = default ;
    DescribeSDKDownloadListResponseBodyResultObject& operator=(const DescribeSDKDownloadListResponseBodyResultObject &) = default ;
    DescribeSDKDownloadListResponseBodyResultObject& operator=(DescribeSDKDownloadListResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->developer_ != nullptr && this->deviceType_ != nullptr && this->downloadUrl_ != nullptr && this->md5_ != nullptr && this->packageName_ != nullptr
        && this->privacyLink_ != nullptr && this->pushTime_ != nullptr && this->sdkVersion_ != nullptr && this->size_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeSDKDownloadListResponseBodyResultObject& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // developer Field Functions 
    bool hasDeveloper() const { return this->developer_ != nullptr;};
    void deleteDeveloper() { this->developer_ = nullptr;};
    inline string developer() const { DARABONBA_PTR_GET_DEFAULT(developer_, "") };
    inline DescribeSDKDownloadListResponseBodyResultObject& setDeveloper(string developer) { DARABONBA_PTR_SET_VALUE(developer_, developer) };


    // deviceType Field Functions 
    bool hasDeviceType() const { return this->deviceType_ != nullptr;};
    void deleteDeviceType() { this->deviceType_ = nullptr;};
    inline string deviceType() const { DARABONBA_PTR_GET_DEFAULT(deviceType_, "") };
    inline DescribeSDKDownloadListResponseBodyResultObject& setDeviceType(string deviceType) { DARABONBA_PTR_SET_VALUE(deviceType_, deviceType) };


    // downloadUrl Field Functions 
    bool hasDownloadUrl() const { return this->downloadUrl_ != nullptr;};
    void deleteDownloadUrl() { this->downloadUrl_ = nullptr;};
    inline string downloadUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadUrl_, "") };
    inline DescribeSDKDownloadListResponseBodyResultObject& setDownloadUrl(string downloadUrl) { DARABONBA_PTR_SET_VALUE(downloadUrl_, downloadUrl) };


    // md5 Field Functions 
    bool hasMd5() const { return this->md5_ != nullptr;};
    void deleteMd5() { this->md5_ = nullptr;};
    inline string md5() const { DARABONBA_PTR_GET_DEFAULT(md5_, "") };
    inline DescribeSDKDownloadListResponseBodyResultObject& setMd5(string md5) { DARABONBA_PTR_SET_VALUE(md5_, md5) };


    // packageName Field Functions 
    bool hasPackageName() const { return this->packageName_ != nullptr;};
    void deletePackageName() { this->packageName_ = nullptr;};
    inline string packageName() const { DARABONBA_PTR_GET_DEFAULT(packageName_, "") };
    inline DescribeSDKDownloadListResponseBodyResultObject& setPackageName(string packageName) { DARABONBA_PTR_SET_VALUE(packageName_, packageName) };


    // privacyLink Field Functions 
    bool hasPrivacyLink() const { return this->privacyLink_ != nullptr;};
    void deletePrivacyLink() { this->privacyLink_ = nullptr;};
    inline string privacyLink() const { DARABONBA_PTR_GET_DEFAULT(privacyLink_, "") };
    inline DescribeSDKDownloadListResponseBodyResultObject& setPrivacyLink(string privacyLink) { DARABONBA_PTR_SET_VALUE(privacyLink_, privacyLink) };


    // pushTime Field Functions 
    bool hasPushTime() const { return this->pushTime_ != nullptr;};
    void deletePushTime() { this->pushTime_ = nullptr;};
    inline string pushTime() const { DARABONBA_PTR_GET_DEFAULT(pushTime_, "") };
    inline DescribeSDKDownloadListResponseBodyResultObject& setPushTime(string pushTime) { DARABONBA_PTR_SET_VALUE(pushTime_, pushTime) };


    // sdkVersion Field Functions 
    bool hasSdkVersion() const { return this->sdkVersion_ != nullptr;};
    void deleteSdkVersion() { this->sdkVersion_ = nullptr;};
    inline string sdkVersion() const { DARABONBA_PTR_GET_DEFAULT(sdkVersion_, "") };
    inline DescribeSDKDownloadListResponseBodyResultObject& setSdkVersion(string sdkVersion) { DARABONBA_PTR_SET_VALUE(sdkVersion_, sdkVersion) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline string size() const { DARABONBA_PTR_GET_DEFAULT(size_, "") };
    inline DescribeSDKDownloadListResponseBodyResultObject& setSize(string size) { DARABONBA_PTR_SET_VALUE(size_, size) };


  protected:
    // Description information.
    std::shared_ptr<string> description_ = nullptr;
    // Developer
    std::shared_ptr<string> developer_ = nullptr;
    // Device type.
    std::shared_ptr<string> deviceType_ = nullptr;
    // Download URL.
    std::shared_ptr<string> downloadUrl_ = nullptr;
    // File MD5.
    std::shared_ptr<string> md5_ = nullptr;
    // Package name
    std::shared_ptr<string> packageName_ = nullptr;
    // Risk recognition SDK privacy policy link
    std::shared_ptr<string> privacyLink_ = nullptr;
    // Release time
    std::shared_ptr<string> pushTime_ = nullptr;
    // SDK version.
    std::shared_ptr<string> sdkVersion_ = nullptr;
    // Size
    std::shared_ptr<string> size_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
