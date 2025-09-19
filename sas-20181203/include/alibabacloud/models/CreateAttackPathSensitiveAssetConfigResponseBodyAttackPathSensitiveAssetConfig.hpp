// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEATTACKPATHSENSITIVEASSETCONFIGRESPONSEBODYATTACKPATHSENSITIVEASSETCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATEATTACKPATHSENSITIVEASSETCONFIGRESPONSEBODYATTACKPATHSENSITIVEASSETCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class CreateAttackPathSensitiveAssetConfigResponseBodyAttackPathSensitiveAssetConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAttackPathSensitiveAssetConfigResponseBodyAttackPathSensitiveAssetConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AttackPathSensitiveAssetConfigId, attackPathSensitiveAssetConfigId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAttackPathSensitiveAssetConfigResponseBodyAttackPathSensitiveAssetConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AttackPathSensitiveAssetConfigId, attackPathSensitiveAssetConfigId_);
    };
    CreateAttackPathSensitiveAssetConfigResponseBodyAttackPathSensitiveAssetConfig() = default ;
    CreateAttackPathSensitiveAssetConfigResponseBodyAttackPathSensitiveAssetConfig(const CreateAttackPathSensitiveAssetConfigResponseBodyAttackPathSensitiveAssetConfig &) = default ;
    CreateAttackPathSensitiveAssetConfigResponseBodyAttackPathSensitiveAssetConfig(CreateAttackPathSensitiveAssetConfigResponseBodyAttackPathSensitiveAssetConfig &&) = default ;
    CreateAttackPathSensitiveAssetConfigResponseBodyAttackPathSensitiveAssetConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAttackPathSensitiveAssetConfigResponseBodyAttackPathSensitiveAssetConfig() = default ;
    CreateAttackPathSensitiveAssetConfigResponseBodyAttackPathSensitiveAssetConfig& operator=(const CreateAttackPathSensitiveAssetConfigResponseBodyAttackPathSensitiveAssetConfig &) = default ;
    CreateAttackPathSensitiveAssetConfigResponseBodyAttackPathSensitiveAssetConfig& operator=(CreateAttackPathSensitiveAssetConfigResponseBodyAttackPathSensitiveAssetConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->attackPathSensitiveAssetConfigId_ != nullptr; };
    // attackPathSensitiveAssetConfigId Field Functions 
    bool hasAttackPathSensitiveAssetConfigId() const { return this->attackPathSensitiveAssetConfigId_ != nullptr;};
    void deleteAttackPathSensitiveAssetConfigId() { this->attackPathSensitiveAssetConfigId_ = nullptr;};
    inline string attackPathSensitiveAssetConfigId() const { DARABONBA_PTR_GET_DEFAULT(attackPathSensitiveAssetConfigId_, "") };
    inline CreateAttackPathSensitiveAssetConfigResponseBodyAttackPathSensitiveAssetConfig& setAttackPathSensitiveAssetConfigId(string attackPathSensitiveAssetConfigId) { DARABONBA_PTR_SET_VALUE(attackPathSensitiveAssetConfigId_, attackPathSensitiveAssetConfigId) };


  protected:
    // ID for setting sensitive assets in the attack path.
    std::shared_ptr<string> attackPathSensitiveAssetConfigId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
