// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHATWITHKNOWLEDGEBASERESPONSEBODYMULTICOLLECTIONRECALLRESULT_HPP_
#define ALIBABACLOUD_MODELS_CHATWITHKNOWLEDGEBASERESPONSEBODYMULTICOLLECTIONRECALLRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ChatWithKnowledgeBaseResponseBodyMultiCollectionRecallResultMatches.hpp>
#include <alibabacloud/models/ChatWithKnowledgeBaseResponseBodyMultiCollectionRecallResultUsage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ChatWithKnowledgeBaseResponseBodyMultiCollectionRecallResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChatWithKnowledgeBaseResponseBodyMultiCollectionRecallResult& obj) { 
      DARABONBA_PTR_TO_JSON(Entities, entities_);
      DARABONBA_PTR_TO_JSON(Matches, matches_);
      DARABONBA_PTR_TO_JSON(Relations, relations_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tokens, tokens_);
      DARABONBA_PTR_TO_JSON(Usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, ChatWithKnowledgeBaseResponseBodyMultiCollectionRecallResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Entities, entities_);
      DARABONBA_PTR_FROM_JSON(Matches, matches_);
      DARABONBA_PTR_FROM_JSON(Relations, relations_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tokens, tokens_);
      DARABONBA_PTR_FROM_JSON(Usage, usage_);
    };
    ChatWithKnowledgeBaseResponseBodyMultiCollectionRecallResult() = default ;
    ChatWithKnowledgeBaseResponseBodyMultiCollectionRecallResult(const ChatWithKnowledgeBaseResponseBodyMultiCollectionRecallResult &) = default ;
    ChatWithKnowledgeBaseResponseBodyMultiCollectionRecallResult(ChatWithKnowledgeBaseResponseBodyMultiCollectionRecallResult &&) = default ;
    ChatWithKnowledgeBaseResponseBodyMultiCollectionRecallResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChatWithKnowledgeBaseResponseBodyMultiCollectionRecallResult() = default ;
    ChatWithKnowledgeBaseResponseBodyMultiCollectionRecallResult& operator=(const ChatWithKnowledgeBaseResponseBodyMultiCollectionRecallResult &) = default ;
    ChatWithKnowledgeBaseResponseBodyMultiCollectionRecallResult& operator=(ChatWithKnowledgeBaseResponseBodyMultiCollectionRecallResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->entities_ == nullptr
        && return this->matches_ == nullptr && return this->relations_ == nullptr && return this->requestId_ == nullptr && return this->status_ == nullptr && return this->tokens_ == nullptr
        && return this->usage_ == nullptr; };
    // entities Field Functions 
    bool hasEntities() const { return this->entities_ != nullptr;};
    void deleteEntities() { this->entities_ = nullptr;};
    inline const vector<string> & entities() const { DARABONBA_PTR_GET_CONST(entities_, vector<string>) };
    inline vector<string> entities() { DARABONBA_PTR_GET(entities_, vector<string>) };
    inline ChatWithKnowledgeBaseResponseBodyMultiCollectionRecallResult& setEntities(const vector<string> & entities) { DARABONBA_PTR_SET_VALUE(entities_, entities) };
    inline ChatWithKnowledgeBaseResponseBodyMultiCollectionRecallResult& setEntities(vector<string> && entities) { DARABONBA_PTR_SET_RVALUE(entities_, entities) };


    // matches Field Functions 
    bool hasMatches() const { return this->matches_ != nullptr;};
    void deleteMatches() { this->matches_ = nullptr;};
    inline const vector<Models::ChatWithKnowledgeBaseResponseBodyMultiCollectionRecallResultMatches> & matches() const { DARABONBA_PTR_GET_CONST(matches_, vector<Models::ChatWithKnowledgeBaseResponseBodyMultiCollectionRecallResultMatches>) };
    inline vector<Models::ChatWithKnowledgeBaseResponseBodyMultiCollectionRecallResultMatches> matches() { DARABONBA_PTR_GET(matches_, vector<Models::ChatWithKnowledgeBaseResponseBodyMultiCollectionRecallResultMatches>) };
    inline ChatWithKnowledgeBaseResponseBodyMultiCollectionRecallResult& setMatches(const vector<Models::ChatWithKnowledgeBaseResponseBodyMultiCollectionRecallResultMatches> & matches) { DARABONBA_PTR_SET_VALUE(matches_, matches) };
    inline ChatWithKnowledgeBaseResponseBodyMultiCollectionRecallResult& setMatches(vector<Models::ChatWithKnowledgeBaseResponseBodyMultiCollectionRecallResultMatches> && matches) { DARABONBA_PTR_SET_RVALUE(matches_, matches) };


    // relations Field Functions 
    bool hasRelations() const { return this->relations_ != nullptr;};
    void deleteRelations() { this->relations_ = nullptr;};
    inline const vector<string> & relations() const { DARABONBA_PTR_GET_CONST(relations_, vector<string>) };
    inline vector<string> relations() { DARABONBA_PTR_GET(relations_, vector<string>) };
    inline ChatWithKnowledgeBaseResponseBodyMultiCollectionRecallResult& setRelations(const vector<string> & relations) { DARABONBA_PTR_SET_VALUE(relations_, relations) };
    inline ChatWithKnowledgeBaseResponseBodyMultiCollectionRecallResult& setRelations(vector<string> && relations) { DARABONBA_PTR_SET_RVALUE(relations_, relations) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ChatWithKnowledgeBaseResponseBodyMultiCollectionRecallResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ChatWithKnowledgeBaseResponseBodyMultiCollectionRecallResult& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tokens Field Functions 
    bool hasTokens() const { return this->tokens_ != nullptr;};
    void deleteTokens() { this->tokens_ = nullptr;};
    inline int64_t tokens() const { DARABONBA_PTR_GET_DEFAULT(tokens_, 0L) };
    inline ChatWithKnowledgeBaseResponseBodyMultiCollectionRecallResult& setTokens(int64_t tokens) { DARABONBA_PTR_SET_VALUE(tokens_, tokens) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline const Models::ChatWithKnowledgeBaseResponseBodyMultiCollectionRecallResultUsage & usage() const { DARABONBA_PTR_GET_CONST(usage_, Models::ChatWithKnowledgeBaseResponseBodyMultiCollectionRecallResultUsage) };
    inline Models::ChatWithKnowledgeBaseResponseBodyMultiCollectionRecallResultUsage usage() { DARABONBA_PTR_GET(usage_, Models::ChatWithKnowledgeBaseResponseBodyMultiCollectionRecallResultUsage) };
    inline ChatWithKnowledgeBaseResponseBodyMultiCollectionRecallResult& setUsage(const Models::ChatWithKnowledgeBaseResponseBodyMultiCollectionRecallResultUsage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
    inline ChatWithKnowledgeBaseResponseBodyMultiCollectionRecallResult& setUsage(Models::ChatWithKnowledgeBaseResponseBodyMultiCollectionRecallResultUsage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


  protected:
    // The details of the entity.
    std::shared_ptr<vector<string>> entities_ = nullptr;
    // The retrieved items.
    std::shared_ptr<vector<Models::ChatWithKnowledgeBaseResponseBodyMultiCollectionRecallResultMatches>> matches_ = nullptr;
    // The name of the file.
    std::shared_ptr<vector<string>> relations_ = nullptr;
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The status of the operation. Valid values:
    // 
    // *   **success**
    // *   **fail**
    std::shared_ptr<string> status_ = nullptr;
    // The number of tokens that are consumed.
    std::shared_ptr<int64_t> tokens_ = nullptr;
    // The number of tokens that are consumed during document understanding or embedding.
    std::shared_ptr<Models::ChatWithKnowledgeBaseResponseBodyMultiCollectionRecallResultUsage> usage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
