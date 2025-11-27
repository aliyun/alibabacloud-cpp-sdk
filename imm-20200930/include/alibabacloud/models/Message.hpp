// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MESSAGE_HPP_
#define ALIBABACLOUD_MODELS_MESSAGE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class Message : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Message& obj) { 
      DARABONBA_PTR_TO_JSON(AssistantType, assistantType_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(Regenerate, regenerate_);
      DARABONBA_PTR_TO_JSON(Reply, reply_);
      DARABONBA_PTR_TO_JSON(Score, score_);
      DARABONBA_PTR_TO_JSON(SourceURI, sourceURI_);
      DARABONBA_PTR_TO_JSON(Suggestion, suggestion_);
      DARABONBA_PTR_TO_JSON(Tone, tone_);
      DARABONBA_PTR_TO_JSON(Topic, topic_);
    };
    friend void from_json(const Darabonba::Json& j, Message& obj) { 
      DARABONBA_PTR_FROM_JSON(AssistantType, assistantType_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(Regenerate, regenerate_);
      DARABONBA_PTR_FROM_JSON(Reply, reply_);
      DARABONBA_PTR_FROM_JSON(Score, score_);
      DARABONBA_PTR_FROM_JSON(SourceURI, sourceURI_);
      DARABONBA_PTR_FROM_JSON(Suggestion, suggestion_);
      DARABONBA_PTR_FROM_JSON(Tone, tone_);
      DARABONBA_PTR_FROM_JSON(Topic, topic_);
    };
    Message() = default ;
    Message(const Message &) = default ;
    Message(Message &&) = default ;
    Message(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Message() = default ;
    Message& operator=(const Message &) = default ;
    Message& operator=(Message &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assistantType_ == nullptr
        && return this->content_ == nullptr && return this->createTime_ == nullptr && return this->datasetName_ == nullptr && return this->language_ == nullptr && return this->regenerate_ == nullptr
        && return this->reply_ == nullptr && return this->score_ == nullptr && return this->sourceURI_ == nullptr && return this->suggestion_ == nullptr && return this->tone_ == nullptr
        && return this->topic_ == nullptr; };
    // assistantType Field Functions 
    bool hasAssistantType() const { return this->assistantType_ != nullptr;};
    void deleteAssistantType() { this->assistantType_ = nullptr;};
    inline string assistantType() const { DARABONBA_PTR_GET_DEFAULT(assistantType_, "") };
    inline Message& setAssistantType(string assistantType) { DARABONBA_PTR_SET_VALUE(assistantType_, assistantType) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline Message& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline Message& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // datasetName Field Functions 
    bool hasDatasetName() const { return this->datasetName_ != nullptr;};
    void deleteDatasetName() { this->datasetName_ = nullptr;};
    inline string datasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
    inline Message& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string language() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline Message& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // regenerate Field Functions 
    bool hasRegenerate() const { return this->regenerate_ != nullptr;};
    void deleteRegenerate() { this->regenerate_ = nullptr;};
    inline bool regenerate() const { DARABONBA_PTR_GET_DEFAULT(regenerate_, false) };
    inline Message& setRegenerate(bool regenerate) { DARABONBA_PTR_SET_VALUE(regenerate_, regenerate) };


    // reply Field Functions 
    bool hasReply() const { return this->reply_ != nullptr;};
    void deleteReply() { this->reply_ = nullptr;};
    inline string reply() const { DARABONBA_PTR_GET_DEFAULT(reply_, "") };
    inline Message& setReply(string reply) { DARABONBA_PTR_SET_VALUE(reply_, reply) };


    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline double score() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
    inline Message& setScore(double score) { DARABONBA_PTR_SET_VALUE(score_, score) };


    // sourceURI Field Functions 
    bool hasSourceURI() const { return this->sourceURI_ != nullptr;};
    void deleteSourceURI() { this->sourceURI_ = nullptr;};
    inline string sourceURI() const { DARABONBA_PTR_GET_DEFAULT(sourceURI_, "") };
    inline Message& setSourceURI(string sourceURI) { DARABONBA_PTR_SET_VALUE(sourceURI_, sourceURI) };


    // suggestion Field Functions 
    bool hasSuggestion() const { return this->suggestion_ != nullptr;};
    void deleteSuggestion() { this->suggestion_ = nullptr;};
    inline string suggestion() const { DARABONBA_PTR_GET_DEFAULT(suggestion_, "") };
    inline Message& setSuggestion(string suggestion) { DARABONBA_PTR_SET_VALUE(suggestion_, suggestion) };


    // tone Field Functions 
    bool hasTone() const { return this->tone_ != nullptr;};
    void deleteTone() { this->tone_ = nullptr;};
    inline string tone() const { DARABONBA_PTR_GET_DEFAULT(tone_, "") };
    inline Message& setTone(string tone) { DARABONBA_PTR_SET_VALUE(tone_, tone) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline string topic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
    inline Message& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


  protected:
    std::shared_ptr<string> assistantType_ = nullptr;
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> datasetName_ = nullptr;
    std::shared_ptr<string> language_ = nullptr;
    std::shared_ptr<bool> regenerate_ = nullptr;
    std::shared_ptr<string> reply_ = nullptr;
    std::shared_ptr<double> score_ = nullptr;
    std::shared_ptr<string> sourceURI_ = nullptr;
    std::shared_ptr<string> suggestion_ = nullptr;
    std::shared_ptr<string> tone_ = nullptr;
    std::shared_ptr<string> topic_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
