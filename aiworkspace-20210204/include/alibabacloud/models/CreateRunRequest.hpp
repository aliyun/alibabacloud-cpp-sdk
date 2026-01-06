// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERUNREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATERUNREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Label.hpp>
#include <alibabacloud/models/RunParam.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class CreateRunRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRunRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ExperimentId, experimentId_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Params, params_);
      DARABONBA_PTR_TO_JSON(SourceId, sourceId_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRunRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ExperimentId, experimentId_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Params, params_);
      DARABONBA_PTR_FROM_JSON(SourceId, sourceId_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
    };
    CreateRunRequest() = default ;
    CreateRunRequest(const CreateRunRequest &) = default ;
    CreateRunRequest(CreateRunRequest &&) = default ;
    CreateRunRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRunRequest() = default ;
    CreateRunRequest& operator=(const CreateRunRequest &) = default ;
    CreateRunRequest& operator=(CreateRunRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->experimentId_ == nullptr
        && this->labels_ == nullptr && this->name_ == nullptr && this->params_ == nullptr && this->sourceId_ == nullptr && this->sourceType_ == nullptr; };
    // experimentId Field Functions 
    bool hasExperimentId() const { return this->experimentId_ != nullptr;};
    void deleteExperimentId() { this->experimentId_ = nullptr;};
    inline string getExperimentId() const { DARABONBA_PTR_GET_DEFAULT(experimentId_, "") };
    inline CreateRunRequest& setExperimentId(string experimentId) { DARABONBA_PTR_SET_VALUE(experimentId_, experimentId) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<Label> & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, vector<Label>) };
    inline vector<Label> getLabels() { DARABONBA_PTR_GET(labels_, vector<Label>) };
    inline CreateRunRequest& setLabels(const vector<Label> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline CreateRunRequest& setLabels(vector<Label> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateRunRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline const vector<RunParam> & getParams() const { DARABONBA_PTR_GET_CONST(params_, vector<RunParam>) };
    inline vector<RunParam> getParams() { DARABONBA_PTR_GET(params_, vector<RunParam>) };
    inline CreateRunRequest& setParams(const vector<RunParam> & params) { DARABONBA_PTR_SET_VALUE(params_, params) };
    inline CreateRunRequest& setParams(vector<RunParam> && params) { DARABONBA_PTR_SET_RVALUE(params_, params) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline string getSourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
    inline CreateRunRequest& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline CreateRunRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


  protected:
    // The ID of the experiment that corresponds to the run.
    // 
    // This parameter is required.
    shared_ptr<string> experimentId_ {};
    // The list of tags added to the run.
    shared_ptr<vector<Label>> labels_ {};
    // The name of the run. The name must meet the following requirements:
    // 
    // *   The name must start with a letter.
    // *   The name can contain letters, digits, underscores (_), and hyphens (-).
    // *   The name must be 1 to 63 characters in length.
    // 
    // If the name is left empty when you create a run, a random run ID generated by the server is used as the name.
    shared_ptr<string> name_ {};
    // The parameters of the run.
    shared_ptr<vector<RunParam>> params_ {};
    // The ID of the workload associated with the run.
    shared_ptr<string> sourceId_ {};
    // The type of the workload source that is associated with the run. Valid values: TrainingService and DLC. You can also leave this parameter empty. This parameter is optional and left empty by default.
    shared_ptr<string> sourceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
