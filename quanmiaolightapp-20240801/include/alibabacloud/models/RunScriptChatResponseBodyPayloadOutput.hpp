// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSCRIPTCHATRESPONSEBODYPAYLOADOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_RUNSCRIPTCHATRESPONSEBODYPAYLOADOUTPUT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class RunScriptChatResponseBodyPayloadOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunScriptChatResponseBodyPayloadOutput& obj) { 
      DARABONBA_PTR_TO_JSON(text, text_);
    };
    friend void from_json(const Darabonba::Json& j, RunScriptChatResponseBodyPayloadOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(text, text_);
    };
    RunScriptChatResponseBodyPayloadOutput() = default ;
    RunScriptChatResponseBodyPayloadOutput(const RunScriptChatResponseBodyPayloadOutput &) = default ;
    RunScriptChatResponseBodyPayloadOutput(RunScriptChatResponseBodyPayloadOutput &&) = default ;
    RunScriptChatResponseBodyPayloadOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunScriptChatResponseBodyPayloadOutput() = default ;
    RunScriptChatResponseBodyPayloadOutput& operator=(const RunScriptChatResponseBodyPayloadOutput &) = default ;
    RunScriptChatResponseBodyPayloadOutput& operator=(RunScriptChatResponseBodyPayloadOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->text_ != nullptr; };
    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline RunScriptChatResponseBodyPayloadOutput& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


  protected:
    std::shared_ptr<string> text_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
