// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEORUPDATEALERTRULERESPONSEBODYALERTRULEALERTRULECONTENT_HPP_
#define ALIBABACLOUD_MODELS_CREATEORUPDATEALERTRULERESPONSEBODYALERTRULEALERTRULECONTENT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateOrUpdateAlertRuleResponseBodyAlertRuleAlertRuleContentAlertRuleItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class CreateOrUpdateAlertRuleResponseBodyAlertRuleAlertRuleContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOrUpdateAlertRuleResponseBodyAlertRuleAlertRuleContent& obj) { 
      DARABONBA_PTR_TO_JSON(AlertRuleItems, alertRuleItems_);
      DARABONBA_PTR_TO_JSON(Condition, condition_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOrUpdateAlertRuleResponseBodyAlertRuleAlertRuleContent& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertRuleItems, alertRuleItems_);
      DARABONBA_PTR_FROM_JSON(Condition, condition_);
    };
    CreateOrUpdateAlertRuleResponseBodyAlertRuleAlertRuleContent() = default ;
    CreateOrUpdateAlertRuleResponseBodyAlertRuleAlertRuleContent(const CreateOrUpdateAlertRuleResponseBodyAlertRuleAlertRuleContent &) = default ;
    CreateOrUpdateAlertRuleResponseBodyAlertRuleAlertRuleContent(CreateOrUpdateAlertRuleResponseBodyAlertRuleAlertRuleContent &&) = default ;
    CreateOrUpdateAlertRuleResponseBodyAlertRuleAlertRuleContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOrUpdateAlertRuleResponseBodyAlertRuleAlertRuleContent() = default ;
    CreateOrUpdateAlertRuleResponseBodyAlertRuleAlertRuleContent& operator=(const CreateOrUpdateAlertRuleResponseBodyAlertRuleAlertRuleContent &) = default ;
    CreateOrUpdateAlertRuleResponseBodyAlertRuleAlertRuleContent& operator=(CreateOrUpdateAlertRuleResponseBodyAlertRuleAlertRuleContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alertRuleItems_ != nullptr
        && this->condition_ != nullptr; };
    // alertRuleItems Field Functions 
    bool hasAlertRuleItems() const { return this->alertRuleItems_ != nullptr;};
    void deleteAlertRuleItems() { this->alertRuleItems_ = nullptr;};
    inline const vector<Models::CreateOrUpdateAlertRuleResponseBodyAlertRuleAlertRuleContentAlertRuleItems> & alertRuleItems() const { DARABONBA_PTR_GET_CONST(alertRuleItems_, vector<Models::CreateOrUpdateAlertRuleResponseBodyAlertRuleAlertRuleContentAlertRuleItems>) };
    inline vector<Models::CreateOrUpdateAlertRuleResponseBodyAlertRuleAlertRuleContentAlertRuleItems> alertRuleItems() { DARABONBA_PTR_GET(alertRuleItems_, vector<Models::CreateOrUpdateAlertRuleResponseBodyAlertRuleAlertRuleContentAlertRuleItems>) };
    inline CreateOrUpdateAlertRuleResponseBodyAlertRuleAlertRuleContent& setAlertRuleItems(const vector<Models::CreateOrUpdateAlertRuleResponseBodyAlertRuleAlertRuleContentAlertRuleItems> & alertRuleItems) { DARABONBA_PTR_SET_VALUE(alertRuleItems_, alertRuleItems) };
    inline CreateOrUpdateAlertRuleResponseBodyAlertRuleAlertRuleContent& setAlertRuleItems(vector<Models::CreateOrUpdateAlertRuleResponseBodyAlertRuleAlertRuleContentAlertRuleItems> && alertRuleItems) { DARABONBA_PTR_SET_RVALUE(alertRuleItems_, alertRuleItems) };


    // condition Field Functions 
    bool hasCondition() const { return this->condition_ != nullptr;};
    void deleteCondition() { this->condition_ = nullptr;};
    inline string condition() const { DARABONBA_PTR_GET_DEFAULT(condition_, "") };
    inline CreateOrUpdateAlertRuleResponseBodyAlertRuleAlertRuleContent& setCondition(string condition) { DARABONBA_PTR_SET_VALUE(condition_, condition) };


  protected:
    // The trigger conditions of the Application Monitoring or Browser Monitoring alert rule.
    std::shared_ptr<vector<Models::CreateOrUpdateAlertRuleResponseBodyAlertRuleAlertRuleContentAlertRuleItems>> alertRuleItems_ = nullptr;
    // The relationship between multiple alert conditions that were specified for the Application Monitoring or Browser Monitoring alert rule. Valid values:
    // 
    // *   OR: meets any of the specified conditions.
    // *   AND: meets all the specified conditions.
    std::shared_ptr<string> condition_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
