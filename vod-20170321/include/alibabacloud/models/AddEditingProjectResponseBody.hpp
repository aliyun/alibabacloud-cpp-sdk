// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDEDITINGPROJECTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDEDITINGPROJECTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AddEditingProjectResponseBodyProject.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class AddEditingProjectResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddEditingProjectResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Project, project_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AddEditingProjectResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Project, project_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AddEditingProjectResponseBody() = default ;
    AddEditingProjectResponseBody(const AddEditingProjectResponseBody &) = default ;
    AddEditingProjectResponseBody(AddEditingProjectResponseBody &&) = default ;
    AddEditingProjectResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddEditingProjectResponseBody() = default ;
    AddEditingProjectResponseBody& operator=(const AddEditingProjectResponseBody &) = default ;
    AddEditingProjectResponseBody& operator=(AddEditingProjectResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->project_ != nullptr
        && this->requestId_ != nullptr; };
    // project Field Functions 
    bool hasProject() const { return this->project_ != nullptr;};
    void deleteProject() { this->project_ = nullptr;};
    inline const AddEditingProjectResponseBodyProject & project() const { DARABONBA_PTR_GET_CONST(project_, AddEditingProjectResponseBodyProject) };
    inline AddEditingProjectResponseBodyProject project() { DARABONBA_PTR_GET(project_, AddEditingProjectResponseBodyProject) };
    inline AddEditingProjectResponseBody& setProject(const AddEditingProjectResponseBodyProject & project) { DARABONBA_PTR_SET_VALUE(project_, project) };
    inline AddEditingProjectResponseBody& setProject(AddEditingProjectResponseBodyProject && project) { DARABONBA_PTR_SET_RVALUE(project_, project) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddEditingProjectResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the online editing project. For more information about the structure, see [EditingProject](https://help.aliyun.com/document_detail/52839.html).
    std::shared_ptr<AddEditingProjectResponseBodyProject> project_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
