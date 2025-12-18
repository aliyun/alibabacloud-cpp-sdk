// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REVERTEVALUATIONRESULTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REVERTEVALUATIONRESULTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RevertEvaluationResultsRequestResources.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class RevertEvaluationResultsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RevertEvaluationResultsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigRuleId, configRuleId_);
      DARABONBA_PTR_TO_JSON(Resources, resources_);
    };
    friend void from_json(const Darabonba::Json& j, RevertEvaluationResultsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigRuleId, configRuleId_);
      DARABONBA_PTR_FROM_JSON(Resources, resources_);
    };
    RevertEvaluationResultsRequest() = default ;
    RevertEvaluationResultsRequest(const RevertEvaluationResultsRequest &) = default ;
    RevertEvaluationResultsRequest(RevertEvaluationResultsRequest &&) = default ;
    RevertEvaluationResultsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RevertEvaluationResultsRequest() = default ;
    RevertEvaluationResultsRequest& operator=(const RevertEvaluationResultsRequest &) = default ;
    RevertEvaluationResultsRequest& operator=(RevertEvaluationResultsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configRuleId_ == nullptr
        && return this->resources_ == nullptr; };
    // configRuleId Field Functions 
    bool hasConfigRuleId() const { return this->configRuleId_ != nullptr;};
    void deleteConfigRuleId() { this->configRuleId_ = nullptr;};
    inline string configRuleId() const { DARABONBA_PTR_GET_DEFAULT(configRuleId_, "") };
    inline RevertEvaluationResultsRequest& setConfigRuleId(string configRuleId) { DARABONBA_PTR_SET_VALUE(configRuleId_, configRuleId) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline const vector<RevertEvaluationResultsRequestResources> & resources() const { DARABONBA_PTR_GET_CONST(resources_, vector<RevertEvaluationResultsRequestResources>) };
    inline vector<RevertEvaluationResultsRequestResources> resources() { DARABONBA_PTR_GET(resources_, vector<RevertEvaluationResultsRequestResources>) };
    inline RevertEvaluationResultsRequest& setResources(const vector<RevertEvaluationResultsRequestResources> & resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };
    inline RevertEvaluationResultsRequest& setResources(vector<RevertEvaluationResultsRequestResources> && resources) { DARABONBA_PTR_SET_RVALUE(resources_, resources) };


  protected:
    // The rule ID.
    // 
    // For more information about how to obtain the ID of a rule, see [ListConfigRules](https://help.aliyun.com/document_detail/169607.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> configRuleId_ = nullptr;
    // The resources that are to be re-evaluated.
    // 
    // This parameter is required.
    std::shared_ptr<vector<RevertEvaluationResultsRequestResources>> resources_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
