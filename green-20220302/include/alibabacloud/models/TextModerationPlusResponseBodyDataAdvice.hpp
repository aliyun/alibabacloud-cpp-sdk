// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TEXTMODERATIONPLUSRESPONSEBODYDATAADVICE_HPP_
#define ALIBABACLOUD_MODELS_TEXTMODERATIONPLUSRESPONSEBODYDATAADVICE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class TextModerationPlusResponseBodyDataAdvice : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TextModerationPlusResponseBodyDataAdvice& obj) { 
      DARABONBA_PTR_TO_JSON(Answer, answer_);
      DARABONBA_PTR_TO_JSON(HitLabel, hitLabel_);
      DARABONBA_PTR_TO_JSON(HitLibName, hitLibName_);
    };
    friend void from_json(const Darabonba::Json& j, TextModerationPlusResponseBodyDataAdvice& obj) { 
      DARABONBA_PTR_FROM_JSON(Answer, answer_);
      DARABONBA_PTR_FROM_JSON(HitLabel, hitLabel_);
      DARABONBA_PTR_FROM_JSON(HitLibName, hitLibName_);
    };
    TextModerationPlusResponseBodyDataAdvice() = default ;
    TextModerationPlusResponseBodyDataAdvice(const TextModerationPlusResponseBodyDataAdvice &) = default ;
    TextModerationPlusResponseBodyDataAdvice(TextModerationPlusResponseBodyDataAdvice &&) = default ;
    TextModerationPlusResponseBodyDataAdvice(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TextModerationPlusResponseBodyDataAdvice() = default ;
    TextModerationPlusResponseBodyDataAdvice& operator=(const TextModerationPlusResponseBodyDataAdvice &) = default ;
    TextModerationPlusResponseBodyDataAdvice& operator=(TextModerationPlusResponseBodyDataAdvice &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->answer_ == nullptr
        && return this->hitLabel_ == nullptr && return this->hitLibName_ == nullptr; };
    // answer Field Functions 
    bool hasAnswer() const { return this->answer_ != nullptr;};
    void deleteAnswer() { this->answer_ = nullptr;};
    inline string answer() const { DARABONBA_PTR_GET_DEFAULT(answer_, "") };
    inline TextModerationPlusResponseBodyDataAdvice& setAnswer(string answer) { DARABONBA_PTR_SET_VALUE(answer_, answer) };


    // hitLabel Field Functions 
    bool hasHitLabel() const { return this->hitLabel_ != nullptr;};
    void deleteHitLabel() { this->hitLabel_ = nullptr;};
    inline string hitLabel() const { DARABONBA_PTR_GET_DEFAULT(hitLabel_, "") };
    inline TextModerationPlusResponseBodyDataAdvice& setHitLabel(string hitLabel) { DARABONBA_PTR_SET_VALUE(hitLabel_, hitLabel) };


    // hitLibName Field Functions 
    bool hasHitLibName() const { return this->hitLibName_ != nullptr;};
    void deleteHitLibName() { this->hitLibName_ = nullptr;};
    inline string hitLibName() const { DARABONBA_PTR_GET_DEFAULT(hitLibName_, "") };
    inline TextModerationPlusResponseBodyDataAdvice& setHitLibName(string hitLibName) { DARABONBA_PTR_SET_VALUE(hitLibName_, hitLibName) };


  protected:
    // The answer.
    std::shared_ptr<string> answer_ = nullptr;
    // Hit Label
    std::shared_ptr<string> hitLabel_ = nullptr;
    // Hit Library Name
    std::shared_ptr<string> hitLibName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
