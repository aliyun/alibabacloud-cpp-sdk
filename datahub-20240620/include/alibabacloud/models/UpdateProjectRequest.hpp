// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPROJECTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPROJECTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Datahub20240620
{
namespace Models
{
  class UpdateProjectRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateProjectRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateProjectRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
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
    virtual bool empty() const override { return this->comment_ == nullptr
        && this->projectName_ == nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline UpdateProjectRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline UpdateProjectRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


  protected:
    // The description of the project.
    shared_ptr<string> comment_ {};
    // The name of the project.
    // 
    // This parameter is required.
    shared_ptr<string> projectName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Datahub20240620
#endif
