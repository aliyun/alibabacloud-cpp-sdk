// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REVERTAGGREGATEEVALUATIONRESULTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REVERTAGGREGATEEVALUATIONRESULTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RevertAggregateEvaluationResultsRequestResources.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class RevertAggregateEvaluationResultsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RevertAggregateEvaluationResultsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AggregatorId, aggregatorId_);
      DARABONBA_PTR_TO_JSON(ConfigRuleId, configRuleId_);
      DARABONBA_PTR_TO_JSON(Resources, resources_);
    };
    friend void from_json(const Darabonba::Json& j, RevertAggregateEvaluationResultsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AggregatorId, aggregatorId_);
      DARABONBA_PTR_FROM_JSON(ConfigRuleId, configRuleId_);
      DARABONBA_PTR_FROM_JSON(Resources, resources_);
    };
    RevertAggregateEvaluationResultsRequest() = default ;
    RevertAggregateEvaluationResultsRequest(const RevertAggregateEvaluationResultsRequest &) = default ;
    RevertAggregateEvaluationResultsRequest(RevertAggregateEvaluationResultsRequest &&) = default ;
    RevertAggregateEvaluationResultsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RevertAggregateEvaluationResultsRequest() = default ;
    RevertAggregateEvaluationResultsRequest& operator=(const RevertAggregateEvaluationResultsRequest &) = default ;
    RevertAggregateEvaluationResultsRequest& operator=(RevertAggregateEvaluationResultsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aggregatorId_ == nullptr
        && return this->configRuleId_ == nullptr && return this->resources_ == nullptr; };
    // aggregatorId Field Functions 
    bool hasAggregatorId() const { return this->aggregatorId_ != nullptr;};
    void deleteAggregatorId() { this->aggregatorId_ = nullptr;};
    inline string aggregatorId() const { DARABONBA_PTR_GET_DEFAULT(aggregatorId_, "") };
    inline RevertAggregateEvaluationResultsRequest& setAggregatorId(string aggregatorId) { DARABONBA_PTR_SET_VALUE(aggregatorId_, aggregatorId) };


    // configRuleId Field Functions 
    bool hasConfigRuleId() const { return this->configRuleId_ != nullptr;};
    void deleteConfigRuleId() { this->configRuleId_ = nullptr;};
    inline string configRuleId() const { DARABONBA_PTR_GET_DEFAULT(configRuleId_, "") };
    inline RevertAggregateEvaluationResultsRequest& setConfigRuleId(string configRuleId) { DARABONBA_PTR_SET_VALUE(configRuleId_, configRuleId) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline const vector<RevertAggregateEvaluationResultsRequestResources> & resources() const { DARABONBA_PTR_GET_CONST(resources_, vector<RevertAggregateEvaluationResultsRequestResources>) };
    inline vector<RevertAggregateEvaluationResultsRequestResources> resources() { DARABONBA_PTR_GET(resources_, vector<RevertAggregateEvaluationResultsRequestResources>) };
    inline RevertAggregateEvaluationResultsRequest& setResources(const vector<RevertAggregateEvaluationResultsRequestResources> & resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };
    inline RevertAggregateEvaluationResultsRequest& setResources(vector<RevertAggregateEvaluationResultsRequestResources> && resources) { DARABONBA_PTR_SET_RVALUE(resources_, resources) };


  protected:
    // The ID of the account group.
    // 
    // For more information about how to obtain the ID of an account group, see [ListAggregators](https://help.aliyun.com/document_detail/255797.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> aggregatorId_ = nullptr;
    // The ID of the rule in the account group.
    // 
    // This parameter is required.
    std::shared_ptr<string> configRuleId_ = nullptr;
    // The resources that you want to re-evaluate.
    // 
    // This parameter is required.
    std::shared_ptr<vector<RevertAggregateEvaluationResultsRequestResources>> resources_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
