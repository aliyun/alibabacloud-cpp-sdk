// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESDKDOWNLOADLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESDKDOWNLOADLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeSDKDownloadListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSDKDownloadListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(resultObject, resultObject_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSDKDownloadListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(resultObject, resultObject_);
    };
    DescribeSDKDownloadListResponseBody() = default ;
    DescribeSDKDownloadListResponseBody(const DescribeSDKDownloadListResponseBody &) = default ;
    DescribeSDKDownloadListResponseBody(DescribeSDKDownloadListResponseBody &&) = default ;
    DescribeSDKDownloadListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSDKDownloadListResponseBody() = default ;
    DescribeSDKDownloadListResponseBody& operator=(const DescribeSDKDownloadListResponseBody &) = default ;
    DescribeSDKDownloadListResponseBody& operator=(DescribeSDKDownloadListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
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
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
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
      ResultObject() = default ;
      ResultObject(const ResultObject &) = default ;
      ResultObject(ResultObject &&) = default ;
      ResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResultObject() = default ;
      ResultObject& operator=(const ResultObject &) = default ;
      ResultObject& operator=(ResultObject &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->description_ == nullptr
        && this->developer_ == nullptr && this->deviceType_ == nullptr && this->downloadUrl_ == nullptr && this->md5_ == nullptr && this->packageName_ == nullptr
        && this->privacyLink_ == nullptr && this->pushTime_ == nullptr && this->sdkVersion_ == nullptr && this->size_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline ResultObject& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // developer Field Functions 
      bool hasDeveloper() const { return this->developer_ != nullptr;};
      void deleteDeveloper() { this->developer_ = nullptr;};
      inline string getDeveloper() const { DARABONBA_PTR_GET_DEFAULT(developer_, "") };
      inline ResultObject& setDeveloper(string developer) { DARABONBA_PTR_SET_VALUE(developer_, developer) };


      // deviceType Field Functions 
      bool hasDeviceType() const { return this->deviceType_ != nullptr;};
      void deleteDeviceType() { this->deviceType_ = nullptr;};
      inline string getDeviceType() const { DARABONBA_PTR_GET_DEFAULT(deviceType_, "") };
      inline ResultObject& setDeviceType(string deviceType) { DARABONBA_PTR_SET_VALUE(deviceType_, deviceType) };


      // downloadUrl Field Functions 
      bool hasDownloadUrl() const { return this->downloadUrl_ != nullptr;};
      void deleteDownloadUrl() { this->downloadUrl_ = nullptr;};
      inline string getDownloadUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadUrl_, "") };
      inline ResultObject& setDownloadUrl(string downloadUrl) { DARABONBA_PTR_SET_VALUE(downloadUrl_, downloadUrl) };


      // md5 Field Functions 
      bool hasMd5() const { return this->md5_ != nullptr;};
      void deleteMd5() { this->md5_ = nullptr;};
      inline string getMd5() const { DARABONBA_PTR_GET_DEFAULT(md5_, "") };
      inline ResultObject& setMd5(string md5) { DARABONBA_PTR_SET_VALUE(md5_, md5) };


      // packageName Field Functions 
      bool hasPackageName() const { return this->packageName_ != nullptr;};
      void deletePackageName() { this->packageName_ = nullptr;};
      inline string getPackageName() const { DARABONBA_PTR_GET_DEFAULT(packageName_, "") };
      inline ResultObject& setPackageName(string packageName) { DARABONBA_PTR_SET_VALUE(packageName_, packageName) };


      // privacyLink Field Functions 
      bool hasPrivacyLink() const { return this->privacyLink_ != nullptr;};
      void deletePrivacyLink() { this->privacyLink_ = nullptr;};
      inline string getPrivacyLink() const { DARABONBA_PTR_GET_DEFAULT(privacyLink_, "") };
      inline ResultObject& setPrivacyLink(string privacyLink) { DARABONBA_PTR_SET_VALUE(privacyLink_, privacyLink) };


      // pushTime Field Functions 
      bool hasPushTime() const { return this->pushTime_ != nullptr;};
      void deletePushTime() { this->pushTime_ = nullptr;};
      inline string getPushTime() const { DARABONBA_PTR_GET_DEFAULT(pushTime_, "") };
      inline ResultObject& setPushTime(string pushTime) { DARABONBA_PTR_SET_VALUE(pushTime_, pushTime) };


      // sdkVersion Field Functions 
      bool hasSdkVersion() const { return this->sdkVersion_ != nullptr;};
      void deleteSdkVersion() { this->sdkVersion_ = nullptr;};
      inline string getSdkVersion() const { DARABONBA_PTR_GET_DEFAULT(sdkVersion_, "") };
      inline ResultObject& setSdkVersion(string sdkVersion) { DARABONBA_PTR_SET_VALUE(sdkVersion_, sdkVersion) };


      // size Field Functions 
      bool hasSize() const { return this->size_ != nullptr;};
      void deleteSize() { this->size_ = nullptr;};
      inline string getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, "") };
      inline ResultObject& setSize(string size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    protected:
      // Description information.
      shared_ptr<string> description_ {};
      // Developer
      shared_ptr<string> developer_ {};
      // Device type.
      shared_ptr<string> deviceType_ {};
      // Download URL.
      shared_ptr<string> downloadUrl_ {};
      // File MD5.
      shared_ptr<string> md5_ {};
      // Package name
      shared_ptr<string> packageName_ {};
      // Risk recognition SDK privacy policy link
      shared_ptr<string> privacyLink_ {};
      // Release time
      shared_ptr<string> pushTime_ {};
      // SDK version.
      shared_ptr<string> sdkVersion_ {};
      // Size
      shared_ptr<string> size_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resultObject_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSDKDownloadListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const vector<DescribeSDKDownloadListResponseBody::ResultObject> & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, vector<DescribeSDKDownloadListResponseBody::ResultObject>) };
    inline vector<DescribeSDKDownloadListResponseBody::ResultObject> getResultObject() { DARABONBA_PTR_GET(resultObject_, vector<DescribeSDKDownloadListResponseBody::ResultObject>) };
    inline DescribeSDKDownloadListResponseBody& setResultObject(const vector<DescribeSDKDownloadListResponseBody::ResultObject> & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline DescribeSDKDownloadListResponseBody& setResultObject(vector<DescribeSDKDownloadListResponseBody::ResultObject> && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


  protected:
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Return object
    shared_ptr<vector<DescribeSDKDownloadListResponseBody::ResultObject>> resultObject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
