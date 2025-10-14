// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERECORDREQUESTAUTHCONF_HPP_
#define ALIBABACLOUD_MODELS_UPDATERECORDREQUESTAUTHCONF_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class UpdateRecordRequestAuthConf : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRecordRequestAuthConf& obj) { 
      DARABONBA_PTR_TO_JSON(AccessKey, accessKey_);
      DARABONBA_PTR_TO_JSON(AuthType, authType_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(SecretKey, secretKey_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRecordRequestAuthConf& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessKey, accessKey_);
      DARABONBA_PTR_FROM_JSON(AuthType, authType_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(SecretKey, secretKey_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    UpdateRecordRequestAuthConf() = default ;
    UpdateRecordRequestAuthConf(const UpdateRecordRequestAuthConf &) = default ;
    UpdateRecordRequestAuthConf(UpdateRecordRequestAuthConf &&) = default ;
    UpdateRecordRequestAuthConf(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRecordRequestAuthConf() = default ;
    UpdateRecordRequestAuthConf& operator=(const UpdateRecordRequestAuthConf &) = default ;
    UpdateRecordRequestAuthConf& operator=(UpdateRecordRequestAuthConf &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessKey_ == nullptr
        && return this->authType_ == nullptr && return this->region_ == nullptr && return this->secretKey_ == nullptr && return this->version_ == nullptr; };
    // accessKey Field Functions 
    bool hasAccessKey() const { return this->accessKey_ != nullptr;};
    void deleteAccessKey() { this->accessKey_ = nullptr;};
    inline string accessKey() const { DARABONBA_PTR_GET_DEFAULT(accessKey_, "") };
    inline UpdateRecordRequestAuthConf& setAccessKey(string accessKey) { DARABONBA_PTR_SET_VALUE(accessKey_, accessKey) };


    // authType Field Functions 
    bool hasAuthType() const { return this->authType_ != nullptr;};
    void deleteAuthType() { this->authType_ = nullptr;};
    inline string authType() const { DARABONBA_PTR_GET_DEFAULT(authType_, "") };
    inline UpdateRecordRequestAuthConf& setAuthType(string authType) { DARABONBA_PTR_SET_VALUE(authType_, authType) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline UpdateRecordRequestAuthConf& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // secretKey Field Functions 
    bool hasSecretKey() const { return this->secretKey_ != nullptr;};
    void deleteSecretKey() { this->secretKey_ = nullptr;};
    inline string secretKey() const { DARABONBA_PTR_GET_DEFAULT(secretKey_, "") };
    inline UpdateRecordRequestAuthConf& setSecretKey(string secretKey) { DARABONBA_PTR_SET_VALUE(secretKey_, secretKey) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline UpdateRecordRequestAuthConf& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The access key of the account to which the origin server belongs. This parameter is required when the SourceType is OSS, and AuthType is private_same_account, or when the SourceType is S3 and AuthType is private.
    std::shared_ptr<string> accessKey_ = nullptr;
    // The authentication type of the origin server. Different origins support different authentication types. The type of origin refers to the SourceType parameter in this operation. If the type of origin is OSS or S3, you must specify the authentication type of the origin. Valid values:
    // 
    // *   **public**: public read. Select this value when the origin type is OSS or S3 and the origin access is public read.
    // *   **private**: private read. Select this value when the origin type is S3 and the origin access is private read.
    // *   **private_same_account**: private read under the same account. Select this value when the origin type is OSS, the origins belong to the same Alibaba Cloud account, and the origins have private read access.
    std::shared_ptr<string> authType_ = nullptr;
    // The version of the signature algorithm. This parameter is required when the origin type is S3 and AuthType is private. The following two types are supported:
    // 
    // *   **v2**
    // *   **v4**
    // 
    // If you leave this parameter empty, the default value v4 is used.
    std::shared_ptr<string> region_ = nullptr;
    // The secret access key of the account to which the origin server belongs. This parameter is required when the SourceType is OSS, and AuthType is private_same_account, or when the SourceType is S3 and AuthType is private.
    std::shared_ptr<string> secretKey_ = nullptr;
    // The region of the origin. If the origin type is S3, you must specify this value. You can get the region information from the official website of S3.
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
