// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEGLOBALQUESTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEGLOBALQUESTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class CreateGlobalQuestionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateGlobalQuestionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Answers, answers_);
      DARABONBA_PTR_TO_JSON(GlobalQuestionName, globalQuestionName_);
      DARABONBA_PTR_TO_JSON(GlobalQuestionType, globalQuestionType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Questions, questions_);
      DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateGlobalQuestionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Answers, answers_);
      DARABONBA_PTR_FROM_JSON(GlobalQuestionName, globalQuestionName_);
      DARABONBA_PTR_FROM_JSON(GlobalQuestionType, globalQuestionType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Questions, questions_);
      DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
    };
    CreateGlobalQuestionRequest() = default ;
    CreateGlobalQuestionRequest(const CreateGlobalQuestionRequest &) = default ;
    CreateGlobalQuestionRequest(CreateGlobalQuestionRequest &&) = default ;
    CreateGlobalQuestionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateGlobalQuestionRequest() = default ;
    CreateGlobalQuestionRequest& operator=(const CreateGlobalQuestionRequest &) = default ;
    CreateGlobalQuestionRequest& operator=(CreateGlobalQuestionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->answers_ == nullptr
        && return this->globalQuestionName_ == nullptr && return this->globalQuestionType_ == nullptr && return this->instanceId_ == nullptr && return this->questions_ == nullptr && return this->scriptId_ == nullptr; };
    // answers Field Functions 
    bool hasAnswers() const { return this->answers_ != nullptr;};
    void deleteAnswers() { this->answers_ = nullptr;};
    inline string answers() const { DARABONBA_PTR_GET_DEFAULT(answers_, "") };
    inline CreateGlobalQuestionRequest& setAnswers(string answers) { DARABONBA_PTR_SET_VALUE(answers_, answers) };


    // globalQuestionName Field Functions 
    bool hasGlobalQuestionName() const { return this->globalQuestionName_ != nullptr;};
    void deleteGlobalQuestionName() { this->globalQuestionName_ = nullptr;};
    inline string globalQuestionName() const { DARABONBA_PTR_GET_DEFAULT(globalQuestionName_, "") };
    inline CreateGlobalQuestionRequest& setGlobalQuestionName(string globalQuestionName) { DARABONBA_PTR_SET_VALUE(globalQuestionName_, globalQuestionName) };


    // globalQuestionType Field Functions 
    bool hasGlobalQuestionType() const { return this->globalQuestionType_ != nullptr;};
    void deleteGlobalQuestionType() { this->globalQuestionType_ = nullptr;};
    inline string globalQuestionType() const { DARABONBA_PTR_GET_DEFAULT(globalQuestionType_, "") };
    inline CreateGlobalQuestionRequest& setGlobalQuestionType(string globalQuestionType) { DARABONBA_PTR_SET_VALUE(globalQuestionType_, globalQuestionType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateGlobalQuestionRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // questions Field Functions 
    bool hasQuestions() const { return this->questions_ != nullptr;};
    void deleteQuestions() { this->questions_ = nullptr;};
    inline string questions() const { DARABONBA_PTR_GET_DEFAULT(questions_, "") };
    inline CreateGlobalQuestionRequest& setQuestions(string questions) { DARABONBA_PTR_SET_VALUE(questions_, questions) };


    // scriptId Field Functions 
    bool hasScriptId() const { return this->scriptId_ != nullptr;};
    void deleteScriptId() { this->scriptId_ = nullptr;};
    inline string scriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
    inline CreateGlobalQuestionRequest& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> answers_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> globalQuestionName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> globalQuestionType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> questions_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> scriptId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
