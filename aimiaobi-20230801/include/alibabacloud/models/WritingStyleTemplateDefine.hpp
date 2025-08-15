// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WRITINGSTYLETEMPLATEDEFINE_HPP_
#define ALIBABACLOUD_MODELS_WRITINGSTYLETEMPLATEDEFINE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/WritingStyleTemplateDefineExample.hpp>
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
    virtual bool empty() const override { this->example_ != nullptr
        && this->fields_ != nullptr; };
    // example Field Functions 
    bool hasExample() const { return this->example_ != nullptr;};
    void deleteExample() { this->example_ = nullptr;};
    inline const vector<WritingStyleTemplateDefineExample> & example() const { DARABONBA_PTR_GET_CONST(example_, vector<WritingStyleTemplateDefineExample>) };
    inline vector<WritingStyleTemplateDefineExample> example() { DARABONBA_PTR_GET(example_, vector<WritingStyleTemplateDefineExample>) };
    inline WritingStyleTemplateDefine& setExample(const vector<WritingStyleTemplateDefineExample> & example) { DARABONBA_PTR_SET_VALUE(example_, example) };
    inline WritingStyleTemplateDefine& setExample(vector<WritingStyleTemplateDefineExample> && example) { DARABONBA_PTR_SET_RVALUE(example_, example) };


    // fields Field Functions 
    bool hasFields() const { return this->fields_ != nullptr;};
    void deleteFields() { this->fields_ = nullptr;};
    inline const vector<WritingStyleTemplateField> & fields() const { DARABONBA_PTR_GET_CONST(fields_, vector<WritingStyleTemplateField>) };
    inline vector<WritingStyleTemplateField> fields() { DARABONBA_PTR_GET(fields_, vector<WritingStyleTemplateField>) };
    inline WritingStyleTemplateDefine& setFields(const vector<WritingStyleTemplateField> & fields) { DARABONBA_PTR_SET_VALUE(fields_, fields) };
    inline WritingStyleTemplateDefine& setFields(vector<WritingStyleTemplateField> && fields) { DARABONBA_PTR_SET_RVALUE(fields_, fields) };


  protected:
    std::shared_ptr<vector<WritingStyleTemplateDefineExample>> example_ = nullptr;
    std::shared_ptr<vector<WritingStyleTemplateField>> fields_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
