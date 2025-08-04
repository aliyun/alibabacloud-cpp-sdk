// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNDOCTRANSLATIONRESPONSEBODYPAYLOADOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_RUNDOCTRANSLATIONRESPONSEBODYPAYLOADOUTPUT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunDocTranslationResponseBodyPayloadOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunDocTranslationResponseBodyPayloadOutput& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
    };
    friend void from_json(const Darabonba::Json& j, RunDocTranslationResponseBodyPayloadOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
    };
    RunDocTranslationResponseBodyPayloadOutput() = default ;
    RunDocTranslationResponseBodyPayloadOutput(const RunDocTranslationResponseBodyPayloadOutput &) = default ;
    RunDocTranslationResponseBodyPayloadOutput(RunDocTranslationResponseBodyPayloadOutput &&) = default ;
    RunDocTranslationResponseBodyPayloadOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunDocTranslationResponseBodyPayloadOutput() = default ;
    RunDocTranslationResponseBodyPayloadOutput& operator=(const RunDocTranslationResponseBodyPayloadOutput &) = default ;
    RunDocTranslationResponseBodyPayloadOutput& operator=(RunDocTranslationResponseBodyPayloadOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline RunDocTranslationResponseBodyPayloadOutput& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


  protected:
    std::shared_ptr<string> content_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
