// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRENDERINGPROJECTSRESPONSEBODYPROJECTS_HPP_
#define ALIBABACLOUD_MODELS_LISTRENDERINGPROJECTSRESPONSEBODYPROJECTS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListRenderingProjectsResponseBodyProjectsSessionAttribs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class ListRenderingProjectsResponseBodyProjects : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRenderingProjectsResponseBodyProjects& obj) { 
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(SessionAttribs, sessionAttribs_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListRenderingProjectsResponseBodyProjects& obj) { 
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(SessionAttribs, sessionAttribs_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    ListRenderingProjectsResponseBodyProjects() = default ;
    ListRenderingProjectsResponseBodyProjects(const ListRenderingProjectsResponseBodyProjects &) = default ;
    ListRenderingProjectsResponseBodyProjects(ListRenderingProjectsResponseBodyProjects &&) = default ;
    ListRenderingProjectsResponseBodyProjects(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRenderingProjectsResponseBodyProjects() = default ;
    ListRenderingProjectsResponseBodyProjects& operator=(const ListRenderingProjectsResponseBodyProjects &) = default ;
    ListRenderingProjectsResponseBodyProjects& operator=(ListRenderingProjectsResponseBodyProjects &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->creationTime_ == nullptr
        && return this->description_ == nullptr && return this->projectId_ == nullptr && return this->projectName_ == nullptr && return this->sessionAttribs_ == nullptr && return this->updateTime_ == nullptr; };
    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline ListRenderingProjectsResponseBodyProjects& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListRenderingProjectsResponseBodyProjects& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline ListRenderingProjectsResponseBodyProjects& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline ListRenderingProjectsResponseBodyProjects& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // sessionAttribs Field Functions 
    bool hasSessionAttribs() const { return this->sessionAttribs_ != nullptr;};
    void deleteSessionAttribs() { this->sessionAttribs_ = nullptr;};
    inline const Models::ListRenderingProjectsResponseBodyProjectsSessionAttribs & sessionAttribs() const { DARABONBA_PTR_GET_CONST(sessionAttribs_, Models::ListRenderingProjectsResponseBodyProjectsSessionAttribs) };
    inline Models::ListRenderingProjectsResponseBodyProjectsSessionAttribs sessionAttribs() { DARABONBA_PTR_GET(sessionAttribs_, Models::ListRenderingProjectsResponseBodyProjectsSessionAttribs) };
    inline ListRenderingProjectsResponseBodyProjects& setSessionAttribs(const Models::ListRenderingProjectsResponseBodyProjectsSessionAttribs & sessionAttribs) { DARABONBA_PTR_SET_VALUE(sessionAttribs_, sessionAttribs) };
    inline ListRenderingProjectsResponseBodyProjects& setSessionAttribs(Models::ListRenderingProjectsResponseBodyProjectsSessionAttribs && sessionAttribs) { DARABONBA_PTR_SET_RVALUE(sessionAttribs_, sessionAttribs) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline ListRenderingProjectsResponseBodyProjects& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    std::shared_ptr<string> creationTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> projectId_ = nullptr;
    std::shared_ptr<string> projectName_ = nullptr;
    std::shared_ptr<Models::ListRenderingProjectsResponseBodyProjectsSessionAttribs> sessionAttribs_ = nullptr;
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
