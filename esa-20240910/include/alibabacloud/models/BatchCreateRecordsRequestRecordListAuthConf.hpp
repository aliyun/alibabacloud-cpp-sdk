// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHCREATERECORDSREQUESTRECORDLISTAUTHCONF_HPP_
#define ALIBABACLOUD_MODELS_BATCHCREATERECORDSREQUESTRECORDLISTAUTHCONF_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class BatchCreateRecordsRequestRecordListAuthConf : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchCreateRecordsRequestRecordListAuthConf& obj) { 
      DARABONBA_PTR_TO_JSON(AccessKey, accessKey_);
      DARABONBA_PTR_TO_JSON(AuthType, authType_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(SecretKey, secretKey_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, BatchCreateRecordsRequestRecordListAuthConf& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessKey, accessKey_);
      DARABONBA_PTR_FROM_JSON(AuthType, authType_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(SecretKey, secretKey_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    BatchCreateRecordsRequestRecordListAuthConf() = default ;
    BatchCreateRecordsRequestRecordListAuthConf(const BatchCreateRecordsRequestRecordListAuthConf &) = default ;
    BatchCreateRecordsRequestRecordListAuthConf(BatchCreateRecordsRequestRecordListAuthConf &&) = default ;
    BatchCreateRecordsRequestRecordListAuthConf(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchCreateRecordsRequestRecordListAuthConf() = default ;
    BatchCreateRecordsRequestRecordListAuthConf& operator=(const BatchCreateRecordsRequestRecordListAuthConf &) = default ;
    BatchCreateRecordsRequestRecordListAuthConf& operator=(BatchCreateRecordsRequestRecordListAuthConf &&) = default ;
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
    inline BatchCreateRecordsRequestRecordListAuthConf& setAccessKey(string accessKey) { DARABONBA_PTR_SET_VALUE(accessKey_, accessKey) };


    // authType Field Functions 
    bool hasAuthType() const { return this->authType_ != nullptr;};
    void deleteAuthType() { this->authType_ = nullptr;};
    inline string authType() const { DARABONBA_PTR_GET_DEFAULT(authType_, "") };
    inline BatchCreateRecordsRequestRecordListAuthConf& setAuthType(string authType) { DARABONBA_PTR_SET_VALUE(authType_, authType) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline BatchCreateRecordsRequestRecordListAuthConf& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // secretKey Field Functions 
    bool hasSecretKey() const { return this->secretKey_ != nullptr;};
    void deleteSecretKey() { this->secretKey_ = nullptr;};
    inline string secretKey() const { DARABONBA_PTR_GET_DEFAULT(secretKey_, "") };
    inline BatchCreateRecordsRequestRecordListAuthConf& setSecretKey(string secretKey) { DARABONBA_PTR_SET_VALUE(secretKey_, secretKey) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline BatchCreateRecordsRequestRecordListAuthConf& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    std::shared_ptr<string> accessKey_ = nullptr;
    std::shared_ptr<string> authType_ = nullptr;
    std::shared_ptr<string> region_ = nullptr;
    std::shared_ptr<string> secretKey_ = nullptr;
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
