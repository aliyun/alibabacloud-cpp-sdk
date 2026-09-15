// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATAAGENTTHEMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATAAGENTTHEMEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class CreateDataAgentThemeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataAgentThemeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FileFrom, fileFrom_);
      DARABONBA_PTR_TO_JSON(ThemeId, themeId_);
      DARABONBA_PTR_TO_JSON(ThemeName, themeName_);
      DARABONBA_PTR_TO_JSON(ThemeType, themeType_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataAgentThemeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FileFrom, fileFrom_);
      DARABONBA_PTR_FROM_JSON(ThemeId, themeId_);
      DARABONBA_PTR_FROM_JSON(ThemeName, themeName_);
      DARABONBA_PTR_FROM_JSON(ThemeType, themeType_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    CreateDataAgentThemeRequest() = default ;
    CreateDataAgentThemeRequest(const CreateDataAgentThemeRequest &) = default ;
    CreateDataAgentThemeRequest(CreateDataAgentThemeRequest &&) = default ;
    CreateDataAgentThemeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataAgentThemeRequest() = default ;
    CreateDataAgentThemeRequest& operator=(const CreateDataAgentThemeRequest &) = default ;
    CreateDataAgentThemeRequest& operator=(CreateDataAgentThemeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr
        && this->description_ == nullptr && this->fileFrom_ == nullptr && this->themeId_ == nullptr && this->themeName_ == nullptr && this->themeType_ == nullptr
        && this->workspaceId_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline CreateDataAgentThemeRequest& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateDataAgentThemeRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // fileFrom Field Functions 
    bool hasFileFrom() const { return this->fileFrom_ != nullptr;};
    void deleteFileFrom() { this->fileFrom_ = nullptr;};
    inline string getFileFrom() const { DARABONBA_PTR_GET_DEFAULT(fileFrom_, "") };
    inline CreateDataAgentThemeRequest& setFileFrom(string fileFrom) { DARABONBA_PTR_SET_VALUE(fileFrom_, fileFrom) };


    // themeId Field Functions 
    bool hasThemeId() const { return this->themeId_ != nullptr;};
    void deleteThemeId() { this->themeId_ = nullptr;};
    inline string getThemeId() const { DARABONBA_PTR_GET_DEFAULT(themeId_, "") };
    inline CreateDataAgentThemeRequest& setThemeId(string themeId) { DARABONBA_PTR_SET_VALUE(themeId_, themeId) };


    // themeName Field Functions 
    bool hasThemeName() const { return this->themeName_ != nullptr;};
    void deleteThemeName() { this->themeName_ = nullptr;};
    inline string getThemeName() const { DARABONBA_PTR_GET_DEFAULT(themeName_, "") };
    inline CreateDataAgentThemeRequest& setThemeName(string themeName) { DARABONBA_PTR_SET_VALUE(themeName_, themeName) };


    // themeType Field Functions 
    bool hasThemeType() const { return this->themeType_ != nullptr;};
    void deleteThemeType() { this->themeType_ = nullptr;};
    inline string getThemeType() const { DARABONBA_PTR_GET_DEFAULT(themeType_, "") };
    inline CreateDataAgentThemeRequest& setThemeType(string themeType) { DARABONBA_PTR_SET_VALUE(themeType_, themeType) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreateDataAgentThemeRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The scenario, which affects the filtering when you view the theme list in the console. Valid values:
    // 
    // - (Recommended) custom: A user-uploaded custom theme with no preset style or information organization structure.
    // - report: A web report that conforms to the DataAgent information organization structure.
    // - (Not supported) infographic: An infographic that conforms to the DataAgent information organization structure.
    shared_ptr<string> category_ {};
    // The description. The value can be up to 255 characters in length.
    shared_ptr<string> description_ {};
    // The file source, which affects the backend logic for determining whether the theme is valid. Valid values:
    // 
    // - upload: The file is uploaded through OSS.
    // - (Not supported) public_url: The file is provided through a public network access OSS URL.
    // - (Not supported) user_oss: The file is provided through a user OSS URL.
    shared_ptr<string> fileFrom_ {};
    // The UUID of the theme. The value must be returned by GetDataAgentThemeUploadSignature, and the file must have been uploaded. If the UUID is forged or the file has not been uploaded, the creation fails.
    shared_ptr<string> themeId_ {};
    // The display name of the theme. The value can be up to 64 characters in length. This parameter is required when you create a theme.
    shared_ptr<string> themeName_ {};
    // The type of the custom theme. Valid values:
    // 
    // - (Default) template: The theme is a template.
    // - (Not supported) design: The theme is a DESIGN.md file.
    shared_ptr<string> themeType_ {};
    // The workspace to which the theme belongs. If this parameter is not specified or is set to personal, the personal workspace is used. You can also specify a collaboration workspace ID.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
