// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREMEDIATIONEXECUTIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTREMEDIATIONEXECUTIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class ListRemediationExecutionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRemediationExecutionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigRuleId, configRuleId_);
      DARABONBA_PTR_TO_JSON(ExecutionStatus, executionStatus_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
    };
    friend void from_json(const Darabonba::Json& j, ListRemediationExecutionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigRuleId, configRuleId_);
      DARABONBA_PTR_FROM_JSON(ExecutionStatus, executionStatus_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
    };
    ListRemediationExecutionsRequest() = default ;
    ListRemediationExecutionsRequest(const ListRemediationExecutionsRequest &) = default ;
    ListRemediationExecutionsRequest(ListRemediationExecutionsRequest &&) = default ;
    ListRemediationExecutionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRemediationExecutionsRequest() = default ;
    ListRemediationExecutionsRequest& operator=(const ListRemediationExecutionsRequest &) = default ;
    ListRemediationExecutionsRequest& operator=(ListRemediationExecutionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configRuleId_ == nullptr
        && return this->executionStatus_ == nullptr && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr; };
    // configRuleId Field Functions 
    bool hasConfigRuleId() const { return this->configRuleId_ != nullptr;};
    void deleteConfigRuleId() { this->configRuleId_ = nullptr;};
    inline string configRuleId() const { DARABONBA_PTR_GET_DEFAULT(configRuleId_, "") };
    inline ListRemediationExecutionsRequest& setConfigRuleId(string configRuleId) { DARABONBA_PTR_SET_VALUE(configRuleId_, configRuleId) };


    // executionStatus Field Functions 
    bool hasExecutionStatus() const { return this->executionStatus_ != nullptr;};
    void deleteExecutionStatus() { this->executionStatus_ = nullptr;};
    inline string executionStatus() const { DARABONBA_PTR_GET_DEFAULT(executionStatus_, "") };
    inline ListRemediationExecutionsRequest& setExecutionStatus(string executionStatus) { DARABONBA_PTR_SET_VALUE(executionStatus_, executionStatus) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline ListRemediationExecutionsRequest& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListRemediationExecutionsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


  protected:
    // The rule ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> configRuleId_ = nullptr;
    // The status of the remediation. Valid values:
    // 
    // *   Success
    // *   Failed
    std::shared_ptr<string> executionStatus_ = nullptr;
    // The maximum number of entries to return for a single request. Valid values: 10 to 100.
    std::shared_ptr<int64_t> maxResults_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results. You do not need to specify this parameter for the first request. You must specify the token that is obtained from the previous query as the value of NextToken.
    std::shared_ptr<string> nextToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
