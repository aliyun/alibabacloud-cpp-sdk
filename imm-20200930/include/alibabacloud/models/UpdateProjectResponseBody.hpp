// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPROJECTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPROJECTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/Project.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class UpdateProjectResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateProjectResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Project, project_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateProjectResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Project, project_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UpdateProjectResponseBody() = default ;
    UpdateProjectResponseBody(const UpdateProjectResponseBody &) = default ;
    UpdateProjectResponseBody(UpdateProjectResponseBody &&) = default ;
    UpdateProjectResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateProjectResponseBody() = default ;
    UpdateProjectResponseBody& operator=(const UpdateProjectResponseBody &) = default ;
    UpdateProjectResponseBody& operator=(UpdateProjectResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->project_ != nullptr
        && this->requestId_ != nullptr; };
    // project Field Functions 
    bool hasProject() const { return this->project_ != nullptr;};
    void deleteProject() { this->project_ = nullptr;};
    inline const Project & project() const { DARABONBA_PTR_GET_CONST(project_, Project) };
    inline Project project() { DARABONBA_PTR_GET(project_, Project) };
    inline UpdateProjectResponseBody& setProject(const Project & project) { DARABONBA_PTR_SET_VALUE(project_, project) };
    inline UpdateProjectResponseBody& setProject(Project && project) { DARABONBA_PTR_SET_RVALUE(project_, project) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateProjectResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The project.
    std::shared_ptr<Project> project_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
