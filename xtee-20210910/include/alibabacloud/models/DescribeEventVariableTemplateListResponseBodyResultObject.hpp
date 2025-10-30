// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTVARIABLETEMPLATELISTRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTVARIABLETEMPLATELISTRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeEventVariableTemplateListResponseBodyResultObjectVariables.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeEventVariableTemplateListResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventVariableTemplateListResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(templateCode, templateCode_);
      DARABONBA_PTR_TO_JSON(templateName, templateName_);
      DARABONBA_PTR_TO_JSON(variables, variables_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventVariableTemplateListResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(templateCode, templateCode_);
      DARABONBA_PTR_FROM_JSON(templateName, templateName_);
      DARABONBA_PTR_FROM_JSON(variables, variables_);
    };
    DescribeEventVariableTemplateListResponseBodyResultObject() = default ;
    DescribeEventVariableTemplateListResponseBodyResultObject(const DescribeEventVariableTemplateListResponseBodyResultObject &) = default ;
    DescribeEventVariableTemplateListResponseBodyResultObject(DescribeEventVariableTemplateListResponseBodyResultObject &&) = default ;
    DescribeEventVariableTemplateListResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventVariableTemplateListResponseBodyResultObject() = default ;
    DescribeEventVariableTemplateListResponseBodyResultObject& operator=(const DescribeEventVariableTemplateListResponseBodyResultObject &) = default ;
    DescribeEventVariableTemplateListResponseBodyResultObject& operator=(DescribeEventVariableTemplateListResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->templateCode_ == nullptr
        && return this->templateName_ == nullptr && return this->variables_ == nullptr; };
    // templateCode Field Functions 
    bool hasTemplateCode() const { return this->templateCode_ != nullptr;};
    void deleteTemplateCode() { this->templateCode_ = nullptr;};
    inline string templateCode() const { DARABONBA_PTR_GET_DEFAULT(templateCode_, "") };
    inline DescribeEventVariableTemplateListResponseBodyResultObject& setTemplateCode(string templateCode) { DARABONBA_PTR_SET_VALUE(templateCode_, templateCode) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline DescribeEventVariableTemplateListResponseBodyResultObject& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // variables Field Functions 
    bool hasVariables() const { return this->variables_ != nullptr;};
    void deleteVariables() { this->variables_ = nullptr;};
    inline const vector<Models::DescribeEventVariableTemplateListResponseBodyResultObjectVariables> & variables() const { DARABONBA_PTR_GET_CONST(variables_, vector<Models::DescribeEventVariableTemplateListResponseBodyResultObjectVariables>) };
    inline vector<Models::DescribeEventVariableTemplateListResponseBodyResultObjectVariables> variables() { DARABONBA_PTR_GET(variables_, vector<Models::DescribeEventVariableTemplateListResponseBodyResultObjectVariables>) };
    inline DescribeEventVariableTemplateListResponseBodyResultObject& setVariables(const vector<Models::DescribeEventVariableTemplateListResponseBodyResultObjectVariables> & variables) { DARABONBA_PTR_SET_VALUE(variables_, variables) };
    inline DescribeEventVariableTemplateListResponseBodyResultObject& setVariables(vector<Models::DescribeEventVariableTemplateListResponseBodyResultObjectVariables> && variables) { DARABONBA_PTR_SET_RVALUE(variables_, variables) };


  protected:
    // Template code.
    std::shared_ptr<string> templateCode_ = nullptr;
    // Template name.
    std::shared_ptr<string> templateName_ = nullptr;
    // Variable list.
    std::shared_ptr<vector<Models::DescribeEventVariableTemplateListResponseBodyResultObjectVariables>> variables_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
