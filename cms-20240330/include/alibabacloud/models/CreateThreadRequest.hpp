// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETHREADREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETHREADREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class CreateThreadRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateThreadRequest& obj) { 
      DARABONBA_PTR_TO_JSON(title, title_);
      DARABONBA_PTR_TO_JSON(variables, variables_);
    };
    friend void from_json(const Darabonba::Json& j, CreateThreadRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(title, title_);
      DARABONBA_PTR_FROM_JSON(variables, variables_);
    };
    CreateThreadRequest() = default ;
    CreateThreadRequest(const CreateThreadRequest &) = default ;
    CreateThreadRequest(CreateThreadRequest &&) = default ;
    CreateThreadRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateThreadRequest() = default ;
    CreateThreadRequest& operator=(const CreateThreadRequest &) = default ;
    CreateThreadRequest& operator=(CreateThreadRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Variables : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Variables& obj) { 
        DARABONBA_PTR_TO_JSON(project, project_);
        DARABONBA_PTR_TO_JSON(workspace, workspace_);
      };
      friend void from_json(const Darabonba::Json& j, Variables& obj) { 
        DARABONBA_PTR_FROM_JSON(project, project_);
        DARABONBA_PTR_FROM_JSON(workspace, workspace_);
      };
      Variables() = default ;
      Variables(const Variables &) = default ;
      Variables(Variables &&) = default ;
      Variables(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Variables() = default ;
      Variables& operator=(const Variables &) = default ;
      Variables& operator=(Variables &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->project_ == nullptr
        && this->workspace_ == nullptr; };
      // project Field Functions 
      bool hasProject() const { return this->project_ != nullptr;};
      void deleteProject() { this->project_ = nullptr;};
      inline string getProject() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
      inline Variables& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


      // workspace Field Functions 
      bool hasWorkspace() const { return this->workspace_ != nullptr;};
      void deleteWorkspace() { this->workspace_ = nullptr;};
      inline string getWorkspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
      inline Variables& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


    protected:
      shared_ptr<string> project_ {};
      shared_ptr<string> workspace_ {};
    };

    virtual bool empty() const override { return this->title_ == nullptr
        && this->variables_ == nullptr; };
    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline CreateThreadRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // variables Field Functions 
    bool hasVariables() const { return this->variables_ != nullptr;};
    void deleteVariables() { this->variables_ = nullptr;};
    inline const CreateThreadRequest::Variables & getVariables() const { DARABONBA_PTR_GET_CONST(variables_, CreateThreadRequest::Variables) };
    inline CreateThreadRequest::Variables getVariables() { DARABONBA_PTR_GET(variables_, CreateThreadRequest::Variables) };
    inline CreateThreadRequest& setVariables(const CreateThreadRequest::Variables & variables) { DARABONBA_PTR_SET_VALUE(variables_, variables) };
    inline CreateThreadRequest& setVariables(CreateThreadRequest::Variables && variables) { DARABONBA_PTR_SET_RVALUE(variables_, variables) };


  protected:
    shared_ptr<string> title_ {};
    shared_ptr<CreateThreadRequest::Variables> variables_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
