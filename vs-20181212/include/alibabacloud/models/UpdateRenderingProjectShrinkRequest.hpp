// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERENDERINGPROJECTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATERENDERINGPROJECTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class UpdateRenderingProjectShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRenderingProjectShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(SessionAttribs, sessionAttribsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRenderingProjectShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(SessionAttribs, sessionAttribsShrink_);
    };
    UpdateRenderingProjectShrinkRequest() = default ;
    UpdateRenderingProjectShrinkRequest(const UpdateRenderingProjectShrinkRequest &) = default ;
    UpdateRenderingProjectShrinkRequest(UpdateRenderingProjectShrinkRequest &&) = default ;
    UpdateRenderingProjectShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRenderingProjectShrinkRequest() = default ;
    UpdateRenderingProjectShrinkRequest& operator=(const UpdateRenderingProjectShrinkRequest &) = default ;
    UpdateRenderingProjectShrinkRequest& operator=(UpdateRenderingProjectShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->projectId_ != nullptr && this->projectName_ != nullptr && this->sessionAttribsShrink_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateRenderingProjectShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline UpdateRenderingProjectShrinkRequest& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline UpdateRenderingProjectShrinkRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // sessionAttribsShrink Field Functions 
    bool hasSessionAttribsShrink() const { return this->sessionAttribsShrink_ != nullptr;};
    void deleteSessionAttribsShrink() { this->sessionAttribsShrink_ = nullptr;};
    inline string sessionAttribsShrink() const { DARABONBA_PTR_GET_DEFAULT(sessionAttribsShrink_, "") };
    inline UpdateRenderingProjectShrinkRequest& setSessionAttribsShrink(string sessionAttribsShrink) { DARABONBA_PTR_SET_VALUE(sessionAttribsShrink_, sessionAttribsShrink) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> projectId_ = nullptr;
    std::shared_ptr<string> projectName_ = nullptr;
    std::shared_ptr<string> sessionAttribsShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
