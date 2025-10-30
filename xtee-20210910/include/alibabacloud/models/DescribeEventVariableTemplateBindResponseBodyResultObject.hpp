// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTVARIABLETEMPLATEBINDRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTVARIABLETEMPLATEBINDRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeEventVariableTemplateBindResponseBodyResultObjectChargeVariables.hpp>
#include <alibabacloud/models/DescribeEventVariableTemplateBindResponseBodyResultObjectFreeVariables.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeEventVariableTemplateBindResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventVariableTemplateBindResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(chargeVariables, chargeVariables_);
      DARABONBA_PTR_TO_JSON(freeVariables, freeVariables_);
      DARABONBA_PTR_TO_JSON(templateCode, templateCode_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventVariableTemplateBindResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(chargeVariables, chargeVariables_);
      DARABONBA_PTR_FROM_JSON(freeVariables, freeVariables_);
      DARABONBA_PTR_FROM_JSON(templateCode, templateCode_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    DescribeEventVariableTemplateBindResponseBodyResultObject() = default ;
    DescribeEventVariableTemplateBindResponseBodyResultObject(const DescribeEventVariableTemplateBindResponseBodyResultObject &) = default ;
    DescribeEventVariableTemplateBindResponseBodyResultObject(DescribeEventVariableTemplateBindResponseBodyResultObject &&) = default ;
    DescribeEventVariableTemplateBindResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventVariableTemplateBindResponseBodyResultObject() = default ;
    DescribeEventVariableTemplateBindResponseBodyResultObject& operator=(const DescribeEventVariableTemplateBindResponseBodyResultObject &) = default ;
    DescribeEventVariableTemplateBindResponseBodyResultObject& operator=(DescribeEventVariableTemplateBindResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->chargeVariables_ == nullptr
        && return this->freeVariables_ == nullptr && return this->templateCode_ == nullptr && return this->totalCount_ == nullptr; };
    // chargeVariables Field Functions 
    bool hasChargeVariables() const { return this->chargeVariables_ != nullptr;};
    void deleteChargeVariables() { this->chargeVariables_ = nullptr;};
    inline const vector<Models::DescribeEventVariableTemplateBindResponseBodyResultObjectChargeVariables> & chargeVariables() const { DARABONBA_PTR_GET_CONST(chargeVariables_, vector<Models::DescribeEventVariableTemplateBindResponseBodyResultObjectChargeVariables>) };
    inline vector<Models::DescribeEventVariableTemplateBindResponseBodyResultObjectChargeVariables> chargeVariables() { DARABONBA_PTR_GET(chargeVariables_, vector<Models::DescribeEventVariableTemplateBindResponseBodyResultObjectChargeVariables>) };
    inline DescribeEventVariableTemplateBindResponseBodyResultObject& setChargeVariables(const vector<Models::DescribeEventVariableTemplateBindResponseBodyResultObjectChargeVariables> & chargeVariables) { DARABONBA_PTR_SET_VALUE(chargeVariables_, chargeVariables) };
    inline DescribeEventVariableTemplateBindResponseBodyResultObject& setChargeVariables(vector<Models::DescribeEventVariableTemplateBindResponseBodyResultObjectChargeVariables> && chargeVariables) { DARABONBA_PTR_SET_RVALUE(chargeVariables_, chargeVariables) };


    // freeVariables Field Functions 
    bool hasFreeVariables() const { return this->freeVariables_ != nullptr;};
    void deleteFreeVariables() { this->freeVariables_ = nullptr;};
    inline const vector<Models::DescribeEventVariableTemplateBindResponseBodyResultObjectFreeVariables> & freeVariables() const { DARABONBA_PTR_GET_CONST(freeVariables_, vector<Models::DescribeEventVariableTemplateBindResponseBodyResultObjectFreeVariables>) };
    inline vector<Models::DescribeEventVariableTemplateBindResponseBodyResultObjectFreeVariables> freeVariables() { DARABONBA_PTR_GET(freeVariables_, vector<Models::DescribeEventVariableTemplateBindResponseBodyResultObjectFreeVariables>) };
    inline DescribeEventVariableTemplateBindResponseBodyResultObject& setFreeVariables(const vector<Models::DescribeEventVariableTemplateBindResponseBodyResultObjectFreeVariables> & freeVariables) { DARABONBA_PTR_SET_VALUE(freeVariables_, freeVariables) };
    inline DescribeEventVariableTemplateBindResponseBodyResultObject& setFreeVariables(vector<Models::DescribeEventVariableTemplateBindResponseBodyResultObjectFreeVariables> && freeVariables) { DARABONBA_PTR_SET_RVALUE(freeVariables_, freeVariables) };


    // templateCode Field Functions 
    bool hasTemplateCode() const { return this->templateCode_ != nullptr;};
    void deleteTemplateCode() { this->templateCode_ = nullptr;};
    inline string templateCode() const { DARABONBA_PTR_GET_DEFAULT(templateCode_, "") };
    inline DescribeEventVariableTemplateBindResponseBodyResultObject& setTemplateCode(string templateCode) { DARABONBA_PTR_SET_VALUE(templateCode_, templateCode) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline DescribeEventVariableTemplateBindResponseBodyResultObject& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // List of chargeable variables
    std::shared_ptr<vector<Models::DescribeEventVariableTemplateBindResponseBodyResultObjectChargeVariables>> chargeVariables_ = nullptr;
    // List of free variables
    std::shared_ptr<vector<Models::DescribeEventVariableTemplateBindResponseBodyResultObjectFreeVariables>> freeVariables_ = nullptr;
    // Template code
    std::shared_ptr<string> templateCode_ = nullptr;
    // Total count
    std::shared_ptr<string> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
