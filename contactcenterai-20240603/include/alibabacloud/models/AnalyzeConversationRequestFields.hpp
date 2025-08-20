// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ANALYZECONVERSATIONREQUESTFIELDS_HPP_
#define ALIBABACLOUD_MODELS_ANALYZECONVERSATIONREQUESTFIELDS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AnalyzeConversationRequestFieldsEnumValues.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ContactCenterAI20240603
{
namespace Models
{
  class AnalyzeConversationRequestFields : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AnalyzeConversationRequestFields& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(desc, desc_);
      DARABONBA_PTR_TO_JSON(enumValues, enumValues_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, AnalyzeConversationRequestFields& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(desc, desc_);
      DARABONBA_PTR_FROM_JSON(enumValues, enumValues_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    AnalyzeConversationRequestFields() = default ;
    AnalyzeConversationRequestFields(const AnalyzeConversationRequestFields &) = default ;
    AnalyzeConversationRequestFields(AnalyzeConversationRequestFields &&) = default ;
    AnalyzeConversationRequestFields(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AnalyzeConversationRequestFields() = default ;
    AnalyzeConversationRequestFields& operator=(const AnalyzeConversationRequestFields &) = default ;
    AnalyzeConversationRequestFields& operator=(AnalyzeConversationRequestFields &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->desc_ != nullptr && this->enumValues_ != nullptr && this->name_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline AnalyzeConversationRequestFields& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // desc Field Functions 
    bool hasDesc() const { return this->desc_ != nullptr;};
    void deleteDesc() { this->desc_ = nullptr;};
    inline string desc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
    inline AnalyzeConversationRequestFields& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


    // enumValues Field Functions 
    bool hasEnumValues() const { return this->enumValues_ != nullptr;};
    void deleteEnumValues() { this->enumValues_ = nullptr;};
    inline const vector<Models::AnalyzeConversationRequestFieldsEnumValues> & enumValues() const { DARABONBA_PTR_GET_CONST(enumValues_, vector<Models::AnalyzeConversationRequestFieldsEnumValues>) };
    inline vector<Models::AnalyzeConversationRequestFieldsEnumValues> enumValues() { DARABONBA_PTR_GET(enumValues_, vector<Models::AnalyzeConversationRequestFieldsEnumValues>) };
    inline AnalyzeConversationRequestFields& setEnumValues(const vector<Models::AnalyzeConversationRequestFieldsEnumValues> & enumValues) { DARABONBA_PTR_SET_VALUE(enumValues_, enumValues) };
    inline AnalyzeConversationRequestFields& setEnumValues(vector<Models::AnalyzeConversationRequestFieldsEnumValues> && enumValues) { DARABONBA_PTR_SET_RVALUE(enumValues_, enumValues) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline AnalyzeConversationRequestFields& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> desc_ = nullptr;
    std::shared_ptr<vector<Models::AnalyzeConversationRequestFieldsEnumValues>> enumValues_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ContactCenterAI20240603
#endif
