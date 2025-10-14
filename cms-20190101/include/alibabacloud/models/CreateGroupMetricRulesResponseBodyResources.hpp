// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEGROUPMETRICRULESRESPONSEBODYRESOURCES_HPP_
#define ALIBABACLOUD_MODELS_CREATEGROUPMETRICRULESRESPONSEBODYRESOURCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateGroupMetricRulesResponseBodyResourcesAlertResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class CreateGroupMetricRulesResponseBodyResources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateGroupMetricRulesResponseBodyResources& obj) { 
      DARABONBA_PTR_TO_JSON(AlertResult, alertResult_);
    };
    friend void from_json(const Darabonba::Json& j, CreateGroupMetricRulesResponseBodyResources& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertResult, alertResult_);
    };
    CreateGroupMetricRulesResponseBodyResources() = default ;
    CreateGroupMetricRulesResponseBodyResources(const CreateGroupMetricRulesResponseBodyResources &) = default ;
    CreateGroupMetricRulesResponseBodyResources(CreateGroupMetricRulesResponseBodyResources &&) = default ;
    CreateGroupMetricRulesResponseBodyResources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateGroupMetricRulesResponseBodyResources() = default ;
    CreateGroupMetricRulesResponseBodyResources& operator=(const CreateGroupMetricRulesResponseBodyResources &) = default ;
    CreateGroupMetricRulesResponseBodyResources& operator=(CreateGroupMetricRulesResponseBodyResources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alertResult_ == nullptr; };
    // alertResult Field Functions 
    bool hasAlertResult() const { return this->alertResult_ != nullptr;};
    void deleteAlertResult() { this->alertResult_ = nullptr;};
    inline const vector<Models::CreateGroupMetricRulesResponseBodyResourcesAlertResult> & alertResult() const { DARABONBA_PTR_GET_CONST(alertResult_, vector<Models::CreateGroupMetricRulesResponseBodyResourcesAlertResult>) };
    inline vector<Models::CreateGroupMetricRulesResponseBodyResourcesAlertResult> alertResult() { DARABONBA_PTR_GET(alertResult_, vector<Models::CreateGroupMetricRulesResponseBodyResourcesAlertResult>) };
    inline CreateGroupMetricRulesResponseBodyResources& setAlertResult(const vector<Models::CreateGroupMetricRulesResponseBodyResourcesAlertResult> & alertResult) { DARABONBA_PTR_SET_VALUE(alertResult_, alertResult) };
    inline CreateGroupMetricRulesResponseBodyResources& setAlertResult(vector<Models::CreateGroupMetricRulesResponseBodyResourcesAlertResult> && alertResult) { DARABONBA_PTR_SET_RVALUE(alertResult_, alertResult) };


  protected:
    std::shared_ptr<vector<Models::CreateGroupMetricRulesResponseBodyResourcesAlertResult>> alertResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
