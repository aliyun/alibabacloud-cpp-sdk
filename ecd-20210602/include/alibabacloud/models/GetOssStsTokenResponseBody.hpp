// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOSSSTSTOKENRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETOSSSTSTOKENRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20210602
{
namespace Models
{
  class GetOssStsTokenResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOssStsTokenResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessKeyId, accessKeyId_);
      DARABONBA_PTR_TO_JSON(AccessKeySecret, accessKeySecret_);
      DARABONBA_PTR_TO_JSON(Bucket, bucket_);
      DARABONBA_PTR_TO_JSON(ObjectKeyPrefix, objectKeyPrefix_);
      DARABONBA_PTR_TO_JSON(OssRegion, ossRegion_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
    };
    friend void from_json(const Darabonba::Json& j, GetOssStsTokenResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessKeyId, accessKeyId_);
      DARABONBA_PTR_FROM_JSON(AccessKeySecret, accessKeySecret_);
      DARABONBA_PTR_FROM_JSON(Bucket, bucket_);
      DARABONBA_PTR_FROM_JSON(ObjectKeyPrefix, objectKeyPrefix_);
      DARABONBA_PTR_FROM_JSON(OssRegion, ossRegion_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
    };
    GetOssStsTokenResponseBody() = default ;
    GetOssStsTokenResponseBody(const GetOssStsTokenResponseBody &) = default ;
    GetOssStsTokenResponseBody(GetOssStsTokenResponseBody &&) = default ;
    GetOssStsTokenResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOssStsTokenResponseBody() = default ;
    GetOssStsTokenResponseBody& operator=(const GetOssStsTokenResponseBody &) = default ;
    GetOssStsTokenResponseBody& operator=(GetOssStsTokenResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessKeyId_ == nullptr
        && this->accessKeySecret_ == nullptr && this->bucket_ == nullptr && this->objectKeyPrefix_ == nullptr && this->ossRegion_ == nullptr && this->requestId_ == nullptr
        && this->securityToken_ == nullptr; };
    // accessKeyId Field Functions 
    bool hasAccessKeyId() const { return this->accessKeyId_ != nullptr;};
    void deleteAccessKeyId() { this->accessKeyId_ = nullptr;};
    inline string getAccessKeyId() const { DARABONBA_PTR_GET_DEFAULT(accessKeyId_, "") };
    inline GetOssStsTokenResponseBody& setAccessKeyId(string accessKeyId) { DARABONBA_PTR_SET_VALUE(accessKeyId_, accessKeyId) };


    // accessKeySecret Field Functions 
    bool hasAccessKeySecret() const { return this->accessKeySecret_ != nullptr;};
    void deleteAccessKeySecret() { this->accessKeySecret_ = nullptr;};
    inline string getAccessKeySecret() const { DARABONBA_PTR_GET_DEFAULT(accessKeySecret_, "") };
    inline GetOssStsTokenResponseBody& setAccessKeySecret(string accessKeySecret) { DARABONBA_PTR_SET_VALUE(accessKeySecret_, accessKeySecret) };


    // bucket Field Functions 
    bool hasBucket() const { return this->bucket_ != nullptr;};
    void deleteBucket() { this->bucket_ = nullptr;};
    inline string getBucket() const { DARABONBA_PTR_GET_DEFAULT(bucket_, "") };
    inline GetOssStsTokenResponseBody& setBucket(string bucket) { DARABONBA_PTR_SET_VALUE(bucket_, bucket) };


    // objectKeyPrefix Field Functions 
    bool hasObjectKeyPrefix() const { return this->objectKeyPrefix_ != nullptr;};
    void deleteObjectKeyPrefix() { this->objectKeyPrefix_ = nullptr;};
    inline string getObjectKeyPrefix() const { DARABONBA_PTR_GET_DEFAULT(objectKeyPrefix_, "") };
    inline GetOssStsTokenResponseBody& setObjectKeyPrefix(string objectKeyPrefix) { DARABONBA_PTR_SET_VALUE(objectKeyPrefix_, objectKeyPrefix) };


    // ossRegion Field Functions 
    bool hasOssRegion() const { return this->ossRegion_ != nullptr;};
    void deleteOssRegion() { this->ossRegion_ = nullptr;};
    inline string getOssRegion() const { DARABONBA_PTR_GET_DEFAULT(ossRegion_, "") };
    inline GetOssStsTokenResponseBody& setOssRegion(string ossRegion) { DARABONBA_PTR_SET_VALUE(ossRegion_, ossRegion) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetOssStsTokenResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline GetOssStsTokenResponseBody& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


  protected:
    shared_ptr<string> accessKeyId_ {};
    shared_ptr<string> accessKeySecret_ {};
    shared_ptr<string> bucket_ {};
    shared_ptr<string> objectKeyPrefix_ {};
    shared_ptr<string> ossRegion_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> securityToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20210602
#endif
