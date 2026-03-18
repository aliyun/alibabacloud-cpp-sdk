// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYMAINTAINABLETIMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYMAINTAINABLETIMEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Starrocks20221019
{
namespace Models
{
  class ModifyMaintainableTimeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyMaintainableTimeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MaintainableTimePeriod, maintainableTimePeriod_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyMaintainableTimeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MaintainableTimePeriod, maintainableTimePeriod_);
    };
    ModifyMaintainableTimeRequest() = default ;
    ModifyMaintainableTimeRequest(const ModifyMaintainableTimeRequest &) = default ;
    ModifyMaintainableTimeRequest(ModifyMaintainableTimeRequest &&) = default ;
    ModifyMaintainableTimeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyMaintainableTimeRequest() = default ;
    ModifyMaintainableTimeRequest& operator=(const ModifyMaintainableTimeRequest &) = default ;
    ModifyMaintainableTimeRequest& operator=(ModifyMaintainableTimeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->maintainableTimePeriod_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyMaintainableTimeRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // maintainableTimePeriod Field Functions 
    bool hasMaintainableTimePeriod() const { return this->maintainableTimePeriod_ != nullptr;};
    void deleteMaintainableTimePeriod() { this->maintainableTimePeriod_ = nullptr;};
    inline string getMaintainableTimePeriod() const { DARABONBA_PTR_GET_DEFAULT(maintainableTimePeriod_, "") };
    inline ModifyMaintainableTimeRequest& setMaintainableTimePeriod(string maintainableTimePeriod) { DARABONBA_PTR_SET_VALUE(maintainableTimePeriod_, maintainableTimePeriod) };


  protected:
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // This parameter is required.
    shared_ptr<string> maintainableTimePeriod_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Starrocks20221019
#endif
