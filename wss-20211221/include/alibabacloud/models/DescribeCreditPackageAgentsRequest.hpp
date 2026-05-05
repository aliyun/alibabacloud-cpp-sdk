// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECREDITPACKAGEAGENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECREDITPACKAGEAGENTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Wss20211221
{
namespace Models
{
  class DescribeCreditPackageAgentsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCreditPackageAgentsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentIds, agentIds_);
      DARABONBA_PTR_TO_JSON(AgentType, agentType_);
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCreditPackageAgentsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentIds, agentIds_);
      DARABONBA_PTR_FROM_JSON(AgentType, agentType_);
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
    };
    DescribeCreditPackageAgentsRequest() = default ;
    DescribeCreditPackageAgentsRequest(const DescribeCreditPackageAgentsRequest &) = default ;
    DescribeCreditPackageAgentsRequest(DescribeCreditPackageAgentsRequest &&) = default ;
    DescribeCreditPackageAgentsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCreditPackageAgentsRequest() = default ;
    DescribeCreditPackageAgentsRequest& operator=(const DescribeCreditPackageAgentsRequest &) = default ;
    DescribeCreditPackageAgentsRequest& operator=(DescribeCreditPackageAgentsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentIds_ == nullptr
        && this->agentType_ == nullptr && this->bizType_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr; };
    // agentIds Field Functions 
    bool hasAgentIds() const { return this->agentIds_ != nullptr;};
    void deleteAgentIds() { this->agentIds_ = nullptr;};
    inline const vector<string> & getAgentIds() const { DARABONBA_PTR_GET_CONST(agentIds_, vector<string>) };
    inline vector<string> getAgentIds() { DARABONBA_PTR_GET(agentIds_, vector<string>) };
    inline DescribeCreditPackageAgentsRequest& setAgentIds(const vector<string> & agentIds) { DARABONBA_PTR_SET_VALUE(agentIds_, agentIds) };
    inline DescribeCreditPackageAgentsRequest& setAgentIds(vector<string> && agentIds) { DARABONBA_PTR_SET_RVALUE(agentIds_, agentIds) };


    // agentType Field Functions 
    bool hasAgentType() const { return this->agentType_ != nullptr;};
    void deleteAgentType() { this->agentType_ = nullptr;};
    inline string getAgentType() const { DARABONBA_PTR_GET_DEFAULT(agentType_, "") };
    inline DescribeCreditPackageAgentsRequest& setAgentType(string agentType) { DARABONBA_PTR_SET_VALUE(agentType_, agentType) };


    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string getBizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline DescribeCreditPackageAgentsRequest& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeCreditPackageAgentsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeCreditPackageAgentsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


  protected:
    shared_ptr<vector<string>> agentIds_ {};
    shared_ptr<string> agentType_ {};
    shared_ptr<string> bizType_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Wss20211221
#endif
