// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOLARCLAWAGENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOLARCLAWAGENTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribePolarClawAgentsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePolarClawAgentsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentList, agentList_);
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePolarClawAgentsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentList, agentList_);
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
    };
    DescribePolarClawAgentsRequest() = default ;
    DescribePolarClawAgentsRequest(const DescribePolarClawAgentsRequest &) = default ;
    DescribePolarClawAgentsRequest(DescribePolarClawAgentsRequest &&) = default ;
    DescribePolarClawAgentsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePolarClawAgentsRequest() = default ;
    DescribePolarClawAgentsRequest& operator=(const DescribePolarClawAgentsRequest &) = default ;
    DescribePolarClawAgentsRequest& operator=(DescribePolarClawAgentsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentList_ == nullptr
        && this->applicationId_ == nullptr; };
    // agentList Field Functions 
    bool hasAgentList() const { return this->agentList_ != nullptr;};
    void deleteAgentList() { this->agentList_ = nullptr;};
    inline const vector<string> & getAgentList() const { DARABONBA_PTR_GET_CONST(agentList_, vector<string>) };
    inline vector<string> getAgentList() { DARABONBA_PTR_GET(agentList_, vector<string>) };
    inline DescribePolarClawAgentsRequest& setAgentList(const vector<string> & agentList) { DARABONBA_PTR_SET_VALUE(agentList_, agentList) };
    inline DescribePolarClawAgentsRequest& setAgentList(vector<string> && agentList) { DARABONBA_PTR_SET_RVALUE(agentList_, agentList) };


    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline DescribePolarClawAgentsRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


  protected:
    shared_ptr<vector<string>> agentList_ {};
    // This parameter is required.
    shared_ptr<string> applicationId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
