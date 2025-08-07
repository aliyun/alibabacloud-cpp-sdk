// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REQUESTUPLOADTOKENRESPONSEBODYMODEL_HPP_
#define ALIBABACLOUD_MODELS_REQUESTUPLOADTOKENRESPONSEBODYMODEL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmasAppmonitor20190611
{
namespace Models
{
  class RequestUploadTokenResponseBodyModel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RequestUploadTokenResponseBodyModel& obj) { 
      DARABONBA_PTR_TO_JSON(AccessKeyId, accessKeyId_);
      DARABONBA_PTR_TO_JSON(AccessKeySecret, accessKeySecret_);
      DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(UploadBucket, uploadBucket_);
      DARABONBA_PTR_TO_JSON(UploadDir, uploadDir_);
    };
    friend void from_json(const Darabonba::Json& j, RequestUploadTokenResponseBodyModel& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessKeyId, accessKeyId_);
      DARABONBA_PTR_FROM_JSON(AccessKeySecret, accessKeySecret_);
      DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(UploadBucket, uploadBucket_);
      DARABONBA_PTR_FROM_JSON(UploadDir, uploadDir_);
    };
    RequestUploadTokenResponseBodyModel() = default ;
    RequestUploadTokenResponseBodyModel(const RequestUploadTokenResponseBodyModel &) = default ;
    RequestUploadTokenResponseBodyModel(RequestUploadTokenResponseBodyModel &&) = default ;
    RequestUploadTokenResponseBodyModel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RequestUploadTokenResponseBodyModel() = default ;
    RequestUploadTokenResponseBodyModel& operator=(const RequestUploadTokenResponseBodyModel &) = default ;
    RequestUploadTokenResponseBodyModel& operator=(RequestUploadTokenResponseBodyModel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessKeyId_ != nullptr
        && this->accessKeySecret_ != nullptr && this->endpoint_ != nullptr && this->securityToken_ != nullptr && this->uploadBucket_ != nullptr && this->uploadDir_ != nullptr; };
    // accessKeyId Field Functions 
    bool hasAccessKeyId() const { return this->accessKeyId_ != nullptr;};
    void deleteAccessKeyId() { this->accessKeyId_ = nullptr;};
    inline string accessKeyId() const { DARABONBA_PTR_GET_DEFAULT(accessKeyId_, "") };
    inline RequestUploadTokenResponseBodyModel& setAccessKeyId(string accessKeyId) { DARABONBA_PTR_SET_VALUE(accessKeyId_, accessKeyId) };


    // accessKeySecret Field Functions 
    bool hasAccessKeySecret() const { return this->accessKeySecret_ != nullptr;};
    void deleteAccessKeySecret() { this->accessKeySecret_ = nullptr;};
    inline string accessKeySecret() const { DARABONBA_PTR_GET_DEFAULT(accessKeySecret_, "") };
    inline RequestUploadTokenResponseBodyModel& setAccessKeySecret(string accessKeySecret) { DARABONBA_PTR_SET_VALUE(accessKeySecret_, accessKeySecret) };


    // endpoint Field Functions 
    bool hasEndpoint() const { return this->endpoint_ != nullptr;};
    void deleteEndpoint() { this->endpoint_ = nullptr;};
    inline string endpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
    inline RequestUploadTokenResponseBodyModel& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline RequestUploadTokenResponseBodyModel& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // uploadBucket Field Functions 
    bool hasUploadBucket() const { return this->uploadBucket_ != nullptr;};
    void deleteUploadBucket() { this->uploadBucket_ = nullptr;};
    inline string uploadBucket() const { DARABONBA_PTR_GET_DEFAULT(uploadBucket_, "") };
    inline RequestUploadTokenResponseBodyModel& setUploadBucket(string uploadBucket) { DARABONBA_PTR_SET_VALUE(uploadBucket_, uploadBucket) };


    // uploadDir Field Functions 
    bool hasUploadDir() const { return this->uploadDir_ != nullptr;};
    void deleteUploadDir() { this->uploadDir_ = nullptr;};
    inline string uploadDir() const { DARABONBA_PTR_GET_DEFAULT(uploadDir_, "") };
    inline RequestUploadTokenResponseBodyModel& setUploadDir(string uploadDir) { DARABONBA_PTR_SET_VALUE(uploadDir_, uploadDir) };


  protected:
    // OSS AccessKeyId
    std::shared_ptr<string> accessKeyId_ = nullptr;
    // OSS AccessKeySecret
    std::shared_ptr<string> accessKeySecret_ = nullptr;
    std::shared_ptr<string> endpoint_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
    std::shared_ptr<string> uploadBucket_ = nullptr;
    std::shared_ptr<string> uploadDir_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmasAppmonitor20190611
#endif
