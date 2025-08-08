// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTOKENRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETTOKENRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BPStudio20210931
{
namespace Models
{
  class GetTokenResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTokenResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AccessKeyId, accessKeyId_);
      DARABONBA_PTR_TO_JSON(AccessKeySecret, accessKeySecret_);
      DARABONBA_PTR_TO_JSON(Bucket, bucket_);
      DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(SnapshotBucket, snapshotBucket_);
    };
    friend void from_json(const Darabonba::Json& j, GetTokenResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessKeyId, accessKeyId_);
      DARABONBA_PTR_FROM_JSON(AccessKeySecret, accessKeySecret_);
      DARABONBA_PTR_FROM_JSON(Bucket, bucket_);
      DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(SnapshotBucket, snapshotBucket_);
    };
    GetTokenResponseBodyData() = default ;
    GetTokenResponseBodyData(const GetTokenResponseBodyData &) = default ;
    GetTokenResponseBodyData(GetTokenResponseBodyData &&) = default ;
    GetTokenResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTokenResponseBodyData() = default ;
    GetTokenResponseBodyData& operator=(const GetTokenResponseBodyData &) = default ;
    GetTokenResponseBodyData& operator=(GetTokenResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessKeyId_ != nullptr
        && this->accessKeySecret_ != nullptr && this->bucket_ != nullptr && this->endpoint_ != nullptr && this->securityToken_ != nullptr && this->snapshotBucket_ != nullptr; };
    // accessKeyId Field Functions 
    bool hasAccessKeyId() const { return this->accessKeyId_ != nullptr;};
    void deleteAccessKeyId() { this->accessKeyId_ = nullptr;};
    inline string accessKeyId() const { DARABONBA_PTR_GET_DEFAULT(accessKeyId_, "") };
    inline GetTokenResponseBodyData& setAccessKeyId(string accessKeyId) { DARABONBA_PTR_SET_VALUE(accessKeyId_, accessKeyId) };


    // accessKeySecret Field Functions 
    bool hasAccessKeySecret() const { return this->accessKeySecret_ != nullptr;};
    void deleteAccessKeySecret() { this->accessKeySecret_ = nullptr;};
    inline string accessKeySecret() const { DARABONBA_PTR_GET_DEFAULT(accessKeySecret_, "") };
    inline GetTokenResponseBodyData& setAccessKeySecret(string accessKeySecret) { DARABONBA_PTR_SET_VALUE(accessKeySecret_, accessKeySecret) };


    // bucket Field Functions 
    bool hasBucket() const { return this->bucket_ != nullptr;};
    void deleteBucket() { this->bucket_ = nullptr;};
    inline string bucket() const { DARABONBA_PTR_GET_DEFAULT(bucket_, "") };
    inline GetTokenResponseBodyData& setBucket(string bucket) { DARABONBA_PTR_SET_VALUE(bucket_, bucket) };


    // endpoint Field Functions 
    bool hasEndpoint() const { return this->endpoint_ != nullptr;};
    void deleteEndpoint() { this->endpoint_ = nullptr;};
    inline string endpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
    inline GetTokenResponseBodyData& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline GetTokenResponseBodyData& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // snapshotBucket Field Functions 
    bool hasSnapshotBucket() const { return this->snapshotBucket_ != nullptr;};
    void deleteSnapshotBucket() { this->snapshotBucket_ = nullptr;};
    inline string snapshotBucket() const { DARABONBA_PTR_GET_DEFAULT(snapshotBucket_, "") };
    inline GetTokenResponseBodyData& setSnapshotBucket(string snapshotBucket) { DARABONBA_PTR_SET_VALUE(snapshotBucket_, snapshotBucket) };


  protected:
    // The AccessKey ID that is used to access OSS.
    std::shared_ptr<string> accessKeyId_ = nullptr;
    // The AccessKey secret used to access OSS.
    std::shared_ptr<string> accessKeySecret_ = nullptr;
    // The OSS bucket that is used to store the architecture image.
    std::shared_ptr<string> bucket_ = nullptr;
    // The OSS endpoint.
    std::shared_ptr<string> endpoint_ = nullptr;
    // The token that is used to access the Object Storage Service (OSS) bucket that stores the architecture image.
    std::shared_ptr<string> securityToken_ = nullptr;
    // The OSS bucket that is used to save data snapshots.
    std::shared_ptr<string> snapshotBucket_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BPStudio20210931
#endif
