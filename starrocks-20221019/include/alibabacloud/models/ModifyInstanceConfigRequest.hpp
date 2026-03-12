// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYINSTANCECONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYINSTANCECONFIGREQUEST_HPP_
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
  class ModifyInstanceConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyInstanceConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddConfigList, addConfigList_);
      DARABONBA_PTR_TO_JSON(ConfigList, configList_);
      DARABONBA_PTR_TO_JSON(DeleteConfigList, deleteConfigList_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
      DARABONBA_PTR_TO_JSON(configsToAdd, configsToAdd_);
      DARABONBA_PTR_TO_JSON(configsToDelete, configsToDelete_);
      DARABONBA_PTR_TO_JSON(configsToUpdate, configsToUpdate_);
      DARABONBA_PTR_TO_JSON(fastMode, fastMode_);
      DARABONBA_PTR_TO_JSON(restart, restart_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyInstanceConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddConfigList, addConfigList_);
      DARABONBA_PTR_FROM_JSON(ConfigList, configList_);
      DARABONBA_PTR_FROM_JSON(DeleteConfigList, deleteConfigList_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
      DARABONBA_PTR_FROM_JSON(configsToAdd, configsToAdd_);
      DARABONBA_PTR_FROM_JSON(configsToDelete, configsToDelete_);
      DARABONBA_PTR_FROM_JSON(configsToUpdate, configsToUpdate_);
      DARABONBA_PTR_FROM_JSON(fastMode, fastMode_);
      DARABONBA_PTR_FROM_JSON(restart, restart_);
    };
    ModifyInstanceConfigRequest() = default ;
    ModifyInstanceConfigRequest(const ModifyInstanceConfigRequest &) = default ;
    ModifyInstanceConfigRequest(ModifyInstanceConfigRequest &&) = default ;
    ModifyInstanceConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyInstanceConfigRequest() = default ;
    ModifyInstanceConfigRequest& operator=(const ModifyInstanceConfigRequest &) = default ;
    ModifyInstanceConfigRequest& operator=(ModifyInstanceConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addConfigList_ == nullptr
        && this->configList_ == nullptr && this->deleteConfigList_ == nullptr && this->instanceId_ == nullptr && this->reason_ == nullptr && this->configsToAdd_ == nullptr
        && this->configsToDelete_ == nullptr && this->configsToUpdate_ == nullptr && this->fastMode_ == nullptr && this->restart_ == nullptr; };
    // addConfigList Field Functions 
    bool hasAddConfigList() const { return this->addConfigList_ != nullptr;};
    void deleteAddConfigList() { this->addConfigList_ = nullptr;};
    inline string getAddConfigList() const { DARABONBA_PTR_GET_DEFAULT(addConfigList_, "") };
    inline ModifyInstanceConfigRequest& setAddConfigList(string addConfigList) { DARABONBA_PTR_SET_VALUE(addConfigList_, addConfigList) };


    // configList Field Functions 
    bool hasConfigList() const { return this->configList_ != nullptr;};
    void deleteConfigList() { this->configList_ = nullptr;};
    inline string getConfigList() const { DARABONBA_PTR_GET_DEFAULT(configList_, "") };
    inline ModifyInstanceConfigRequest& setConfigList(string configList) { DARABONBA_PTR_SET_VALUE(configList_, configList) };


    // deleteConfigList Field Functions 
    bool hasDeleteConfigList() const { return this->deleteConfigList_ != nullptr;};
    void deleteDeleteConfigList() { this->deleteConfigList_ = nullptr;};
    inline string getDeleteConfigList() const { DARABONBA_PTR_GET_DEFAULT(deleteConfigList_, "") };
    inline ModifyInstanceConfigRequest& setDeleteConfigList(string deleteConfigList) { DARABONBA_PTR_SET_VALUE(deleteConfigList_, deleteConfigList) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyInstanceConfigRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline ModifyInstanceConfigRequest& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // configsToAdd Field Functions 
    bool hasConfigsToAdd() const { return this->configsToAdd_ != nullptr;};
    void deleteConfigsToAdd() { this->configsToAdd_ = nullptr;};
    inline const vector<InstanceConfigDto> & getConfigsToAdd() const { DARABONBA_PTR_GET_CONST(configsToAdd_, vector<InstanceConfigDto>) };
    inline vector<InstanceConfigDto> getConfigsToAdd() { DARABONBA_PTR_GET(configsToAdd_, vector<InstanceConfigDto>) };
    inline ModifyInstanceConfigRequest& setConfigsToAdd(const vector<InstanceConfigDto> & configsToAdd) { DARABONBA_PTR_SET_VALUE(configsToAdd_, configsToAdd) };
    inline ModifyInstanceConfigRequest& setConfigsToAdd(vector<InstanceConfigDto> && configsToAdd) { DARABONBA_PTR_SET_RVALUE(configsToAdd_, configsToAdd) };


    // configsToDelete Field Functions 
    bool hasConfigsToDelete() const { return this->configsToDelete_ != nullptr;};
    void deleteConfigsToDelete() { this->configsToDelete_ = nullptr;};
    inline const vector<InstanceConfigDto> & getConfigsToDelete() const { DARABONBA_PTR_GET_CONST(configsToDelete_, vector<InstanceConfigDto>) };
    inline vector<InstanceConfigDto> getConfigsToDelete() { DARABONBA_PTR_GET(configsToDelete_, vector<InstanceConfigDto>) };
    inline ModifyInstanceConfigRequest& setConfigsToDelete(const vector<InstanceConfigDto> & configsToDelete) { DARABONBA_PTR_SET_VALUE(configsToDelete_, configsToDelete) };
    inline ModifyInstanceConfigRequest& setConfigsToDelete(vector<InstanceConfigDto> && configsToDelete) { DARABONBA_PTR_SET_RVALUE(configsToDelete_, configsToDelete) };


    // configsToUpdate Field Functions 
    bool hasConfigsToUpdate() const { return this->configsToUpdate_ != nullptr;};
    void deleteConfigsToUpdate() { this->configsToUpdate_ = nullptr;};
    inline const vector<InstanceConfigDto> & getConfigsToUpdate() const { DARABONBA_PTR_GET_CONST(configsToUpdate_, vector<InstanceConfigDto>) };
    inline vector<InstanceConfigDto> getConfigsToUpdate() { DARABONBA_PTR_GET(configsToUpdate_, vector<InstanceConfigDto>) };
    inline ModifyInstanceConfigRequest& setConfigsToUpdate(const vector<InstanceConfigDto> & configsToUpdate) { DARABONBA_PTR_SET_VALUE(configsToUpdate_, configsToUpdate) };
    inline ModifyInstanceConfigRequest& setConfigsToUpdate(vector<InstanceConfigDto> && configsToUpdate) { DARABONBA_PTR_SET_RVALUE(configsToUpdate_, configsToUpdate) };


    // fastMode Field Functions 
    bool hasFastMode() const { return this->fastMode_ != nullptr;};
    void deleteFastMode() { this->fastMode_ = nullptr;};
    inline bool getFastMode() const { DARABONBA_PTR_GET_DEFAULT(fastMode_, false) };
    inline ModifyInstanceConfigRequest& setFastMode(bool fastMode) { DARABONBA_PTR_SET_VALUE(fastMode_, fastMode) };


    // restart Field Functions 
    bool hasRestart() const { return this->restart_ != nullptr;};
    void deleteRestart() { this->restart_ = nullptr;};
    inline bool getRestart() const { DARABONBA_PTR_GET_DEFAULT(restart_, false) };
    inline ModifyInstanceConfigRequest& setRestart(bool restart) { DARABONBA_PTR_SET_VALUE(restart_, restart) };


  protected:
    shared_ptr<string> addConfigList_ {};
    shared_ptr<string> configList_ {};
    shared_ptr<string> deleteConfigList_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> reason_ {};
    shared_ptr<vector<InstanceConfigDto>> configsToAdd_ {};
    shared_ptr<vector<InstanceConfigDto>> configsToDelete_ {};
    shared_ptr<vector<InstanceConfigDto>> configsToUpdate_ {};
    shared_ptr<bool> fastMode_ {};
    shared_ptr<bool> restart_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Starrocks20221019
#endif
