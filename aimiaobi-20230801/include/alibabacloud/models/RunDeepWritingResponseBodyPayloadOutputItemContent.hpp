// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNDEEPWRITINGRESPONSEBODYPAYLOADOUTPUTITEMCONTENT_HPP_
#define ALIBABACLOUD_MODELS_RUNDEEPWRITINGRESPONSEBODYPAYLOADOUTPUTITEMCONTENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunDeepWritingResponseBodyPayloadOutputItemContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunDeepWritingResponseBodyPayloadOutputItemContent& obj) { 
      DARABONBA_PTR_TO_JSON(Text, text_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, RunDeepWritingResponseBodyPayloadOutputItemContent& obj) { 
      DARABONBA_PTR_FROM_JSON(Text, text_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    RunDeepWritingResponseBodyPayloadOutputItemContent() = default ;
    RunDeepWritingResponseBodyPayloadOutputItemContent(const RunDeepWritingResponseBodyPayloadOutputItemContent &) = default ;
    RunDeepWritingResponseBodyPayloadOutputItemContent(RunDeepWritingResponseBodyPayloadOutputItemContent &&) = default ;
    RunDeepWritingResponseBodyPayloadOutputItemContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunDeepWritingResponseBodyPayloadOutputItemContent() = default ;
    RunDeepWritingResponseBodyPayloadOutputItemContent& operator=(const RunDeepWritingResponseBodyPayloadOutputItemContent &) = default ;
    RunDeepWritingResponseBodyPayloadOutputItemContent& operator=(RunDeepWritingResponseBodyPayloadOutputItemContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->text_ == nullptr
        && return this->type_ == nullptr; };
    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline RunDeepWritingResponseBodyPayloadOutputItemContent& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline RunDeepWritingResponseBodyPayloadOutputItemContent& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> text_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
