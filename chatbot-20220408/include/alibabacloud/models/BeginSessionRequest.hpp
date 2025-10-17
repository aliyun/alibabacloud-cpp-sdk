// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BEGINSESSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BEGINSESSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class BeginSessionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BeginSessionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(SandBox, sandBox_);
      DARABONBA_PTR_TO_JSON(VendorParam, vendorParam_);
    };
    friend void from_json(const Darabonba::Json& j, BeginSessionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(SandBox, sandBox_);
      DARABONBA_PTR_FROM_JSON(VendorParam, vendorParam_);
    };
    BeginSessionRequest() = default ;
    BeginSessionRequest(const BeginSessionRequest &) = default ;
    BeginSessionRequest(BeginSessionRequest &&) = default ;
    BeginSessionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BeginSessionRequest() = default ;
    BeginSessionRequest& operator=(const BeginSessionRequest &) = default ;
    BeginSessionRequest& operator=(BeginSessionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentKey_ == nullptr
        && return this->instanceId_ == nullptr && return this->sandBox_ == nullptr && return this->vendorParam_ == nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string agentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline BeginSessionRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline BeginSessionRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // sandBox Field Functions 
    bool hasSandBox() const { return this->sandBox_ != nullptr;};
    void deleteSandBox() { this->sandBox_ = nullptr;};
    inline bool sandBox() const { DARABONBA_PTR_GET_DEFAULT(sandBox_, false) };
    inline BeginSessionRequest& setSandBox(bool sandBox) { DARABONBA_PTR_SET_VALUE(sandBox_, sandBox) };


    // vendorParam Field Functions 
    bool hasVendorParam() const { return this->vendorParam_ != nullptr;};
    void deleteVendorParam() { this->vendorParam_ = nullptr;};
    inline string vendorParam() const { DARABONBA_PTR_GET_DEFAULT(vendorParam_, "") };
    inline BeginSessionRequest& setVendorParam(string vendorParam) { DARABONBA_PTR_SET_VALUE(vendorParam_, vendorParam) };


  protected:
    std::shared_ptr<string> agentKey_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<bool> sandBox_ = nullptr;
    std::shared_ptr<string> vendorParam_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
