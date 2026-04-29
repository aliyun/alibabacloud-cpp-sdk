// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOLARCLAWAGENTSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOLARCLAWAGENTSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribePolarClawAgentsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePolarClawAgentsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentList, agentListShrink_);
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePolarClawAgentsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentList, agentListShrink_);
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
    };
    DescribePolarClawAgentsShrinkRequest() = default ;
    DescribePolarClawAgentsShrinkRequest(const DescribePolarClawAgentsShrinkRequest &) = default ;
    DescribePolarClawAgentsShrinkRequest(DescribePolarClawAgentsShrinkRequest &&) = default ;
    DescribePolarClawAgentsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePolarClawAgentsShrinkRequest() = default ;
    DescribePolarClawAgentsShrinkRequest& operator=(const DescribePolarClawAgentsShrinkRequest &) = default ;
    DescribePolarClawAgentsShrinkRequest& operator=(DescribePolarClawAgentsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentListShrink_ == nullptr
        && this->applicationId_ == nullptr; };
    // agentListShrink Field Functions 
    bool hasAgentListShrink() const { return this->agentListShrink_ != nullptr;};
    void deleteAgentListShrink() { this->agentListShrink_ = nullptr;};
    inline string getAgentListShrink() const { DARABONBA_PTR_GET_DEFAULT(agentListShrink_, "") };
    inline DescribePolarClawAgentsShrinkRequest& setAgentListShrink(string agentListShrink) { DARABONBA_PTR_SET_VALUE(agentListShrink_, agentListShrink) };


    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline DescribePolarClawAgentsShrinkRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


  protected:
    shared_ptr<string> agentListShrink_ {};
    // This parameter is required.
    shared_ptr<string> applicationId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
