// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESECRETSHRINKREQUESTEXTENDEDCONFIG_HPP_
#define ALIBABACLOUD_MODELS_UPDATESECRETSHRINKREQUESTEXTENDEDCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class UpdateSecretShrinkRequestExtendedConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSecretShrinkRequestExtendedConfig& obj) { 
      DARABONBA_PTR_TO_JSON(CustomData, customData_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSecretShrinkRequestExtendedConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomData, customData_);
    };
    UpdateSecretShrinkRequestExtendedConfig() = default ;
    UpdateSecretShrinkRequestExtendedConfig(const UpdateSecretShrinkRequestExtendedConfig &) = default ;
    UpdateSecretShrinkRequestExtendedConfig(UpdateSecretShrinkRequestExtendedConfig &&) = default ;
    UpdateSecretShrinkRequestExtendedConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSecretShrinkRequestExtendedConfig() = default ;
    UpdateSecretShrinkRequestExtendedConfig& operator=(const UpdateSecretShrinkRequestExtendedConfig &) = default ;
    UpdateSecretShrinkRequestExtendedConfig& operator=(UpdateSecretShrinkRequestExtendedConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customData_ == nullptr; };
    // customData Field Functions 
    bool hasCustomData() const { return this->customData_ != nullptr;};
    void deleteCustomData() { this->customData_ = nullptr;};
    inline string customData() const { DARABONBA_PTR_GET_DEFAULT(customData_, "") };
    inline UpdateSecretShrinkRequestExtendedConfig& setCustomData(string customData) { DARABONBA_PTR_SET_VALUE(customData_, customData) };


  protected:
    // The custom data in the extended configuration of the secret.
    // 
    // > *   If this parameter is specified, the existing extended configuration of the secret is updated.
    // > *   This parameter is unavailable for generic secrets.
    std::shared_ptr<string> customData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
