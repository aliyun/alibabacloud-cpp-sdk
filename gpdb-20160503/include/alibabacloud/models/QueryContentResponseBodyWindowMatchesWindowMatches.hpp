// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCONTENTRESPONSEBODYWINDOWMATCHESWINDOWMATCHES_HPP_
#define ALIBABACLOUD_MODELS_QUERYCONTENTRESPONSEBODYWINDOWMATCHESWINDOWMATCHES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryContentResponseBodyWindowMatchesWindowMatchesWindowMatch.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class QueryContentResponseBodyWindowMatchesWindowMatches : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryContentResponseBodyWindowMatchesWindowMatches& obj) { 
      DARABONBA_PTR_TO_JSON(WindowMatch, windowMatch_);
    };
    friend void from_json(const Darabonba::Json& j, QueryContentResponseBodyWindowMatchesWindowMatches& obj) { 
      DARABONBA_PTR_FROM_JSON(WindowMatch, windowMatch_);
    };
    QueryContentResponseBodyWindowMatchesWindowMatches() = default ;
    QueryContentResponseBodyWindowMatchesWindowMatches(const QueryContentResponseBodyWindowMatchesWindowMatches &) = default ;
    QueryContentResponseBodyWindowMatchesWindowMatches(QueryContentResponseBodyWindowMatchesWindowMatches &&) = default ;
    QueryContentResponseBodyWindowMatchesWindowMatches(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryContentResponseBodyWindowMatchesWindowMatches() = default ;
    QueryContentResponseBodyWindowMatchesWindowMatches& operator=(const QueryContentResponseBodyWindowMatchesWindowMatches &) = default ;
    QueryContentResponseBodyWindowMatchesWindowMatches& operator=(QueryContentResponseBodyWindowMatchesWindowMatches &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->windowMatch_ == nullptr; };
    // windowMatch Field Functions 
    bool hasWindowMatch() const { return this->windowMatch_ != nullptr;};
    void deleteWindowMatch() { this->windowMatch_ = nullptr;};
    inline const Models::QueryContentResponseBodyWindowMatchesWindowMatchesWindowMatch & windowMatch() const { DARABONBA_PTR_GET_CONST(windowMatch_, Models::QueryContentResponseBodyWindowMatchesWindowMatchesWindowMatch) };
    inline Models::QueryContentResponseBodyWindowMatchesWindowMatchesWindowMatch windowMatch() { DARABONBA_PTR_GET(windowMatch_, Models::QueryContentResponseBodyWindowMatchesWindowMatchesWindowMatch) };
    inline QueryContentResponseBodyWindowMatchesWindowMatches& setWindowMatch(const Models::QueryContentResponseBodyWindowMatchesWindowMatchesWindowMatch & windowMatch) { DARABONBA_PTR_SET_VALUE(windowMatch_, windowMatch) };
    inline QueryContentResponseBodyWindowMatchesWindowMatches& setWindowMatch(Models::QueryContentResponseBodyWindowMatchesWindowMatchesWindowMatch && windowMatch) { DARABONBA_PTR_SET_RVALUE(windowMatch_, windowMatch) };


  protected:
    // List of individual top windowed matches.
    std::shared_ptr<Models::QueryContentResponseBodyWindowMatchesWindowMatchesWindowMatch> windowMatch_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
