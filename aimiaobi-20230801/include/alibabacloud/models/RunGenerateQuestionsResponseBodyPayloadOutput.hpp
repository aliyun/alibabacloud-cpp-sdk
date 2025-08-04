// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNGENERATEQUESTIONSRESPONSEBODYPAYLOADOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_RUNGENERATEQUESTIONSRESPONSEBODYPAYLOADOUTPUT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunGenerateQuestionsResponseBodyPayloadOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunGenerateQuestionsResponseBodyPayloadOutput& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
    };
    friend void from_json(const Darabonba::Json& j, RunGenerateQuestionsResponseBodyPayloadOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
    };
    RunGenerateQuestionsResponseBodyPayloadOutput() = default ;
    RunGenerateQuestionsResponseBodyPayloadOutput(const RunGenerateQuestionsResponseBodyPayloadOutput &) = default ;
    RunGenerateQuestionsResponseBodyPayloadOutput(RunGenerateQuestionsResponseBodyPayloadOutput &&) = default ;
    RunGenerateQuestionsResponseBodyPayloadOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunGenerateQuestionsResponseBodyPayloadOutput() = default ;
    RunGenerateQuestionsResponseBodyPayloadOutput& operator=(const RunGenerateQuestionsResponseBodyPayloadOutput &) = default ;
    RunGenerateQuestionsResponseBodyPayloadOutput& operator=(RunGenerateQuestionsResponseBodyPayloadOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline RunGenerateQuestionsResponseBodyPayloadOutput& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


  protected:
    std::shared_ptr<string> content_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
