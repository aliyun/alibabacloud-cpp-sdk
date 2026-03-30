// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDCLOUDACCESSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDCLOUDACCESSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class AddCloudAccessRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddCloudAccessRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CloudName, cloudName_);
      DARABONBA_PTR_TO_JSON(SecretId, secretId_);
      DARABONBA_PTR_TO_JSON(SecretKey, secretKey_);
    };
    friend void from_json(const Darabonba::Json& j, AddCloudAccessRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CloudName, cloudName_);
      DARABONBA_PTR_FROM_JSON(SecretId, secretId_);
      DARABONBA_PTR_FROM_JSON(SecretKey, secretKey_);
    };
    AddCloudAccessRequest() = default ;
    AddCloudAccessRequest(const AddCloudAccessRequest &) = default ;
    AddCloudAccessRequest(AddCloudAccessRequest &&) = default ;
    AddCloudAccessRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddCloudAccessRequest() = default ;
    AddCloudAccessRequest& operator=(const AddCloudAccessRequest &) = default ;
    AddCloudAccessRequest& operator=(AddCloudAccessRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cloudName_ == nullptr
        && this->secretId_ == nullptr && this->secretKey_ == nullptr; };
    // cloudName Field Functions 
    bool hasCloudName() const { return this->cloudName_ != nullptr;};
    void deleteCloudName() { this->cloudName_ = nullptr;};
    inline string getCloudName() const { DARABONBA_PTR_GET_DEFAULT(cloudName_, "") };
    inline AddCloudAccessRequest& setCloudName(string cloudName) { DARABONBA_PTR_SET_VALUE(cloudName_, cloudName) };


    // secretId Field Functions 
    bool hasSecretId() const { return this->secretId_ != nullptr;};
    void deleteSecretId() { this->secretId_ = nullptr;};
    inline string getSecretId() const { DARABONBA_PTR_GET_DEFAULT(secretId_, "") };
    inline AddCloudAccessRequest& setSecretId(string secretId) { DARABONBA_PTR_SET_VALUE(secretId_, secretId) };


    // secretKey Field Functions 
    bool hasSecretKey() const { return this->secretKey_ != nullptr;};
    void deleteSecretKey() { this->secretKey_ = nullptr;};
    inline string getSecretKey() const { DARABONBA_PTR_GET_DEFAULT(secretKey_, "") };
    inline AddCloudAccessRequest& setSecretKey(string secretKey) { DARABONBA_PTR_SET_VALUE(secretKey_, secretKey) };


  protected:
    shared_ptr<string> cloudName_ {};
    shared_ptr<string> secretId_ {};
    shared_ptr<string> secretKey_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
