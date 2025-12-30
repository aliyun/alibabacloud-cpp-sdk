// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MEDIACONVERTOUTPUTGROUPOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_MEDIACONVERTOUTPUTGROUPOUTPUT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class MediaConvertOutputGroupOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MediaConvertOutputGroupOutput& obj) { 
      DARABONBA_PTR_TO_JSON(Features, features_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OutputFileName, outputFileName_);
      DARABONBA_PTR_TO_JSON(OverrideParams, overrideParams_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, MediaConvertOutputGroupOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(Features, features_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OutputFileName, outputFileName_);
      DARABONBA_PTR_FROM_JSON(OverrideParams, overrideParams_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    MediaConvertOutputGroupOutput() = default ;
    MediaConvertOutputGroupOutput(const MediaConvertOutputGroupOutput &) = default ;
    MediaConvertOutputGroupOutput(MediaConvertOutputGroupOutput &&) = default ;
    MediaConvertOutputGroupOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MediaConvertOutputGroupOutput() = default ;
    MediaConvertOutputGroupOutput& operator=(const MediaConvertOutputGroupOutput &) = default ;
    MediaConvertOutputGroupOutput& operator=(MediaConvertOutputGroupOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->features_ == nullptr
        && this->name_ == nullptr && this->outputFileName_ == nullptr && this->overrideParams_ == nullptr && this->priority_ == nullptr && this->templateId_ == nullptr; };
    // features Field Functions 
    bool hasFeatures() const { return this->features_ != nullptr;};
    void deleteFeatures() { this->features_ = nullptr;};
    inline string getFeatures() const { DARABONBA_PTR_GET_DEFAULT(features_, "") };
    inline MediaConvertOutputGroupOutput& setFeatures(string features) { DARABONBA_PTR_SET_VALUE(features_, features) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline MediaConvertOutputGroupOutput& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // outputFileName Field Functions 
    bool hasOutputFileName() const { return this->outputFileName_ != nullptr;};
    void deleteOutputFileName() { this->outputFileName_ = nullptr;};
    inline string getOutputFileName() const { DARABONBA_PTR_GET_DEFAULT(outputFileName_, "") };
    inline MediaConvertOutputGroupOutput& setOutputFileName(string outputFileName) { DARABONBA_PTR_SET_VALUE(outputFileName_, outputFileName) };


    // overrideParams Field Functions 
    bool hasOverrideParams() const { return this->overrideParams_ != nullptr;};
    void deleteOverrideParams() { this->overrideParams_ = nullptr;};
    inline string getOverrideParams() const { DARABONBA_PTR_GET_DEFAULT(overrideParams_, "") };
    inline MediaConvertOutputGroupOutput& setOverrideParams(string overrideParams) { DARABONBA_PTR_SET_VALUE(overrideParams_, overrideParams) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline MediaConvertOutputGroupOutput& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline MediaConvertOutputGroupOutput& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    shared_ptr<string> features_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> outputFileName_ {};
    shared_ptr<string> overrideParams_ {};
    shared_ptr<int32_t> priority_ {};
    shared_ptr<string> templateId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
