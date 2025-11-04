// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEDITINGPROJECTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEEDITINGPROJECTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateEditingProjectResponseBodyProject.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class CreateEditingProjectResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEditingProjectResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Project, project_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEditingProjectResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Project, project_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateEditingProjectResponseBody() = default ;
    CreateEditingProjectResponseBody(const CreateEditingProjectResponseBody &) = default ;
    CreateEditingProjectResponseBody(CreateEditingProjectResponseBody &&) = default ;
    CreateEditingProjectResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEditingProjectResponseBody() = default ;
    CreateEditingProjectResponseBody& operator=(const CreateEditingProjectResponseBody &) = default ;
    CreateEditingProjectResponseBody& operator=(CreateEditingProjectResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->project_ == nullptr
        && return this->requestId_ == nullptr; };
    // project Field Functions 
    bool hasProject() const { return this->project_ != nullptr;};
    void deleteProject() { this->project_ = nullptr;};
    inline const CreateEditingProjectResponseBodyProject & project() const { DARABONBA_PTR_GET_CONST(project_, CreateEditingProjectResponseBodyProject) };
    inline CreateEditingProjectResponseBodyProject project() { DARABONBA_PTR_GET(project_, CreateEditingProjectResponseBodyProject) };
    inline CreateEditingProjectResponseBody& setProject(const CreateEditingProjectResponseBodyProject & project) { DARABONBA_PTR_SET_VALUE(project_, project) };
    inline CreateEditingProjectResponseBody& setProject(CreateEditingProjectResponseBodyProject && project) { DARABONBA_PTR_SET_RVALUE(project_, project) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateEditingProjectResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the online editing project.
    std::shared_ptr<CreateEditingProjectResponseBodyProject> project_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
