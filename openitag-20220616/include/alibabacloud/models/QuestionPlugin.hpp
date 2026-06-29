// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUESTIONPLUGIN_HPP_
#define ALIBABACLOUD_MODELS_QUESTIONPLUGIN_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QuestionPlugin.hpp>
#include <alibabacloud/models/QuestionOption.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenITag20220616
{
namespace Models
{
  class QuestionPlugin : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuestionPlugin& obj) { 
      DARABONBA_PTR_TO_JSON(CanSelect, canSelect_);
      DARABONBA_PTR_TO_JSON(Children, children_);
      DARABONBA_PTR_TO_JSON(DefaultResult, defaultResult_);
      DARABONBA_PTR_TO_JSON(Display, display_);
      DARABONBA_ANY_TO_JSON(Exif, exif_);
      DARABONBA_PTR_TO_JSON(HotKeyMap, hotKeyMap_);
      DARABONBA_PTR_TO_JSON(MarkTitle, markTitle_);
      DARABONBA_PTR_TO_JSON(MarkTitleAlias, markTitleAlias_);
      DARABONBA_PTR_TO_JSON(MustFill, mustFill_);
      DARABONBA_PTR_TO_JSON(Options, options_);
      DARABONBA_PTR_TO_JSON(PreOptions, preOptions_);
      DARABONBA_PTR_TO_JSON(QuestionId, questionId_);
      DARABONBA_PTR_TO_JSON(Rule, rule_);
      DARABONBA_PTR_TO_JSON(SelectGroup, selectGroup_);
      DARABONBA_PTR_TO_JSON(Selected, selected_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, QuestionPlugin& obj) { 
      DARABONBA_PTR_FROM_JSON(CanSelect, canSelect_);
      DARABONBA_PTR_FROM_JSON(Children, children_);
      DARABONBA_PTR_FROM_JSON(DefaultResult, defaultResult_);
      DARABONBA_PTR_FROM_JSON(Display, display_);
      DARABONBA_ANY_FROM_JSON(Exif, exif_);
      DARABONBA_PTR_FROM_JSON(HotKeyMap, hotKeyMap_);
      DARABONBA_PTR_FROM_JSON(MarkTitle, markTitle_);
      DARABONBA_PTR_FROM_JSON(MarkTitleAlias, markTitleAlias_);
      DARABONBA_PTR_FROM_JSON(MustFill, mustFill_);
      DARABONBA_PTR_FROM_JSON(Options, options_);
      DARABONBA_PTR_FROM_JSON(PreOptions, preOptions_);
      DARABONBA_PTR_FROM_JSON(QuestionId, questionId_);
      DARABONBA_PTR_FROM_JSON(Rule, rule_);
      DARABONBA_PTR_FROM_JSON(SelectGroup, selectGroup_);
      DARABONBA_PTR_FROM_JSON(Selected, selected_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    QuestionPlugin() = default ;
    QuestionPlugin(const QuestionPlugin &) = default ;
    QuestionPlugin(QuestionPlugin &&) = default ;
    QuestionPlugin(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuestionPlugin() = default ;
    QuestionPlugin& operator=(const QuestionPlugin &) = default ;
    QuestionPlugin& operator=(QuestionPlugin &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->canSelect_ == nullptr
        && this->children_ == nullptr && this->defaultResult_ == nullptr && this->display_ == nullptr && this->exif_ == nullptr && this->hotKeyMap_ == nullptr
        && this->markTitle_ == nullptr && this->markTitleAlias_ == nullptr && this->mustFill_ == nullptr && this->options_ == nullptr && this->preOptions_ == nullptr
        && this->questionId_ == nullptr && this->rule_ == nullptr && this->selectGroup_ == nullptr && this->selected_ == nullptr && this->type_ == nullptr; };
    // canSelect Field Functions 
    bool hasCanSelect() const { return this->canSelect_ != nullptr;};
    void deleteCanSelect() { this->canSelect_ = nullptr;};
    inline bool getCanSelect() const { DARABONBA_PTR_GET_DEFAULT(canSelect_, false) };
    inline QuestionPlugin& setCanSelect(bool canSelect) { DARABONBA_PTR_SET_VALUE(canSelect_, canSelect) };


    // children Field Functions 
    bool hasChildren() const { return this->children_ != nullptr;};
    void deleteChildren() { this->children_ = nullptr;};
    inline const vector<QuestionPlugin> & getChildren() const { DARABONBA_PTR_GET_CONST(children_, vector<QuestionPlugin>) };
    inline vector<QuestionPlugin> getChildren() { DARABONBA_PTR_GET(children_, vector<QuestionPlugin>) };
    inline QuestionPlugin& setChildren(const vector<QuestionPlugin> & children) { DARABONBA_PTR_SET_VALUE(children_, children) };
    inline QuestionPlugin& setChildren(vector<QuestionPlugin> && children) { DARABONBA_PTR_SET_RVALUE(children_, children) };


    // defaultResult Field Functions 
    bool hasDefaultResult() const { return this->defaultResult_ != nullptr;};
    void deleteDefaultResult() { this->defaultResult_ = nullptr;};
    inline string getDefaultResult() const { DARABONBA_PTR_GET_DEFAULT(defaultResult_, "") };
    inline QuestionPlugin& setDefaultResult(string defaultResult) { DARABONBA_PTR_SET_VALUE(defaultResult_, defaultResult) };


    // display Field Functions 
    bool hasDisplay() const { return this->display_ != nullptr;};
    void deleteDisplay() { this->display_ = nullptr;};
    inline bool getDisplay() const { DARABONBA_PTR_GET_DEFAULT(display_, false) };
    inline QuestionPlugin& setDisplay(bool display) { DARABONBA_PTR_SET_VALUE(display_, display) };


    // exif Field Functions 
    bool hasExif() const { return this->exif_ != nullptr;};
    void deleteExif() { this->exif_ = nullptr;};
    inline     const Darabonba::Json & getExif() const { DARABONBA_GET(exif_) };
    Darabonba::Json & getExif() { DARABONBA_GET(exif_) };
    inline QuestionPlugin& setExif(const Darabonba::Json & exif) { DARABONBA_SET_VALUE(exif_, exif) };
    inline QuestionPlugin& setExif(Darabonba::Json && exif) { DARABONBA_SET_RVALUE(exif_, exif) };


    // hotKeyMap Field Functions 
    bool hasHotKeyMap() const { return this->hotKeyMap_ != nullptr;};
    void deleteHotKeyMap() { this->hotKeyMap_ = nullptr;};
    inline string getHotKeyMap() const { DARABONBA_PTR_GET_DEFAULT(hotKeyMap_, "") };
    inline QuestionPlugin& setHotKeyMap(string hotKeyMap) { DARABONBA_PTR_SET_VALUE(hotKeyMap_, hotKeyMap) };


    // markTitle Field Functions 
    bool hasMarkTitle() const { return this->markTitle_ != nullptr;};
    void deleteMarkTitle() { this->markTitle_ = nullptr;};
    inline string getMarkTitle() const { DARABONBA_PTR_GET_DEFAULT(markTitle_, "") };
    inline QuestionPlugin& setMarkTitle(string markTitle) { DARABONBA_PTR_SET_VALUE(markTitle_, markTitle) };


    // markTitleAlias Field Functions 
    bool hasMarkTitleAlias() const { return this->markTitleAlias_ != nullptr;};
    void deleteMarkTitleAlias() { this->markTitleAlias_ = nullptr;};
    inline string getMarkTitleAlias() const { DARABONBA_PTR_GET_DEFAULT(markTitleAlias_, "") };
    inline QuestionPlugin& setMarkTitleAlias(string markTitleAlias) { DARABONBA_PTR_SET_VALUE(markTitleAlias_, markTitleAlias) };


    // mustFill Field Functions 
    bool hasMustFill() const { return this->mustFill_ != nullptr;};
    void deleteMustFill() { this->mustFill_ = nullptr;};
    inline bool getMustFill() const { DARABONBA_PTR_GET_DEFAULT(mustFill_, false) };
    inline QuestionPlugin& setMustFill(bool mustFill) { DARABONBA_PTR_SET_VALUE(mustFill_, mustFill) };


    // options Field Functions 
    bool hasOptions() const { return this->options_ != nullptr;};
    void deleteOptions() { this->options_ = nullptr;};
    inline const vector<QuestionOption> & getOptions() const { DARABONBA_PTR_GET_CONST(options_, vector<QuestionOption>) };
    inline vector<QuestionOption> getOptions() { DARABONBA_PTR_GET(options_, vector<QuestionOption>) };
    inline QuestionPlugin& setOptions(const vector<QuestionOption> & options) { DARABONBA_PTR_SET_VALUE(options_, options) };
    inline QuestionPlugin& setOptions(vector<QuestionOption> && options) { DARABONBA_PTR_SET_RVALUE(options_, options) };


    // preOptions Field Functions 
    bool hasPreOptions() const { return this->preOptions_ != nullptr;};
    void deletePreOptions() { this->preOptions_ = nullptr;};
    inline const vector<string> & getPreOptions() const { DARABONBA_PTR_GET_CONST(preOptions_, vector<string>) };
    inline vector<string> getPreOptions() { DARABONBA_PTR_GET(preOptions_, vector<string>) };
    inline QuestionPlugin& setPreOptions(const vector<string> & preOptions) { DARABONBA_PTR_SET_VALUE(preOptions_, preOptions) };
    inline QuestionPlugin& setPreOptions(vector<string> && preOptions) { DARABONBA_PTR_SET_RVALUE(preOptions_, preOptions) };


    // questionId Field Functions 
    bool hasQuestionId() const { return this->questionId_ != nullptr;};
    void deleteQuestionId() { this->questionId_ = nullptr;};
    inline string getQuestionId() const { DARABONBA_PTR_GET_DEFAULT(questionId_, "") };
    inline QuestionPlugin& setQuestionId(string questionId) { DARABONBA_PTR_SET_VALUE(questionId_, questionId) };


    // rule Field Functions 
    bool hasRule() const { return this->rule_ != nullptr;};
    void deleteRule() { this->rule_ = nullptr;};
    inline string getRule() const { DARABONBA_PTR_GET_DEFAULT(rule_, "") };
    inline QuestionPlugin& setRule(string rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };


    // selectGroup Field Functions 
    bool hasSelectGroup() const { return this->selectGroup_ != nullptr;};
    void deleteSelectGroup() { this->selectGroup_ = nullptr;};
    inline string getSelectGroup() const { DARABONBA_PTR_GET_DEFAULT(selectGroup_, "") };
    inline QuestionPlugin& setSelectGroup(string selectGroup) { DARABONBA_PTR_SET_VALUE(selectGroup_, selectGroup) };


    // selected Field Functions 
    bool hasSelected() const { return this->selected_ != nullptr;};
    void deleteSelected() { this->selected_ = nullptr;};
    inline bool getSelected() const { DARABONBA_PTR_GET_DEFAULT(selected_, false) };
    inline QuestionPlugin& setSelected(bool selected) { DARABONBA_PTR_SET_VALUE(selected_, selected) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline QuestionPlugin& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Whether it can be selected
    shared_ptr<bool> canSelect_ {};
    // List of child widgets
    shared_ptr<vector<QuestionPlugin>> children_ {};
    // Default result
    shared_ptr<string> defaultResult_ {};
    // Whether it is displayed
    // 
    // This parameter is required.
    shared_ptr<bool> display_ {};
    // Additional remarks
    Darabonba::Json exif_ {};
    // Keyboard shortcut map
    shared_ptr<string> hotKeyMap_ {};
    // Widget title
    // 
    // This parameter is required.
    shared_ptr<string> markTitle_ {};
    // Question alias
    shared_ptr<string> markTitleAlias_ {};
    // Whether it is required
    // 
    // This parameter is required.
    shared_ptr<bool> mustFill_ {};
    // List of options configuration
    // 
    // This parameter is required.
    shared_ptr<vector<QuestionOption>> options_ {};
    // List of predefined options for fill-in-the-blank questions
    shared_ptr<vector<string>> preOptions_ {};
    // Question widget ID
    // 
    // This parameter is required.
    shared_ptr<string> questionId_ {};
    // Regular expression, validation rule
    shared_ptr<string> rule_ {};
    // Selection group
    shared_ptr<string> selectGroup_ {};
    // Whether it is selected
    shared_ptr<bool> selected_ {};
    // Widget type
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenITag20220616
#endif
