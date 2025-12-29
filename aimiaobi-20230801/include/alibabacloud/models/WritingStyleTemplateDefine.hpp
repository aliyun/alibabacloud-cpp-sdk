// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WRITINGSTYLETEMPLATEDEFINE_HPP_
#define ALIBABACLOUD_MODELS_WRITINGSTYLETEMPLATEDEFINE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/WritingStyleTemplateField.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class WritingStyleTemplateDefine : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WritingStyleTemplateDefine& obj) { 
      DARABONBA_PTR_TO_JSON(Example, example_);
      DARABONBA_PTR_TO_JSON(Fields, fields_);
    };
    friend void from_json(const Darabonba::Json& j, WritingStyleTemplateDefine& obj) { 
      DARABONBA_PTR_FROM_JSON(Example, example_);
      DARABONBA_PTR_FROM_JSON(Fields, fields_);
    };
    WritingStyleTemplateDefine() = default ;
    WritingStyleTemplateDefine(const WritingStyleTemplateDefine &) = default ;
    WritingStyleTemplateDefine(WritingStyleTemplateDefine &&) = default ;
    WritingStyleTemplateDefine(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WritingStyleTemplateDefine() = default ;
    WritingStyleTemplateDefine& operator=(const WritingStyleTemplateDefine &) = default ;
    WritingStyleTemplateDefine& operator=(WritingStyleTemplateDefine &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Example : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Example& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Example& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Example() = default ;
      Example(const Example &) = default ;
      Example(Example &&) = default ;
      Example(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Example() = default ;
      Example& operator=(const Example &) = default ;
      Example& operator=(Example &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Example& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Example& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<string> key_ {};
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->example_ == nullptr
        && this->fields_ == nullptr; };
    // example Field Functions 
    bool hasExample() const { return this->example_ != nullptr;};
    void deleteExample() { this->example_ = nullptr;};
    inline const vector<WritingStyleTemplateDefine::Example> & getExample() const { DARABONBA_PTR_GET_CONST(example_, vector<WritingStyleTemplateDefine::Example>) };
    inline vector<WritingStyleTemplateDefine::Example> getExample() { DARABONBA_PTR_GET(example_, vector<WritingStyleTemplateDefine::Example>) };
    inline WritingStyleTemplateDefine& setExample(const vector<WritingStyleTemplateDefine::Example> & example) { DARABONBA_PTR_SET_VALUE(example_, example) };
    inline WritingStyleTemplateDefine& setExample(vector<WritingStyleTemplateDefine::Example> && example) { DARABONBA_PTR_SET_RVALUE(example_, example) };


    // fields Field Functions 
    bool hasFields() const { return this->fields_ != nullptr;};
    void deleteFields() { this->fields_ = nullptr;};
    inline const vector<WritingStyleTemplateField> & getFields() const { DARABONBA_PTR_GET_CONST(fields_, vector<WritingStyleTemplateField>) };
    inline vector<WritingStyleTemplateField> getFields() { DARABONBA_PTR_GET(fields_, vector<WritingStyleTemplateField>) };
    inline WritingStyleTemplateDefine& setFields(const vector<WritingStyleTemplateField> & fields) { DARABONBA_PTR_SET_VALUE(fields_, fields) };
    inline WritingStyleTemplateDefine& setFields(vector<WritingStyleTemplateField> && fields) { DARABONBA_PTR_SET_RVALUE(fields_, fields) };


  protected:
    shared_ptr<vector<WritingStyleTemplateDefine::Example>> example_ {};
    shared_ptr<vector<WritingStyleTemplateField>> fields_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
