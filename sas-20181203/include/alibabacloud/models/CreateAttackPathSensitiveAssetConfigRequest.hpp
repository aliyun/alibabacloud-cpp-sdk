// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEATTACKPATHSENSITIVEASSETCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEATTACKPATHSENSITIVEASSETCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateAttackPathSensitiveAssetConfigRequestAttackPathAssetList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class CreateAttackPathSensitiveAssetConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAttackPathSensitiveAssetConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AttackPathAssetList, attackPathAssetList_);
      DARABONBA_PTR_TO_JSON(ConfigType, configType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAttackPathSensitiveAssetConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AttackPathAssetList, attackPathAssetList_);
      DARABONBA_PTR_FROM_JSON(ConfigType, configType_);
    };
    CreateAttackPathSensitiveAssetConfigRequest() = default ;
    CreateAttackPathSensitiveAssetConfigRequest(const CreateAttackPathSensitiveAssetConfigRequest &) = default ;
    CreateAttackPathSensitiveAssetConfigRequest(CreateAttackPathSensitiveAssetConfigRequest &&) = default ;
    CreateAttackPathSensitiveAssetConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAttackPathSensitiveAssetConfigRequest() = default ;
    CreateAttackPathSensitiveAssetConfigRequest& operator=(const CreateAttackPathSensitiveAssetConfigRequest &) = default ;
    CreateAttackPathSensitiveAssetConfigRequest& operator=(CreateAttackPathSensitiveAssetConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attackPathAssetList_ == nullptr
        && return this->configType_ == nullptr; };
    // attackPathAssetList Field Functions 
    bool hasAttackPathAssetList() const { return this->attackPathAssetList_ != nullptr;};
    void deleteAttackPathAssetList() { this->attackPathAssetList_ = nullptr;};
    inline const vector<CreateAttackPathSensitiveAssetConfigRequestAttackPathAssetList> & attackPathAssetList() const { DARABONBA_PTR_GET_CONST(attackPathAssetList_, vector<CreateAttackPathSensitiveAssetConfigRequestAttackPathAssetList>) };
    inline vector<CreateAttackPathSensitiveAssetConfigRequestAttackPathAssetList> attackPathAssetList() { DARABONBA_PTR_GET(attackPathAssetList_, vector<CreateAttackPathSensitiveAssetConfigRequestAttackPathAssetList>) };
    inline CreateAttackPathSensitiveAssetConfigRequest& setAttackPathAssetList(const vector<CreateAttackPathSensitiveAssetConfigRequestAttackPathAssetList> & attackPathAssetList) { DARABONBA_PTR_SET_VALUE(attackPathAssetList_, attackPathAssetList) };
    inline CreateAttackPathSensitiveAssetConfigRequest& setAttackPathAssetList(vector<CreateAttackPathSensitiveAssetConfigRequestAttackPathAssetList> && attackPathAssetList) { DARABONBA_PTR_SET_RVALUE(attackPathAssetList_, attackPathAssetList) };


    // configType Field Functions 
    bool hasConfigType() const { return this->configType_ != nullptr;};
    void deleteConfigType() { this->configType_ = nullptr;};
    inline string configType() const { DARABONBA_PTR_GET_DEFAULT(configType_, "") };
    inline CreateAttackPathSensitiveAssetConfigRequest& setConfigType(string configType) { DARABONBA_PTR_SET_VALUE(configType_, configType) };


  protected:
    // List of cloud product assets.
    // 
    // This parameter is required.
    std::shared_ptr<vector<CreateAttackPathSensitiveAssetConfigRequestAttackPathAssetList>> attackPathAssetList_ = nullptr;
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
