// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPROJECTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPROJECTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace XrEngine20221111
{
namespace Models
{
  class UpdateProjectShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateProjectShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoBuild, autoBuild_);
      DARABONBA_PTR_TO_JSON(Ext, extShrink_);
      DARABONBA_PTR_TO_JSON(Intro, intro_);
      DARABONBA_PTR_TO_JSON(JwtToken, jwtToken_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateProjectShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoBuild, autoBuild_);
      DARABONBA_PTR_FROM_JSON(Ext, extShrink_);
      DARABONBA_PTR_FROM_JSON(Intro, intro_);
      DARABONBA_PTR_FROM_JSON(JwtToken, jwtToken_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    UpdateProjectShrinkRequest() = default ;
    UpdateProjectShrinkRequest(const UpdateProjectShrinkRequest &) = default ;
    UpdateProjectShrinkRequest(UpdateProjectShrinkRequest &&) = default ;
    UpdateProjectShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateProjectShrinkRequest() = default ;
    UpdateProjectShrinkRequest& operator=(const UpdateProjectShrinkRequest &) = default ;
    UpdateProjectShrinkRequest& operator=(UpdateProjectShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoBuild_ == nullptr
        && this->extShrink_ == nullptr && this->intro_ == nullptr && this->jwtToken_ == nullptr && this->projectId_ == nullptr && this->title_ == nullptr; };
    // autoBuild Field Functions 
    bool hasAutoBuild() const { return this->autoBuild_ != nullptr;};
    void deleteAutoBuild() { this->autoBuild_ = nullptr;};
    inline bool getAutoBuild() const { DARABONBA_PTR_GET_DEFAULT(autoBuild_, false) };
    inline UpdateProjectShrinkRequest& setAutoBuild(bool autoBuild) { DARABONBA_PTR_SET_VALUE(autoBuild_, autoBuild) };


    // extShrink Field Functions 
    bool hasExtShrink() const { return this->extShrink_ != nullptr;};
    void deleteExtShrink() { this->extShrink_ = nullptr;};
    inline string getExtShrink() const { DARABONBA_PTR_GET_DEFAULT(extShrink_, "") };
    inline UpdateProjectShrinkRequest& setExtShrink(string extShrink) { DARABONBA_PTR_SET_VALUE(extShrink_, extShrink) };


    // intro Field Functions 
    bool hasIntro() const { return this->intro_ != nullptr;};
    void deleteIntro() { this->intro_ = nullptr;};
    inline string getIntro() const { DARABONBA_PTR_GET_DEFAULT(intro_, "") };
    inline UpdateProjectShrinkRequest& setIntro(string intro) { DARABONBA_PTR_SET_VALUE(intro_, intro) };


    // jwtToken Field Functions 
    bool hasJwtToken() const { return this->jwtToken_ != nullptr;};
    void deleteJwtToken() { this->jwtToken_ = nullptr;};
    inline string getJwtToken() const { DARABONBA_PTR_GET_DEFAULT(jwtToken_, "") };
    inline UpdateProjectShrinkRequest& setJwtToken(string jwtToken) { DARABONBA_PTR_SET_VALUE(jwtToken_, jwtToken) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline UpdateProjectShrinkRequest& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline UpdateProjectShrinkRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    shared_ptr<bool> autoBuild_ {};
    shared_ptr<string> extShrink_ {};
    shared_ptr<string> intro_ {};
    shared_ptr<string> jwtToken_ {};
    shared_ptr<string> projectId_ {};
    shared_ptr<string> title_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace XrEngine20221111
#endif
