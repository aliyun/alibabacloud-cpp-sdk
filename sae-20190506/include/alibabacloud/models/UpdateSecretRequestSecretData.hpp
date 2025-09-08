// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESECRETREQUESTSECRETDATA_HPP_
#define ALIBABACLOUD_MODELS_UPDATESECRETREQUESTSECRETDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class UpdateSecretRequestSecretData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSecretRequestSecretData& obj) { 
      DARABONBA_PTR_TO_JSON(SecretData, secretData_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSecretRequestSecretData& obj) { 
      DARABONBA_PTR_FROM_JSON(SecretData, secretData_);
    };
    UpdateSecretRequestSecretData() = default ;
    UpdateSecretRequestSecretData(const UpdateSecretRequestSecretData &) = default ;
    UpdateSecretRequestSecretData(UpdateSecretRequestSecretData &&) = default ;
    UpdateSecretRequestSecretData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSecretRequestSecretData() = default ;
    UpdateSecretRequestSecretData& operator=(const UpdateSecretRequestSecretData &) = default ;
    UpdateSecretRequestSecretData& operator=(UpdateSecretRequestSecretData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->secretData_ != nullptr; };
    // secretData Field Functions 
    bool hasSecretData() const { return this->secretData_ != nullptr;};
    void deleteSecretData() { this->secretData_ = nullptr;};
    inline string secretData() const { DARABONBA_PTR_GET_DEFAULT(secretData_, "") };
    inline UpdateSecretRequestSecretData& setSecretData(string secretData) { DARABONBA_PTR_SET_VALUE(secretData_, secretData) };


  protected:
    // The information about the key-value pairs of the Secret. This parameter is required. The following formats are supported:
    // 
    // {"Data":"{"k1":"v1", "k2":"v2"}"}
    // 
    // k specifies a key and v specifies a value. For more information, see [Manage a Kubernetes Secret](https://help.aliyun.com/document_detail/463383.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> secretData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
