// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYGLOBALQUESTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYGLOBALQUESTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ModifyGlobalQuestionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyGlobalQuestionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Answers, answers_);
      DARABONBA_PTR_TO_JSON(GlobalQuestionId, globalQuestionId_);
      DARABONBA_PTR_TO_JSON(GlobalQuestionName, globalQuestionName_);
      DARABONBA_PTR_TO_JSON(GlobalQuestionType, globalQuestionType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Questions, questions_);
      DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyGlobalQuestionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Answers, answers_);
      DARABONBA_PTR_FROM_JSON(GlobalQuestionId, globalQuestionId_);
      DARABONBA_PTR_FROM_JSON(GlobalQuestionName, globalQuestionName_);
      DARABONBA_PTR_FROM_JSON(GlobalQuestionType, globalQuestionType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Questions, questions_);
      DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
    };
    ModifyGlobalQuestionRequest() = default ;
    ModifyGlobalQuestionRequest(const ModifyGlobalQuestionRequest &) = default ;
    ModifyGlobalQuestionRequest(ModifyGlobalQuestionRequest &&) = default ;
    ModifyGlobalQuestionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyGlobalQuestionRequest() = default ;
    ModifyGlobalQuestionRequest& operator=(const ModifyGlobalQuestionRequest &) = default ;
    ModifyGlobalQuestionRequest& operator=(ModifyGlobalQuestionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->answers_ == nullptr
        && this->globalQuestionId_ == nullptr && this->globalQuestionName_ == nullptr && this->globalQuestionType_ == nullptr && this->instanceId_ == nullptr && this->questions_ == nullptr
        && this->scriptId_ == nullptr; };
    // answers Field Functions 
    bool hasAnswers() const { return this->answers_ != nullptr;};
    void deleteAnswers() { this->answers_ = nullptr;};
    inline string getAnswers() const { DARABONBA_PTR_GET_DEFAULT(answers_, "") };
    inline ModifyGlobalQuestionRequest& setAnswers(string answers) { DARABONBA_PTR_SET_VALUE(answers_, answers) };


    // globalQuestionId Field Functions 
    bool hasGlobalQuestionId() const { return this->globalQuestionId_ != nullptr;};
    void deleteGlobalQuestionId() { this->globalQuestionId_ = nullptr;};
    inline string getGlobalQuestionId() const { DARABONBA_PTR_GET_DEFAULT(globalQuestionId_, "") };
    inline ModifyGlobalQuestionRequest& setGlobalQuestionId(string globalQuestionId) { DARABONBA_PTR_SET_VALUE(globalQuestionId_, globalQuestionId) };


    // globalQuestionName Field Functions 
    bool hasGlobalQuestionName() const { return this->globalQuestionName_ != nullptr;};
    void deleteGlobalQuestionName() { this->globalQuestionName_ = nullptr;};
    inline string getGlobalQuestionName() const { DARABONBA_PTR_GET_DEFAULT(globalQuestionName_, "") };
    inline ModifyGlobalQuestionRequest& setGlobalQuestionName(string globalQuestionName) { DARABONBA_PTR_SET_VALUE(globalQuestionName_, globalQuestionName) };


    // globalQuestionType Field Functions 
    bool hasGlobalQuestionType() const { return this->globalQuestionType_ != nullptr;};
    void deleteGlobalQuestionType() { this->globalQuestionType_ = nullptr;};
    inline string getGlobalQuestionType() const { DARABONBA_PTR_GET_DEFAULT(globalQuestionType_, "") };
    inline ModifyGlobalQuestionRequest& setGlobalQuestionType(string globalQuestionType) { DARABONBA_PTR_SET_VALUE(globalQuestionType_, globalQuestionType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyGlobalQuestionRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // questions Field Functions 
    bool hasQuestions() const { return this->questions_ != nullptr;};
    void deleteQuestions() { this->questions_ = nullptr;};
    inline string getQuestions() const { DARABONBA_PTR_GET_DEFAULT(questions_, "") };
    inline ModifyGlobalQuestionRequest& setQuestions(string questions) { DARABONBA_PTR_SET_VALUE(questions_, questions) };


    // scriptId Field Functions 
    bool hasScriptId() const { return this->scriptId_ != nullptr;};
    void deleteScriptId() { this->scriptId_ = nullptr;};
    inline string getScriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
    inline ModifyGlobalQuestionRequest& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


  protected:
    // This parameter is required.
    shared_ptr<string> answers_ {};
    // This parameter is required.
    shared_ptr<string> globalQuestionId_ {};
    // This parameter is required.
    shared_ptr<string> globalQuestionName_ {};
    // This parameter is required.
    shared_ptr<string> globalQuestionType_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // This parameter is required.
    shared_ptr<string> questions_ {};
    // This parameter is required.
    shared_ptr<string> scriptId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
