// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNBINDAGENTSTORAGE2VPCREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UNBINDAGENTSTORAGE2VPCREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tablestore20201209
{
namespace Models
{
  class UnbindAgentStorage2VpcRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UnbindAgentStorage2VpcRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentStorageName, agentStorageName_);
      DARABONBA_PTR_TO_JSON(AgentStorageVpcName, agentStorageVpcName_);
    };
    friend void from_json(const Darabonba::Json& j, UnbindAgentStorage2VpcRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentStorageName, agentStorageName_);
      DARABONBA_PTR_FROM_JSON(AgentStorageVpcName, agentStorageVpcName_);
    };
    UnbindAgentStorage2VpcRequest() = default ;
    UnbindAgentStorage2VpcRequest(const UnbindAgentStorage2VpcRequest &) = default ;
    UnbindAgentStorage2VpcRequest(UnbindAgentStorage2VpcRequest &&) = default ;
    UnbindAgentStorage2VpcRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UnbindAgentStorage2VpcRequest() = default ;
    UnbindAgentStorage2VpcRequest& operator=(const UnbindAgentStorage2VpcRequest &) = default ;
    UnbindAgentStorage2VpcRequest& operator=(UnbindAgentStorage2VpcRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentStorageName_ == nullptr
        && this->agentStorageVpcName_ == nullptr; };
    // agentStorageName Field Functions 
    bool hasAgentStorageName() const { return this->agentStorageName_ != nullptr;};
    void deleteAgentStorageName() { this->agentStorageName_ = nullptr;};
    inline string getAgentStorageName() const { DARABONBA_PTR_GET_DEFAULT(agentStorageName_, "") };
    inline UnbindAgentStorage2VpcRequest& setAgentStorageName(string agentStorageName) { DARABONBA_PTR_SET_VALUE(agentStorageName_, agentStorageName) };


    // agentStorageVpcName Field Functions 
    bool hasAgentStorageVpcName() const { return this->agentStorageVpcName_ != nullptr;};
    void deleteAgentStorageVpcName() { this->agentStorageVpcName_ = nullptr;};
    inline string getAgentStorageVpcName() const { DARABONBA_PTR_GET_DEFAULT(agentStorageVpcName_, "") };
    inline UnbindAgentStorage2VpcRequest& setAgentStorageVpcName(string agentStorageVpcName) { DARABONBA_PTR_SET_VALUE(agentStorageVpcName_, agentStorageVpcName) };


  protected:
    // The agent storage name.
    // 
    // This parameter is required.
    shared_ptr<string> agentStorageName_ {};
    // The VPC name.
    // 
    // This parameter is required.
    shared_ptr<string> agentStorageVpcName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tablestore20201209
#endif
