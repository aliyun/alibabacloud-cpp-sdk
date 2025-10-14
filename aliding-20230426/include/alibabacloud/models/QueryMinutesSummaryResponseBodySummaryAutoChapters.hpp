// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMINUTESSUMMARYRESPONSEBODYSUMMARYAUTOCHAPTERS_HPP_
#define ALIBABACLOUD_MODELS_QUERYMINUTESSUMMARYRESPONSEBODYSUMMARYAUTOCHAPTERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class QueryMinutesSummaryResponseBodySummaryAutoChapters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMinutesSummaryResponseBodySummaryAutoChapters& obj) { 
      DARABONBA_PTR_TO_JSON(End, end_);
      DARABONBA_PTR_TO_JSON(Headline, headline_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Start, start_);
      DARABONBA_PTR_TO_JSON(Summary, summary_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMinutesSummaryResponseBodySummaryAutoChapters& obj) { 
      DARABONBA_PTR_FROM_JSON(End, end_);
      DARABONBA_PTR_FROM_JSON(Headline, headline_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Start, start_);
      DARABONBA_PTR_FROM_JSON(Summary, summary_);
    };
    QueryMinutesSummaryResponseBodySummaryAutoChapters() = default ;
    QueryMinutesSummaryResponseBodySummaryAutoChapters(const QueryMinutesSummaryResponseBodySummaryAutoChapters &) = default ;
    QueryMinutesSummaryResponseBodySummaryAutoChapters(QueryMinutesSummaryResponseBodySummaryAutoChapters &&) = default ;
    QueryMinutesSummaryResponseBodySummaryAutoChapters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMinutesSummaryResponseBodySummaryAutoChapters() = default ;
    QueryMinutesSummaryResponseBodySummaryAutoChapters& operator=(const QueryMinutesSummaryResponseBodySummaryAutoChapters &) = default ;
    QueryMinutesSummaryResponseBodySummaryAutoChapters& operator=(QueryMinutesSummaryResponseBodySummaryAutoChapters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->end_ == nullptr
        && return this->headline_ == nullptr && return this->id_ == nullptr && return this->start_ == nullptr && return this->summary_ == nullptr; };
    // end Field Functions 
    bool hasEnd() const { return this->end_ != nullptr;};
    void deleteEnd() { this->end_ = nullptr;};
    inline int64_t end() const { DARABONBA_PTR_GET_DEFAULT(end_, 0L) };
    inline QueryMinutesSummaryResponseBodySummaryAutoChapters& setEnd(int64_t end) { DARABONBA_PTR_SET_VALUE(end_, end) };


    // headline Field Functions 
    bool hasHeadline() const { return this->headline_ != nullptr;};
    void deleteHeadline() { this->headline_ = nullptr;};
    inline string headline() const { DARABONBA_PTR_GET_DEFAULT(headline_, "") };
    inline QueryMinutesSummaryResponseBodySummaryAutoChapters& setHeadline(string headline) { DARABONBA_PTR_SET_VALUE(headline_, headline) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline QueryMinutesSummaryResponseBodySummaryAutoChapters& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // start Field Functions 
    bool hasStart() const { return this->start_ != nullptr;};
    void deleteStart() { this->start_ = nullptr;};
    inline int64_t start() const { DARABONBA_PTR_GET_DEFAULT(start_, 0L) };
    inline QueryMinutesSummaryResponseBodySummaryAutoChapters& setStart(int64_t start) { DARABONBA_PTR_SET_VALUE(start_, start) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline string summary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
    inline QueryMinutesSummaryResponseBodySummaryAutoChapters& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


  protected:
    std::shared_ptr<int64_t> end_ = nullptr;
    std::shared_ptr<string> headline_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<int64_t> start_ = nullptr;
    std::shared_ptr<string> summary_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
