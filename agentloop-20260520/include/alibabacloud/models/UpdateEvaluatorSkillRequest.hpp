// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEEVALUATORSKILLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEEVALUATORSKILLREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentLoop20260520
{
namespace Models
{
  class UpdateEvaluatorSkillRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateEvaluatorSkillRequest& obj) { 
      DARABONBA_PTR_TO_JSON(agentSpace, agentSpace_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(displayName, displayName_);
      DARABONBA_PTR_TO_JSON(enable, enable_);
      DARABONBA_PTR_TO_JSON(files, files_);
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateEvaluatorSkillRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(agentSpace, agentSpace_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(displayName, displayName_);
      DARABONBA_PTR_FROM_JSON(enable, enable_);
      DARABONBA_PTR_FROM_JSON(files, files_);
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
    };
    UpdateEvaluatorSkillRequest() = default ;
    UpdateEvaluatorSkillRequest(const UpdateEvaluatorSkillRequest &) = default ;
    UpdateEvaluatorSkillRequest(UpdateEvaluatorSkillRequest &&) = default ;
    UpdateEvaluatorSkillRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateEvaluatorSkillRequest() = default ;
    UpdateEvaluatorSkillRequest& operator=(const UpdateEvaluatorSkillRequest &) = default ;
    UpdateEvaluatorSkillRequest& operator=(UpdateEvaluatorSkillRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Files : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Files& obj) { 
        DARABONBA_PTR_TO_JSON(content, content_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(remark, remark_);
      };
      friend void from_json(const Darabonba::Json& j, Files& obj) { 
        DARABONBA_PTR_FROM_JSON(content, content_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(remark, remark_);
      };
      Files() = default ;
      Files(const Files &) = default ;
      Files(Files &&) = default ;
      Files(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Files() = default ;
      Files& operator=(const Files &) = default ;
      Files& operator=(Files &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->content_ == nullptr
        && this->name_ == nullptr && this->remark_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline Files& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Files& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // remark Field Functions 
      bool hasRemark() const { return this->remark_ != nullptr;};
      void deleteRemark() { this->remark_ = nullptr;};
      inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
      inline Files& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    protected:
      // The skill file content.
      // 
      // This parameter is required.
      shared_ptr<string> content_ {};
      // The skill file name.
      // 
      // This parameter is required.
      shared_ptr<string> name_ {};
      // The file remark.
      shared_ptr<string> remark_ {};
    };

    virtual bool empty() const override { return this->agentSpace_ == nullptr
        && this->description_ == nullptr && this->displayName_ == nullptr && this->enable_ == nullptr && this->files_ == nullptr && this->clientToken_ == nullptr; };
    // agentSpace Field Functions 
    bool hasAgentSpace() const { return this->agentSpace_ != nullptr;};
    void deleteAgentSpace() { this->agentSpace_ = nullptr;};
    inline string getAgentSpace() const { DARABONBA_PTR_GET_DEFAULT(agentSpace_, "") };
    inline UpdateEvaluatorSkillRequest& setAgentSpace(string agentSpace) { DARABONBA_PTR_SET_VALUE(agentSpace_, agentSpace) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateEvaluatorSkillRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline UpdateEvaluatorSkillRequest& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline UpdateEvaluatorSkillRequest& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // files Field Functions 
    bool hasFiles() const { return this->files_ != nullptr;};
    void deleteFiles() { this->files_ = nullptr;};
    inline const vector<UpdateEvaluatorSkillRequest::Files> & getFiles() const { DARABONBA_PTR_GET_CONST(files_, vector<UpdateEvaluatorSkillRequest::Files>) };
    inline vector<UpdateEvaluatorSkillRequest::Files> getFiles() { DARABONBA_PTR_GET(files_, vector<UpdateEvaluatorSkillRequest::Files>) };
    inline UpdateEvaluatorSkillRequest& setFiles(const vector<UpdateEvaluatorSkillRequest::Files> & files) { DARABONBA_PTR_SET_VALUE(files_, files) };
    inline UpdateEvaluatorSkillRequest& setFiles(vector<UpdateEvaluatorSkillRequest::Files> && files) { DARABONBA_PTR_SET_RVALUE(files_, files) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateEvaluatorSkillRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


  protected:
    // The AgentSpace name.
    // 
    // This parameter is required.
    shared_ptr<string> agentSpace_ {};
    // The description of the skill.
    shared_ptr<string> description_ {};
    // The display name of the skill.
    shared_ptr<string> displayName_ {};
    // Specifies whether to enable the skill.
    shared_ptr<bool> enable_ {};
    // The list of skill files. When provided, the skill file content is updated.
    shared_ptr<vector<UpdateEvaluatorSkillRequest::Files>> files_ {};
    // The idempotency token. CloudSpec declares this query parameter, but the backend does not currently perform idempotency comparison.
    shared_ptr<string> clientToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif
