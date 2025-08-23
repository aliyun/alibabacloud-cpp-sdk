// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNVIDEOANALYSISREQUESTTEXTPROCESSTASKS_HPP_
#define ALIBABACLOUD_MODELS_RUNVIDEOANALYSISREQUESTTEXTPROCESSTASKS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class RunVideoAnalysisRequestTextProcessTasks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunVideoAnalysisRequestTextProcessTasks& obj) { 
      DARABONBA_PTR_TO_JSON(modelCustomPromptTemplate, modelCustomPromptTemplate_);
      DARABONBA_PTR_TO_JSON(modelCustomPromptTemplateId, modelCustomPromptTemplateId_);
      DARABONBA_PTR_TO_JSON(modelId, modelId_);
    };
    friend void from_json(const Darabonba::Json& j, RunVideoAnalysisRequestTextProcessTasks& obj) { 
      DARABONBA_PTR_FROM_JSON(modelCustomPromptTemplate, modelCustomPromptTemplate_);
      DARABONBA_PTR_FROM_JSON(modelCustomPromptTemplateId, modelCustomPromptTemplateId_);
      DARABONBA_PTR_FROM_JSON(modelId, modelId_);
    };
    RunVideoAnalysisRequestTextProcessTasks() = default ;
    RunVideoAnalysisRequestTextProcessTasks(const RunVideoAnalysisRequestTextProcessTasks &) = default ;
    RunVideoAnalysisRequestTextProcessTasks(RunVideoAnalysisRequestTextProcessTasks &&) = default ;
    RunVideoAnalysisRequestTextProcessTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunVideoAnalysisRequestTextProcessTasks() = default ;
    RunVideoAnalysisRequestTextProcessTasks& operator=(const RunVideoAnalysisRequestTextProcessTasks &) = default ;
    RunVideoAnalysisRequestTextProcessTasks& operator=(RunVideoAnalysisRequestTextProcessTasks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->modelCustomPromptTemplate_ != nullptr
        && this->modelCustomPromptTemplateId_ != nullptr && this->modelId_ != nullptr; };
    // modelCustomPromptTemplate Field Functions 
    bool hasModelCustomPromptTemplate() const { return this->modelCustomPromptTemplate_ != nullptr;};
    void deleteModelCustomPromptTemplate() { this->modelCustomPromptTemplate_ = nullptr;};
    inline string modelCustomPromptTemplate() const { DARABONBA_PTR_GET_DEFAULT(modelCustomPromptTemplate_, "") };
    inline RunVideoAnalysisRequestTextProcessTasks& setModelCustomPromptTemplate(string modelCustomPromptTemplate) { DARABONBA_PTR_SET_VALUE(modelCustomPromptTemplate_, modelCustomPromptTemplate) };


    // modelCustomPromptTemplateId Field Functions 
    bool hasModelCustomPromptTemplateId() const { return this->modelCustomPromptTemplateId_ != nullptr;};
    void deleteModelCustomPromptTemplateId() { this->modelCustomPromptTemplateId_ = nullptr;};
    inline string modelCustomPromptTemplateId() const { DARABONBA_PTR_GET_DEFAULT(modelCustomPromptTemplateId_, "") };
    inline RunVideoAnalysisRequestTextProcessTasks& setModelCustomPromptTemplateId(string modelCustomPromptTemplateId) { DARABONBA_PTR_SET_VALUE(modelCustomPromptTemplateId_, modelCustomPromptTemplateId) };


    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline string modelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
    inline RunVideoAnalysisRequestTextProcessTasks& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


  protected:
    std::shared_ptr<string> modelCustomPromptTemplate_ = nullptr;
    std::shared_ptr<string> modelCustomPromptTemplateId_ = nullptr;
    std::shared_ptr<string> modelId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
