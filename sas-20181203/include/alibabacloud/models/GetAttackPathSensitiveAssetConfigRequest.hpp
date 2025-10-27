// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETATTACKPATHSENSITIVEASSETCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETATTACKPATHSENSITIVEASSETCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetAttackPathSensitiveAssetConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAttackPathSensitiveAssetConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AttackPathSensitiveAssetConfigId, attackPathSensitiveAssetConfigId_);
      DARABONBA_PTR_TO_JSON(ConfigType, configType_);
    };
    friend void from_json(const Darabonba::Json& j, GetAttackPathSensitiveAssetConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AttackPathSensitiveAssetConfigId, attackPathSensitiveAssetConfigId_);
      DARABONBA_PTR_FROM_JSON(ConfigType, configType_);
    };
    GetAttackPathSensitiveAssetConfigRequest() = default ;
    GetAttackPathSensitiveAssetConfigRequest(const GetAttackPathSensitiveAssetConfigRequest &) = default ;
    GetAttackPathSensitiveAssetConfigRequest(GetAttackPathSensitiveAssetConfigRequest &&) = default ;
    GetAttackPathSensitiveAssetConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAttackPathSensitiveAssetConfigRequest() = default ;
    GetAttackPathSensitiveAssetConfigRequest& operator=(const GetAttackPathSensitiveAssetConfigRequest &) = default ;
    GetAttackPathSensitiveAssetConfigRequest& operator=(GetAttackPathSensitiveAssetConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attackPathSensitiveAssetConfigId_ == nullptr
        && return this->configType_ == nullptr; };
    // attackPathSensitiveAssetConfigId Field Functions 
    bool hasAttackPathSensitiveAssetConfigId() const { return this->attackPathSensitiveAssetConfigId_ != nullptr;};
    void deleteAttackPathSensitiveAssetConfigId() { this->attackPathSensitiveAssetConfigId_ = nullptr;};
    inline string attackPathSensitiveAssetConfigId() const { DARABONBA_PTR_GET_DEFAULT(attackPathSensitiveAssetConfigId_, "") };
    inline GetAttackPathSensitiveAssetConfigRequest& setAttackPathSensitiveAssetConfigId(string attackPathSensitiveAssetConfigId) { DARABONBA_PTR_SET_VALUE(attackPathSensitiveAssetConfigId_, attackPathSensitiveAssetConfigId) };


    // configType Field Functions 
    bool hasConfigType() const { return this->configType_ != nullptr;};
    void deleteConfigType() { this->configType_ = nullptr;};
    inline string configType() const { DARABONBA_PTR_GET_DEFAULT(configType_, "") };
    inline GetAttackPathSensitiveAssetConfigRequest& setConfigType(string configType) { DARABONBA_PTR_SET_VALUE(configType_, configType) };


  protected:
    // ID of the created attack path sensitive asset setting.
    std::shared_ptr<string> attackPathSensitiveAssetConfigId_ = nullptr;
    // Configuration type. Possible values:
    // - asset_instance: Asset.
    // 
    // This parameter is required.
    std::shared_ptr<string> configType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
