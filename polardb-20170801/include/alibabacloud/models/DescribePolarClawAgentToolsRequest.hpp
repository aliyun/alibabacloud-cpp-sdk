// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOLARCLAWAGENTTOOLSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOLARCLAWAGENTTOOLSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribePolarClawAgentToolsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePolarClawAgentToolsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentId, agentId_);
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(IncludePlugins, includePlugins_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePolarClawAgentToolsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(IncludePlugins, includePlugins_);
    };
    DescribePolarClawAgentToolsRequest() = default ;
    DescribePolarClawAgentToolsRequest(const DescribePolarClawAgentToolsRequest &) = default ;
    DescribePolarClawAgentToolsRequest(DescribePolarClawAgentToolsRequest &&) = default ;
    DescribePolarClawAgentToolsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePolarClawAgentToolsRequest() = default ;
    DescribePolarClawAgentToolsRequest& operator=(const DescribePolarClawAgentToolsRequest &) = default ;
    DescribePolarClawAgentToolsRequest& operator=(DescribePolarClawAgentToolsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentId_ == nullptr
        && this->applicationId_ == nullptr && this->includePlugins_ == nullptr; };
    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline DescribePolarClawAgentToolsRequest& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline DescribePolarClawAgentToolsRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // includePlugins Field Functions 
    bool hasIncludePlugins() const { return this->includePlugins_ != nullptr;};
    void deleteIncludePlugins() { this->includePlugins_ = nullptr;};
    inline bool getIncludePlugins() const { DARABONBA_PTR_GET_DEFAULT(includePlugins_, false) };
    inline DescribePolarClawAgentToolsRequest& setIncludePlugins(bool includePlugins) { DARABONBA_PTR_SET_VALUE(includePlugins_, includePlugins) };


  protected:
    // Agent ID
    // 
    // This parameter is required.
    shared_ptr<string> agentId_ {};
    // The application ID.
    // 
    // This parameter is required.
    shared_ptr<string> applicationId_ {};
    // Specifies whether to include plugin tools.
    shared_ptr<bool> includePlugins_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
