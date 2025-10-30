// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCOLLECTIONDATARESPONSEBODYMATCHES_HPP_
#define ALIBABACLOUD_MODELS_QUERYCOLLECTIONDATARESPONSEBODYMATCHES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryCollectionDataResponseBodyMatchesMatch.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class QueryCollectionDataResponseBodyMatches : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCollectionDataResponseBodyMatches& obj) { 
      DARABONBA_PTR_TO_JSON(match, match_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCollectionDataResponseBodyMatches& obj) { 
      DARABONBA_PTR_FROM_JSON(match, match_);
    };
    QueryCollectionDataResponseBodyMatches() = default ;
    QueryCollectionDataResponseBodyMatches(const QueryCollectionDataResponseBodyMatches &) = default ;
    QueryCollectionDataResponseBodyMatches(QueryCollectionDataResponseBodyMatches &&) = default ;
    QueryCollectionDataResponseBodyMatches(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCollectionDataResponseBodyMatches() = default ;
    QueryCollectionDataResponseBodyMatches& operator=(const QueryCollectionDataResponseBodyMatches &) = default ;
    QueryCollectionDataResponseBodyMatches& operator=(QueryCollectionDataResponseBodyMatches &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->match_ == nullptr; };
    // match Field Functions 
    bool hasMatch() const { return this->match_ != nullptr;};
    void deleteMatch() { this->match_ = nullptr;};
    inline const vector<Models::QueryCollectionDataResponseBodyMatchesMatch> & match() const { DARABONBA_PTR_GET_CONST(match_, vector<Models::QueryCollectionDataResponseBodyMatchesMatch>) };
    inline vector<Models::QueryCollectionDataResponseBodyMatchesMatch> match() { DARABONBA_PTR_GET(match_, vector<Models::QueryCollectionDataResponseBodyMatchesMatch>) };
    inline QueryCollectionDataResponseBodyMatches& setMatch(const vector<Models::QueryCollectionDataResponseBodyMatchesMatch> & match) { DARABONBA_PTR_SET_VALUE(match_, match) };
    inline QueryCollectionDataResponseBodyMatches& setMatch(vector<Models::QueryCollectionDataResponseBodyMatchesMatch> && match) { DARABONBA_PTR_SET_RVALUE(match_, match) };


  protected:
    std::shared_ptr<vector<Models::QueryCollectionDataResponseBodyMatchesMatch>> match_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
