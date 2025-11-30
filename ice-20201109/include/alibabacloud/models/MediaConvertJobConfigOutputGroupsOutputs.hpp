// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MEDIACONVERTJOBCONFIGOUTPUTGROUPSOUTPUTS_HPP_
#define ALIBABACLOUD_MODELS_MEDIACONVERTJOBCONFIGOUTPUTGROUPSOUTPUTS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/MediaConvertJobConfigOutputGroupsOutputsHlsGroupConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class MediaConvertJobConfigOutputGroupsOutputs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MediaConvertJobConfigOutputGroupsOutputs& obj) { 
      DARABONBA_PTR_TO_JSON(Features, features_);
      DARABONBA_PTR_TO_JSON(HlsGroupConfig, hlsGroupConfig_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OutputFileName, outputFileName_);
      DARABONBA_PTR_TO_JSON(OverrideParams, overrideParams_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, MediaConvertJobConfigOutputGroupsOutputs& obj) { 
      DARABONBA_PTR_FROM_JSON(Features, features_);
      DARABONBA_PTR_FROM_JSON(HlsGroupConfig, hlsGroupConfig_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OutputFileName, outputFileName_);
      DARABONBA_PTR_FROM_JSON(OverrideParams, overrideParams_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    MediaConvertJobConfigOutputGroupsOutputs() = default ;
    MediaConvertJobConfigOutputGroupsOutputs(const MediaConvertJobConfigOutputGroupsOutputs &) = default ;
    MediaConvertJobConfigOutputGroupsOutputs(MediaConvertJobConfigOutputGroupsOutputs &&) = default ;
    MediaConvertJobConfigOutputGroupsOutputs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MediaConvertJobConfigOutputGroupsOutputs() = default ;
    MediaConvertJobConfigOutputGroupsOutputs& operator=(const MediaConvertJobConfigOutputGroupsOutputs &) = default ;
    MediaConvertJobConfigOutputGroupsOutputs& operator=(MediaConvertJobConfigOutputGroupsOutputs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->features_ == nullptr
        && return this->hlsGroupConfig_ == nullptr && return this->name_ == nullptr && return this->outputFileName_ == nullptr && return this->overrideParams_ == nullptr && return this->priority_ == nullptr
        && return this->templateId_ == nullptr; };
    // features Field Functions 
    bool hasFeatures() const { return this->features_ != nullptr;};
    void deleteFeatures() { this->features_ = nullptr;};
    inline string features() const { DARABONBA_PTR_GET_DEFAULT(features_, "") };
    inline MediaConvertJobConfigOutputGroupsOutputs& setFeatures(string features) { DARABONBA_PTR_SET_VALUE(features_, features) };


    // hlsGroupConfig Field Functions 
    bool hasHlsGroupConfig() const { return this->hlsGroupConfig_ != nullptr;};
    void deleteHlsGroupConfig() { this->hlsGroupConfig_ = nullptr;};
    inline const Models::MediaConvertJobConfigOutputGroupsOutputsHlsGroupConfig & hlsGroupConfig() const { DARABONBA_PTR_GET_CONST(hlsGroupConfig_, Models::MediaConvertJobConfigOutputGroupsOutputsHlsGroupConfig) };
    inline Models::MediaConvertJobConfigOutputGroupsOutputsHlsGroupConfig hlsGroupConfig() { DARABONBA_PTR_GET(hlsGroupConfig_, Models::MediaConvertJobConfigOutputGroupsOutputsHlsGroupConfig) };
    inline MediaConvertJobConfigOutputGroupsOutputs& setHlsGroupConfig(const Models::MediaConvertJobConfigOutputGroupsOutputsHlsGroupConfig & hlsGroupConfig) { DARABONBA_PTR_SET_VALUE(hlsGroupConfig_, hlsGroupConfig) };
    inline MediaConvertJobConfigOutputGroupsOutputs& setHlsGroupConfig(Models::MediaConvertJobConfigOutputGroupsOutputsHlsGroupConfig && hlsGroupConfig) { DARABONBA_PTR_SET_RVALUE(hlsGroupConfig_, hlsGroupConfig) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline MediaConvertJobConfigOutputGroupsOutputs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // outputFileName Field Functions 
    bool hasOutputFileName() const { return this->outputFileName_ != nullptr;};
    void deleteOutputFileName() { this->outputFileName_ = nullptr;};
    inline string outputFileName() const { DARABONBA_PTR_GET_DEFAULT(outputFileName_, "") };
    inline MediaConvertJobConfigOutputGroupsOutputs& setOutputFileName(string outputFileName) { DARABONBA_PTR_SET_VALUE(outputFileName_, outputFileName) };


    // overrideParams Field Functions 
    bool hasOverrideParams() const { return this->overrideParams_ != nullptr;};
    void deleteOverrideParams() { this->overrideParams_ = nullptr;};
    inline string overrideParams() const { DARABONBA_PTR_GET_DEFAULT(overrideParams_, "") };
    inline MediaConvertJobConfigOutputGroupsOutputs& setOverrideParams(string overrideParams) { DARABONBA_PTR_SET_VALUE(overrideParams_, overrideParams) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline MediaConvertJobConfigOutputGroupsOutputs& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline MediaConvertJobConfigOutputGroupsOutputs& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    std::shared_ptr<string> features_ = nullptr;
    std::shared_ptr<Models::MediaConvertJobConfigOutputGroupsOutputsHlsGroupConfig> hlsGroupConfig_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> outputFileName_ = nullptr;
    std::shared_ptr<string> overrideParams_ = nullptr;
    std::shared_ptr<int32_t> priority_ = nullptr;
    std::shared_ptr<string> templateId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
