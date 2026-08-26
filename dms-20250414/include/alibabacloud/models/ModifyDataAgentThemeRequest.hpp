// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDATAAGENTTHEMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDATAAGENTTHEMEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class ModifyDataAgentThemeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDataAgentThemeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ThemeId, themeId_);
      DARABONBA_PTR_TO_JSON(ThemeName, themeName_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDataAgentThemeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ThemeId, themeId_);
      DARABONBA_PTR_FROM_JSON(ThemeName, themeName_);
    };
    ModifyDataAgentThemeRequest() = default ;
    ModifyDataAgentThemeRequest(const ModifyDataAgentThemeRequest &) = default ;
    ModifyDataAgentThemeRequest(ModifyDataAgentThemeRequest &&) = default ;
    ModifyDataAgentThemeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDataAgentThemeRequest() = default ;
    ModifyDataAgentThemeRequest& operator=(const ModifyDataAgentThemeRequest &) = default ;
    ModifyDataAgentThemeRequest& operator=(ModifyDataAgentThemeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->themeId_ == nullptr && this->themeName_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyDataAgentThemeRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // themeId Field Functions 
    bool hasThemeId() const { return this->themeId_ != nullptr;};
    void deleteThemeId() { this->themeId_ = nullptr;};
    inline string getThemeId() const { DARABONBA_PTR_GET_DEFAULT(themeId_, "") };
    inline ModifyDataAgentThemeRequest& setThemeId(string themeId) { DARABONBA_PTR_SET_VALUE(themeId_, themeId) };


    // themeName Field Functions 
    bool hasThemeName() const { return this->themeName_ != nullptr;};
    void deleteThemeName() { this->themeName_ = nullptr;};
    inline string getThemeName() const { DARABONBA_PTR_GET_DEFAULT(themeName_, "") };
    inline ModifyDataAgentThemeRequest& setThemeName(string themeName) { DARABONBA_PTR_SET_VALUE(themeName_, themeName) };


  protected:
    shared_ptr<string> description_ {};
    shared_ptr<string> themeId_ {};
    shared_ptr<string> themeName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
