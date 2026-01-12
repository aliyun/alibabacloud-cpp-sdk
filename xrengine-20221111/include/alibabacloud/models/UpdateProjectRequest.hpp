// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPROJECTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPROJECTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace XrEngine20221111
{
namespace Models
{
  class UpdateProjectRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateProjectRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoBuild, autoBuild_);
      DARABONBA_ANY_TO_JSON(Ext, ext_);
      DARABONBA_PTR_TO_JSON(Intro, intro_);
      DARABONBA_PTR_TO_JSON(JwtToken, jwtToken_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateProjectRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoBuild, autoBuild_);
      DARABONBA_ANY_FROM_JSON(Ext, ext_);
      DARABONBA_PTR_FROM_JSON(Intro, intro_);
      DARABONBA_PTR_FROM_JSON(JwtToken, jwtToken_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    UpdateProjectRequest() = default ;
    UpdateProjectRequest(const UpdateProjectRequest &) = default ;
    UpdateProjectRequest(UpdateProjectRequest &&) = default ;
    UpdateProjectRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateProjectRequest() = default ;
    UpdateProjectRequest& operator=(const UpdateProjectRequest &) = default ;
    UpdateProjectRequest& operator=(UpdateProjectRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoBuild_ == nullptr
        && this->ext_ == nullptr && this->intro_ == nullptr && this->jwtToken_ == nullptr && this->projectId_ == nullptr && this->title_ == nullptr; };
    // autoBuild Field Functions 
    bool hasAutoBuild() const { return this->autoBuild_ != nullptr;};
    void deleteAutoBuild() { this->autoBuild_ = nullptr;};
    inline bool getAutoBuild() const { DARABONBA_PTR_GET_DEFAULT(autoBuild_, false) };
    inline UpdateProjectRequest& setAutoBuild(bool autoBuild) { DARABONBA_PTR_SET_VALUE(autoBuild_, autoBuild) };


    // ext Field Functions 
    bool hasExt() const { return this->ext_ != nullptr;};
    void deleteExt() { this->ext_ = nullptr;};
    inline     const Darabonba::Json & getExt() const { DARABONBA_GET(ext_) };
    Darabonba::Json & getExt() { DARABONBA_GET(ext_) };
    inline UpdateProjectRequest& setExt(const Darabonba::Json & ext) { DARABONBA_SET_VALUE(ext_, ext) };
    inline UpdateProjectRequest& setExt(Darabonba::Json && ext) { DARABONBA_SET_RVALUE(ext_, ext) };


    // intro Field Functions 
    bool hasIntro() const { return this->intro_ != nullptr;};
    void deleteIntro() { this->intro_ = nullptr;};
    inline string getIntro() const { DARABONBA_PTR_GET_DEFAULT(intro_, "") };
    inline UpdateProjectRequest& setIntro(string intro) { DARABONBA_PTR_SET_VALUE(intro_, intro) };


    // jwtToken Field Functions 
    bool hasJwtToken() const { return this->jwtToken_ != nullptr;};
    void deleteJwtToken() { this->jwtToken_ = nullptr;};
    inline string getJwtToken() const { DARABONBA_PTR_GET_DEFAULT(jwtToken_, "") };
    inline UpdateProjectRequest& setJwtToken(string jwtToken) { DARABONBA_PTR_SET_VALUE(jwtToken_, jwtToken) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline UpdateProjectRequest& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline UpdateProjectRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    shared_ptr<bool> autoBuild_ {};
    Darabonba::Json ext_ {};
    shared_ptr<string> intro_ {};
    shared_ptr<string> jwtToken_ {};
    shared_ptr<string> projectId_ {};
    shared_ptr<string> title_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace XrEngine20221111
#endif
