// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUPLOADTOKENRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUPLOADTOKENRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class DescribeUploadTokenResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUploadTokenResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AccessKeyId, accessKeyId_);
      DARABONBA_PTR_TO_JSON(AccessKeySecret, accessKeySecret_);
      DARABONBA_PTR_TO_JSON(BucketName, bucketName_);
      DARABONBA_PTR_TO_JSON(Expiration, expiration_);
      DARABONBA_PTR_TO_JSON(FileNamePrefix, fileNamePrefix_);
      DARABONBA_PTR_TO_JSON(OssInternalEndPoint, ossInternalEndPoint_);
      DARABONBA_PTR_TO_JSON(OssInternetEndPoint, ossInternetEndPoint_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUploadTokenResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessKeyId, accessKeyId_);
      DARABONBA_PTR_FROM_JSON(AccessKeySecret, accessKeySecret_);
      DARABONBA_PTR_FROM_JSON(BucketName, bucketName_);
      DARABONBA_PTR_FROM_JSON(Expiration, expiration_);
      DARABONBA_PTR_FROM_JSON(FileNamePrefix, fileNamePrefix_);
      DARABONBA_PTR_FROM_JSON(OssInternalEndPoint, ossInternalEndPoint_);
      DARABONBA_PTR_FROM_JSON(OssInternetEndPoint, ossInternetEndPoint_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
    };
    DescribeUploadTokenResponseBodyData() = default ;
    DescribeUploadTokenResponseBodyData(const DescribeUploadTokenResponseBodyData &) = default ;
    DescribeUploadTokenResponseBodyData(DescribeUploadTokenResponseBodyData &&) = default ;
    DescribeUploadTokenResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUploadTokenResponseBodyData() = default ;
    DescribeUploadTokenResponseBodyData& operator=(const DescribeUploadTokenResponseBodyData &) = default ;
    DescribeUploadTokenResponseBodyData& operator=(DescribeUploadTokenResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessKeyId_ == nullptr
        && return this->accessKeySecret_ == nullptr && return this->bucketName_ == nullptr && return this->expiration_ == nullptr && return this->fileNamePrefix_ == nullptr && return this->ossInternalEndPoint_ == nullptr
        && return this->ossInternetEndPoint_ == nullptr && return this->securityToken_ == nullptr; };
    // accessKeyId Field Functions 
    bool hasAccessKeyId() const { return this->accessKeyId_ != nullptr;};
    void deleteAccessKeyId() { this->accessKeyId_ = nullptr;};
    inline string accessKeyId() const { DARABONBA_PTR_GET_DEFAULT(accessKeyId_, "") };
    inline DescribeUploadTokenResponseBodyData& setAccessKeyId(string accessKeyId) { DARABONBA_PTR_SET_VALUE(accessKeyId_, accessKeyId) };


    // accessKeySecret Field Functions 
    bool hasAccessKeySecret() const { return this->accessKeySecret_ != nullptr;};
    void deleteAccessKeySecret() { this->accessKeySecret_ = nullptr;};
    inline string accessKeySecret() const { DARABONBA_PTR_GET_DEFAULT(accessKeySecret_, "") };
    inline DescribeUploadTokenResponseBodyData& setAccessKeySecret(string accessKeySecret) { DARABONBA_PTR_SET_VALUE(accessKeySecret_, accessKeySecret) };


    // bucketName Field Functions 
    bool hasBucketName() const { return this->bucketName_ != nullptr;};
    void deleteBucketName() { this->bucketName_ = nullptr;};
    inline string bucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
    inline DescribeUploadTokenResponseBodyData& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


    // expiration Field Functions 
    bool hasExpiration() const { return this->expiration_ != nullptr;};
    void deleteExpiration() { this->expiration_ = nullptr;};
    inline int32_t expiration() const { DARABONBA_PTR_GET_DEFAULT(expiration_, 0) };
    inline DescribeUploadTokenResponseBodyData& setExpiration(int32_t expiration) { DARABONBA_PTR_SET_VALUE(expiration_, expiration) };


    // fileNamePrefix Field Functions 
    bool hasFileNamePrefix() const { return this->fileNamePrefix_ != nullptr;};
    void deleteFileNamePrefix() { this->fileNamePrefix_ = nullptr;};
    inline string fileNamePrefix() const { DARABONBA_PTR_GET_DEFAULT(fileNamePrefix_, "") };
    inline DescribeUploadTokenResponseBodyData& setFileNamePrefix(string fileNamePrefix) { DARABONBA_PTR_SET_VALUE(fileNamePrefix_, fileNamePrefix) };


    // ossInternalEndPoint Field Functions 
    bool hasOssInternalEndPoint() const { return this->ossInternalEndPoint_ != nullptr;};
    void deleteOssInternalEndPoint() { this->ossInternalEndPoint_ = nullptr;};
    inline string ossInternalEndPoint() const { DARABONBA_PTR_GET_DEFAULT(ossInternalEndPoint_, "") };
    inline DescribeUploadTokenResponseBodyData& setOssInternalEndPoint(string ossInternalEndPoint) { DARABONBA_PTR_SET_VALUE(ossInternalEndPoint_, ossInternalEndPoint) };


    // ossInternetEndPoint Field Functions 
    bool hasOssInternetEndPoint() const { return this->ossInternetEndPoint_ != nullptr;};
    void deleteOssInternetEndPoint() { this->ossInternetEndPoint_ = nullptr;};
    inline string ossInternetEndPoint() const { DARABONBA_PTR_GET_DEFAULT(ossInternetEndPoint_, "") };
    inline DescribeUploadTokenResponseBodyData& setOssInternetEndPoint(string ossInternetEndPoint) { DARABONBA_PTR_SET_VALUE(ossInternetEndPoint_, ossInternetEndPoint) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline DescribeUploadTokenResponseBodyData& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


  protected:
    // The AccessKey ID.
    std::shared_ptr<string> accessKeyId_ = nullptr;
    // The AccessKey secret.
    std::shared_ptr<string> accessKeySecret_ = nullptr;
    // The bucket name.
    std::shared_ptr<string> bucketName_ = nullptr;
    // The time when the file sharing link expires.
    std::shared_ptr<int32_t> expiration_ = nullptr;
    // The file prefix.
    std::shared_ptr<string> fileNamePrefix_ = nullptr;
    // the oss intranet point.
    std::shared_ptr<string> ossInternalEndPoint_ = nullptr;
    // the oss internet point.
    std::shared_ptr<string> ossInternetEndPoint_ = nullptr;
    // The security token.
    std::shared_ptr<string> securityToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
