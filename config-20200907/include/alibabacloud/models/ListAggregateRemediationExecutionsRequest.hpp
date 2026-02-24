// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGGREGATEREMEDIATIONEXECUTIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAGGREGATEREMEDIATIONEXECUTIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class ListAggregateRemediationExecutionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAggregateRemediationExecutionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AggregatorId, aggregatorId_);
      DARABONBA_PTR_TO_JSON(ConfigRuleId, configRuleId_);
      DARABONBA_PTR_TO_JSON(ExecutionStatus, executionStatus_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ResourceAccountId, resourceAccountId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAggregateRemediationExecutionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AggregatorId, aggregatorId_);
      DARABONBA_PTR_FROM_JSON(ConfigRuleId, configRuleId_);
      DARABONBA_PTR_FROM_JSON(ExecutionStatus, executionStatus_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ResourceAccountId, resourceAccountId_);
    };
    ListAggregateRemediationExecutionsRequest() = default ;
    ListAggregateRemediationExecutionsRequest(const ListAggregateRemediationExecutionsRequest &) = default ;
    ListAggregateRemediationExecutionsRequest(ListAggregateRemediationExecutionsRequest &&) = default ;
    ListAggregateRemediationExecutionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAggregateRemediationExecutionsRequest() = default ;
    ListAggregateRemediationExecutionsRequest& operator=(const ListAggregateRemediationExecutionsRequest &) = default ;
    ListAggregateRemediationExecutionsRequest& operator=(ListAggregateRemediationExecutionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aggregatorId_ == nullptr
        && this->configRuleId_ == nullptr && this->executionStatus_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->resourceAccountId_ == nullptr; };
    // aggregatorId Field Functions 
    bool hasAggregatorId() const { return this->aggregatorId_ != nullptr;};
    void deleteAggregatorId() { this->aggregatorId_ = nullptr;};
    inline string getAggregatorId() const { DARABONBA_PTR_GET_DEFAULT(aggregatorId_, "") };
    inline ListAggregateRemediationExecutionsRequest& setAggregatorId(string aggregatorId) { DARABONBA_PTR_SET_VALUE(aggregatorId_, aggregatorId) };


    // configRuleId Field Functions 
    bool hasConfigRuleId() const { return this->configRuleId_ != nullptr;};
    void deleteConfigRuleId() { this->configRuleId_ = nullptr;};
    inline string getConfigRuleId() const { DARABONBA_PTR_GET_DEFAULT(configRuleId_, "") };
    inline ListAggregateRemediationExecutionsRequest& setConfigRuleId(string configRuleId) { DARABONBA_PTR_SET_VALUE(configRuleId_, configRuleId) };


    // executionStatus Field Functions 
    bool hasExecutionStatus() const { return this->executionStatus_ != nullptr;};
    void deleteExecutionStatus() { this->executionStatus_ = nullptr;};
    inline string getExecutionStatus() const { DARABONBA_PTR_GET_DEFAULT(executionStatus_, "") };
    inline ListAggregateRemediationExecutionsRequest& setExecutionStatus(string executionStatus) { DARABONBA_PTR_SET_VALUE(executionStatus_, executionStatus) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline ListAggregateRemediationExecutionsRequest& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAggregateRemediationExecutionsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // resourceAccountId Field Functions 
    bool hasResourceAccountId() const { return this->resourceAccountId_ != nullptr;};
    void deleteResourceAccountId() { this->resourceAccountId_ = nullptr;};
    inline int64_t getResourceAccountId() const { DARABONBA_PTR_GET_DEFAULT(resourceAccountId_, 0L) };
    inline ListAggregateRemediationExecutionsRequest& setResourceAccountId(int64_t resourceAccountId) { DARABONBA_PTR_SET_VALUE(resourceAccountId_, resourceAccountId) };


  protected:
    // This parameter is required.
    shared_ptr<string> aggregatorId_ {};
    // This parameter is required.
    shared_ptr<string> configRuleId_ {};
    shared_ptr<string> executionStatus_ {};
    shared_ptr<int64_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<int64_t> resourceAccountId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
