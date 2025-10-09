// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPROJECTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPROJECTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetProjectResponseBodyProject.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetProjectResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetProjectResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Project, project_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetProjectResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Project, project_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetProjectResponseBody() = default ;
    GetProjectResponseBody(const GetProjectResponseBody &) = default ;
    GetProjectResponseBody(GetProjectResponseBody &&) = default ;
    GetProjectResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetProjectResponseBody() = default ;
    GetProjectResponseBody& operator=(const GetProjectResponseBody &) = default ;
    GetProjectResponseBody& operator=(GetProjectResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->project_ != nullptr
        && this->requestId_ != nullptr; };
    // project Field Functions 
    bool hasProject() const { return this->project_ != nullptr;};
    void deleteProject() { this->project_ = nullptr;};
    inline const GetProjectResponseBodyProject & project() const { DARABONBA_PTR_GET_CONST(project_, GetProjectResponseBodyProject) };
    inline GetProjectResponseBodyProject project() { DARABONBA_PTR_GET(project_, GetProjectResponseBodyProject) };
    inline GetProjectResponseBody& setProject(const GetProjectResponseBodyProject & project) { DARABONBA_PTR_SET_VALUE(project_, project) };
    inline GetProjectResponseBody& setProject(GetProjectResponseBodyProject && project) { DARABONBA_PTR_SET_RVALUE(project_, project) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetProjectResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the workspace.
    std::shared_ptr<GetProjectResponseBodyProject> project_ = nullptr;
    // The request ID. You can locate logs and troubleshoot issues based on the ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
