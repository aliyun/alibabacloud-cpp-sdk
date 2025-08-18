// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEUSERDELIVERYTASKREQUESTS3DELIVERY_HPP_
#define ALIBABACLOUD_MODELS_CREATEUSERDELIVERYTASKREQUESTS3DELIVERY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class CreateUserDeliveryTaskRequestS3Delivery : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateUserDeliveryTaskRequestS3Delivery& obj) { 
      DARABONBA_PTR_TO_JSON(AccessKey, accessKey_);
      DARABONBA_PTR_TO_JSON(BucketPath, bucketPath_);
      DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_TO_JSON(PrefixPath, prefixPath_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(S3Cmpt, s3Cmpt_);
      DARABONBA_PTR_TO_JSON(SecretKey, secretKey_);
      DARABONBA_PTR_TO_JSON(ServerSideEncryption, serverSideEncryption_);
      DARABONBA_PTR_TO_JSON(VertifyType, vertifyType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateUserDeliveryTaskRequestS3Delivery& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessKey, accessKey_);
      DARABONBA_PTR_FROM_JSON(BucketPath, bucketPath_);
      DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_FROM_JSON(PrefixPath, prefixPath_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(S3Cmpt, s3Cmpt_);
      DARABONBA_PTR_FROM_JSON(SecretKey, secretKey_);
      DARABONBA_PTR_FROM_JSON(ServerSideEncryption, serverSideEncryption_);
      DARABONBA_PTR_FROM_JSON(VertifyType, vertifyType_);
    };
    CreateUserDeliveryTaskRequestS3Delivery() = default ;
    CreateUserDeliveryTaskRequestS3Delivery(const CreateUserDeliveryTaskRequestS3Delivery &) = default ;
    CreateUserDeliveryTaskRequestS3Delivery(CreateUserDeliveryTaskRequestS3Delivery &&) = default ;
    CreateUserDeliveryTaskRequestS3Delivery(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateUserDeliveryTaskRequestS3Delivery() = default ;
    CreateUserDeliveryTaskRequestS3Delivery& operator=(const CreateUserDeliveryTaskRequestS3Delivery &) = default ;
    CreateUserDeliveryTaskRequestS3Delivery& operator=(CreateUserDeliveryTaskRequestS3Delivery &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessKey_ != nullptr
        && this->bucketPath_ != nullptr && this->endpoint_ != nullptr && this->prefixPath_ != nullptr && this->region_ != nullptr && this->s3Cmpt_ != nullptr
        && this->secretKey_ != nullptr && this->serverSideEncryption_ != nullptr && this->vertifyType_ != nullptr; };
    // accessKey Field Functions 
    bool hasAccessKey() const { return this->accessKey_ != nullptr;};
    void deleteAccessKey() { this->accessKey_ = nullptr;};
    inline string accessKey() const { DARABONBA_PTR_GET_DEFAULT(accessKey_, "") };
    inline CreateUserDeliveryTaskRequestS3Delivery& setAccessKey(string accessKey) { DARABONBA_PTR_SET_VALUE(accessKey_, accessKey) };


    // bucketPath Field Functions 
    bool hasBucketPath() const { return this->bucketPath_ != nullptr;};
    void deleteBucketPath() { this->bucketPath_ = nullptr;};
    inline string bucketPath() const { DARABONBA_PTR_GET_DEFAULT(bucketPath_, "") };
    inline CreateUserDeliveryTaskRequestS3Delivery& setBucketPath(string bucketPath) { DARABONBA_PTR_SET_VALUE(bucketPath_, bucketPath) };


    // endpoint Field Functions 
    bool hasEndpoint() const { return this->endpoint_ != nullptr;};
    void deleteEndpoint() { this->endpoint_ = nullptr;};
    inline string endpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
    inline CreateUserDeliveryTaskRequestS3Delivery& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


    // prefixPath Field Functions 
    bool hasPrefixPath() const { return this->prefixPath_ != nullptr;};
    void deletePrefixPath() { this->prefixPath_ = nullptr;};
    inline string prefixPath() const { DARABONBA_PTR_GET_DEFAULT(prefixPath_, "") };
    inline CreateUserDeliveryTaskRequestS3Delivery& setPrefixPath(string prefixPath) { DARABONBA_PTR_SET_VALUE(prefixPath_, prefixPath) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline CreateUserDeliveryTaskRequestS3Delivery& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // s3Cmpt Field Functions 
    bool hasS3Cmpt() const { return this->s3Cmpt_ != nullptr;};
    void deleteS3Cmpt() { this->s3Cmpt_ = nullptr;};
    inline bool s3Cmpt() const { DARABONBA_PTR_GET_DEFAULT(s3Cmpt_, false) };
    inline CreateUserDeliveryTaskRequestS3Delivery& setS3Cmpt(bool s3Cmpt) { DARABONBA_PTR_SET_VALUE(s3Cmpt_, s3Cmpt) };


    // secretKey Field Functions 
    bool hasSecretKey() const { return this->secretKey_ != nullptr;};
    void deleteSecretKey() { this->secretKey_ = nullptr;};
    inline string secretKey() const { DARABONBA_PTR_GET_DEFAULT(secretKey_, "") };
    inline CreateUserDeliveryTaskRequestS3Delivery& setSecretKey(string secretKey) { DARABONBA_PTR_SET_VALUE(secretKey_, secretKey) };


    // serverSideEncryption Field Functions 
    bool hasServerSideEncryption() const { return this->serverSideEncryption_ != nullptr;};
    void deleteServerSideEncryption() { this->serverSideEncryption_ = nullptr;};
    inline bool serverSideEncryption() const { DARABONBA_PTR_GET_DEFAULT(serverSideEncryption_, false) };
    inline CreateUserDeliveryTaskRequestS3Delivery& setServerSideEncryption(bool serverSideEncryption) { DARABONBA_PTR_SET_VALUE(serverSideEncryption_, serverSideEncryption) };


    // vertifyType Field Functions 
    bool hasVertifyType() const { return this->vertifyType_ != nullptr;};
    void deleteVertifyType() { this->vertifyType_ = nullptr;};
    inline string vertifyType() const { DARABONBA_PTR_GET_DEFAULT(vertifyType_, "") };
    inline CreateUserDeliveryTaskRequestS3Delivery& setVertifyType(string vertifyType) { DARABONBA_PTR_SET_VALUE(vertifyType_, vertifyType) };


  protected:
    // The access key ID of your Amazon S3 account.
    std::shared_ptr<string> accessKey_ = nullptr;
    // The directory in the bucket.
    std::shared_ptr<string> bucketPath_ = nullptr;
    // The endpoint.
    std::shared_ptr<string> endpoint_ = nullptr;
    // The prefix of the path in which you want to store logs.
    std::shared_ptr<string> prefixPath_ = nullptr;
    // The region ID of the service.
    std::shared_ptr<string> region_ = nullptr;
    // Specifies whether the service is compatible with Amazon S3.
    std::shared_ptr<bool> s3Cmpt_ = nullptr;
    // The secret access key of your Amazon S3 account.
    std::shared_ptr<string> secretKey_ = nullptr;
    std::shared_ptr<bool> serverSideEncryption_ = nullptr;
    std::shared_ptr<string> vertifyType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
