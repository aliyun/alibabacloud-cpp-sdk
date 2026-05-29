// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMODELPROVIDERENDPOINTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMODELPROVIDERENDPOINTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ListModelProviderEndpointsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListModelProviderEndpointsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentPlatform, agentPlatform_);
      DARABONBA_PTR_TO_JSON(AgentProvider, agentProvider_);
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(ProviderName, providerName_);
    };
    friend void from_json(const Darabonba::Json& j, ListModelProviderEndpointsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentPlatform, agentPlatform_);
      DARABONBA_PTR_FROM_JSON(AgentProvider, agentProvider_);
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(ProviderName, providerName_);
    };
    ListModelProviderEndpointsRequest() = default ;
    ListModelProviderEndpointsRequest(const ListModelProviderEndpointsRequest &) = default ;
    ListModelProviderEndpointsRequest(ListModelProviderEndpointsRequest &&) = default ;
    ListModelProviderEndpointsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListModelProviderEndpointsRequest() = default ;
    ListModelProviderEndpointsRequest& operator=(const ListModelProviderEndpointsRequest &) = default ;
    ListModelProviderEndpointsRequest& operator=(ListModelProviderEndpointsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentPlatform_ == nullptr
        && this->agentProvider_ == nullptr && this->bizType_ == nullptr && this->providerName_ == nullptr; };
    // agentPlatform Field Functions 
    bool hasAgentPlatform() const { return this->agentPlatform_ != nullptr;};
    void deleteAgentPlatform() { this->agentPlatform_ = nullptr;};
    inline string getAgentPlatform() const { DARABONBA_PTR_GET_DEFAULT(agentPlatform_, "") };
    inline ListModelProviderEndpointsRequest& setAgentPlatform(string agentPlatform) { DARABONBA_PTR_SET_VALUE(agentPlatform_, agentPlatform) };


    // agentProvider Field Functions 
    bool hasAgentProvider() const { return this->agentProvider_ != nullptr;};
    void deleteAgentProvider() { this->agentProvider_ = nullptr;};
    inline string getAgentProvider() const { DARABONBA_PTR_GET_DEFAULT(agentProvider_, "") };
    inline ListModelProviderEndpointsRequest& setAgentProvider(string agentProvider) { DARABONBA_PTR_SET_VALUE(agentProvider_, agentProvider) };


    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline int32_t getBizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, 0) };
    inline ListModelProviderEndpointsRequest& setBizType(int32_t bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // providerName Field Functions 
    bool hasProviderName() const { return this->providerName_ != nullptr;};
    void deleteProviderName() { this->providerName_ = nullptr;};
    inline string getProviderName() const { DARABONBA_PTR_GET_DEFAULT(providerName_, "") };
    inline ListModelProviderEndpointsRequest& setProviderName(string providerName) { DARABONBA_PTR_SET_VALUE(providerName_, providerName) };


  protected:
    shared_ptr<string> agentPlatform_ {};
    shared_ptr<string> agentProvider_ {};
    shared_ptr<int32_t> bizType_ {};
    shared_ptr<string> providerName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
