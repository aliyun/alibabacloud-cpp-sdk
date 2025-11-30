// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MEDIACONVERTJOBCONFIG_HPP_
#define ALIBABACLOUD_MODELS_MEDIACONVERTJOBCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/MediaConvertJobConfigInputs.hpp>
#include <alibabacloud/models/MediaConvertJobConfigOutputGroups.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class MediaConvertJobConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MediaConvertJobConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Inputs, inputs_);
      DARABONBA_PTR_TO_JSON(JobName, jobName_);
      DARABONBA_PTR_TO_JSON(OutputGroups, outputGroups_);
    };
    friend void from_json(const Darabonba::Json& j, MediaConvertJobConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Inputs, inputs_);
      DARABONBA_PTR_FROM_JSON(JobName, jobName_);
      DARABONBA_PTR_FROM_JSON(OutputGroups, outputGroups_);
    };
    MediaConvertJobConfig() = default ;
    MediaConvertJobConfig(const MediaConvertJobConfig &) = default ;
    MediaConvertJobConfig(MediaConvertJobConfig &&) = default ;
    MediaConvertJobConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MediaConvertJobConfig() = default ;
    MediaConvertJobConfig& operator=(const MediaConvertJobConfig &) = default ;
    MediaConvertJobConfig& operator=(MediaConvertJobConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->inputs_ == nullptr
        && return this->jobName_ == nullptr && return this->outputGroups_ == nullptr; };
    // inputs Field Functions 
    bool hasInputs() const { return this->inputs_ != nullptr;};
    void deleteInputs() { this->inputs_ = nullptr;};
    inline const vector<MediaConvertJobConfigInputs> & inputs() const { DARABONBA_PTR_GET_CONST(inputs_, vector<MediaConvertJobConfigInputs>) };
    inline vector<MediaConvertJobConfigInputs> inputs() { DARABONBA_PTR_GET(inputs_, vector<MediaConvertJobConfigInputs>) };
    inline MediaConvertJobConfig& setInputs(const vector<MediaConvertJobConfigInputs> & inputs) { DARABONBA_PTR_SET_VALUE(inputs_, inputs) };
    inline MediaConvertJobConfig& setInputs(vector<MediaConvertJobConfigInputs> && inputs) { DARABONBA_PTR_SET_RVALUE(inputs_, inputs) };


    // jobName Field Functions 
    bool hasJobName() const { return this->jobName_ != nullptr;};
    void deleteJobName() { this->jobName_ = nullptr;};
    inline string jobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
    inline MediaConvertJobConfig& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


    // outputGroups Field Functions 
    bool hasOutputGroups() const { return this->outputGroups_ != nullptr;};
    void deleteOutputGroups() { this->outputGroups_ = nullptr;};
    inline const vector<MediaConvertJobConfigOutputGroups> & outputGroups() const { DARABONBA_PTR_GET_CONST(outputGroups_, vector<MediaConvertJobConfigOutputGroups>) };
    inline vector<MediaConvertJobConfigOutputGroups> outputGroups() { DARABONBA_PTR_GET(outputGroups_, vector<MediaConvertJobConfigOutputGroups>) };
    inline MediaConvertJobConfig& setOutputGroups(const vector<MediaConvertJobConfigOutputGroups> & outputGroups) { DARABONBA_PTR_SET_VALUE(outputGroups_, outputGroups) };
    inline MediaConvertJobConfig& setOutputGroups(vector<MediaConvertJobConfigOutputGroups> && outputGroups) { DARABONBA_PTR_SET_RVALUE(outputGroups_, outputGroups) };


  protected:
    std::shared_ptr<vector<MediaConvertJobConfigInputs>> inputs_ = nullptr;
    std::shared_ptr<string> jobName_ = nullptr;
    std::shared_ptr<vector<MediaConvertJobConfigOutputGroups>> outputGroups_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
