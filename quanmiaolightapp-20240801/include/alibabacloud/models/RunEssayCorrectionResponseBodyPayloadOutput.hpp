// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNESSAYCORRECTIONRESPONSEBODYPAYLOADOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_RUNESSAYCORRECTIONRESPONSEBODYPAYLOADOUTPUT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class RunEssayCorrectionResponseBodyPayloadOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunEssayCorrectionResponseBodyPayloadOutput& obj) { 
      DARABONBA_PTR_TO_JSON(score, score_);
      DARABONBA_PTR_TO_JSON(text, text_);
    };
    friend void from_json(const Darabonba::Json& j, RunEssayCorrectionResponseBodyPayloadOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(score, score_);
      DARABONBA_PTR_FROM_JSON(text, text_);
    };
    RunEssayCorrectionResponseBodyPayloadOutput() = default ;
    RunEssayCorrectionResponseBodyPayloadOutput(const RunEssayCorrectionResponseBodyPayloadOutput &) = default ;
    RunEssayCorrectionResponseBodyPayloadOutput(RunEssayCorrectionResponseBodyPayloadOutput &&) = default ;
    RunEssayCorrectionResponseBodyPayloadOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunEssayCorrectionResponseBodyPayloadOutput() = default ;
    RunEssayCorrectionResponseBodyPayloadOutput& operator=(const RunEssayCorrectionResponseBodyPayloadOutput &) = default ;
    RunEssayCorrectionResponseBodyPayloadOutput& operator=(RunEssayCorrectionResponseBodyPayloadOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->score_ == nullptr
        && return this->text_ == nullptr; };
    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline int32_t score() const { DARABONBA_PTR_GET_DEFAULT(score_, 0) };
    inline RunEssayCorrectionResponseBodyPayloadOutput& setScore(int32_t score) { DARABONBA_PTR_SET_VALUE(score_, score) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline RunEssayCorrectionResponseBodyPayloadOutput& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


  protected:
    std::shared_ptr<int32_t> score_ = nullptr;
    std::shared_ptr<string> text_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
