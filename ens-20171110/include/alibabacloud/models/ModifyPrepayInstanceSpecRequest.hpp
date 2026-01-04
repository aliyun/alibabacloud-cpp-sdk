// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYPREPAYINSTANCESPECREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYPREPAYINSTANCESPECREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class ModifyPrepayInstanceSpecRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyPrepayInstanceSpecRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyPrepayInstanceSpecRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
    };
    ModifyPrepayInstanceSpecRequest() = default ;
    ModifyPrepayInstanceSpecRequest(const ModifyPrepayInstanceSpecRequest &) = default ;
    ModifyPrepayInstanceSpecRequest(ModifyPrepayInstanceSpecRequest &&) = default ;
    ModifyPrepayInstanceSpecRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyPrepayInstanceSpecRequest() = default ;
    ModifyPrepayInstanceSpecRequest& operator=(const ModifyPrepayInstanceSpecRequest &) = default ;
    ModifyPrepayInstanceSpecRequest& operator=(ModifyPrepayInstanceSpecRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->instanceType_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyPrepayInstanceSpecRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline ModifyPrepayInstanceSpecRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


  protected:
    // The ID of the instance that you want to upgrade or downgrade.
    shared_ptr<string> instanceId_ {};
    // The updated configuration.
    shared_ptr<string> instanceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
