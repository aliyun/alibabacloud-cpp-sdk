// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEXTERNALAGENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEXTERNALAGENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeExternalAgentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeExternalAgentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentMode, agentMode_);
      DARABONBA_PTR_TO_JSON(PrivateIpAddress, privateIpAddress_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeExternalAgentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentMode, agentMode_);
      DARABONBA_PTR_FROM_JSON(PrivateIpAddress, privateIpAddress_);
    };
    DescribeExternalAgentRequest() = default ;
    DescribeExternalAgentRequest(const DescribeExternalAgentRequest &) = default ;
    DescribeExternalAgentRequest(DescribeExternalAgentRequest &&) = default ;
    DescribeExternalAgentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeExternalAgentRequest() = default ;
    DescribeExternalAgentRequest& operator=(const DescribeExternalAgentRequest &) = default ;
    DescribeExternalAgentRequest& operator=(DescribeExternalAgentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentMode_ == nullptr
        && this->privateIpAddress_ == nullptr; };
    // agentMode Field Functions 
    bool hasAgentMode() const { return this->agentMode_ != nullptr;};
    void deleteAgentMode() { this->agentMode_ = nullptr;};
    inline string getAgentMode() const { DARABONBA_PTR_GET_DEFAULT(agentMode_, "") };
    inline DescribeExternalAgentRequest& setAgentMode(string agentMode) { DARABONBA_PTR_SET_VALUE(agentMode_, agentMode) };


    // privateIpAddress Field Functions 
    bool hasPrivateIpAddress() const { return this->privateIpAddress_ != nullptr;};
    void deletePrivateIpAddress() { this->privateIpAddress_ = nullptr;};
    inline string getPrivateIpAddress() const { DARABONBA_PTR_GET_DEFAULT(privateIpAddress_, "") };
    inline DescribeExternalAgentRequest& setPrivateIpAddress(string privateIpAddress) { DARABONBA_PTR_SET_VALUE(privateIpAddress_, privateIpAddress) };


  protected:
    // The permission mode of the agent. Valid values:
    // 
    // admin: the admin mode, which provides full permissions. restricted: the restricted mode, which provides partial permissions. Default value: admin.
    shared_ptr<string> agentMode_ {};
    // Specifies whether to obtain the credentials that are used to access the cluster over the internal network.
    // 
    // *   `true`: obtains the credentials that are used to access the cluster over the internal network.
    // *   `false`: obtains the credentials that are used to access the cluster over the Internet.
    // 
    // Default value: `false`.
    shared_ptr<string> privateIpAddress_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
