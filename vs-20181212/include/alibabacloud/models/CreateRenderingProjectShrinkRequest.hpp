// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERENDERINGPROJECTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATERENDERINGPROJECTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class CreateRenderingProjectShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRenderingProjectShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(SessionAttribs, sessionAttribsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRenderingProjectShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(SessionAttribs, sessionAttribsShrink_);
    };
    CreateRenderingProjectShrinkRequest() = default ;
    CreateRenderingProjectShrinkRequest(const CreateRenderingProjectShrinkRequest &) = default ;
    CreateRenderingProjectShrinkRequest(CreateRenderingProjectShrinkRequest &&) = default ;
    CreateRenderingProjectShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRenderingProjectShrinkRequest() = default ;
    CreateRenderingProjectShrinkRequest& operator=(const CreateRenderingProjectShrinkRequest &) = default ;
    CreateRenderingProjectShrinkRequest& operator=(CreateRenderingProjectShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->projectName_ == nullptr && this->sessionAttribsShrink_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateRenderingProjectShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline CreateRenderingProjectShrinkRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // sessionAttribsShrink Field Functions 
    bool hasSessionAttribsShrink() const { return this->sessionAttribsShrink_ != nullptr;};
    void deleteSessionAttribsShrink() { this->sessionAttribsShrink_ = nullptr;};
    inline string getSessionAttribsShrink() const { DARABONBA_PTR_GET_DEFAULT(sessionAttribsShrink_, "") };
    inline CreateRenderingProjectShrinkRequest& setSessionAttribsShrink(string sessionAttribsShrink) { DARABONBA_PTR_SET_VALUE(sessionAttribsShrink_, sessionAttribsShrink) };


  protected:
    shared_ptr<string> description_ {};
    // This parameter is required.
    shared_ptr<string> projectName_ {};
    shared_ptr<string> sessionAttribsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
