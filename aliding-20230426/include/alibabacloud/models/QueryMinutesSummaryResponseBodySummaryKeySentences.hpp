// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMINUTESSUMMARYRESPONSEBODYSUMMARYKEYSENTENCES_HPP_
#define ALIBABACLOUD_MODELS_QUERYMINUTESSUMMARYRESPONSEBODYSUMMARYKEYSENTENCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class QueryMinutesSummaryResponseBodySummaryKeySentences : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMinutesSummaryResponseBodySummaryKeySentences& obj) { 
      DARABONBA_PTR_TO_JSON(End, end_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(SentenceId, sentenceId_);
      DARABONBA_PTR_TO_JSON(Start, start_);
      DARABONBA_PTR_TO_JSON(Text, text_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMinutesSummaryResponseBodySummaryKeySentences& obj) { 
      DARABONBA_PTR_FROM_JSON(End, end_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(SentenceId, sentenceId_);
      DARABONBA_PTR_FROM_JSON(Start, start_);
      DARABONBA_PTR_FROM_JSON(Text, text_);
    };
    QueryMinutesSummaryResponseBodySummaryKeySentences() = default ;
    QueryMinutesSummaryResponseBodySummaryKeySentences(const QueryMinutesSummaryResponseBodySummaryKeySentences &) = default ;
    QueryMinutesSummaryResponseBodySummaryKeySentences(QueryMinutesSummaryResponseBodySummaryKeySentences &&) = default ;
    QueryMinutesSummaryResponseBodySummaryKeySentences(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMinutesSummaryResponseBodySummaryKeySentences() = default ;
    QueryMinutesSummaryResponseBodySummaryKeySentences& operator=(const QueryMinutesSummaryResponseBodySummaryKeySentences &) = default ;
    QueryMinutesSummaryResponseBodySummaryKeySentences& operator=(QueryMinutesSummaryResponseBodySummaryKeySentences &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->end_ != nullptr
        && this->id_ != nullptr && this->sentenceId_ != nullptr && this->start_ != nullptr && this->text_ != nullptr; };
    // end Field Functions 
    bool hasEnd() const { return this->end_ != nullptr;};
    void deleteEnd() { this->end_ = nullptr;};
    inline int64_t end() const { DARABONBA_PTR_GET_DEFAULT(end_, 0L) };
    inline QueryMinutesSummaryResponseBodySummaryKeySentences& setEnd(int64_t end) { DARABONBA_PTR_SET_VALUE(end_, end) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline QueryMinutesSummaryResponseBodySummaryKeySentences& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // sentenceId Field Functions 
    bool hasSentenceId() const { return this->sentenceId_ != nullptr;};
    void deleteSentenceId() { this->sentenceId_ = nullptr;};
    inline int64_t sentenceId() const { DARABONBA_PTR_GET_DEFAULT(sentenceId_, 0L) };
    inline QueryMinutesSummaryResponseBodySummaryKeySentences& setSentenceId(int64_t sentenceId) { DARABONBA_PTR_SET_VALUE(sentenceId_, sentenceId) };


    // start Field Functions 
    bool hasStart() const { return this->start_ != nullptr;};
    void deleteStart() { this->start_ = nullptr;};
    inline int64_t start() const { DARABONBA_PTR_GET_DEFAULT(start_, 0L) };
    inline QueryMinutesSummaryResponseBodySummaryKeySentences& setStart(int64_t start) { DARABONBA_PTR_SET_VALUE(start_, start) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline QueryMinutesSummaryResponseBodySummaryKeySentences& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


  protected:
    std::shared_ptr<int64_t> end_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<int64_t> sentenceId_ = nullptr;
    std::shared_ptr<int64_t> start_ = nullptr;
    std::shared_ptr<string> text_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
