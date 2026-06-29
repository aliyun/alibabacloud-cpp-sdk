// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TEMPLATEQUESTION_HPP_
#define ALIBABACLOUD_MODELS_TEMPLATEQUESTION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TemplateQuestion.hpp>
#include <alibabacloud/models/QuestionOption.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenITag20220616
{
namespace Models
{
  class TemplateQuestion : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TemplateQuestion& obj) { 
      DARABONBA_PTR_TO_JSON(Children, children_);
      DARABONBA_ANY_TO_JSON(Exif, exif_);
      DARABONBA_PTR_TO_JSON(MarkTitle, markTitle_);
      DARABONBA_PTR_TO_JSON(Options, options_);
      DARABONBA_PTR_TO_JSON(PreOptions, preOptions_);
      DARABONBA_PTR_TO_JSON(QuestionId, questionId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, TemplateQuestion& obj) { 
      DARABONBA_PTR_FROM_JSON(Children, children_);
      DARABONBA_ANY_FROM_JSON(Exif, exif_);
      DARABONBA_PTR_FROM_JSON(MarkTitle, markTitle_);
      DARABONBA_PTR_FROM_JSON(Options, options_);
      DARABONBA_PTR_FROM_JSON(PreOptions, preOptions_);
      DARABONBA_PTR_FROM_JSON(QuestionId, questionId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    TemplateQuestion() = default ;
    TemplateQuestion(const TemplateQuestion &) = default ;
    TemplateQuestion(TemplateQuestion &&) = default ;
    TemplateQuestion(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TemplateQuestion() = default ;
    TemplateQuestion& operator=(const TemplateQuestion &) = default ;
    TemplateQuestion& operator=(TemplateQuestion &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->children_ == nullptr
        && this->exif_ == nullptr && this->markTitle_ == nullptr && this->options_ == nullptr && this->preOptions_ == nullptr && this->questionId_ == nullptr
        && this->type_ == nullptr; };
    // children Field Functions 
    bool hasChildren() const { return this->children_ != nullptr;};
    void deleteChildren() { this->children_ = nullptr;};
    inline const vector<TemplateQuestion> & getChildren() const { DARABONBA_PTR_GET_CONST(children_, vector<TemplateQuestion>) };
    inline vector<TemplateQuestion> getChildren() { DARABONBA_PTR_GET(children_, vector<TemplateQuestion>) };
    inline TemplateQuestion& setChildren(const vector<TemplateQuestion> & children) { DARABONBA_PTR_SET_VALUE(children_, children) };
    inline TemplateQuestion& setChildren(vector<TemplateQuestion> && children) { DARABONBA_PTR_SET_RVALUE(children_, children) };


    // exif Field Functions 
    bool hasExif() const { return this->exif_ != nullptr;};
    void deleteExif() { this->exif_ = nullptr;};
    inline     const Darabonba::Json & getExif() const { DARABONBA_GET(exif_) };
    Darabonba::Json & getExif() { DARABONBA_GET(exif_) };
    inline TemplateQuestion& setExif(const Darabonba::Json & exif) { DARABONBA_SET_VALUE(exif_, exif) };
    inline TemplateQuestion& setExif(Darabonba::Json && exif) { DARABONBA_SET_RVALUE(exif_, exif) };


    // markTitle Field Functions 
    bool hasMarkTitle() const { return this->markTitle_ != nullptr;};
    void deleteMarkTitle() { this->markTitle_ = nullptr;};
    inline string getMarkTitle() const { DARABONBA_PTR_GET_DEFAULT(markTitle_, "") };
    inline TemplateQuestion& setMarkTitle(string markTitle) { DARABONBA_PTR_SET_VALUE(markTitle_, markTitle) };


    // options Field Functions 
    bool hasOptions() const { return this->options_ != nullptr;};
    void deleteOptions() { this->options_ = nullptr;};
    inline const vector<QuestionOption> & getOptions() const { DARABONBA_PTR_GET_CONST(options_, vector<QuestionOption>) };
    inline vector<QuestionOption> getOptions() { DARABONBA_PTR_GET(options_, vector<QuestionOption>) };
    inline TemplateQuestion& setOptions(const vector<QuestionOption> & options) { DARABONBA_PTR_SET_VALUE(options_, options) };
    inline TemplateQuestion& setOptions(vector<QuestionOption> && options) { DARABONBA_PTR_SET_RVALUE(options_, options) };


    // preOptions Field Functions 
    bool hasPreOptions() const { return this->preOptions_ != nullptr;};
    void deletePreOptions() { this->preOptions_ = nullptr;};
    inline const vector<string> & getPreOptions() const { DARABONBA_PTR_GET_CONST(preOptions_, vector<string>) };
    inline vector<string> getPreOptions() { DARABONBA_PTR_GET(preOptions_, vector<string>) };
    inline TemplateQuestion& setPreOptions(const vector<string> & preOptions) { DARABONBA_PTR_SET_VALUE(preOptions_, preOptions) };
    inline TemplateQuestion& setPreOptions(vector<string> && preOptions) { DARABONBA_PTR_SET_RVALUE(preOptions_, preOptions) };


    // questionId Field Functions 
    bool hasQuestionId() const { return this->questionId_ != nullptr;};
    void deleteQuestionId() { this->questionId_ = nullptr;};
    inline int64_t getQuestionId() const { DARABONBA_PTR_GET_DEFAULT(questionId_, 0L) };
    inline TemplateQuestion& setQuestionId(int64_t questionId) { DARABONBA_PTR_SET_VALUE(questionId_, questionId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline TemplateQuestion& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // List of child nodes
    shared_ptr<vector<TemplateQuestion>> children_ {};
    // Additional properties
    Darabonba::Json exif_ {};
    // Title
    shared_ptr<string> markTitle_ {};
    // List of options
    shared_ptr<vector<QuestionOption>> options_ {};
    // List of pre-filled values
    shared_ptr<vector<string>> preOptions_ {};
    // Question ID
    shared_ptr<int64_t> questionId_ {};
    // Type, including the following:  
    // - TEXT_EDIT  
    // - CHECKBOX  
    // - INPUT  
    // - PICTURE  
    // - VIDEO  
    // - OPEN_ENDED  
    // - SLOT  
    // - RADIO
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenITag20220616
#endif
