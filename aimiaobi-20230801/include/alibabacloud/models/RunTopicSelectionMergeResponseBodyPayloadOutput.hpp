// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNTOPICSELECTIONMERGERESPONSEBODYPAYLOADOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_RUNTOPICSELECTIONMERGERESPONSEBODYPAYLOADOUTPUT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/TopicSelection.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunTopicSelectionMergeResponseBodyPayloadOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunTopicSelectionMergeResponseBodyPayloadOutput& obj) { 
      DARABONBA_PTR_TO_JSON(Text, text_);
      DARABONBA_PTR_TO_JSON(Topic, topic_);
    };
    friend void from_json(const Darabonba::Json& j, RunTopicSelectionMergeResponseBodyPayloadOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(Text, text_);
      DARABONBA_PTR_FROM_JSON(Topic, topic_);
    };
    RunTopicSelectionMergeResponseBodyPayloadOutput() = default ;
    RunTopicSelectionMergeResponseBodyPayloadOutput(const RunTopicSelectionMergeResponseBodyPayloadOutput &) = default ;
    RunTopicSelectionMergeResponseBodyPayloadOutput(RunTopicSelectionMergeResponseBodyPayloadOutput &&) = default ;
    RunTopicSelectionMergeResponseBodyPayloadOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunTopicSelectionMergeResponseBodyPayloadOutput() = default ;
    RunTopicSelectionMergeResponseBodyPayloadOutput& operator=(const RunTopicSelectionMergeResponseBodyPayloadOutput &) = default ;
    RunTopicSelectionMergeResponseBodyPayloadOutput& operator=(RunTopicSelectionMergeResponseBodyPayloadOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->text_ == nullptr
        && return this->topic_ == nullptr; };
    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline RunTopicSelectionMergeResponseBodyPayloadOutput& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline const Models::TopicSelection & topic() const { DARABONBA_PTR_GET_CONST(topic_, Models::TopicSelection) };
    inline Models::TopicSelection topic() { DARABONBA_PTR_GET(topic_, Models::TopicSelection) };
    inline RunTopicSelectionMergeResponseBodyPayloadOutput& setTopic(const Models::TopicSelection & topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };
    inline RunTopicSelectionMergeResponseBodyPayloadOutput& setTopic(Models::TopicSelection && topic) { DARABONBA_PTR_SET_RVALUE(topic_, topic) };


  protected:
    std::shared_ptr<string> text_ = nullptr;
    std::shared_ptr<Models::TopicSelection> topic_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
