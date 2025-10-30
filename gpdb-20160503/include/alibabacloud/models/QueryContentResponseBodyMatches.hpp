// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCONTENTRESPONSEBODYMATCHES_HPP_
#define ALIBABACLOUD_MODELS_QUERYCONTENTRESPONSEBODYMATCHES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryContentResponseBodyMatchesMatchList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class QueryContentResponseBodyMatches : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryContentResponseBodyMatches& obj) { 
      DARABONBA_PTR_TO_JSON(MatchList, matchList_);
    };
    friend void from_json(const Darabonba::Json& j, QueryContentResponseBodyMatches& obj) { 
      DARABONBA_PTR_FROM_JSON(MatchList, matchList_);
    };
    QueryContentResponseBodyMatches() = default ;
    QueryContentResponseBodyMatches(const QueryContentResponseBodyMatches &) = default ;
    QueryContentResponseBodyMatches(QueryContentResponseBodyMatches &&) = default ;
    QueryContentResponseBodyMatches(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryContentResponseBodyMatches() = default ;
    QueryContentResponseBodyMatches& operator=(const QueryContentResponseBodyMatches &) = default ;
    QueryContentResponseBodyMatches& operator=(QueryContentResponseBodyMatches &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->matchList_ == nullptr; };
    // matchList Field Functions 
    bool hasMatchList() const { return this->matchList_ != nullptr;};
    void deleteMatchList() { this->matchList_ = nullptr;};
    inline const vector<Models::QueryContentResponseBodyMatchesMatchList> & matchList() const { DARABONBA_PTR_GET_CONST(matchList_, vector<Models::QueryContentResponseBodyMatchesMatchList>) };
    inline vector<Models::QueryContentResponseBodyMatchesMatchList> matchList() { DARABONBA_PTR_GET(matchList_, vector<Models::QueryContentResponseBodyMatchesMatchList>) };
    inline QueryContentResponseBodyMatches& setMatchList(const vector<Models::QueryContentResponseBodyMatchesMatchList> & matchList) { DARABONBA_PTR_SET_VALUE(matchList_, matchList) };
    inline QueryContentResponseBodyMatches& setMatchList(vector<Models::QueryContentResponseBodyMatchesMatchList> && matchList) { DARABONBA_PTR_SET_RVALUE(matchList_, matchList) };


  protected:
    std::shared_ptr<vector<Models::QueryContentResponseBodyMatchesMatchList>> matchList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
