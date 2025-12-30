// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MEDIACONVERTOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_MEDIACONVERTOUTPUT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/MediaObject.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class MediaConvertOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MediaConvertOutput& obj) { 
      DARABONBA_PTR_TO_JSON(Features, features_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OutputFile, outputFile_);
      DARABONBA_PTR_TO_JSON(OverrideParams, overrideParams_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, MediaConvertOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(Features, features_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OutputFile, outputFile_);
      DARABONBA_PTR_FROM_JSON(OverrideParams, overrideParams_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    MediaConvertOutput() = default ;
    MediaConvertOutput(const MediaConvertOutput &) = default ;
    MediaConvertOutput(MediaConvertOutput &&) = default ;
    MediaConvertOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MediaConvertOutput() = default ;
    MediaConvertOutput& operator=(const MediaConvertOutput &) = default ;
    MediaConvertOutput& operator=(MediaConvertOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->features_ == nullptr
        && this->name_ == nullptr && this->outputFile_ == nullptr && this->overrideParams_ == nullptr && this->priority_ == nullptr && this->templateId_ == nullptr; };
    // features Field Functions 
    bool hasFeatures() const { return this->features_ != nullptr;};
    void deleteFeatures() { this->features_ = nullptr;};
    inline string getFeatures() const { DARABONBA_PTR_GET_DEFAULT(features_, "") };
    inline MediaConvertOutput& setFeatures(string features) { DARABONBA_PTR_SET_VALUE(features_, features) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline MediaConvertOutput& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // outputFile Field Functions 
    bool hasOutputFile() const { return this->outputFile_ != nullptr;};
    void deleteOutputFile() { this->outputFile_ = nullptr;};
    inline const MediaObject & getOutputFile() const { DARABONBA_PTR_GET_CONST(outputFile_, MediaObject) };
    inline MediaObject getOutputFile() { DARABONBA_PTR_GET(outputFile_, MediaObject) };
    inline MediaConvertOutput& setOutputFile(const MediaObject & outputFile) { DARABONBA_PTR_SET_VALUE(outputFile_, outputFile) };
    inline MediaConvertOutput& setOutputFile(MediaObject && outputFile) { DARABONBA_PTR_SET_RVALUE(outputFile_, outputFile) };


    // overrideParams Field Functions 
    bool hasOverrideParams() const { return this->overrideParams_ != nullptr;};
    void deleteOverrideParams() { this->overrideParams_ = nullptr;};
    inline string getOverrideParams() const { DARABONBA_PTR_GET_DEFAULT(overrideParams_, "") };
    inline MediaConvertOutput& setOverrideParams(string overrideParams) { DARABONBA_PTR_SET_VALUE(overrideParams_, overrideParams) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline MediaConvertOutput& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline MediaConvertOutput& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    shared_ptr<string> features_ {};
    shared_ptr<string> name_ {};
    shared_ptr<MediaObject> outputFile_ {};
    shared_ptr<string> overrideParams_ {};
    shared_ptr<int32_t> priority_ {};
    shared_ptr<string> templateId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
