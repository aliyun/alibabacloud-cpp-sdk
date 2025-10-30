// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYKNOWLEDGEBASESCONTENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYKNOWLEDGEBASESCONTENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryKnowledgeBasesContentResponseBodyEntities.hpp>
#include <alibabacloud/models/QueryKnowledgeBasesContentResponseBodyMatches.hpp>
#include <alibabacloud/models/QueryKnowledgeBasesContentResponseBodyRelations.hpp>
#include <alibabacloud/models/QueryKnowledgeBasesContentResponseBodyUsage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class QueryKnowledgeBasesContentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryKnowledgeBasesContentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EmbeddingTokens, embeddingTokens_);
      DARABONBA_PTR_TO_JSON(Entities, entities_);
      DARABONBA_PTR_TO_JSON(Matches, matches_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Relations, relations_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, QueryKnowledgeBasesContentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EmbeddingTokens, embeddingTokens_);
      DARABONBA_PTR_FROM_JSON(Entities, entities_);
      DARABONBA_PTR_FROM_JSON(Matches, matches_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Relations, relations_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Usage, usage_);
    };
    QueryKnowledgeBasesContentResponseBody() = default ;
    QueryKnowledgeBasesContentResponseBody(const QueryKnowledgeBasesContentResponseBody &) = default ;
    QueryKnowledgeBasesContentResponseBody(QueryKnowledgeBasesContentResponseBody &&) = default ;
    QueryKnowledgeBasesContentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryKnowledgeBasesContentResponseBody() = default ;
    QueryKnowledgeBasesContentResponseBody& operator=(const QueryKnowledgeBasesContentResponseBody &) = default ;
    QueryKnowledgeBasesContentResponseBody& operator=(QueryKnowledgeBasesContentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->embeddingTokens_ == nullptr
        && return this->entities_ == nullptr && return this->matches_ == nullptr && return this->message_ == nullptr && return this->relations_ == nullptr && return this->requestId_ == nullptr
        && return this->status_ == nullptr && return this->usage_ == nullptr; };
    // embeddingTokens Field Functions 
    bool hasEmbeddingTokens() const { return this->embeddingTokens_ != nullptr;};
    void deleteEmbeddingTokens() { this->embeddingTokens_ = nullptr;};
    inline string embeddingTokens() const { DARABONBA_PTR_GET_DEFAULT(embeddingTokens_, "") };
    inline QueryKnowledgeBasesContentResponseBody& setEmbeddingTokens(string embeddingTokens) { DARABONBA_PTR_SET_VALUE(embeddingTokens_, embeddingTokens) };


    // entities Field Functions 
    bool hasEntities() const { return this->entities_ != nullptr;};
    void deleteEntities() { this->entities_ = nullptr;};
    inline const QueryKnowledgeBasesContentResponseBodyEntities & entities() const { DARABONBA_PTR_GET_CONST(entities_, QueryKnowledgeBasesContentResponseBodyEntities) };
    inline QueryKnowledgeBasesContentResponseBodyEntities entities() { DARABONBA_PTR_GET(entities_, QueryKnowledgeBasesContentResponseBodyEntities) };
    inline QueryKnowledgeBasesContentResponseBody& setEntities(const QueryKnowledgeBasesContentResponseBodyEntities & entities) { DARABONBA_PTR_SET_VALUE(entities_, entities) };
    inline QueryKnowledgeBasesContentResponseBody& setEntities(QueryKnowledgeBasesContentResponseBodyEntities && entities) { DARABONBA_PTR_SET_RVALUE(entities_, entities) };


    // matches Field Functions 
    bool hasMatches() const { return this->matches_ != nullptr;};
    void deleteMatches() { this->matches_ = nullptr;};
    inline const QueryKnowledgeBasesContentResponseBodyMatches & matches() const { DARABONBA_PTR_GET_CONST(matches_, QueryKnowledgeBasesContentResponseBodyMatches) };
    inline QueryKnowledgeBasesContentResponseBodyMatches matches() { DARABONBA_PTR_GET(matches_, QueryKnowledgeBasesContentResponseBodyMatches) };
    inline QueryKnowledgeBasesContentResponseBody& setMatches(const QueryKnowledgeBasesContentResponseBodyMatches & matches) { DARABONBA_PTR_SET_VALUE(matches_, matches) };
    inline QueryKnowledgeBasesContentResponseBody& setMatches(QueryKnowledgeBasesContentResponseBodyMatches && matches) { DARABONBA_PTR_SET_RVALUE(matches_, matches) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryKnowledgeBasesContentResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // relations Field Functions 
    bool hasRelations() const { return this->relations_ != nullptr;};
    void deleteRelations() { this->relations_ = nullptr;};
    inline const QueryKnowledgeBasesContentResponseBodyRelations & relations() const { DARABONBA_PTR_GET_CONST(relations_, QueryKnowledgeBasesContentResponseBodyRelations) };
    inline QueryKnowledgeBasesContentResponseBodyRelations relations() { DARABONBA_PTR_GET(relations_, QueryKnowledgeBasesContentResponseBodyRelations) };
    inline QueryKnowledgeBasesContentResponseBody& setRelations(const QueryKnowledgeBasesContentResponseBodyRelations & relations) { DARABONBA_PTR_SET_VALUE(relations_, relations) };
    inline QueryKnowledgeBasesContentResponseBody& setRelations(QueryKnowledgeBasesContentResponseBodyRelations && relations) { DARABONBA_PTR_SET_RVALUE(relations_, relations) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryKnowledgeBasesContentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline QueryKnowledgeBasesContentResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline const QueryKnowledgeBasesContentResponseBodyUsage & usage() const { DARABONBA_PTR_GET_CONST(usage_, QueryKnowledgeBasesContentResponseBodyUsage) };
    inline QueryKnowledgeBasesContentResponseBodyUsage usage() { DARABONBA_PTR_GET(usage_, QueryKnowledgeBasesContentResponseBodyUsage) };
    inline QueryKnowledgeBasesContentResponseBody& setUsage(const QueryKnowledgeBasesContentResponseBodyUsage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
    inline QueryKnowledgeBasesContentResponseBody& setUsage(QueryKnowledgeBasesContentResponseBodyUsage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


  protected:
    std::shared_ptr<string> embeddingTokens_ = nullptr;
    std::shared_ptr<QueryKnowledgeBasesContentResponseBodyEntities> entities_ = nullptr;
    std::shared_ptr<QueryKnowledgeBasesContentResponseBodyMatches> matches_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<QueryKnowledgeBasesContentResponseBodyRelations> relations_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<QueryKnowledgeBasesContentResponseBodyUsage> usage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
