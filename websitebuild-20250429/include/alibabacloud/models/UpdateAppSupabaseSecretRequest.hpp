// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPPSUPABASESECRETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPPSUPABASESECRETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class UpdateAppSupabaseSecretRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAppSupabaseSecretRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(SecretKey, secretKey_);
      DARABONBA_PTR_TO_JSON(SecretName, secretName_);
      DARABONBA_PTR_TO_JSON(SecretType, secretType_);
      DARABONBA_PTR_TO_JSON(SecretValue, secretValue_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAppSupabaseSecretRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(SecretKey, secretKey_);
      DARABONBA_PTR_FROM_JSON(SecretName, secretName_);
      DARABONBA_PTR_FROM_JSON(SecretType, secretType_);
      DARABONBA_PTR_FROM_JSON(SecretValue, secretValue_);
    };
    UpdateAppSupabaseSecretRequest() = default ;
    UpdateAppSupabaseSecretRequest(const UpdateAppSupabaseSecretRequest &) = default ;
    UpdateAppSupabaseSecretRequest(UpdateAppSupabaseSecretRequest &&) = default ;
    UpdateAppSupabaseSecretRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAppSupabaseSecretRequest() = default ;
    UpdateAppSupabaseSecretRequest& operator=(const UpdateAppSupabaseSecretRequest &) = default ;
    UpdateAppSupabaseSecretRequest& operator=(UpdateAppSupabaseSecretRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr
        && this->secretKey_ == nullptr && this->secretName_ == nullptr && this->secretType_ == nullptr && this->secretValue_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline UpdateAppSupabaseSecretRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // secretKey Field Functions 
    bool hasSecretKey() const { return this->secretKey_ != nullptr;};
    void deleteSecretKey() { this->secretKey_ = nullptr;};
    inline string getSecretKey() const { DARABONBA_PTR_GET_DEFAULT(secretKey_, "") };
    inline UpdateAppSupabaseSecretRequest& setSecretKey(string secretKey) { DARABONBA_PTR_SET_VALUE(secretKey_, secretKey) };


    // secretName Field Functions 
    bool hasSecretName() const { return this->secretName_ != nullptr;};
    void deleteSecretName() { this->secretName_ = nullptr;};
    inline string getSecretName() const { DARABONBA_PTR_GET_DEFAULT(secretName_, "") };
    inline UpdateAppSupabaseSecretRequest& setSecretName(string secretName) { DARABONBA_PTR_SET_VALUE(secretName_, secretName) };


    // secretType Field Functions 
    bool hasSecretType() const { return this->secretType_ != nullptr;};
    void deleteSecretType() { this->secretType_ = nullptr;};
    inline string getSecretType() const { DARABONBA_PTR_GET_DEFAULT(secretType_, "") };
    inline UpdateAppSupabaseSecretRequest& setSecretType(string secretType) { DARABONBA_PTR_SET_VALUE(secretType_, secretType) };


    // secretValue Field Functions 
    bool hasSecretValue() const { return this->secretValue_ != nullptr;};
    void deleteSecretValue() { this->secretValue_ = nullptr;};
    inline string getSecretValue() const { DARABONBA_PTR_GET_DEFAULT(secretValue_, "") };
    inline UpdateAppSupabaseSecretRequest& setSecretValue(string secretValue) { DARABONBA_PTR_SET_VALUE(secretValue_, secretValue) };


  protected:
    // The business ID.
    shared_ptr<string> bizId_ {};
    // The secret key.
    shared_ptr<string> secretKey_ {};
    // The secret name.
    shared_ptr<string> secretName_ {};
    // The secret type.
    shared_ptr<string> secretType_ {};
    // The secret value.
    shared_ptr<string> secretValue_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
