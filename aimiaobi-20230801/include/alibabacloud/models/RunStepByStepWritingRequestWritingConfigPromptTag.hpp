// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSTEPBYSTEPWRITINGREQUESTWRITINGCONFIGPROMPTTAG_HPP_
#define ALIBABACLOUD_MODELS_RUNSTEPBYSTEPWRITINGREQUESTWRITINGCONFIGPROMPTTAG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunStepByStepWritingRequestWritingConfigPromptTag : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunStepByStepWritingRequestWritingConfigPromptTag& obj) { 
      DARABONBA_PTR_TO_JSON(NecessaryTips, necessaryTips_);
      DARABONBA_PTR_TO_JSON(Position, position_);
      DARABONBA_PTR_TO_JSON(ReverseWords, reverseWords_);
      DARABONBA_PTR_TO_JSON(Theme, theme_);
    };
    friend void from_json(const Darabonba::Json& j, RunStepByStepWritingRequestWritingConfigPromptTag& obj) { 
      DARABONBA_PTR_FROM_JSON(NecessaryTips, necessaryTips_);
      DARABONBA_PTR_FROM_JSON(Position, position_);
      DARABONBA_PTR_FROM_JSON(ReverseWords, reverseWords_);
      DARABONBA_PTR_FROM_JSON(Theme, theme_);
    };
    RunStepByStepWritingRequestWritingConfigPromptTag() = default ;
    RunStepByStepWritingRequestWritingConfigPromptTag(const RunStepByStepWritingRequestWritingConfigPromptTag &) = default ;
    RunStepByStepWritingRequestWritingConfigPromptTag(RunStepByStepWritingRequestWritingConfigPromptTag &&) = default ;
    RunStepByStepWritingRequestWritingConfigPromptTag(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunStepByStepWritingRequestWritingConfigPromptTag() = default ;
    RunStepByStepWritingRequestWritingConfigPromptTag& operator=(const RunStepByStepWritingRequestWritingConfigPromptTag &) = default ;
    RunStepByStepWritingRequestWritingConfigPromptTag& operator=(RunStepByStepWritingRequestWritingConfigPromptTag &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->necessaryTips_ == nullptr
        && return this->position_ == nullptr && return this->reverseWords_ == nullptr && return this->theme_ == nullptr; };
    // necessaryTips Field Functions 
    bool hasNecessaryTips() const { return this->necessaryTips_ != nullptr;};
    void deleteNecessaryTips() { this->necessaryTips_ = nullptr;};
    inline string necessaryTips() const { DARABONBA_PTR_GET_DEFAULT(necessaryTips_, "") };
    inline RunStepByStepWritingRequestWritingConfigPromptTag& setNecessaryTips(string necessaryTips) { DARABONBA_PTR_SET_VALUE(necessaryTips_, necessaryTips) };


    // position Field Functions 
    bool hasPosition() const { return this->position_ != nullptr;};
    void deletePosition() { this->position_ = nullptr;};
    inline string position() const { DARABONBA_PTR_GET_DEFAULT(position_, "") };
    inline RunStepByStepWritingRequestWritingConfigPromptTag& setPosition(string position) { DARABONBA_PTR_SET_VALUE(position_, position) };


    // reverseWords Field Functions 
    bool hasReverseWords() const { return this->reverseWords_ != nullptr;};
    void deleteReverseWords() { this->reverseWords_ = nullptr;};
    inline string reverseWords() const { DARABONBA_PTR_GET_DEFAULT(reverseWords_, "") };
    inline RunStepByStepWritingRequestWritingConfigPromptTag& setReverseWords(string reverseWords) { DARABONBA_PTR_SET_VALUE(reverseWords_, reverseWords) };


    // theme Field Functions 
    bool hasTheme() const { return this->theme_ != nullptr;};
    void deleteTheme() { this->theme_ = nullptr;};
    inline string theme() const { DARABONBA_PTR_GET_DEFAULT(theme_, "") };
    inline RunStepByStepWritingRequestWritingConfigPromptTag& setTheme(string theme) { DARABONBA_PTR_SET_VALUE(theme_, theme) };


  protected:
    std::shared_ptr<string> necessaryTips_ = nullptr;
    std::shared_ptr<string> position_ = nullptr;
    std::shared_ptr<string> reverseWords_ = nullptr;
    std::shared_ptr<string> theme_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
