// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPFROMTEMPLATERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPFROMTEMPLATERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mobi20240411
{
namespace Models
{
  class CreateAppFromTemplateResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAppFromTemplateResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Icon, icon_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAppFromTemplateResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Icon, icon_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    CreateAppFromTemplateResponseBodyData() = default ;
    CreateAppFromTemplateResponseBodyData(const CreateAppFromTemplateResponseBodyData &) = default ;
    CreateAppFromTemplateResponseBodyData(CreateAppFromTemplateResponseBodyData &&) = default ;
    CreateAppFromTemplateResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAppFromTemplateResponseBodyData() = default ;
    CreateAppFromTemplateResponseBodyData& operator=(const CreateAppFromTemplateResponseBodyData &) = default ;
    CreateAppFromTemplateResponseBodyData& operator=(CreateAppFromTemplateResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->description_ == nullptr && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr && return this->icon_ == nullptr && return this->name_ == nullptr
        && return this->workspaceId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline CreateAppFromTemplateResponseBodyData& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateAppFromTemplateResponseBodyData& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline CreateAppFromTemplateResponseBodyData& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline CreateAppFromTemplateResponseBodyData& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // icon Field Functions 
    bool hasIcon() const { return this->icon_ != nullptr;};
    void deleteIcon() { this->icon_ = nullptr;};
    inline string icon() const { DARABONBA_PTR_GET_DEFAULT(icon_, "") };
    inline CreateAppFromTemplateResponseBodyData& setIcon(string icon) { DARABONBA_PTR_SET_VALUE(icon_, icon) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateAppFromTemplateResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreateAppFromTemplateResponseBodyData& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<string> icon_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mobi20240411
#endif
