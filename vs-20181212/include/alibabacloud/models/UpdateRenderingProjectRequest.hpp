// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERENDERINGPROJECTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATERENDERINGPROJECTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class UpdateRenderingProjectRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRenderingProjectRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(SessionAttribs, sessionAttribs_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRenderingProjectRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(SessionAttribs, sessionAttribs_);
    };
    UpdateRenderingProjectRequest() = default ;
    UpdateRenderingProjectRequest(const UpdateRenderingProjectRequest &) = default ;
    UpdateRenderingProjectRequest(UpdateRenderingProjectRequest &&) = default ;
    UpdateRenderingProjectRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRenderingProjectRequest() = default ;
    UpdateRenderingProjectRequest& operator=(const UpdateRenderingProjectRequest &) = default ;
    UpdateRenderingProjectRequest& operator=(UpdateRenderingProjectRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SessionAttribs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SessionAttribs& obj) { 
        DARABONBA_PTR_TO_JSON(StartMode, startMode_);
      };
      friend void from_json(const Darabonba::Json& j, SessionAttribs& obj) { 
        DARABONBA_PTR_FROM_JSON(StartMode, startMode_);
      };
      SessionAttribs() = default ;
      SessionAttribs(const SessionAttribs &) = default ;
      SessionAttribs(SessionAttribs &&) = default ;
      SessionAttribs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SessionAttribs() = default ;
      SessionAttribs& operator=(const SessionAttribs &) = default ;
      SessionAttribs& operator=(SessionAttribs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->startMode_ == nullptr; };
      // startMode Field Functions 
      bool hasStartMode() const { return this->startMode_ != nullptr;};
      void deleteStartMode() { this->startMode_ = nullptr;};
      inline string getStartMode() const { DARABONBA_PTR_GET_DEFAULT(startMode_, "") };
      inline SessionAttribs& setStartMode(string startMode) { DARABONBA_PTR_SET_VALUE(startMode_, startMode) };


    protected:
      shared_ptr<string> startMode_ {};
    };

    virtual bool empty() const override { return this->description_ == nullptr
        && this->projectId_ == nullptr && this->projectName_ == nullptr && this->sessionAttribs_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateRenderingProjectRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline UpdateRenderingProjectRequest& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline UpdateRenderingProjectRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // sessionAttribs Field Functions 
    bool hasSessionAttribs() const { return this->sessionAttribs_ != nullptr;};
    void deleteSessionAttribs() { this->sessionAttribs_ = nullptr;};
    inline const UpdateRenderingProjectRequest::SessionAttribs & getSessionAttribs() const { DARABONBA_PTR_GET_CONST(sessionAttribs_, UpdateRenderingProjectRequest::SessionAttribs) };
    inline UpdateRenderingProjectRequest::SessionAttribs getSessionAttribs() { DARABONBA_PTR_GET(sessionAttribs_, UpdateRenderingProjectRequest::SessionAttribs) };
    inline UpdateRenderingProjectRequest& setSessionAttribs(const UpdateRenderingProjectRequest::SessionAttribs & sessionAttribs) { DARABONBA_PTR_SET_VALUE(sessionAttribs_, sessionAttribs) };
    inline UpdateRenderingProjectRequest& setSessionAttribs(UpdateRenderingProjectRequest::SessionAttribs && sessionAttribs) { DARABONBA_PTR_SET_RVALUE(sessionAttribs_, sessionAttribs) };


  protected:
    shared_ptr<string> description_ {};
    // This parameter is required.
    shared_ptr<string> projectId_ {};
    shared_ptr<string> projectName_ {};
    shared_ptr<UpdateRenderingProjectRequest::SessionAttribs> sessionAttribs_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
