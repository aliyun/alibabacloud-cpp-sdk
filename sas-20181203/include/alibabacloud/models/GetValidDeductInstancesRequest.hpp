// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVALIDDEDUCTINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETVALIDDEDUCTINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetValidDeductInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetValidDeductInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Modules, modules_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetValidDeductInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Modules, modules_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetValidDeductInstancesRequest() = default ;
    GetValidDeductInstancesRequest(const GetValidDeductInstancesRequest &) = default ;
    GetValidDeductInstancesRequest(GetValidDeductInstancesRequest &&) = default ;
    GetValidDeductInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetValidDeductInstancesRequest() = default ;
    GetValidDeductInstancesRequest& operator=(const GetValidDeductInstancesRequest &) = default ;
    GetValidDeductInstancesRequest& operator=(GetValidDeductInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->modules_ == nullptr && this->status_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetValidDeductInstancesRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // modules Field Functions 
    bool hasModules() const { return this->modules_ != nullptr;};
    void deleteModules() { this->modules_ = nullptr;};
    inline string getModules() const { DARABONBA_PTR_GET_DEFAULT(modules_, "") };
    inline GetValidDeductInstancesRequest& setModules(string modules) { DARABONBA_PTR_SET_VALUE(modules_, modules) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline GetValidDeductInstancesRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // Resource package instance ID, can be queried through [QueryResourcePackageInstances]().
    shared_ptr<string> instanceId_ {};
    // Resource package name code, values:
    // 
    // - Vulnerability resource package: **sas_vul_dp_cn**
    // - CSPM resource package: **sas_cspm_dp_cn**
    // - Anti-virus resource package: **sas_viruspackage_dp_cn**
    shared_ptr<string> modules_ {};
    // Resource package status, default is valid (valid), not modifiable.
    shared_ptr<int32_t> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
