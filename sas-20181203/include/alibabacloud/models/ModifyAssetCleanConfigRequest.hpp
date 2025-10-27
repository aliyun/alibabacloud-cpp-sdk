// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYASSETCLEANCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYASSETCLEANCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModifyAssetCleanConfigRequestAssetCleanConfigs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ModifyAssetCleanConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAssetCleanConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AssetCleanConfigs, assetCleanConfigs_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAssetCleanConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetCleanConfigs, assetCleanConfigs_);
    };
    ModifyAssetCleanConfigRequest() = default ;
    ModifyAssetCleanConfigRequest(const ModifyAssetCleanConfigRequest &) = default ;
    ModifyAssetCleanConfigRequest(ModifyAssetCleanConfigRequest &&) = default ;
    ModifyAssetCleanConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAssetCleanConfigRequest() = default ;
    ModifyAssetCleanConfigRequest& operator=(const ModifyAssetCleanConfigRequest &) = default ;
    ModifyAssetCleanConfigRequest& operator=(ModifyAssetCleanConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assetCleanConfigs_ == nullptr; };
    // assetCleanConfigs Field Functions 
    bool hasAssetCleanConfigs() const { return this->assetCleanConfigs_ != nullptr;};
    void deleteAssetCleanConfigs() { this->assetCleanConfigs_ = nullptr;};
    inline const vector<ModifyAssetCleanConfigRequestAssetCleanConfigs> & assetCleanConfigs() const { DARABONBA_PTR_GET_CONST(assetCleanConfigs_, vector<ModifyAssetCleanConfigRequestAssetCleanConfigs>) };
    inline vector<ModifyAssetCleanConfigRequestAssetCleanConfigs> assetCleanConfigs() { DARABONBA_PTR_GET(assetCleanConfigs_, vector<ModifyAssetCleanConfigRequestAssetCleanConfigs>) };
    inline ModifyAssetCleanConfigRequest& setAssetCleanConfigs(const vector<ModifyAssetCleanConfigRequestAssetCleanConfigs> & assetCleanConfigs) { DARABONBA_PTR_SET_VALUE(assetCleanConfigs_, assetCleanConfigs) };
    inline ModifyAssetCleanConfigRequest& setAssetCleanConfigs(vector<ModifyAssetCleanConfigRequestAssetCleanConfigs> && assetCleanConfigs) { DARABONBA_PTR_SET_RVALUE(assetCleanConfigs_, assetCleanConfigs) };


  protected:
    // The asset cleanup configurations.
    std::shared_ptr<vector<ModifyAssetCleanConfigRequestAssetCleanConfigs>> assetCleanConfigs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
