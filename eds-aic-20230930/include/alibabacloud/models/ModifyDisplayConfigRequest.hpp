// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDISPLAYCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDISPLAYCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModifyDisplayConfigRequestDisplayConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class ModifyDisplayConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDisplayConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AndroidInstanceIds, androidInstanceIds_);
      DARABONBA_PTR_TO_JSON(DisplayConfig, displayConfig_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDisplayConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AndroidInstanceIds, androidInstanceIds_);
      DARABONBA_PTR_FROM_JSON(DisplayConfig, displayConfig_);
    };
    ModifyDisplayConfigRequest() = default ;
    ModifyDisplayConfigRequest(const ModifyDisplayConfigRequest &) = default ;
    ModifyDisplayConfigRequest(ModifyDisplayConfigRequest &&) = default ;
    ModifyDisplayConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDisplayConfigRequest() = default ;
    ModifyDisplayConfigRequest& operator=(const ModifyDisplayConfigRequest &) = default ;
    ModifyDisplayConfigRequest& operator=(ModifyDisplayConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->androidInstanceIds_ == nullptr
        && return this->displayConfig_ == nullptr; };
    // androidInstanceIds Field Functions 
    bool hasAndroidInstanceIds() const { return this->androidInstanceIds_ != nullptr;};
    void deleteAndroidInstanceIds() { this->androidInstanceIds_ = nullptr;};
    inline const vector<string> & androidInstanceIds() const { DARABONBA_PTR_GET_CONST(androidInstanceIds_, vector<string>) };
    inline vector<string> androidInstanceIds() { DARABONBA_PTR_GET(androidInstanceIds_, vector<string>) };
    inline ModifyDisplayConfigRequest& setAndroidInstanceIds(const vector<string> & androidInstanceIds) { DARABONBA_PTR_SET_VALUE(androidInstanceIds_, androidInstanceIds) };
    inline ModifyDisplayConfigRequest& setAndroidInstanceIds(vector<string> && androidInstanceIds) { DARABONBA_PTR_SET_RVALUE(androidInstanceIds_, androidInstanceIds) };


    // displayConfig Field Functions 
    bool hasDisplayConfig() const { return this->displayConfig_ != nullptr;};
    void deleteDisplayConfig() { this->displayConfig_ = nullptr;};
    inline const ModifyDisplayConfigRequestDisplayConfig & displayConfig() const { DARABONBA_PTR_GET_CONST(displayConfig_, ModifyDisplayConfigRequestDisplayConfig) };
    inline ModifyDisplayConfigRequestDisplayConfig displayConfig() { DARABONBA_PTR_GET(displayConfig_, ModifyDisplayConfigRequestDisplayConfig) };
    inline ModifyDisplayConfigRequest& setDisplayConfig(const ModifyDisplayConfigRequestDisplayConfig & displayConfig) { DARABONBA_PTR_SET_VALUE(displayConfig_, displayConfig) };
    inline ModifyDisplayConfigRequest& setDisplayConfig(ModifyDisplayConfigRequestDisplayConfig && displayConfig) { DARABONBA_PTR_SET_RVALUE(displayConfig_, displayConfig) };


  protected:
    std::shared_ptr<vector<string>> androidInstanceIds_ = nullptr;
    std::shared_ptr<ModifyDisplayConfigRequestDisplayConfig> displayConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
