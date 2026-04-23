// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELROUTERQUERYCOSTOVERVIEWMETRICSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODELROUTERQUERYCOSTOVERVIEWMETRICSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class ModelRouterQueryCostOverviewMetricsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelRouterQueryCostOverviewMetricsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(clientId, clientId_);
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(granularity, granularity_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(modelTypes, modelTypes_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, ModelRouterQueryCostOverviewMetricsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(clientId, clientId_);
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(granularity, granularity_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(modelTypes, modelTypes_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
    };
    ModelRouterQueryCostOverviewMetricsRequest() = default ;
    ModelRouterQueryCostOverviewMetricsRequest(const ModelRouterQueryCostOverviewMetricsRequest &) = default ;
    ModelRouterQueryCostOverviewMetricsRequest(ModelRouterQueryCostOverviewMetricsRequest &&) = default ;
    ModelRouterQueryCostOverviewMetricsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelRouterQueryCostOverviewMetricsRequest() = default ;
    ModelRouterQueryCostOverviewMetricsRequest& operator=(const ModelRouterQueryCostOverviewMetricsRequest &) = default ;
    ModelRouterQueryCostOverviewMetricsRequest& operator=(ModelRouterQueryCostOverviewMetricsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientId_ == nullptr
        && this->endTime_ == nullptr && this->granularity_ == nullptr && this->maxResults_ == nullptr && this->modelTypes_ == nullptr && this->nextToken_ == nullptr
        && this->startTime_ == nullptr; };
    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline int64_t getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, 0L) };
    inline ModelRouterQueryCostOverviewMetricsRequest& setClientId(int64_t clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ModelRouterQueryCostOverviewMetricsRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // granularity Field Functions 
    bool hasGranularity() const { return this->granularity_ != nullptr;};
    void deleteGranularity() { this->granularity_ = nullptr;};
    inline string getGranularity() const { DARABONBA_PTR_GET_DEFAULT(granularity_, "") };
    inline ModelRouterQueryCostOverviewMetricsRequest& setGranularity(string granularity) { DARABONBA_PTR_SET_VALUE(granularity_, granularity) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ModelRouterQueryCostOverviewMetricsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // modelTypes Field Functions 
    bool hasModelTypes() const { return this->modelTypes_ != nullptr;};
    void deleteModelTypes() { this->modelTypes_ = nullptr;};
    inline string getModelTypes() const { DARABONBA_PTR_GET_DEFAULT(modelTypes_, "") };
    inline ModelRouterQueryCostOverviewMetricsRequest& setModelTypes(string modelTypes) { DARABONBA_PTR_SET_VALUE(modelTypes_, modelTypes) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ModelRouterQueryCostOverviewMetricsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ModelRouterQueryCostOverviewMetricsRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    shared_ptr<int64_t> clientId_ {};
    // This parameter is required.
    shared_ptr<int64_t> endTime_ {};
    shared_ptr<string> granularity_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> modelTypes_ {};
    // nextToken
    shared_ptr<string> nextToken_ {};
    // This parameter is required.
    shared_ptr<int64_t> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
