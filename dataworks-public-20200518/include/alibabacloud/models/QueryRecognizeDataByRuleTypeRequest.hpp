// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYRECOGNIZEDATABYRULETYPEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYRECOGNIZEDATABYRULETYPEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class QueryRecognizeDataByRuleTypeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryRecognizeDataByRuleTypeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RecognizeRulesType, recognizeRulesType_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryRecognizeDataByRuleTypeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RecognizeRulesType, recognizeRulesType_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
    };
    QueryRecognizeDataByRuleTypeRequest() = default ;
    QueryRecognizeDataByRuleTypeRequest(const QueryRecognizeDataByRuleTypeRequest &) = default ;
    QueryRecognizeDataByRuleTypeRequest(QueryRecognizeDataByRuleTypeRequest &&) = default ;
    QueryRecognizeDataByRuleTypeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryRecognizeDataByRuleTypeRequest() = default ;
    QueryRecognizeDataByRuleTypeRequest& operator=(const QueryRecognizeDataByRuleTypeRequest &) = default ;
    QueryRecognizeDataByRuleTypeRequest& operator=(QueryRecognizeDataByRuleTypeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->recognizeRulesType_ != nullptr
        && this->tenantId_ != nullptr; };
    // recognizeRulesType Field Functions 
    bool hasRecognizeRulesType() const { return this->recognizeRulesType_ != nullptr;};
    void deleteRecognizeRulesType() { this->recognizeRulesType_ = nullptr;};
    inline string recognizeRulesType() const { DARABONBA_PTR_GET_DEFAULT(recognizeRulesType_, "") };
    inline QueryRecognizeDataByRuleTypeRequest& setRecognizeRulesType(string recognizeRulesType) { DARABONBA_PTR_SET_VALUE(recognizeRulesType_, recognizeRulesType) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline QueryRecognizeDataByRuleTypeRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The type of a sensitive data identification rule. You can call the [QueryRecognizeRulesType](https://help.aliyun.com/document_detail/2746905.html) operation to obtain the type of the rule.
    // 
    // *   1: regular expression
    // *   2: built-in rule
    // *   3: sample library
    // *   4: self-generated data identification model
    // 
    // This parameter is required.
    std::shared_ptr<string> recognizeRulesType_ = nullptr;
    // The tenant ID. To obtain the tenant ID, perform the following steps: Log on to the [DataWorks console](https://workbench.data.aliyun.com/console). Find your workspace and go to the DataStudio page. On the DataStudio page, click the logon username in the upper-right corner and click User Info in the Menu section.
    // 
    // This parameter is required.
    std::shared_ptr<string> tenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
