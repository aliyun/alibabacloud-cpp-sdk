// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESECRETREQUESTEXTENDEDCONFIG_HPP_
#define ALIBABACLOUD_MODELS_UPDATESECRETREQUESTEXTENDEDCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class UpdateSecretRequestExtendedConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSecretRequestExtendedConfig& obj) { 
      DARABONBA_ANY_TO_JSON(CustomData, customData_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSecretRequestExtendedConfig& obj) { 
      DARABONBA_ANY_FROM_JSON(CustomData, customData_);
    };
    UpdateSecretRequestExtendedConfig() = default ;
    UpdateSecretRequestExtendedConfig(const UpdateSecretRequestExtendedConfig &) = default ;
    UpdateSecretRequestExtendedConfig(UpdateSecretRequestExtendedConfig &&) = default ;
    UpdateSecretRequestExtendedConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSecretRequestExtendedConfig() = default ;
    UpdateSecretRequestExtendedConfig& operator=(const UpdateSecretRequestExtendedConfig &) = default ;
    UpdateSecretRequestExtendedConfig& operator=(UpdateSecretRequestExtendedConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customData_ == nullptr; };
    // customData Field Functions 
    bool hasCustomData() const { return this->customData_ != nullptr;};
    void deleteCustomData() { this->customData_ = nullptr;};
    inline     const Darabonba::Json & customData() const { DARABONBA_GET(customData_) };
    Darabonba::Json & customData() { DARABONBA_GET(customData_) };
    inline UpdateSecretRequestExtendedConfig& setCustomData(const Darabonba::Json & customData) { DARABONBA_SET_VALUE(customData_, customData) };
    inline UpdateSecretRequestExtendedConfig& setCustomData(Darabonba::Json & customData) { DARABONBA_SET_RVALUE(customData_, customData) };


  protected:
    // The custom data in the extended configuration of the secret.
    // 
    // > *   If this parameter is specified, the existing extended configuration of the secret is updated.
    // > *   This parameter is unavailable for generic secrets.
    Darabonba::Json customData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
