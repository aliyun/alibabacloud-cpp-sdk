// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCONTENTRESPONSEBODYWINDOWMATCHESWINDOWMATCHESWINDOWMATCH_HPP_
#define ALIBABACLOUD_MODELS_QUERYCONTENTRESPONSEBODYWINDOWMATCHESWINDOWMATCHESWINDOWMATCH_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryContentResponseBodyWindowMatchesWindowMatchesWindowMatchWindowMatch.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class QueryContentResponseBodyWindowMatchesWindowMatchesWindowMatch : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryContentResponseBodyWindowMatchesWindowMatchesWindowMatch& obj) { 
      DARABONBA_PTR_TO_JSON(windowMatch, windowMatch_);
    };
    friend void from_json(const Darabonba::Json& j, QueryContentResponseBodyWindowMatchesWindowMatchesWindowMatch& obj) { 
      DARABONBA_PTR_FROM_JSON(windowMatch, windowMatch_);
    };
    QueryContentResponseBodyWindowMatchesWindowMatchesWindowMatch() = default ;
    QueryContentResponseBodyWindowMatchesWindowMatchesWindowMatch(const QueryContentResponseBodyWindowMatchesWindowMatchesWindowMatch &) = default ;
    QueryContentResponseBodyWindowMatchesWindowMatchesWindowMatch(QueryContentResponseBodyWindowMatchesWindowMatchesWindowMatch &&) = default ;
    QueryContentResponseBodyWindowMatchesWindowMatchesWindowMatch(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryContentResponseBodyWindowMatchesWindowMatchesWindowMatch() = default ;
    QueryContentResponseBodyWindowMatchesWindowMatchesWindowMatch& operator=(const QueryContentResponseBodyWindowMatchesWindowMatchesWindowMatch &) = default ;
    QueryContentResponseBodyWindowMatchesWindowMatchesWindowMatch& operator=(QueryContentResponseBodyWindowMatchesWindowMatchesWindowMatch &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->windowMatch_ != nullptr; };
    // windowMatch Field Functions 
    bool hasWindowMatch() const { return this->windowMatch_ != nullptr;};
    void deleteWindowMatch() { this->windowMatch_ = nullptr;};
    inline const vector<Models::QueryContentResponseBodyWindowMatchesWindowMatchesWindowMatchWindowMatch> & windowMatch() const { DARABONBA_PTR_GET_CONST(windowMatch_, vector<Models::QueryContentResponseBodyWindowMatchesWindowMatchesWindowMatchWindowMatch>) };
    inline vector<Models::QueryContentResponseBodyWindowMatchesWindowMatchesWindowMatchWindowMatch> windowMatch() { DARABONBA_PTR_GET(windowMatch_, vector<Models::QueryContentResponseBodyWindowMatchesWindowMatchesWindowMatchWindowMatch>) };
    inline QueryContentResponseBodyWindowMatchesWindowMatchesWindowMatch& setWindowMatch(const vector<Models::QueryContentResponseBodyWindowMatchesWindowMatchesWindowMatchWindowMatch> & windowMatch) { DARABONBA_PTR_SET_VALUE(windowMatch_, windowMatch) };
    inline QueryContentResponseBodyWindowMatchesWindowMatchesWindowMatch& setWindowMatch(vector<Models::QueryContentResponseBodyWindowMatchesWindowMatchesWindowMatchWindowMatch> && windowMatch) { DARABONBA_PTR_SET_RVALUE(windowMatch_, windowMatch) };


  protected:
    std::shared_ptr<vector<Models::QueryContentResponseBodyWindowMatchesWindowMatchesWindowMatchWindowMatch>> windowMatch_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
