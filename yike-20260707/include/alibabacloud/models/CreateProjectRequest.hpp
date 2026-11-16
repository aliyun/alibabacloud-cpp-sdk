// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPROJECTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPROJECTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yike20260707
{
namespace Models
{
  class CreateProjectRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateProjectRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateProjectRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    CreateProjectRequest() = default ;
    CreateProjectRequest(const CreateProjectRequest &) = default ;
    CreateProjectRequest(CreateProjectRequest &&) = default ;
    CreateProjectRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateProjectRequest() = default ;
    CreateProjectRequest& operator=(const CreateProjectRequest &) = default ;
    CreateProjectRequest& operator=(CreateProjectRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->title_ == nullptr
        && this->workspaceId_ == nullptr; };
    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline CreateProjectRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreateProjectRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The name of the project. The name can be up to 50 characters in length and cannot contain single quotation marks, semicolons, less-than signs, greater-than signs, equal signs, vertical lines, or parentheses.
    // 
    // This parameter is required.
    shared_ptr<string> title_ {};
    // The ID of the workspace to which the project belongs. If this parameter is not specified, the default workspace of the current account is used.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yike20260707
#endif
