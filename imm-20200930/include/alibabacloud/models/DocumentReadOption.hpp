// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DOCUMENTREADOPTION_HPP_
#define ALIBABACLOUD_MODELS_DOCUMENTREADOPTION_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DocumentReadKeywordOption.hpp>
#include <alibabacloud/models/DocumentReadNarratorOption.hpp>
#include <alibabacloud/models/DocumentReadQuestionOption.hpp>
#include <alibabacloud/models/DocumentReadSummaryOption.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class DocumentReadOption : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DocumentReadOption& obj) { 
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(Narrator, narrator_);
      DARABONBA_PTR_TO_JSON(Question, question_);
      DARABONBA_PTR_TO_JSON(Summary, summary_);
    };
    friend void from_json(const Darabonba::Json& j, DocumentReadOption& obj) { 
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(Narrator, narrator_);
      DARABONBA_PTR_FROM_JSON(Question, question_);
      DARABONBA_PTR_FROM_JSON(Summary, summary_);
    };
    DocumentReadOption() = default ;
    DocumentReadOption(const DocumentReadOption &) = default ;
    DocumentReadOption(DocumentReadOption &&) = default ;
    DocumentReadOption(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DocumentReadOption() = default ;
    DocumentReadOption& operator=(const DocumentReadOption &) = default ;
    DocumentReadOption& operator=(DocumentReadOption &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->keyword_ == nullptr
        && this->narrator_ == nullptr && this->question_ == nullptr && this->summary_ == nullptr; };
    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline const DocumentReadKeywordOption & getKeyword() const { DARABONBA_PTR_GET_CONST(keyword_, DocumentReadKeywordOption) };
    inline DocumentReadKeywordOption getKeyword() { DARABONBA_PTR_GET(keyword_, DocumentReadKeywordOption) };
    inline DocumentReadOption& setKeyword(const DocumentReadKeywordOption & keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };
    inline DocumentReadOption& setKeyword(DocumentReadKeywordOption && keyword) { DARABONBA_PTR_SET_RVALUE(keyword_, keyword) };


    // narrator Field Functions 
    bool hasNarrator() const { return this->narrator_ != nullptr;};
    void deleteNarrator() { this->narrator_ = nullptr;};
    inline const DocumentReadNarratorOption & getNarrator() const { DARABONBA_PTR_GET_CONST(narrator_, DocumentReadNarratorOption) };
    inline DocumentReadNarratorOption getNarrator() { DARABONBA_PTR_GET(narrator_, DocumentReadNarratorOption) };
    inline DocumentReadOption& setNarrator(const DocumentReadNarratorOption & narrator) { DARABONBA_PTR_SET_VALUE(narrator_, narrator) };
    inline DocumentReadOption& setNarrator(DocumentReadNarratorOption && narrator) { DARABONBA_PTR_SET_RVALUE(narrator_, narrator) };


    // question Field Functions 
    bool hasQuestion() const { return this->question_ != nullptr;};
    void deleteQuestion() { this->question_ = nullptr;};
    inline const DocumentReadQuestionOption & getQuestion() const { DARABONBA_PTR_GET_CONST(question_, DocumentReadQuestionOption) };
    inline DocumentReadQuestionOption getQuestion() { DARABONBA_PTR_GET(question_, DocumentReadQuestionOption) };
    inline DocumentReadOption& setQuestion(const DocumentReadQuestionOption & question) { DARABONBA_PTR_SET_VALUE(question_, question) };
    inline DocumentReadOption& setQuestion(DocumentReadQuestionOption && question) { DARABONBA_PTR_SET_RVALUE(question_, question) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline const DocumentReadSummaryOption & getSummary() const { DARABONBA_PTR_GET_CONST(summary_, DocumentReadSummaryOption) };
    inline DocumentReadSummaryOption getSummary() { DARABONBA_PTR_GET(summary_, DocumentReadSummaryOption) };
    inline DocumentReadOption& setSummary(const DocumentReadSummaryOption & summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };
    inline DocumentReadOption& setSummary(DocumentReadSummaryOption && summary) { DARABONBA_PTR_SET_RVALUE(summary_, summary) };


  protected:
    // The document intensive reading keyword extraction options.
    shared_ptr<DocumentReadKeywordOption> keyword_ {};
    // The document intensive reading guide options.
    shared_ptr<DocumentReadNarratorOption> narrator_ {};
    // The document intensive reading question guide options.
    shared_ptr<DocumentReadQuestionOption> question_ {};
    // The document intensive reading summary options.
    shared_ptr<DocumentReadSummaryOption> summary_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
