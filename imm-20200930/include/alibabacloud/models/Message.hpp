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
        && this->content_ == nullptr && this->createTime_ == nullptr && this->datasetName_ == nullptr && this->language_ == nullptr && this->regenerate_ == nullptr
        && this->reply_ == nullptr && this->score_ == nullptr && this->sourceURI_ == nullptr && this->suggestion_ == nullptr && this->tone_ == nullptr
        && this->topic_ == nullptr; };
    // assistantType Field Functions 
    bool hasAssistantType() const { return this->assistantType_ != nullptr;};
    void deleteAssistantType() { this->assistantType_ = nullptr;};
    inline string getAssistantType() const { DARABONBA_PTR_GET_DEFAULT(assistantType_, "") };
    inline Message& setAssistantType(string assistantType) { DARABONBA_PTR_SET_VALUE(assistantType_, assistantType) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline Message& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline Message& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // datasetName Field Functions 
    bool hasDatasetName() const { return this->datasetName_ != nullptr;};
    void deleteDatasetName() { this->datasetName_ = nullptr;};
    inline string getDatasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
    inline Message& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline Message& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // regenerate Field Functions 
    bool hasRegenerate() const { return this->regenerate_ != nullptr;};
    void deleteRegenerate() { this->regenerate_ = nullptr;};
    inline bool getRegenerate() const { DARABONBA_PTR_GET_DEFAULT(regenerate_, false) };
    inline Message& setRegenerate(bool regenerate) { DARABONBA_PTR_SET_VALUE(regenerate_, regenerate) };


    // reply Field Functions 
    bool hasReply() const { return this->reply_ != nullptr;};
    void deleteReply() { this->reply_ = nullptr;};
    inline string getReply() const { DARABONBA_PTR_GET_DEFAULT(reply_, "") };
    inline Message& setReply(string reply) { DARABONBA_PTR_SET_VALUE(reply_, reply) };


    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline double getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
    inline Message& setScore(double score) { DARABONBA_PTR_SET_VALUE(score_, score) };


    // sourceURI Field Functions 
    bool hasSourceURI() const { return this->sourceURI_ != nullptr;};
    void deleteSourceURI() { this->sourceURI_ = nullptr;};
    inline string getSourceURI() const { DARABONBA_PTR_GET_DEFAULT(sourceURI_, "") };
    inline Message& setSourceURI(string sourceURI) { DARABONBA_PTR_SET_VALUE(sourceURI_, sourceURI) };


    // suggestion Field Functions 
    bool hasSuggestion() const { return this->suggestion_ != nullptr;};
    void deleteSuggestion() { this->suggestion_ = nullptr;};
    inline string getSuggestion() const { DARABONBA_PTR_GET_DEFAULT(suggestion_, "") };
    inline Message& setSuggestion(string suggestion) { DARABONBA_PTR_SET_VALUE(suggestion_, suggestion) };


    // tone Field Functions 
    bool hasTone() const { return this->tone_ != nullptr;};
    void deleteTone() { this->tone_ = nullptr;};
    inline string getTone() const { DARABONBA_PTR_GET_DEFAULT(tone_, "") };
    inline Message& setTone(string tone) { DARABONBA_PTR_SET_VALUE(tone_, tone) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline string getTopic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
    inline Message& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


  protected:
    // Assistant type.
    shared_ptr<string> assistantType_ {};
    // The content of the question.
    shared_ptr<string> content_ {};
    // The time when the message was created.
    shared_ptr<string> createTime_ {};
    // The dataset that the answer references to.
    shared_ptr<string> datasetName_ {};
    // The language of the answer.
    shared_ptr<string> language_ {};
    // Indicates whether the message is a regenerated answer.
    shared_ptr<bool> regenerate_ {};
    // The answer.
    shared_ptr<string> reply_ {};
    // Rate
    shared_ptr<double> score_ {};
    // The URI of the source file from which the answer was generated.
    shared_ptr<string> sourceURI_ {};
    // The compliance check results. Valid values: pass block
    shared_ptr<string> suggestion_ {};
    // The tone of the answer.
    shared_ptr<string> tone_ {};
    // The topic in the question.
    shared_ptr<string> topic_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
