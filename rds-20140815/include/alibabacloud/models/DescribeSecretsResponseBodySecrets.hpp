// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECRETSRESPONSEBODYSECRETS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECRETSRESPONSEBODYSECRETS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeSecretsResponseBodySecrets : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecretsResponseBodySecrets& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SecretArn, secretArn_);
      DARABONBA_PTR_TO_JSON(SecretName, secretName_);
      DARABONBA_PTR_TO_JSON(Username, username_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecretsResponseBodySecrets& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SecretArn, secretArn_);
      DARABONBA_PTR_FROM_JSON(SecretName, secretName_);
      DARABONBA_PTR_FROM_JSON(Username, username_);
    };
    DescribeSecretsResponseBodySecrets() = default ;
    DescribeSecretsResponseBodySecrets(const DescribeSecretsResponseBodySecrets &) = default ;
    DescribeSecretsResponseBodySecrets(DescribeSecretsResponseBodySecrets &&) = default ;
    DescribeSecretsResponseBodySecrets(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecretsResponseBodySecrets() = default ;
    DescribeSecretsResponseBodySecrets& operator=(const DescribeSecretsResponseBodySecrets &) = default ;
    DescribeSecretsResponseBodySecrets& operator=(DescribeSecretsResponseBodySecrets &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && return this->description_ == nullptr && return this->regionId_ == nullptr && return this->secretArn_ == nullptr && return this->secretName_ == nullptr && return this->username_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline DescribeSecretsResponseBodySecrets& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeSecretsResponseBodySecrets& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeSecretsResponseBodySecrets& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // secretArn Field Functions 
    bool hasSecretArn() const { return this->secretArn_ != nullptr;};
    void deleteSecretArn() { this->secretArn_ = nullptr;};
    inline string secretArn() const { DARABONBA_PTR_GET_DEFAULT(secretArn_, "") };
    inline DescribeSecretsResponseBodySecrets& setSecretArn(string secretArn) { DARABONBA_PTR_SET_VALUE(secretArn_, secretArn) };


    // secretName Field Functions 
    bool hasSecretName() const { return this->secretName_ != nullptr;};
    void deleteSecretName() { this->secretName_ = nullptr;};
    inline string secretName() const { DARABONBA_PTR_GET_DEFAULT(secretName_, "") };
    inline DescribeSecretsResponseBodySecrets& setSecretName(string secretName) { DARABONBA_PTR_SET_VALUE(secretName_, secretName) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string username() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline DescribeSecretsResponseBodySecrets& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


  protected:
    // The ID of the Alibaba Cloud account.
    std::shared_ptr<string> accountId_ = nullptr;
    // The description of the credential.
    std::shared_ptr<string> description_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The Alibaba Cloud Resource Name (ARN) of the credential for the created Data API account.
    std::shared_ptr<string> secretArn_ = nullptr;
    // The name of the credential.
    std::shared_ptr<string> secretName_ = nullptr;
    // The username that is used to access the database.
    std::shared_ptr<string> username_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
