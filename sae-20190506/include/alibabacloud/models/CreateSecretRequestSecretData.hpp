// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESECRETREQUESTSECRETDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATESECRETREQUESTSECRETDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class CreateSecretRequestSecretData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSecretRequestSecretData& obj) { 
      DARABONBA_PTR_TO_JSON(SecretData, secretData_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSecretRequestSecretData& obj) { 
      DARABONBA_PTR_FROM_JSON(SecretData, secretData_);
    };
    CreateSecretRequestSecretData() = default ;
    CreateSecretRequestSecretData(const CreateSecretRequestSecretData &) = default ;
    CreateSecretRequestSecretData(CreateSecretRequestSecretData &&) = default ;
    CreateSecretRequestSecretData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSecretRequestSecretData() = default ;
    CreateSecretRequestSecretData& operator=(const CreateSecretRequestSecretData &) = default ;
    CreateSecretRequestSecretData& operator=(CreateSecretRequestSecretData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->secretData_ != nullptr; };
    // secretData Field Functions 
    bool hasSecretData() const { return this->secretData_ != nullptr;};
    void deleteSecretData() { this->secretData_ = nullptr;};
    inline string secretData() const { DARABONBA_PTR_GET_DEFAULT(secretData_, "") };
    inline CreateSecretRequestSecretData& setSecretData(string secretData) { DARABONBA_PTR_SET_VALUE(secretData_, secretData) };


  protected:
    // The information about the key-value pairs of the Secret. This parameter is required. The following formats are supported:
    // 
    // {"Data":"{"k1":"v1", "k2":"v2"}"}
    // 
    // k specifies a key and v specifies a value.
    // 
    // This parameter is required.
    std::shared_ptr<string> secretData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
