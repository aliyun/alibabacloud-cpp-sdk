// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IGNOREAGGREGATEEVALUATIONRESULTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_IGNOREAGGREGATEEVALUATIONRESULTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class IgnoreAggregateEvaluationResultsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IgnoreAggregateEvaluationResultsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AggregatorId, aggregatorId_);
      DARABONBA_PTR_TO_JSON(ConfigRuleId, configRuleId_);
      DARABONBA_PTR_TO_JSON(IgnoreDate, ignoreDate_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
      DARABONBA_PTR_TO_JSON(Resources, resources_);
    };
    friend void from_json(const Darabonba::Json& j, IgnoreAggregateEvaluationResultsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AggregatorId, aggregatorId_);
      DARABONBA_PTR_FROM_JSON(ConfigRuleId, configRuleId_);
      DARABONBA_PTR_FROM_JSON(IgnoreDate, ignoreDate_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
      DARABONBA_PTR_FROM_JSON(Resources, resources_);
    };
    IgnoreAggregateEvaluationResultsRequest() = default ;
    IgnoreAggregateEvaluationResultsRequest(const IgnoreAggregateEvaluationResultsRequest &) = default ;
    IgnoreAggregateEvaluationResultsRequest(IgnoreAggregateEvaluationResultsRequest &&) = default ;
    IgnoreAggregateEvaluationResultsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IgnoreAggregateEvaluationResultsRequest() = default ;
    IgnoreAggregateEvaluationResultsRequest& operator=(const IgnoreAggregateEvaluationResultsRequest &) = default ;
    IgnoreAggregateEvaluationResultsRequest& operator=(IgnoreAggregateEvaluationResultsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Resources : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Resources& obj) { 
        DARABONBA_PTR_TO_JSON(Region, region_);
        DARABONBA_PTR_TO_JSON(ResourceAccountId, resourceAccountId_);
        DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      };
      friend void from_json(const Darabonba::Json& j, Resources& obj) { 
        DARABONBA_PTR_FROM_JSON(Region, region_);
        DARABONBA_PTR_FROM_JSON(ResourceAccountId, resourceAccountId_);
        DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      };
      Resources() = default ;
      Resources(const Resources &) = default ;
      Resources(Resources &&) = default ;
      Resources(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Resources() = default ;
      Resources& operator=(const Resources &) = default ;
      Resources& operator=(Resources &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->region_ == nullptr
        && this->resourceAccountId_ == nullptr && this->resourceId_ == nullptr && this->resourceType_ == nullptr; };
      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline Resources& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


      // resourceAccountId Field Functions 
      bool hasResourceAccountId() const { return this->resourceAccountId_ != nullptr;};
      void deleteResourceAccountId() { this->resourceAccountId_ = nullptr;};
      inline int64_t getResourceAccountId() const { DARABONBA_PTR_GET_DEFAULT(resourceAccountId_, 0L) };
      inline Resources& setResourceAccountId(int64_t resourceAccountId) { DARABONBA_PTR_SET_VALUE(resourceAccountId_, resourceAccountId) };


      // resourceId Field Functions 
      bool hasResourceId() const { return this->resourceId_ != nullptr;};
      void deleteResourceId() { this->resourceId_ = nullptr;};
      inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
      inline Resources& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline Resources& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    protected:
      // This parameter is required.
      shared_ptr<string> region_ {};
      // This parameter is required.
      shared_ptr<int64_t> resourceAccountId_ {};
      // This parameter is required.
      shared_ptr<string> resourceId_ {};
      // This parameter is required.
      shared_ptr<string> resourceType_ {};
    };

    virtual bool empty() const override { return this->aggregatorId_ == nullptr
        && this->configRuleId_ == nullptr && this->ignoreDate_ == nullptr && this->reason_ == nullptr && this->resources_ == nullptr; };
    // aggregatorId Field Functions 
    bool hasAggregatorId() const { return this->aggregatorId_ != nullptr;};
    void deleteAggregatorId() { this->aggregatorId_ = nullptr;};
    inline string getAggregatorId() const { DARABONBA_PTR_GET_DEFAULT(aggregatorId_, "") };
    inline IgnoreAggregateEvaluationResultsRequest& setAggregatorId(string aggregatorId) { DARABONBA_PTR_SET_VALUE(aggregatorId_, aggregatorId) };


    // configRuleId Field Functions 
    bool hasConfigRuleId() const { return this->configRuleId_ != nullptr;};
    void deleteConfigRuleId() { this->configRuleId_ = nullptr;};
    inline string getConfigRuleId() const { DARABONBA_PTR_GET_DEFAULT(configRuleId_, "") };
    inline IgnoreAggregateEvaluationResultsRequest& setConfigRuleId(string configRuleId) { DARABONBA_PTR_SET_VALUE(configRuleId_, configRuleId) };


    // ignoreDate Field Functions 
    bool hasIgnoreDate() const { return this->ignoreDate_ != nullptr;};
    void deleteIgnoreDate() { this->ignoreDate_ = nullptr;};
    inline string getIgnoreDate() const { DARABONBA_PTR_GET_DEFAULT(ignoreDate_, "") };
    inline IgnoreAggregateEvaluationResultsRequest& setIgnoreDate(string ignoreDate) { DARABONBA_PTR_SET_VALUE(ignoreDate_, ignoreDate) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline IgnoreAggregateEvaluationResultsRequest& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline const vector<IgnoreAggregateEvaluationResultsRequest::Resources> & getResources() const { DARABONBA_PTR_GET_CONST(resources_, vector<IgnoreAggregateEvaluationResultsRequest::Resources>) };
    inline vector<IgnoreAggregateEvaluationResultsRequest::Resources> getResources() { DARABONBA_PTR_GET(resources_, vector<IgnoreAggregateEvaluationResultsRequest::Resources>) };
    inline IgnoreAggregateEvaluationResultsRequest& setResources(const vector<IgnoreAggregateEvaluationResultsRequest::Resources> & resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };
    inline IgnoreAggregateEvaluationResultsRequest& setResources(vector<IgnoreAggregateEvaluationResultsRequest::Resources> && resources) { DARABONBA_PTR_SET_RVALUE(resources_, resources) };


  protected:
    // This parameter is required.
    shared_ptr<string> aggregatorId_ {};
    // This parameter is required.
    shared_ptr<string> configRuleId_ {};
    shared_ptr<string> ignoreDate_ {};
    shared_ptr<string> reason_ {};
    // This parameter is required.
    shared_ptr<vector<IgnoreAggregateEvaluationResultsRequest::Resources>> resources_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
