// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAIAGENTDIALOGUESRESPONSEBODYDIALOGUES_HPP_
#define ALIBABACLOUD_MODELS_LISTAIAGENTDIALOGUESRESPONSEBODYDIALOGUES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAIAgentDialoguesResponseBodyDialoguesAttachedFileList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListAIAgentDialoguesResponseBodyDialogues : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAIAgentDialoguesResponseBodyDialogues& obj) { 
      DARABONBA_PTR_TO_JSON(AttachedFileList, attachedFileList_);
      DARABONBA_PTR_TO_JSON(DialogueId, dialogueId_);
      DARABONBA_PTR_TO_JSON(Extend, extend_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(Producer, producer_);
      DARABONBA_PTR_TO_JSON(ReasoningText, reasoningText_);
      DARABONBA_PTR_TO_JSON(RoundId, roundId_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(Text, text_);
      DARABONBA_PTR_TO_JSON(Time, time_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListAIAgentDialoguesResponseBodyDialogues& obj) { 
      DARABONBA_PTR_FROM_JSON(AttachedFileList, attachedFileList_);
      DARABONBA_PTR_FROM_JSON(DialogueId, dialogueId_);
      DARABONBA_PTR_FROM_JSON(Extend, extend_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(Producer, producer_);
      DARABONBA_PTR_FROM_JSON(ReasoningText, reasoningText_);
      DARABONBA_PTR_FROM_JSON(RoundId, roundId_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(Text, text_);
      DARABONBA_PTR_FROM_JSON(Time, time_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListAIAgentDialoguesResponseBodyDialogues() = default ;
    ListAIAgentDialoguesResponseBodyDialogues(const ListAIAgentDialoguesResponseBodyDialogues &) = default ;
    ListAIAgentDialoguesResponseBodyDialogues(ListAIAgentDialoguesResponseBodyDialogues &&) = default ;
    ListAIAgentDialoguesResponseBodyDialogues(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAIAgentDialoguesResponseBodyDialogues() = default ;
    ListAIAgentDialoguesResponseBodyDialogues& operator=(const ListAIAgentDialoguesResponseBodyDialogues &) = default ;
    ListAIAgentDialoguesResponseBodyDialogues& operator=(ListAIAgentDialoguesResponseBodyDialogues &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->attachedFileList_ != nullptr
        && this->dialogueId_ != nullptr && this->extend_ != nullptr && this->nodeId_ != nullptr && this->producer_ != nullptr && this->reasoningText_ != nullptr
        && this->roundId_ != nullptr && this->source_ != nullptr && this->text_ != nullptr && this->time_ != nullptr && this->type_ != nullptr; };
    // attachedFileList Field Functions 
    bool hasAttachedFileList() const { return this->attachedFileList_ != nullptr;};
    void deleteAttachedFileList() { this->attachedFileList_ = nullptr;};
    inline const vector<Models::ListAIAgentDialoguesResponseBodyDialoguesAttachedFileList> & attachedFileList() const { DARABONBA_PTR_GET_CONST(attachedFileList_, vector<Models::ListAIAgentDialoguesResponseBodyDialoguesAttachedFileList>) };
    inline vector<Models::ListAIAgentDialoguesResponseBodyDialoguesAttachedFileList> attachedFileList() { DARABONBA_PTR_GET(attachedFileList_, vector<Models::ListAIAgentDialoguesResponseBodyDialoguesAttachedFileList>) };
    inline ListAIAgentDialoguesResponseBodyDialogues& setAttachedFileList(const vector<Models::ListAIAgentDialoguesResponseBodyDialoguesAttachedFileList> & attachedFileList) { DARABONBA_PTR_SET_VALUE(attachedFileList_, attachedFileList) };
    inline ListAIAgentDialoguesResponseBodyDialogues& setAttachedFileList(vector<Models::ListAIAgentDialoguesResponseBodyDialoguesAttachedFileList> && attachedFileList) { DARABONBA_PTR_SET_RVALUE(attachedFileList_, attachedFileList) };


    // dialogueId Field Functions 
    bool hasDialogueId() const { return this->dialogueId_ != nullptr;};
    void deleteDialogueId() { this->dialogueId_ = nullptr;};
    inline string dialogueId() const { DARABONBA_PTR_GET_DEFAULT(dialogueId_, "") };
    inline ListAIAgentDialoguesResponseBodyDialogues& setDialogueId(string dialogueId) { DARABONBA_PTR_SET_VALUE(dialogueId_, dialogueId) };


    // extend Field Functions 
    bool hasExtend() const { return this->extend_ != nullptr;};
    void deleteExtend() { this->extend_ = nullptr;};
    inline string extend() const { DARABONBA_PTR_GET_DEFAULT(extend_, "") };
    inline ListAIAgentDialoguesResponseBodyDialogues& setExtend(string extend) { DARABONBA_PTR_SET_VALUE(extend_, extend) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline ListAIAgentDialoguesResponseBodyDialogues& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // producer Field Functions 
    bool hasProducer() const { return this->producer_ != nullptr;};
    void deleteProducer() { this->producer_ = nullptr;};
    inline string producer() const { DARABONBA_PTR_GET_DEFAULT(producer_, "") };
    inline ListAIAgentDialoguesResponseBodyDialogues& setProducer(string producer) { DARABONBA_PTR_SET_VALUE(producer_, producer) };


    // reasoningText Field Functions 
    bool hasReasoningText() const { return this->reasoningText_ != nullptr;};
    void deleteReasoningText() { this->reasoningText_ = nullptr;};
    inline string reasoningText() const { DARABONBA_PTR_GET_DEFAULT(reasoningText_, "") };
    inline ListAIAgentDialoguesResponseBodyDialogues& setReasoningText(string reasoningText) { DARABONBA_PTR_SET_VALUE(reasoningText_, reasoningText) };


    // roundId Field Functions 
    bool hasRoundId() const { return this->roundId_ != nullptr;};
    void deleteRoundId() { this->roundId_ = nullptr;};
    inline string roundId() const { DARABONBA_PTR_GET_DEFAULT(roundId_, "") };
    inline ListAIAgentDialoguesResponseBodyDialogues& setRoundId(string roundId) { DARABONBA_PTR_SET_VALUE(roundId_, roundId) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline ListAIAgentDialoguesResponseBodyDialogues& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline ListAIAgentDialoguesResponseBodyDialogues& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline int64_t time() const { DARABONBA_PTR_GET_DEFAULT(time_, 0L) };
    inline ListAIAgentDialoguesResponseBodyDialogues& setTime(int64_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListAIAgentDialoguesResponseBodyDialogues& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<vector<Models::ListAIAgentDialoguesResponseBodyDialoguesAttachedFileList>> attachedFileList_ = nullptr;
    std::shared_ptr<string> dialogueId_ = nullptr;
    std::shared_ptr<string> extend_ = nullptr;
    std::shared_ptr<string> nodeId_ = nullptr;
    std::shared_ptr<string> producer_ = nullptr;
    std::shared_ptr<string> reasoningText_ = nullptr;
    std::shared_ptr<string> roundId_ = nullptr;
    std::shared_ptr<string> source_ = nullptr;
    std::shared_ptr<string> text_ = nullptr;
    std::shared_ptr<int64_t> time_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
