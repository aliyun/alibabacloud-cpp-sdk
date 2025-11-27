// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERENDERINGPROJECTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATERENDERINGPROJECTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateRenderingProjectRequestSessionAttribs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class CreateRenderingProjectRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRenderingProjectRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(SessionAttribs, sessionAttribs_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRenderingProjectRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(SessionAttribs, sessionAttribs_);
    };
    CreateRenderingProjectRequest() = default ;
    CreateRenderingProjectRequest(const CreateRenderingProjectRequest &) = default ;
    CreateRenderingProjectRequest(CreateRenderingProjectRequest &&) = default ;
    CreateRenderingProjectRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRenderingProjectRequest() = default ;
    CreateRenderingProjectRequest& operator=(const CreateRenderingProjectRequest &) = default ;
    CreateRenderingProjectRequest& operator=(CreateRenderingProjectRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->projectName_ == nullptr && return this->sessionAttribs_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateRenderingProjectRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline CreateRenderingProjectRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // sessionAttribs Field Functions 
    bool hasSessionAttribs() const { return this->sessionAttribs_ != nullptr;};
    void deleteSessionAttribs() { this->sessionAttribs_ = nullptr;};
    inline const CreateRenderingProjectRequestSessionAttribs & sessionAttribs() const { DARABONBA_PTR_GET_CONST(sessionAttribs_, CreateRenderingProjectRequestSessionAttribs) };
    inline CreateRenderingProjectRequestSessionAttribs sessionAttribs() { DARABONBA_PTR_GET(sessionAttribs_, CreateRenderingProjectRequestSessionAttribs) };
    inline CreateRenderingProjectRequest& setSessionAttribs(const CreateRenderingProjectRequestSessionAttribs & sessionAttribs) { DARABONBA_PTR_SET_VALUE(sessionAttribs_, sessionAttribs) };
    inline CreateRenderingProjectRequest& setSessionAttribs(CreateRenderingProjectRequestSessionAttribs && sessionAttribs) { DARABONBA_PTR_SET_RVALUE(sessionAttribs_, sessionAttribs) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> projectName_ = nullptr;
    std::shared_ptr<CreateRenderingProjectRequestSessionAttribs> sessionAttribs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
