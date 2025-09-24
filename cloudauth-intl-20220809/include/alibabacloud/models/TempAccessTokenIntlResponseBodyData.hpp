// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TEMPACCESSTOKENINTLRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_TEMPACCESSTOKENINTLRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{
namespace Models
{
  class TempAccessTokenIntlResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TempAccessTokenIntlResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AccessKeyId, accessKeyId_);
      DARABONBA_PTR_TO_JSON(AccessKeySecret, accessKeySecret_);
      DARABONBA_PTR_TO_JSON(BucketName, bucketName_);
      DARABONBA_PTR_TO_JSON(FileNamePrefix, fileNamePrefix_);
      DARABONBA_PTR_TO_JSON(OssEndPoint, ossEndPoint_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
    };
    friend void from_json(const Darabonba::Json& j, TempAccessTokenIntlResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessKeyId, accessKeyId_);
      DARABONBA_PTR_FROM_JSON(AccessKeySecret, accessKeySecret_);
      DARABONBA_PTR_FROM_JSON(BucketName, bucketName_);
      DARABONBA_PTR_FROM_JSON(FileNamePrefix, fileNamePrefix_);
      DARABONBA_PTR_FROM_JSON(OssEndPoint, ossEndPoint_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
    };
    TempAccessTokenIntlResponseBodyData() = default ;
    TempAccessTokenIntlResponseBodyData(const TempAccessTokenIntlResponseBodyData &) = default ;
    TempAccessTokenIntlResponseBodyData(TempAccessTokenIntlResponseBodyData &&) = default ;
    TempAccessTokenIntlResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TempAccessTokenIntlResponseBodyData() = default ;
    TempAccessTokenIntlResponseBodyData& operator=(const TempAccessTokenIntlResponseBodyData &) = default ;
    TempAccessTokenIntlResponseBodyData& operator=(TempAccessTokenIntlResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessKeyId_ != nullptr
        && this->accessKeySecret_ != nullptr && this->bucketName_ != nullptr && this->fileNamePrefix_ != nullptr && this->ossEndPoint_ != nullptr && this->securityToken_ != nullptr; };
    // accessKeyId Field Functions 
    bool hasAccessKeyId() const { return this->accessKeyId_ != nullptr;};
    void deleteAccessKeyId() { this->accessKeyId_ = nullptr;};
    inline string accessKeyId() const { DARABONBA_PTR_GET_DEFAULT(accessKeyId_, "") };
    inline TempAccessTokenIntlResponseBodyData& setAccessKeyId(string accessKeyId) { DARABONBA_PTR_SET_VALUE(accessKeyId_, accessKeyId) };


    // accessKeySecret Field Functions 
    bool hasAccessKeySecret() const { return this->accessKeySecret_ != nullptr;};
    void deleteAccessKeySecret() { this->accessKeySecret_ = nullptr;};
    inline string accessKeySecret() const { DARABONBA_PTR_GET_DEFAULT(accessKeySecret_, "") };
    inline TempAccessTokenIntlResponseBodyData& setAccessKeySecret(string accessKeySecret) { DARABONBA_PTR_SET_VALUE(accessKeySecret_, accessKeySecret) };


    // bucketName Field Functions 
    bool hasBucketName() const { return this->bucketName_ != nullptr;};
    void deleteBucketName() { this->bucketName_ = nullptr;};
    inline string bucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
    inline TempAccessTokenIntlResponseBodyData& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


    // fileNamePrefix Field Functions 
    bool hasFileNamePrefix() const { return this->fileNamePrefix_ != nullptr;};
    void deleteFileNamePrefix() { this->fileNamePrefix_ = nullptr;};
    inline string fileNamePrefix() const { DARABONBA_PTR_GET_DEFAULT(fileNamePrefix_, "") };
    inline TempAccessTokenIntlResponseBodyData& setFileNamePrefix(string fileNamePrefix) { DARABONBA_PTR_SET_VALUE(fileNamePrefix_, fileNamePrefix) };


    // ossEndPoint Field Functions 
    bool hasOssEndPoint() const { return this->ossEndPoint_ != nullptr;};
    void deleteOssEndPoint() { this->ossEndPoint_ = nullptr;};
    inline string ossEndPoint() const { DARABONBA_PTR_GET_DEFAULT(ossEndPoint_, "") };
    inline TempAccessTokenIntlResponseBodyData& setOssEndPoint(string ossEndPoint) { DARABONBA_PTR_SET_VALUE(ossEndPoint_, ossEndPoint) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline TempAccessTokenIntlResponseBodyData& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


  protected:
    std::shared_ptr<string> accessKeyId_ = nullptr;
    std::shared_ptr<string> accessKeySecret_ = nullptr;
    std::shared_ptr<string> bucketName_ = nullptr;
    std::shared_ptr<string> fileNamePrefix_ = nullptr;
    // OssEndPoint。
    std::shared_ptr<string> ossEndPoint_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
