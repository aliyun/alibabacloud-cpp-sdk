// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEATIAGENTREGISTERINFOMARKETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEATIAGENTREGISTERINFOMARKETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeAtiAgentRegisterInfoMarketRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAtiAgentRegisterInfoMarketRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentHost, agentHost_);
      DARABONBA_PTR_TO_JSON(AgentVersion, agentVersion_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAtiAgentRegisterInfoMarketRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentHost, agentHost_);
      DARABONBA_PTR_FROM_JSON(AgentVersion, agentVersion_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
    };
    DescribeAtiAgentRegisterInfoMarketRequest() = default ;
    DescribeAtiAgentRegisterInfoMarketRequest(const DescribeAtiAgentRegisterInfoMarketRequest &) = default ;
    DescribeAtiAgentRegisterInfoMarketRequest(DescribeAtiAgentRegisterInfoMarketRequest &&) = default ;
    DescribeAtiAgentRegisterInfoMarketRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAtiAgentRegisterInfoMarketRequest() = default ;
    DescribeAtiAgentRegisterInfoMarketRequest& operator=(const DescribeAtiAgentRegisterInfoMarketRequest &) = default ;
    DescribeAtiAgentRegisterInfoMarketRequest& operator=(DescribeAtiAgentRegisterInfoMarketRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentHost_ == nullptr
        && this->agentVersion_ == nullptr && this->clientToken_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr; };
    // agentHost Field Functions 
    bool hasAgentHost() const { return this->agentHost_ != nullptr;};
    void deleteAgentHost() { this->agentHost_ = nullptr;};
    inline string getAgentHost() const { DARABONBA_PTR_GET_DEFAULT(agentHost_, "") };
    inline DescribeAtiAgentRegisterInfoMarketRequest& setAgentHost(string agentHost) { DARABONBA_PTR_SET_VALUE(agentHost_, agentHost) };


    // agentVersion Field Functions 
    bool hasAgentVersion() const { return this->agentVersion_ != nullptr;};
    void deleteAgentVersion() { this->agentVersion_ = nullptr;};
    inline string getAgentVersion() const { DARABONBA_PTR_GET_DEFAULT(agentVersion_, "") };
    inline DescribeAtiAgentRegisterInfoMarketRequest& setAgentVersion(string agentVersion) { DARABONBA_PTR_SET_VALUE(agentVersion_, agentVersion) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DescribeAtiAgentRegisterInfoMarketRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeAtiAgentRegisterInfoMarketRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeAtiAgentRegisterInfoMarketRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


  protected:
    shared_ptr<string> agentHost_ {};
    shared_ptr<string> agentVersion_ {};
    shared_ptr<string> clientToken_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
