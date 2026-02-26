// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DOCUMENTPARSEOPTION_HPP_
#define ALIBABACLOUD_MODELS_DOCUMENTPARSEOPTION_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DocumentParseKeywordOption.hpp>
#include <alibabacloud/models/DocumentParseNarratorOption.hpp>
#include <alibabacloud/models/DocumentParseQuestionOption.hpp>
#include <alibabacloud/models/DocumentParseSummaryOption.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class DocumentParseOption : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DocumentParseOption& obj) { 
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(Narrator, narrator_);
      DARABONBA_PTR_TO_JSON(Question, question_);
      DARABONBA_PTR_TO_JSON(Summary, summary_);
    };
    friend void from_json(const Darabonba::Json& j, DocumentParseOption& obj) { 
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(Narrator, narrator_);
      DARABONBA_PTR_FROM_JSON(Question, question_);
      DARABONBA_PTR_FROM_JSON(Summary, summary_);
    };
    DocumentParseOption() = default ;
    DocumentParseOption(const DocumentParseOption &) = default ;
    DocumentParseOption(DocumentParseOption &&) = default ;
    DocumentParseOption(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DocumentParseOption() = default ;
    DocumentParseOption& operator=(const DocumentParseOption &) = default ;
    DocumentParseOption& operator=(DocumentParseOption &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->keyword_ == nullptr
        && this->narrator_ == nullptr && this->question_ == nullptr && this->summary_ == nullptr; };
    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline const DocumentParseKeywordOption & getKeyword() const { DARABONBA_PTR_GET_CONST(keyword_, DocumentParseKeywordOption) };
    inline DocumentParseKeywordOption getKeyword() { DARABONBA_PTR_GET(keyword_, DocumentParseKeywordOption) };
    inline DocumentParseOption& setKeyword(const DocumentParseKeywordOption & keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };
    inline DocumentParseOption& setKeyword(DocumentParseKeywordOption && keyword) { DARABONBA_PTR_SET_RVALUE(keyword_, keyword) };


    // narrator Field Functions 
    bool hasNarrator() const { return this->narrator_ != nullptr;};
    void deleteNarrator() { this->narrator_ = nullptr;};
    inline const DocumentParseNarratorOption & getNarrator() const { DARABONBA_PTR_GET_CONST(narrator_, DocumentParseNarratorOption) };
    inline DocumentParseNarratorOption getNarrator() { DARABONBA_PTR_GET(narrator_, DocumentParseNarratorOption) };
    inline DocumentParseOption& setNarrator(const DocumentParseNarratorOption & narrator) { DARABONBA_PTR_SET_VALUE(narrator_, narrator) };
    inline DocumentParseOption& setNarrator(DocumentParseNarratorOption && narrator) { DARABONBA_PTR_SET_RVALUE(narrator_, narrator) };


    // question Field Functions 
    bool hasQuestion() const { return this->question_ != nullptr;};
    void deleteQuestion() { this->question_ = nullptr;};
    inline const DocumentParseQuestionOption & getQuestion() const { DARABONBA_PTR_GET_CONST(question_, DocumentParseQuestionOption) };
    inline DocumentParseQuestionOption getQuestion() { DARABONBA_PTR_GET(question_, DocumentParseQuestionOption) };
    inline DocumentParseOption& setQuestion(const DocumentParseQuestionOption & question) { DARABONBA_PTR_SET_VALUE(question_, question) };
    inline DocumentParseOption& setQuestion(DocumentParseQuestionOption && question) { DARABONBA_PTR_SET_RVALUE(question_, question) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline const DocumentParseSummaryOption & getSummary() const { DARABONBA_PTR_GET_CONST(summary_, DocumentParseSummaryOption) };
    inline DocumentParseSummaryOption getSummary() { DARABONBA_PTR_GET(summary_, DocumentParseSummaryOption) };
    inline DocumentParseOption& setSummary(const DocumentParseSummaryOption & summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };
    inline DocumentParseOption& setSummary(DocumentParseSummaryOption && summary) { DARABONBA_PTR_SET_RVALUE(summary_, summary) };


  protected:
    shared_ptr<DocumentParseKeywordOption> keyword_ {};
    shared_ptr<DocumentParseNarratorOption> narrator_ {};
    shared_ptr<DocumentParseQuestionOption> question_ {};
    shared_ptr<DocumentParseSummaryOption> summary_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
