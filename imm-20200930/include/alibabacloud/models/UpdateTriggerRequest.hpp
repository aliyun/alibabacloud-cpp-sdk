// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETRIGGERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETRIGGERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Input.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class UpdateTriggerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTriggerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Actions, actions_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Input, input_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_ANY_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTriggerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Actions, actions_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Input, input_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_ANY_FROM_JSON(Tags, tags_);
    };
    UpdateTriggerRequest() = default ;
    UpdateTriggerRequest(const UpdateTriggerRequest &) = default ;
    UpdateTriggerRequest(UpdateTriggerRequest &&) = default ;
    UpdateTriggerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTriggerRequest() = default ;
    UpdateTriggerRequest& operator=(const UpdateTriggerRequest &) = default ;
    UpdateTriggerRequest& operator=(UpdateTriggerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Actions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Actions& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      };
      friend void from_json(const Darabonba::Json& j, Actions& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      };
      Actions() = default ;
      Actions(const Actions &) = default ;
      Actions(Actions &&) = default ;
      Actions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Actions() = default ;
      Actions& operator=(const Actions &) = default ;
      Actions& operator=(Actions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr
        && this->parameters_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Actions& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // parameters Field Functions 
      bool hasParameters() const { return this->parameters_ != nullptr;};
      void deleteParameters() { this->parameters_ = nullptr;};
      inline const vector<string> & getParameters() const { DARABONBA_PTR_GET_CONST(parameters_, vector<string>) };
      inline vector<string> getParameters() { DARABONBA_PTR_GET(parameters_, vector<string>) };
      inline Actions& setParameters(const vector<string> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
      inline Actions& setParameters(vector<string> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    protected:
      // The template name.
      shared_ptr<string> name_ {};
      // The template parameters.
      shared_ptr<vector<string>> parameters_ {};
    };

    virtual bool empty() const override { return this->actions_ == nullptr
        && this->id_ == nullptr && this->input_ == nullptr && this->projectName_ == nullptr && this->tags_ == nullptr; };
    // actions Field Functions 
    bool hasActions() const { return this->actions_ != nullptr;};
    void deleteActions() { this->actions_ = nullptr;};
    inline const vector<UpdateTriggerRequest::Actions> & getActions() const { DARABONBA_PTR_GET_CONST(actions_, vector<UpdateTriggerRequest::Actions>) };
    inline vector<UpdateTriggerRequest::Actions> getActions() { DARABONBA_PTR_GET(actions_, vector<UpdateTriggerRequest::Actions>) };
    inline UpdateTriggerRequest& setActions(const vector<UpdateTriggerRequest::Actions> & actions) { DARABONBA_PTR_SET_VALUE(actions_, actions) };
    inline UpdateTriggerRequest& setActions(vector<UpdateTriggerRequest::Actions> && actions) { DARABONBA_PTR_SET_RVALUE(actions_, actions) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline UpdateTriggerRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline const Input & getInput() const { DARABONBA_PTR_GET_CONST(input_, Input) };
    inline Input getInput() { DARABONBA_PTR_GET(input_, Input) };
    inline UpdateTriggerRequest& setInput(const Input & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
    inline UpdateTriggerRequest& setInput(Input && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline UpdateTriggerRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline     const Darabonba::Json & getTags() const { DARABONBA_GET(tags_) };
    Darabonba::Json & getTags() { DARABONBA_GET(tags_) };
    inline UpdateTriggerRequest& setTags(const Darabonba::Json & tags) { DARABONBA_SET_VALUE(tags_, tags) };
    inline UpdateTriggerRequest& setTags(Darabonba::Json && tags) { DARABONBA_SET_RVALUE(tags_, tags) };


  protected:
    // The processing templates.
    shared_ptr<vector<UpdateTriggerRequest::Actions>> actions_ {};
    // The ID of the trigger. You can obtain the ID of the trigger from the response of the [CreateTrigger](https://help.aliyun.com/document_detail/479912.html) operation.
    // 
    // This parameter is required.
    shared_ptr<string> id_ {};
    // The data source configurations.
    shared_ptr<Input> input_ {};
    // The name of the project. You can obtain the name of the project from the response of the [CreateProject](https://help.aliyun.com/document_detail/478153.html) operation.
    // 
    // This parameter is required.
    shared_ptr<string> projectName_ {};
    // The custom tags. You can search for or filter asynchronous tasks by custom tag.
    Darabonba::Json tags_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
