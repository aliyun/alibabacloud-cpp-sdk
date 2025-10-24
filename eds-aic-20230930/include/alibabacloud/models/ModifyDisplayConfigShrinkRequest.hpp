// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDISPLAYCONFIGSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDISPLAYCONFIGSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class ModifyDisplayConfigShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDisplayConfigShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AndroidInstanceIds, androidInstanceIds_);
      DARABONBA_PTR_TO_JSON(DisplayConfig, displayConfigShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDisplayConfigShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AndroidInstanceIds, androidInstanceIds_);
      DARABONBA_PTR_FROM_JSON(DisplayConfig, displayConfigShrink_);
    };
    ModifyDisplayConfigShrinkRequest() = default ;
    ModifyDisplayConfigShrinkRequest(const ModifyDisplayConfigShrinkRequest &) = default ;
    ModifyDisplayConfigShrinkRequest(ModifyDisplayConfigShrinkRequest &&) = default ;
    ModifyDisplayConfigShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDisplayConfigShrinkRequest() = default ;
    ModifyDisplayConfigShrinkRequest& operator=(const ModifyDisplayConfigShrinkRequest &) = default ;
    ModifyDisplayConfigShrinkRequest& operator=(ModifyDisplayConfigShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->androidInstanceIds_ == nullptr
        && return this->displayConfigShrink_ == nullptr; };
    // androidInstanceIds Field Functions 
    bool hasAndroidInstanceIds() const { return this->androidInstanceIds_ != nullptr;};
    void deleteAndroidInstanceIds() { this->androidInstanceIds_ = nullptr;};
    inline const vector<string> & androidInstanceIds() const { DARABONBA_PTR_GET_CONST(androidInstanceIds_, vector<string>) };
    inline vector<string> androidInstanceIds() { DARABONBA_PTR_GET(androidInstanceIds_, vector<string>) };
    inline ModifyDisplayConfigShrinkRequest& setAndroidInstanceIds(const vector<string> & androidInstanceIds) { DARABONBA_PTR_SET_VALUE(androidInstanceIds_, androidInstanceIds) };
    inline ModifyDisplayConfigShrinkRequest& setAndroidInstanceIds(vector<string> && androidInstanceIds) { DARABONBA_PTR_SET_RVALUE(androidInstanceIds_, androidInstanceIds) };


    // displayConfigShrink Field Functions 
    bool hasDisplayConfigShrink() const { return this->displayConfigShrink_ != nullptr;};
    void deleteDisplayConfigShrink() { this->displayConfigShrink_ = nullptr;};
    inline string displayConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(displayConfigShrink_, "") };
    inline ModifyDisplayConfigShrinkRequest& setDisplayConfigShrink(string displayConfigShrink) { DARABONBA_PTR_SET_VALUE(displayConfigShrink_, displayConfigShrink) };


  protected:
    std::shared_ptr<vector<string>> androidInstanceIds_ = nullptr;
    std::shared_ptr<string> displayConfigShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
