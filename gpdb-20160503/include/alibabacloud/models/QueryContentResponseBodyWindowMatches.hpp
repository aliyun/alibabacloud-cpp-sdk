// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCONTENTRESPONSEBODYWINDOWMATCHES_HPP_
#define ALIBABACLOUD_MODELS_QUERYCONTENTRESPONSEBODYWINDOWMATCHES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryContentResponseBodyWindowMatchesWindowMatches.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class QueryContentResponseBodyWindowMatches : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryContentResponseBodyWindowMatches& obj) { 
      DARABONBA_PTR_TO_JSON(windowMatches, windowMatches_);
    };
    friend void from_json(const Darabonba::Json& j, QueryContentResponseBodyWindowMatches& obj) { 
      DARABONBA_PTR_FROM_JSON(windowMatches, windowMatches_);
    };
    QueryContentResponseBodyWindowMatches() = default ;
    QueryContentResponseBodyWindowMatches(const QueryContentResponseBodyWindowMatches &) = default ;
    QueryContentResponseBodyWindowMatches(QueryContentResponseBodyWindowMatches &&) = default ;
    QueryContentResponseBodyWindowMatches(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryContentResponseBodyWindowMatches() = default ;
    QueryContentResponseBodyWindowMatches& operator=(const QueryContentResponseBodyWindowMatches &) = default ;
    QueryContentResponseBodyWindowMatches& operator=(QueryContentResponseBodyWindowMatches &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->windowMatches_ != nullptr; };
    // windowMatches Field Functions 
    bool hasWindowMatches() const { return this->windowMatches_ != nullptr;};
    void deleteWindowMatches() { this->windowMatches_ = nullptr;};
    inline const vector<Models::QueryContentResponseBodyWindowMatchesWindowMatches> & windowMatches() const { DARABONBA_PTR_GET_CONST(windowMatches_, vector<Models::QueryContentResponseBodyWindowMatchesWindowMatches>) };
    inline vector<Models::QueryContentResponseBodyWindowMatchesWindowMatches> windowMatches() { DARABONBA_PTR_GET(windowMatches_, vector<Models::QueryContentResponseBodyWindowMatchesWindowMatches>) };
    inline QueryContentResponseBodyWindowMatches& setWindowMatches(const vector<Models::QueryContentResponseBodyWindowMatchesWindowMatches> & windowMatches) { DARABONBA_PTR_SET_VALUE(windowMatches_, windowMatches) };
    inline QueryContentResponseBodyWindowMatches& setWindowMatches(vector<Models::QueryContentResponseBodyWindowMatchesWindowMatches> && windowMatches) { DARABONBA_PTR_SET_RVALUE(windowMatches_, windowMatches) };


  protected:
    std::shared_ptr<vector<Models::QueryContentResponseBodyWindowMatchesWindowMatches>> windowMatches_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
