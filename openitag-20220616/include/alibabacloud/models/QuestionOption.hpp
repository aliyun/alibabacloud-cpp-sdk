// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUESTIONOPTION_HPP_
#define ALIBABACLOUD_MODELS_QUESTIONOPTION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QuestionOption.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenITag20220616
{
namespace Models
{
  class QuestionOption : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuestionOption& obj) { 
      DARABONBA_PTR_TO_JSON(Children, children_);
      DARABONBA_PTR_TO_JSON(Color, color_);
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(Shortcut, shortcut_);
    };
    friend void from_json(const Darabonba::Json& j, QuestionOption& obj) { 
      DARABONBA_PTR_FROM_JSON(Children, children_);
      DARABONBA_PTR_FROM_JSON(Color, color_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(Shortcut, shortcut_);
    };
    QuestionOption() = default ;
    QuestionOption(const QuestionOption &) = default ;
    QuestionOption(QuestionOption &&) = default ;
    QuestionOption(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuestionOption() = default ;
    QuestionOption& operator=(const QuestionOption &) = default ;
    QuestionOption& operator=(QuestionOption &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->children_ == nullptr
        && this->color_ == nullptr && this->key_ == nullptr && this->label_ == nullptr && this->remark_ == nullptr && this->shortcut_ == nullptr; };
    // children Field Functions 
    bool hasChildren() const { return this->children_ != nullptr;};
    void deleteChildren() { this->children_ = nullptr;};
    inline const vector<QuestionOption> & getChildren() const { DARABONBA_PTR_GET_CONST(children_, vector<QuestionOption>) };
    inline vector<QuestionOption> getChildren() { DARABONBA_PTR_GET(children_, vector<QuestionOption>) };
    inline QuestionOption& setChildren(const vector<QuestionOption> & children) { DARABONBA_PTR_SET_VALUE(children_, children) };
    inline QuestionOption& setChildren(vector<QuestionOption> && children) { DARABONBA_PTR_SET_RVALUE(children_, children) };


    // color Field Functions 
    bool hasColor() const { return this->color_ != nullptr;};
    void deleteColor() { this->color_ = nullptr;};
    inline string getColor() const { DARABONBA_PTR_GET_DEFAULT(color_, "") };
    inline QuestionOption& setColor(string color) { DARABONBA_PTR_SET_VALUE(color_, color) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline QuestionOption& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline QuestionOption& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline QuestionOption& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // shortcut Field Functions 
    bool hasShortcut() const { return this->shortcut_ != nullptr;};
    void deleteShortcut() { this->shortcut_ = nullptr;};
    inline string getShortcut() const { DARABONBA_PTR_GET_DEFAULT(shortcut_, "") };
    inline QuestionOption& setShortcut(string shortcut) { DARABONBA_PTR_SET_VALUE(shortcut_, shortcut) };


  protected:
    // List of child options.
    shared_ptr<vector<QuestionOption>> children_ {};
    // Color.
    shared_ptr<string> color_ {};
    // Tag Name.
    // 
    // This parameter is required.
    shared_ptr<string> key_ {};
    // Label display name.
    // 
    // This parameter is required.
    shared_ptr<string> label_ {};
    // Remark.
    shared_ptr<string> remark_ {};
    // Keyboard shortcut.
    shared_ptr<string> shortcut_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenITag20220616
#endif
