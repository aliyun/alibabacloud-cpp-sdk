// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPOLARCLAWBINDINGSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPOLARCLAWBINDINGSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class ListPolarClawBindingsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPolarClawBindingsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentList, agentListShrink_);
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
    };
    friend void from_json(const Darabonba::Json& j, ListPolarClawBindingsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentList, agentListShrink_);
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
    };
    ListPolarClawBindingsShrinkRequest() = default ;
    ListPolarClawBindingsShrinkRequest(const ListPolarClawBindingsShrinkRequest &) = default ;
    ListPolarClawBindingsShrinkRequest(ListPolarClawBindingsShrinkRequest &&) = default ;
    ListPolarClawBindingsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPolarClawBindingsShrinkRequest() = default ;
    ListPolarClawBindingsShrinkRequest& operator=(const ListPolarClawBindingsShrinkRequest &) = default ;
    ListPolarClawBindingsShrinkRequest& operator=(ListPolarClawBindingsShrinkRequest &&) = default ;
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
    inline ListPolarClawBindingsShrinkRequest& setAgentListShrink(string agentListShrink) { DARABONBA_PTR_SET_VALUE(agentListShrink_, agentListShrink) };


    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline ListPolarClawBindingsShrinkRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


  protected:
    shared_ptr<string> agentListShrink_ {};
    // This parameter is required.
    shared_ptr<string> applicationId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
