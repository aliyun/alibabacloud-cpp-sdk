// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYEXPRESSCONNECTTRAFFICQOSREQUESTADDINSTANCELIST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYEXPRESSCONNECTTRAFFICQOSREQUESTADDINSTANCELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ModifyExpressConnectTrafficQosRequestAddInstanceList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyExpressConnectTrafficQosRequestAddInstanceList& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyExpressConnectTrafficQosRequestAddInstanceList& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
    };
    ModifyExpressConnectTrafficQosRequestAddInstanceList() = default ;
    ModifyExpressConnectTrafficQosRequestAddInstanceList(const ModifyExpressConnectTrafficQosRequestAddInstanceList &) = default ;
    ModifyExpressConnectTrafficQosRequestAddInstanceList(ModifyExpressConnectTrafficQosRequestAddInstanceList &&) = default ;
    ModifyExpressConnectTrafficQosRequestAddInstanceList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyExpressConnectTrafficQosRequestAddInstanceList() = default ;
    ModifyExpressConnectTrafficQosRequestAddInstanceList& operator=(const ModifyExpressConnectTrafficQosRequestAddInstanceList &) = default ;
    ModifyExpressConnectTrafficQosRequestAddInstanceList& operator=(ModifyExpressConnectTrafficQosRequestAddInstanceList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->instanceType_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyExpressConnectTrafficQosRequestAddInstanceList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline ModifyExpressConnectTrafficQosRequestAddInstanceList& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


  protected:
    // The ID of the instance to be associated.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The type of instance to be associated. Set the value to **PHYSICALCONNECTION**.
    std::shared_ptr<string> instanceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
