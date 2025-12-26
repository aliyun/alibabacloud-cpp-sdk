// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTKNOWLEDGEBASESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTKNOWLEDGEBASESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/KnowledgeBase.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAILangStudio20240710
{
namespace Models
{
  class ListKnowledgeBasesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListKnowledgeBasesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(KnowledgeBases, knowledgeBases_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListKnowledgeBasesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(KnowledgeBases, knowledgeBases_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListKnowledgeBasesResponseBody() = default ;
    ListKnowledgeBasesResponseBody(const ListKnowledgeBasesResponseBody &) = default ;
    ListKnowledgeBasesResponseBody(ListKnowledgeBasesResponseBody &&) = default ;
    ListKnowledgeBasesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListKnowledgeBasesResponseBody() = default ;
    ListKnowledgeBasesResponseBody& operator=(const ListKnowledgeBasesResponseBody &) = default ;
    ListKnowledgeBasesResponseBody& operator=(ListKnowledgeBasesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->knowledgeBases_ == nullptr
        && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // knowledgeBases Field Functions 
    bool hasKnowledgeBases() const { return this->knowledgeBases_ != nullptr;};
    void deleteKnowledgeBases() { this->knowledgeBases_ = nullptr;};
    inline const vector<KnowledgeBase> & knowledgeBases() const { DARABONBA_PTR_GET_CONST(knowledgeBases_, vector<KnowledgeBase>) };
    inline vector<KnowledgeBase> knowledgeBases() { DARABONBA_PTR_GET(knowledgeBases_, vector<KnowledgeBase>) };
    inline ListKnowledgeBasesResponseBody& setKnowledgeBases(const vector<KnowledgeBase> & knowledgeBases) { DARABONBA_PTR_SET_VALUE(knowledgeBases_, knowledgeBases) };
    inline ListKnowledgeBasesResponseBody& setKnowledgeBases(vector<KnowledgeBase> && knowledgeBases) { DARABONBA_PTR_SET_RVALUE(knowledgeBases_, knowledgeBases) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListKnowledgeBasesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListKnowledgeBasesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListKnowledgeBasesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListKnowledgeBasesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<KnowledgeBase>> knowledgeBases_ = nullptr;
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAILangStudio20240710
#endif
