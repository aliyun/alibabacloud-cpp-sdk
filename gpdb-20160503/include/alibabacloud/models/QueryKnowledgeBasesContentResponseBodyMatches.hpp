// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYKNOWLEDGEBASESCONTENTRESPONSEBODYMATCHES_HPP_
#define ALIBABACLOUD_MODELS_QUERYKNOWLEDGEBASESCONTENTRESPONSEBODYMATCHES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryKnowledgeBasesContentResponseBodyMatchesMatchList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class QueryKnowledgeBasesContentResponseBodyMatches : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryKnowledgeBasesContentResponseBodyMatches& obj) { 
      DARABONBA_PTR_TO_JSON(MatchList, matchList_);
    };
    friend void from_json(const Darabonba::Json& j, QueryKnowledgeBasesContentResponseBodyMatches& obj) { 
      DARABONBA_PTR_FROM_JSON(MatchList, matchList_);
    };
    QueryKnowledgeBasesContentResponseBodyMatches() = default ;
    QueryKnowledgeBasesContentResponseBodyMatches(const QueryKnowledgeBasesContentResponseBodyMatches &) = default ;
    QueryKnowledgeBasesContentResponseBodyMatches(QueryKnowledgeBasesContentResponseBodyMatches &&) = default ;
    QueryKnowledgeBasesContentResponseBodyMatches(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryKnowledgeBasesContentResponseBodyMatches() = default ;
    QueryKnowledgeBasesContentResponseBodyMatches& operator=(const QueryKnowledgeBasesContentResponseBodyMatches &) = default ;
    QueryKnowledgeBasesContentResponseBodyMatches& operator=(QueryKnowledgeBasesContentResponseBodyMatches &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->matchList_ == nullptr; };
    // matchList Field Functions 
    bool hasMatchList() const { return this->matchList_ != nullptr;};
    void deleteMatchList() { this->matchList_ = nullptr;};
    inline const vector<Models::QueryKnowledgeBasesContentResponseBodyMatchesMatchList> & matchList() const { DARABONBA_PTR_GET_CONST(matchList_, vector<Models::QueryKnowledgeBasesContentResponseBodyMatchesMatchList>) };
    inline vector<Models::QueryKnowledgeBasesContentResponseBodyMatchesMatchList> matchList() { DARABONBA_PTR_GET(matchList_, vector<Models::QueryKnowledgeBasesContentResponseBodyMatchesMatchList>) };
    inline QueryKnowledgeBasesContentResponseBodyMatches& setMatchList(const vector<Models::QueryKnowledgeBasesContentResponseBodyMatchesMatchList> & matchList) { DARABONBA_PTR_SET_VALUE(matchList_, matchList) };
    inline QueryKnowledgeBasesContentResponseBodyMatches& setMatchList(vector<Models::QueryKnowledgeBasesContentResponseBodyMatchesMatchList> && matchList) { DARABONBA_PTR_SET_RVALUE(matchList_, matchList) };


  protected:
    std::shared_ptr<vector<Models::QueryKnowledgeBasesContentResponseBodyMatchesMatchList>> matchList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
