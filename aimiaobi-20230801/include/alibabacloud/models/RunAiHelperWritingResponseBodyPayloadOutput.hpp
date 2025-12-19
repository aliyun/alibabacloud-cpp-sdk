// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNAIHELPERWRITINGRESPONSEBODYPAYLOADOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_RUNAIHELPERWRITINGRESPONSEBODYPAYLOADOUTPUT_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunAiHelperWritingResponseBodyPayloadOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunAiHelperWritingResponseBodyPayloadOutput& obj) { 
      DARABONBA_PTR_TO_JSON(Text, text_);
      DARABONBA_PTR_TO_JSON(WritingParams, writingParams_);
    };
    friend void from_json(const Darabonba::Json& j, RunAiHelperWritingResponseBodyPayloadOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(Text, text_);
      DARABONBA_PTR_FROM_JSON(WritingParams, writingParams_);
    };
    RunAiHelperWritingResponseBodyPayloadOutput() = default ;
    RunAiHelperWritingResponseBodyPayloadOutput(const RunAiHelperWritingResponseBodyPayloadOutput &) = default ;
    RunAiHelperWritingResponseBodyPayloadOutput(RunAiHelperWritingResponseBodyPayloadOutput &&) = default ;
    RunAiHelperWritingResponseBodyPayloadOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunAiHelperWritingResponseBodyPayloadOutput() = default ;
    RunAiHelperWritingResponseBodyPayloadOutput& operator=(const RunAiHelperWritingResponseBodyPayloadOutput &) = default ;
    RunAiHelperWritingResponseBodyPayloadOutput& operator=(RunAiHelperWritingResponseBodyPayloadOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->text_ == nullptr
        && return this->writingParams_ == nullptr; };
    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline RunAiHelperWritingResponseBodyPayloadOutput& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


    // writingParams Field Functions 
    bool hasWritingParams() const { return this->writingParams_ != nullptr;};
    void deleteWritingParams() { this->writingParams_ = nullptr;};
    inline const map<string, string> & writingParams() const { DARABONBA_PTR_GET_CONST(writingParams_, map<string, string>) };
    inline map<string, string> writingParams() { DARABONBA_PTR_GET(writingParams_, map<string, string>) };
    inline RunAiHelperWritingResponseBodyPayloadOutput& setWritingParams(const map<string, string> & writingParams) { DARABONBA_PTR_SET_VALUE(writingParams_, writingParams) };
    inline RunAiHelperWritingResponseBodyPayloadOutput& setWritingParams(map<string, string> && writingParams) { DARABONBA_PTR_SET_RVALUE(writingParams_, writingParams) };


  protected:
    // AI生成的文章内容，流式返回时为增量文本
    std::shared_ptr<string> text_ = nullptr;
    // 返回的写作参数键值对
    std::shared_ptr<map<string, string>> writingParams_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
