// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITMEDIACONVERTJOBRESPONSEBODYJOBCONFIG_HPP_
#define ALIBABACLOUD_MODELS_SUBMITMEDIACONVERTJOBRESPONSEBODYJOBCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/MediaConvertInput.hpp>
#include <alibabacloud/models/MediaConvertOutputGroup.hpp>
#include <alibabacloud/models/MediaConvertOutput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitMediaConvertJobResponseBodyJobConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitMediaConvertJobResponseBodyJobConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Inputs, inputs_);
      DARABONBA_PTR_TO_JSON(JobName, jobName_);
      DARABONBA_PTR_TO_JSON(OutputGroups, outputGroups_);
      DARABONBA_PTR_TO_JSON(Outputs, outputs_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitMediaConvertJobResponseBodyJobConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Inputs, inputs_);
      DARABONBA_PTR_FROM_JSON(JobName, jobName_);
      DARABONBA_PTR_FROM_JSON(OutputGroups, outputGroups_);
      DARABONBA_PTR_FROM_JSON(Outputs, outputs_);
    };
    SubmitMediaConvertJobResponseBodyJobConfig() = default ;
    SubmitMediaConvertJobResponseBodyJobConfig(const SubmitMediaConvertJobResponseBodyJobConfig &) = default ;
    SubmitMediaConvertJobResponseBodyJobConfig(SubmitMediaConvertJobResponseBodyJobConfig &&) = default ;
    SubmitMediaConvertJobResponseBodyJobConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitMediaConvertJobResponseBodyJobConfig() = default ;
    SubmitMediaConvertJobResponseBodyJobConfig& operator=(const SubmitMediaConvertJobResponseBodyJobConfig &) = default ;
    SubmitMediaConvertJobResponseBodyJobConfig& operator=(SubmitMediaConvertJobResponseBodyJobConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->inputs_ != nullptr
        && this->jobName_ != nullptr && this->outputGroups_ != nullptr && this->outputs_ != nullptr; };
    // inputs Field Functions 
    bool hasInputs() const { return this->inputs_ != nullptr;};
    void deleteInputs() { this->inputs_ = nullptr;};
    inline const vector<Models::MediaConvertInput> & inputs() const { DARABONBA_PTR_GET_CONST(inputs_, vector<Models::MediaConvertInput>) };
    inline vector<Models::MediaConvertInput> inputs() { DARABONBA_PTR_GET(inputs_, vector<Models::MediaConvertInput>) };
    inline SubmitMediaConvertJobResponseBodyJobConfig& setInputs(const vector<Models::MediaConvertInput> & inputs) { DARABONBA_PTR_SET_VALUE(inputs_, inputs) };
    inline SubmitMediaConvertJobResponseBodyJobConfig& setInputs(vector<Models::MediaConvertInput> && inputs) { DARABONBA_PTR_SET_RVALUE(inputs_, inputs) };


    // jobName Field Functions 
    bool hasJobName() const { return this->jobName_ != nullptr;};
    void deleteJobName() { this->jobName_ = nullptr;};
    inline string jobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
    inline SubmitMediaConvertJobResponseBodyJobConfig& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


    // outputGroups Field Functions 
    bool hasOutputGroups() const { return this->outputGroups_ != nullptr;};
    void deleteOutputGroups() { this->outputGroups_ = nullptr;};
    inline const vector<Models::MediaConvertOutputGroup> & outputGroups() const { DARABONBA_PTR_GET_CONST(outputGroups_, vector<Models::MediaConvertOutputGroup>) };
    inline vector<Models::MediaConvertOutputGroup> outputGroups() { DARABONBA_PTR_GET(outputGroups_, vector<Models::MediaConvertOutputGroup>) };
    inline SubmitMediaConvertJobResponseBodyJobConfig& setOutputGroups(const vector<Models::MediaConvertOutputGroup> & outputGroups) { DARABONBA_PTR_SET_VALUE(outputGroups_, outputGroups) };
    inline SubmitMediaConvertJobResponseBodyJobConfig& setOutputGroups(vector<Models::MediaConvertOutputGroup> && outputGroups) { DARABONBA_PTR_SET_RVALUE(outputGroups_, outputGroups) };


    // outputs Field Functions 
    bool hasOutputs() const { return this->outputs_ != nullptr;};
    void deleteOutputs() { this->outputs_ = nullptr;};
    inline const vector<Models::MediaConvertOutput> & outputs() const { DARABONBA_PTR_GET_CONST(outputs_, vector<Models::MediaConvertOutput>) };
    inline vector<Models::MediaConvertOutput> outputs() { DARABONBA_PTR_GET(outputs_, vector<Models::MediaConvertOutput>) };
    inline SubmitMediaConvertJobResponseBodyJobConfig& setOutputs(const vector<Models::MediaConvertOutput> & outputs) { DARABONBA_PTR_SET_VALUE(outputs_, outputs) };
    inline SubmitMediaConvertJobResponseBodyJobConfig& setOutputs(vector<Models::MediaConvertOutput> && outputs) { DARABONBA_PTR_SET_RVALUE(outputs_, outputs) };


  protected:
    // The inputs of the transcoding task.
    std::shared_ptr<vector<Models::MediaConvertInput>> inputs_ = nullptr;
    // The name of the job.
    std::shared_ptr<string> jobName_ = nullptr;
    // The output group configurations.
    std::shared_ptr<vector<Models::MediaConvertOutputGroup>> outputGroups_ = nullptr;
    // The output configurations.
    std::shared_ptr<vector<Models::MediaConvertOutput>> outputs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
