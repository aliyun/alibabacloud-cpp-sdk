// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ModifyInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CallingNumber, callingNumber_);
      DARABONBA_PTR_TO_JSON(InstanceDescription, instanceDescription_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(MaxConcurrentConversation, maxConcurrentConversation_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CallingNumber, callingNumber_);
      DARABONBA_PTR_FROM_JSON(InstanceDescription, instanceDescription_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(MaxConcurrentConversation, maxConcurrentConversation_);
    };
    ModifyInstanceRequest() = default ;
    ModifyInstanceRequest(const ModifyInstanceRequest &) = default ;
    ModifyInstanceRequest(ModifyInstanceRequest &&) = default ;
    ModifyInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyInstanceRequest() = default ;
    ModifyInstanceRequest& operator=(const ModifyInstanceRequest &) = default ;
    ModifyInstanceRequest& operator=(ModifyInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callingNumber_ == nullptr
        && return this->instanceDescription_ == nullptr && return this->instanceId_ == nullptr && return this->instanceName_ == nullptr && return this->maxConcurrentConversation_ == nullptr; };
    // callingNumber Field Functions 
    bool hasCallingNumber() const { return this->callingNumber_ != nullptr;};
    void deleteCallingNumber() { this->callingNumber_ = nullptr;};
    inline const vector<string> & callingNumber() const { DARABONBA_PTR_GET_CONST(callingNumber_, vector<string>) };
    inline vector<string> callingNumber() { DARABONBA_PTR_GET(callingNumber_, vector<string>) };
    inline ModifyInstanceRequest& setCallingNumber(const vector<string> & callingNumber) { DARABONBA_PTR_SET_VALUE(callingNumber_, callingNumber) };
    inline ModifyInstanceRequest& setCallingNumber(vector<string> && callingNumber) { DARABONBA_PTR_SET_RVALUE(callingNumber_, callingNumber) };


    // instanceDescription Field Functions 
    bool hasInstanceDescription() const { return this->instanceDescription_ != nullptr;};
    void deleteInstanceDescription() { this->instanceDescription_ = nullptr;};
    inline string instanceDescription() const { DARABONBA_PTR_GET_DEFAULT(instanceDescription_, "") };
    inline ModifyInstanceRequest& setInstanceDescription(string instanceDescription) { DARABONBA_PTR_SET_VALUE(instanceDescription_, instanceDescription) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyInstanceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline ModifyInstanceRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // maxConcurrentConversation Field Functions 
    bool hasMaxConcurrentConversation() const { return this->maxConcurrentConversation_ != nullptr;};
    void deleteMaxConcurrentConversation() { this->maxConcurrentConversation_ = nullptr;};
    inline int32_t maxConcurrentConversation() const { DARABONBA_PTR_GET_DEFAULT(maxConcurrentConversation_, 0) };
    inline ModifyInstanceRequest& setMaxConcurrentConversation(int32_t maxConcurrentConversation) { DARABONBA_PTR_SET_VALUE(maxConcurrentConversation_, maxConcurrentConversation) };


  protected:
    std::shared_ptr<vector<string>> callingNumber_ = nullptr;
    std::shared_ptr<string> instanceDescription_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> instanceName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> maxConcurrentConversation_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
