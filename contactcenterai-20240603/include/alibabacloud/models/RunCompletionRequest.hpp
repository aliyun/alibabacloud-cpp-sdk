// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNCOMPLETIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNCOMPLETIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunCompletionRequestDialogue.hpp>
#include <vector>
#include <alibabacloud/models/RunCompletionRequestFields.hpp>
#include <alibabacloud/models/RunCompletionRequestServiceInspection.hpp>
#include <alibabacloud/models/RunCompletionRequestVariables.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ContactCenterAI20240603
{
namespace Models
{
  class RunCompletionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunCompletionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Dialogue, dialogue_);
      DARABONBA_PTR_TO_JSON(Fields, fields_);
      DARABONBA_PTR_TO_JSON(ModelCode, modelCode_);
      DARABONBA_PTR_TO_JSON(ServiceInspection, serviceInspection_);
      DARABONBA_PTR_TO_JSON(Stream, stream_);
      DARABONBA_PTR_TO_JSON(TemplateIds, templateIds_);
      DARABONBA_PTR_TO_JSON(responseFormatType, responseFormatType_);
      DARABONBA_PTR_TO_JSON(variables, variables_);
    };
    friend void from_json(const Darabonba::Json& j, RunCompletionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Dialogue, dialogue_);
      DARABONBA_PTR_FROM_JSON(Fields, fields_);
      DARABONBA_PTR_FROM_JSON(ModelCode, modelCode_);
      DARABONBA_PTR_FROM_JSON(ServiceInspection, serviceInspection_);
      DARABONBA_PTR_FROM_JSON(Stream, stream_);
      DARABONBA_PTR_FROM_JSON(TemplateIds, templateIds_);
      DARABONBA_PTR_FROM_JSON(responseFormatType, responseFormatType_);
      DARABONBA_PTR_FROM_JSON(variables, variables_);
    };
    RunCompletionRequest() = default ;
    RunCompletionRequest(const RunCompletionRequest &) = default ;
    RunCompletionRequest(RunCompletionRequest &&) = default ;
    RunCompletionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunCompletionRequest() = default ;
    RunCompletionRequest& operator=(const RunCompletionRequest &) = default ;
    RunCompletionRequest& operator=(RunCompletionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dialogue_ != nullptr
        && this->fields_ != nullptr && this->modelCode_ != nullptr && this->serviceInspection_ != nullptr && this->stream_ != nullptr && this->templateIds_ != nullptr
        && this->responseFormatType_ != nullptr && this->variables_ != nullptr; };
    // dialogue Field Functions 
    bool hasDialogue() const { return this->dialogue_ != nullptr;};
    void deleteDialogue() { this->dialogue_ = nullptr;};
    inline const RunCompletionRequestDialogue & dialogue() const { DARABONBA_PTR_GET_CONST(dialogue_, RunCompletionRequestDialogue) };
    inline RunCompletionRequestDialogue dialogue() { DARABONBA_PTR_GET(dialogue_, RunCompletionRequestDialogue) };
    inline RunCompletionRequest& setDialogue(const RunCompletionRequestDialogue & dialogue) { DARABONBA_PTR_SET_VALUE(dialogue_, dialogue) };
    inline RunCompletionRequest& setDialogue(RunCompletionRequestDialogue && dialogue) { DARABONBA_PTR_SET_RVALUE(dialogue_, dialogue) };


    // fields Field Functions 
    bool hasFields() const { return this->fields_ != nullptr;};
    void deleteFields() { this->fields_ = nullptr;};
    inline const vector<RunCompletionRequestFields> & fields() const { DARABONBA_PTR_GET_CONST(fields_, vector<RunCompletionRequestFields>) };
    inline vector<RunCompletionRequestFields> fields() { DARABONBA_PTR_GET(fields_, vector<RunCompletionRequestFields>) };
    inline RunCompletionRequest& setFields(const vector<RunCompletionRequestFields> & fields) { DARABONBA_PTR_SET_VALUE(fields_, fields) };
    inline RunCompletionRequest& setFields(vector<RunCompletionRequestFields> && fields) { DARABONBA_PTR_SET_RVALUE(fields_, fields) };


    // modelCode Field Functions 
    bool hasModelCode() const { return this->modelCode_ != nullptr;};
    void deleteModelCode() { this->modelCode_ = nullptr;};
    inline string modelCode() const { DARABONBA_PTR_GET_DEFAULT(modelCode_, "") };
    inline RunCompletionRequest& setModelCode(string modelCode) { DARABONBA_PTR_SET_VALUE(modelCode_, modelCode) };


    // serviceInspection Field Functions 
    bool hasServiceInspection() const { return this->serviceInspection_ != nullptr;};
    void deleteServiceInspection() { this->serviceInspection_ = nullptr;};
    inline const RunCompletionRequestServiceInspection & serviceInspection() const { DARABONBA_PTR_GET_CONST(serviceInspection_, RunCompletionRequestServiceInspection) };
    inline RunCompletionRequestServiceInspection serviceInspection() { DARABONBA_PTR_GET(serviceInspection_, RunCompletionRequestServiceInspection) };
    inline RunCompletionRequest& setServiceInspection(const RunCompletionRequestServiceInspection & serviceInspection) { DARABONBA_PTR_SET_VALUE(serviceInspection_, serviceInspection) };
    inline RunCompletionRequest& setServiceInspection(RunCompletionRequestServiceInspection && serviceInspection) { DARABONBA_PTR_SET_RVALUE(serviceInspection_, serviceInspection) };


    // stream Field Functions 
    bool hasStream() const { return this->stream_ != nullptr;};
    void deleteStream() { this->stream_ = nullptr;};
    inline bool stream() const { DARABONBA_PTR_GET_DEFAULT(stream_, false) };
    inline RunCompletionRequest& setStream(bool stream) { DARABONBA_PTR_SET_VALUE(stream_, stream) };


    // templateIds Field Functions 
    bool hasTemplateIds() const { return this->templateIds_ != nullptr;};
    void deleteTemplateIds() { this->templateIds_ = nullptr;};
    inline const vector<int64_t> & templateIds() const { DARABONBA_PTR_GET_CONST(templateIds_, vector<int64_t>) };
    inline vector<int64_t> templateIds() { DARABONBA_PTR_GET(templateIds_, vector<int64_t>) };
    inline RunCompletionRequest& setTemplateIds(const vector<int64_t> & templateIds) { DARABONBA_PTR_SET_VALUE(templateIds_, templateIds) };
    inline RunCompletionRequest& setTemplateIds(vector<int64_t> && templateIds) { DARABONBA_PTR_SET_RVALUE(templateIds_, templateIds) };


    // responseFormatType Field Functions 
    bool hasResponseFormatType() const { return this->responseFormatType_ != nullptr;};
    void deleteResponseFormatType() { this->responseFormatType_ = nullptr;};
    inline string responseFormatType() const { DARABONBA_PTR_GET_DEFAULT(responseFormatType_, "") };
    inline RunCompletionRequest& setResponseFormatType(string responseFormatType) { DARABONBA_PTR_SET_VALUE(responseFormatType_, responseFormatType) };


    // variables Field Functions 
    bool hasVariables() const { return this->variables_ != nullptr;};
    void deleteVariables() { this->variables_ = nullptr;};
    inline const vector<RunCompletionRequestVariables> & variables() const { DARABONBA_PTR_GET_CONST(variables_, vector<RunCompletionRequestVariables>) };
    inline vector<RunCompletionRequestVariables> variables() { DARABONBA_PTR_GET(variables_, vector<RunCompletionRequestVariables>) };
    inline RunCompletionRequest& setVariables(const vector<RunCompletionRequestVariables> & variables) { DARABONBA_PTR_SET_VALUE(variables_, variables) };
    inline RunCompletionRequest& setVariables(vector<RunCompletionRequestVariables> && variables) { DARABONBA_PTR_SET_RVALUE(variables_, variables) };


  protected:
    // This parameter is required.
    std::shared_ptr<RunCompletionRequestDialogue> dialogue_ = nullptr;
    std::shared_ptr<vector<RunCompletionRequestFields>> fields_ = nullptr;
    std::shared_ptr<string> modelCode_ = nullptr;
    std::shared_ptr<RunCompletionRequestServiceInspection> serviceInspection_ = nullptr;
    std::shared_ptr<bool> stream_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<int64_t>> templateIds_ = nullptr;
    std::shared_ptr<string> responseFormatType_ = nullptr;
    std::shared_ptr<vector<RunCompletionRequestVariables>> variables_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ContactCenterAI20240603
#endif
