// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYINSTANCECONFIGPRECHECKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYINSTANCECONFIGPRECHECKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/InstanceConfigDto.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Starrocks20221019
{
namespace Models
{
  class ModifyInstanceConfigPreCheckRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyInstanceConfigPreCheckRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(configsToAdd, configsToAdd_);
      DARABONBA_PTR_TO_JSON(configsToDelete, configsToDelete_);
      DARABONBA_PTR_TO_JSON(configsToUpdate, configsToUpdate_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyInstanceConfigPreCheckRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(configsToAdd, configsToAdd_);
      DARABONBA_PTR_FROM_JSON(configsToDelete, configsToDelete_);
      DARABONBA_PTR_FROM_JSON(configsToUpdate, configsToUpdate_);
    };
    ModifyInstanceConfigPreCheckRequest() = default ;
    ModifyInstanceConfigPreCheckRequest(const ModifyInstanceConfigPreCheckRequest &) = default ;
    ModifyInstanceConfigPreCheckRequest(ModifyInstanceConfigPreCheckRequest &&) = default ;
    ModifyInstanceConfigPreCheckRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyInstanceConfigPreCheckRequest() = default ;
    ModifyInstanceConfigPreCheckRequest& operator=(const ModifyInstanceConfigPreCheckRequest &) = default ;
    ModifyInstanceConfigPreCheckRequest& operator=(ModifyInstanceConfigPreCheckRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->configsToAdd_ == nullptr && this->configsToDelete_ == nullptr && this->configsToUpdate_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyInstanceConfigPreCheckRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // configsToAdd Field Functions 
    bool hasConfigsToAdd() const { return this->configsToAdd_ != nullptr;};
    void deleteConfigsToAdd() { this->configsToAdd_ = nullptr;};
    inline const vector<InstanceConfigDto> & getConfigsToAdd() const { DARABONBA_PTR_GET_CONST(configsToAdd_, vector<InstanceConfigDto>) };
    inline vector<InstanceConfigDto> getConfigsToAdd() { DARABONBA_PTR_GET(configsToAdd_, vector<InstanceConfigDto>) };
    inline ModifyInstanceConfigPreCheckRequest& setConfigsToAdd(const vector<InstanceConfigDto> & configsToAdd) { DARABONBA_PTR_SET_VALUE(configsToAdd_, configsToAdd) };
    inline ModifyInstanceConfigPreCheckRequest& setConfigsToAdd(vector<InstanceConfigDto> && configsToAdd) { DARABONBA_PTR_SET_RVALUE(configsToAdd_, configsToAdd) };


    // configsToDelete Field Functions 
    bool hasConfigsToDelete() const { return this->configsToDelete_ != nullptr;};
    void deleteConfigsToDelete() { this->configsToDelete_ = nullptr;};
    inline const vector<InstanceConfigDto> & getConfigsToDelete() const { DARABONBA_PTR_GET_CONST(configsToDelete_, vector<InstanceConfigDto>) };
    inline vector<InstanceConfigDto> getConfigsToDelete() { DARABONBA_PTR_GET(configsToDelete_, vector<InstanceConfigDto>) };
    inline ModifyInstanceConfigPreCheckRequest& setConfigsToDelete(const vector<InstanceConfigDto> & configsToDelete) { DARABONBA_PTR_SET_VALUE(configsToDelete_, configsToDelete) };
    inline ModifyInstanceConfigPreCheckRequest& setConfigsToDelete(vector<InstanceConfigDto> && configsToDelete) { DARABONBA_PTR_SET_RVALUE(configsToDelete_, configsToDelete) };


    // configsToUpdate Field Functions 
    bool hasConfigsToUpdate() const { return this->configsToUpdate_ != nullptr;};
    void deleteConfigsToUpdate() { this->configsToUpdate_ = nullptr;};
    inline const vector<InstanceConfigDto> & getConfigsToUpdate() const { DARABONBA_PTR_GET_CONST(configsToUpdate_, vector<InstanceConfigDto>) };
    inline vector<InstanceConfigDto> getConfigsToUpdate() { DARABONBA_PTR_GET(configsToUpdate_, vector<InstanceConfigDto>) };
    inline ModifyInstanceConfigPreCheckRequest& setConfigsToUpdate(const vector<InstanceConfigDto> & configsToUpdate) { DARABONBA_PTR_SET_VALUE(configsToUpdate_, configsToUpdate) };
    inline ModifyInstanceConfigPreCheckRequest& setConfigsToUpdate(vector<InstanceConfigDto> && configsToUpdate) { DARABONBA_PTR_SET_RVALUE(configsToUpdate_, configsToUpdate) };


  protected:
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<vector<InstanceConfigDto>> configsToAdd_ {};
    shared_ptr<vector<InstanceConfigDto>> configsToDelete_ {};
    shared_ptr<vector<InstanceConfigDto>> configsToUpdate_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Starrocks20221019
#endif
