// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETATTACKPATHSENSITIVEASSETCONFIGRESPONSEBODYATTACKPATHSENSITIVEASSETCONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETATTACKPATHSENSITIVEASSETCONFIGRESPONSEBODYATTACKPATHSENSITIVEASSETCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetAttackPathSensitiveAssetConfigResponseBodyAttackPathSensitiveAssetConfigAttackPathAssetList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetAttackPathSensitiveAssetConfigResponseBodyAttackPathSensitiveAssetConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAttackPathSensitiveAssetConfigResponseBodyAttackPathSensitiveAssetConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AttackPathAssetList, attackPathAssetList_);
      DARABONBA_PTR_TO_JSON(AttackPathSensitiveAssetConfigId, attackPathSensitiveAssetConfigId_);
      DARABONBA_PTR_TO_JSON(ConfigType, configType_);
    };
    friend void from_json(const Darabonba::Json& j, GetAttackPathSensitiveAssetConfigResponseBodyAttackPathSensitiveAssetConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AttackPathAssetList, attackPathAssetList_);
      DARABONBA_PTR_FROM_JSON(AttackPathSensitiveAssetConfigId, attackPathSensitiveAssetConfigId_);
      DARABONBA_PTR_FROM_JSON(ConfigType, configType_);
    };
    GetAttackPathSensitiveAssetConfigResponseBodyAttackPathSensitiveAssetConfig() = default ;
    GetAttackPathSensitiveAssetConfigResponseBodyAttackPathSensitiveAssetConfig(const GetAttackPathSensitiveAssetConfigResponseBodyAttackPathSensitiveAssetConfig &) = default ;
    GetAttackPathSensitiveAssetConfigResponseBodyAttackPathSensitiveAssetConfig(GetAttackPathSensitiveAssetConfigResponseBodyAttackPathSensitiveAssetConfig &&) = default ;
    GetAttackPathSensitiveAssetConfigResponseBodyAttackPathSensitiveAssetConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAttackPathSensitiveAssetConfigResponseBodyAttackPathSensitiveAssetConfig() = default ;
    GetAttackPathSensitiveAssetConfigResponseBodyAttackPathSensitiveAssetConfig& operator=(const GetAttackPathSensitiveAssetConfigResponseBodyAttackPathSensitiveAssetConfig &) = default ;
    GetAttackPathSensitiveAssetConfigResponseBodyAttackPathSensitiveAssetConfig& operator=(GetAttackPathSensitiveAssetConfigResponseBodyAttackPathSensitiveAssetConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attackPathAssetList_ == nullptr
        && return this->attackPathSensitiveAssetConfigId_ == nullptr && return this->configType_ == nullptr; };
    // attackPathAssetList Field Functions 
    bool hasAttackPathAssetList() const { return this->attackPathAssetList_ != nullptr;};
    void deleteAttackPathAssetList() { this->attackPathAssetList_ = nullptr;};
    inline const vector<Models::GetAttackPathSensitiveAssetConfigResponseBodyAttackPathSensitiveAssetConfigAttackPathAssetList> & attackPathAssetList() const { DARABONBA_PTR_GET_CONST(attackPathAssetList_, vector<Models::GetAttackPathSensitiveAssetConfigResponseBodyAttackPathSensitiveAssetConfigAttackPathAssetList>) };
    inline vector<Models::GetAttackPathSensitiveAssetConfigResponseBodyAttackPathSensitiveAssetConfigAttackPathAssetList> attackPathAssetList() { DARABONBA_PTR_GET(attackPathAssetList_, vector<Models::GetAttackPathSensitiveAssetConfigResponseBodyAttackPathSensitiveAssetConfigAttackPathAssetList>) };
    inline GetAttackPathSensitiveAssetConfigResponseBodyAttackPathSensitiveAssetConfig& setAttackPathAssetList(const vector<Models::GetAttackPathSensitiveAssetConfigResponseBodyAttackPathSensitiveAssetConfigAttackPathAssetList> & attackPathAssetList) { DARABONBA_PTR_SET_VALUE(attackPathAssetList_, attackPathAssetList) };
    inline GetAttackPathSensitiveAssetConfigResponseBodyAttackPathSensitiveAssetConfig& setAttackPathAssetList(vector<Models::GetAttackPathSensitiveAssetConfigResponseBodyAttackPathSensitiveAssetConfigAttackPathAssetList> && attackPathAssetList) { DARABONBA_PTR_SET_RVALUE(attackPathAssetList_, attackPathAssetList) };


    // attackPathSensitiveAssetConfigId Field Functions 
    bool hasAttackPathSensitiveAssetConfigId() const { return this->attackPathSensitiveAssetConfigId_ != nullptr;};
    void deleteAttackPathSensitiveAssetConfigId() { this->attackPathSensitiveAssetConfigId_ = nullptr;};
    inline string attackPathSensitiveAssetConfigId() const { DARABONBA_PTR_GET_DEFAULT(attackPathSensitiveAssetConfigId_, "") };
    inline GetAttackPathSensitiveAssetConfigResponseBodyAttackPathSensitiveAssetConfig& setAttackPathSensitiveAssetConfigId(string attackPathSensitiveAssetConfigId) { DARABONBA_PTR_SET_VALUE(attackPathSensitiveAssetConfigId_, attackPathSensitiveAssetConfigId) };


    // configType Field Functions 
    bool hasConfigType() const { return this->configType_ != nullptr;};
    void deleteConfigType() { this->configType_ = nullptr;};
    inline string configType() const { DARABONBA_PTR_GET_DEFAULT(configType_, "") };
    inline GetAttackPathSensitiveAssetConfigResponseBodyAttackPathSensitiveAssetConfig& setConfigType(string configType) { DARABONBA_PTR_SET_VALUE(configType_, configType) };


  protected:
    // List of cloud product assets in the attack path.
    std::shared_ptr<vector<Models::GetAttackPathSensitiveAssetConfigResponseBodyAttackPathSensitiveAssetConfigAttackPathAssetList>> attackPathAssetList_ = nullptr;
    // ID of the attack path sensitive asset setting.
    std::shared_ptr<string> attackPathSensitiveAssetConfigId_ = nullptr;
    // Configuration type. Value range: - asset_instance: Asset.
    std::shared_ptr<string> configType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
