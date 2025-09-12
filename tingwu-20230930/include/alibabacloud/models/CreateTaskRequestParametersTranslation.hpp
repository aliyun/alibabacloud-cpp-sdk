// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETASKREQUESTPARAMETERSTRANSLATION_HPP_
#define ALIBABACLOUD_MODELS_CREATETASKREQUESTPARAMETERSTRANSLATION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tingwu20230930
{
namespace Models
{
  class CreateTaskRequestParametersTranslation : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTaskRequestParametersTranslation& obj) { 
      DARABONBA_PTR_TO_JSON(AdditionalStreamOutputLevel, additionalStreamOutputLevel_);
      DARABONBA_PTR_TO_JSON(OutputLevel, outputLevel_);
      DARABONBA_PTR_TO_JSON(TargetLanguages, targetLanguages_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTaskRequestParametersTranslation& obj) { 
      DARABONBA_PTR_FROM_JSON(AdditionalStreamOutputLevel, additionalStreamOutputLevel_);
      DARABONBA_PTR_FROM_JSON(OutputLevel, outputLevel_);
      DARABONBA_PTR_FROM_JSON(TargetLanguages, targetLanguages_);
    };
    CreateTaskRequestParametersTranslation() = default ;
    CreateTaskRequestParametersTranslation(const CreateTaskRequestParametersTranslation &) = default ;
    CreateTaskRequestParametersTranslation(CreateTaskRequestParametersTranslation &&) = default ;
    CreateTaskRequestParametersTranslation(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTaskRequestParametersTranslation() = default ;
    CreateTaskRequestParametersTranslation& operator=(const CreateTaskRequestParametersTranslation &) = default ;
    CreateTaskRequestParametersTranslation& operator=(CreateTaskRequestParametersTranslation &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->additionalStreamOutputLevel_ != nullptr
        && this->outputLevel_ != nullptr && this->targetLanguages_ != nullptr; };
    // additionalStreamOutputLevel Field Functions 
    bool hasAdditionalStreamOutputLevel() const { return this->additionalStreamOutputLevel_ != nullptr;};
    void deleteAdditionalStreamOutputLevel() { this->additionalStreamOutputLevel_ = nullptr;};
    inline int32_t additionalStreamOutputLevel() const { DARABONBA_PTR_GET_DEFAULT(additionalStreamOutputLevel_, 0) };
    inline CreateTaskRequestParametersTranslation& setAdditionalStreamOutputLevel(int32_t additionalStreamOutputLevel) { DARABONBA_PTR_SET_VALUE(additionalStreamOutputLevel_, additionalStreamOutputLevel) };


    // outputLevel Field Functions 
    bool hasOutputLevel() const { return this->outputLevel_ != nullptr;};
    void deleteOutputLevel() { this->outputLevel_ = nullptr;};
    inline int32_t outputLevel() const { DARABONBA_PTR_GET_DEFAULT(outputLevel_, 0) };
    inline CreateTaskRequestParametersTranslation& setOutputLevel(int32_t outputLevel) { DARABONBA_PTR_SET_VALUE(outputLevel_, outputLevel) };


    // targetLanguages Field Functions 
    bool hasTargetLanguages() const { return this->targetLanguages_ != nullptr;};
    void deleteTargetLanguages() { this->targetLanguages_ = nullptr;};
    inline const vector<string> & targetLanguages() const { DARABONBA_PTR_GET_CONST(targetLanguages_, vector<string>) };
    inline vector<string> targetLanguages() { DARABONBA_PTR_GET(targetLanguages_, vector<string>) };
    inline CreateTaskRequestParametersTranslation& setTargetLanguages(const vector<string> & targetLanguages) { DARABONBA_PTR_SET_VALUE(targetLanguages_, targetLanguages) };
    inline CreateTaskRequestParametersTranslation& setTargetLanguages(vector<string> && targetLanguages) { DARABONBA_PTR_SET_RVALUE(targetLanguages_, targetLanguages) };


  protected:
    std::shared_ptr<int32_t> additionalStreamOutputLevel_ = nullptr;
    std::shared_ptr<int32_t> outputLevel_ = nullptr;
    std::shared_ptr<vector<string>> targetLanguages_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tingwu20230930
#endif
