// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTVARIABLETEMPLATELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTVARIABLETEMPLATELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeEventVariableTemplateListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventVariableTemplateListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(inputs, inputs_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
      DARABONBA_PTR_TO_JSON(templateCode, templateCode_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventVariableTemplateListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(inputs, inputs_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
      DARABONBA_PTR_FROM_JSON(templateCode, templateCode_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    DescribeEventVariableTemplateListRequest() = default ;
    DescribeEventVariableTemplateListRequest(const DescribeEventVariableTemplateListRequest &) = default ;
    DescribeEventVariableTemplateListRequest(DescribeEventVariableTemplateListRequest &&) = default ;
    DescribeEventVariableTemplateListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventVariableTemplateListRequest() = default ;
    DescribeEventVariableTemplateListRequest& operator=(const DescribeEventVariableTemplateListRequest &) = default ;
    DescribeEventVariableTemplateListRequest& operator=(DescribeEventVariableTemplateListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && return this->inputs_ == nullptr && return this->regId_ == nullptr && return this->templateCode_ == nullptr && return this->type_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeEventVariableTemplateListRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // inputs Field Functions 
    bool hasInputs() const { return this->inputs_ != nullptr;};
    void deleteInputs() { this->inputs_ = nullptr;};
    inline string inputs() const { DARABONBA_PTR_GET_DEFAULT(inputs_, "") };
    inline DescribeEventVariableTemplateListRequest& setInputs(string inputs) { DARABONBA_PTR_SET_VALUE(inputs_, inputs) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string regId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline DescribeEventVariableTemplateListRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


    // templateCode Field Functions 
    bool hasTemplateCode() const { return this->templateCode_ != nullptr;};
    void deleteTemplateCode() { this->templateCode_ = nullptr;};
    inline string templateCode() const { DARABONBA_PTR_GET_DEFAULT(templateCode_, "") };
    inline DescribeEventVariableTemplateListRequest& setTemplateCode(string templateCode) { DARABONBA_PTR_SET_VALUE(templateCode_, templateCode) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeEventVariableTemplateListRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Sets the language type for the request and response messages. The default value is **zh**. Values: 
    // - **zh**: Chinese
    // - **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // Input parameters, separated by commas.
    std::shared_ptr<string> inputs_ = nullptr;
    // Region code
    std::shared_ptr<string> regId_ = nullptr;
    // Template code.
    std::shared_ptr<string> templateCode_ = nullptr;
    // Template type.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
