// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNHOTTOPICSUMMARYRESPONSEBODYPAYLOADOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_RUNHOTTOPICSUMMARYRESPONSEBODYPAYLOADOUTPUT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class RunHotTopicSummaryResponseBodyPayloadOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunHotTopicSummaryResponseBodyPayloadOutput& obj) { 
      DARABONBA_PTR_TO_JSON(text, text_);
      DARABONBA_PTR_TO_JSON(topicId, topicId_);
    };
    friend void from_json(const Darabonba::Json& j, RunHotTopicSummaryResponseBodyPayloadOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(text, text_);
      DARABONBA_PTR_FROM_JSON(topicId, topicId_);
    };
    RunHotTopicSummaryResponseBodyPayloadOutput() = default ;
    RunHotTopicSummaryResponseBodyPayloadOutput(const RunHotTopicSummaryResponseBodyPayloadOutput &) = default ;
    RunHotTopicSummaryResponseBodyPayloadOutput(RunHotTopicSummaryResponseBodyPayloadOutput &&) = default ;
    RunHotTopicSummaryResponseBodyPayloadOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunHotTopicSummaryResponseBodyPayloadOutput() = default ;
    RunHotTopicSummaryResponseBodyPayloadOutput& operator=(const RunHotTopicSummaryResponseBodyPayloadOutput &) = default ;
    RunHotTopicSummaryResponseBodyPayloadOutput& operator=(RunHotTopicSummaryResponseBodyPayloadOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->text_ == nullptr
        && return this->topicId_ == nullptr; };
    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline RunHotTopicSummaryResponseBodyPayloadOutput& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


    // topicId Field Functions 
    bool hasTopicId() const { return this->topicId_ != nullptr;};
    void deleteTopicId() { this->topicId_ = nullptr;};
    inline string topicId() const { DARABONBA_PTR_GET_DEFAULT(topicId_, "") };
    inline RunHotTopicSummaryResponseBodyPayloadOutput& setTopicId(string topicId) { DARABONBA_PTR_SET_VALUE(topicId_, topicId) };


  protected:
    std::shared_ptr<string> text_ = nullptr;
    std::shared_ptr<string> topicId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
