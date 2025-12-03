// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEHOSTGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEHOSTGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class CreateHostGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateHostGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(aliyunRegion, aliyunRegion_);
      DARABONBA_PTR_TO_JSON(ecsLabelKey, ecsLabelKey_);
      DARABONBA_PTR_TO_JSON(ecsLabelValue, ecsLabelValue_);
      DARABONBA_PTR_TO_JSON(ecsType, ecsType_);
      DARABONBA_PTR_TO_JSON(envId, envId_);
      DARABONBA_PTR_TO_JSON(machineInfos, machineInfos_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(serviceConnectionId, serviceConnectionId_);
      DARABONBA_PTR_TO_JSON(tagIds, tagIds_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateHostGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(aliyunRegion, aliyunRegion_);
      DARABONBA_PTR_FROM_JSON(ecsLabelKey, ecsLabelKey_);
      DARABONBA_PTR_FROM_JSON(ecsLabelValue, ecsLabelValue_);
      DARABONBA_PTR_FROM_JSON(ecsType, ecsType_);
      DARABONBA_PTR_FROM_JSON(envId, envId_);
      DARABONBA_PTR_FROM_JSON(machineInfos, machineInfos_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(serviceConnectionId, serviceConnectionId_);
      DARABONBA_PTR_FROM_JSON(tagIds, tagIds_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    CreateHostGroupRequest() = default ;
    CreateHostGroupRequest(const CreateHostGroupRequest &) = default ;
    CreateHostGroupRequest(CreateHostGroupRequest &&) = default ;
    CreateHostGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateHostGroupRequest() = default ;
    CreateHostGroupRequest& operator=(const CreateHostGroupRequest &) = default ;
    CreateHostGroupRequest& operator=(CreateHostGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliyunRegion_ == nullptr
        && return this->ecsLabelKey_ == nullptr && return this->ecsLabelValue_ == nullptr && return this->ecsType_ == nullptr && return this->envId_ == nullptr && return this->machineInfos_ == nullptr
        && return this->name_ == nullptr && return this->serviceConnectionId_ == nullptr && return this->tagIds_ == nullptr && return this->type_ == nullptr; };
    // aliyunRegion Field Functions 
    bool hasAliyunRegion() const { return this->aliyunRegion_ != nullptr;};
    void deleteAliyunRegion() { this->aliyunRegion_ = nullptr;};
    inline string aliyunRegion() const { DARABONBA_PTR_GET_DEFAULT(aliyunRegion_, "") };
    inline CreateHostGroupRequest& setAliyunRegion(string aliyunRegion) { DARABONBA_PTR_SET_VALUE(aliyunRegion_, aliyunRegion) };


    // ecsLabelKey Field Functions 
    bool hasEcsLabelKey() const { return this->ecsLabelKey_ != nullptr;};
    void deleteEcsLabelKey() { this->ecsLabelKey_ = nullptr;};
    inline string ecsLabelKey() const { DARABONBA_PTR_GET_DEFAULT(ecsLabelKey_, "") };
    inline CreateHostGroupRequest& setEcsLabelKey(string ecsLabelKey) { DARABONBA_PTR_SET_VALUE(ecsLabelKey_, ecsLabelKey) };


    // ecsLabelValue Field Functions 
    bool hasEcsLabelValue() const { return this->ecsLabelValue_ != nullptr;};
    void deleteEcsLabelValue() { this->ecsLabelValue_ = nullptr;};
    inline string ecsLabelValue() const { DARABONBA_PTR_GET_DEFAULT(ecsLabelValue_, "") };
    inline CreateHostGroupRequest& setEcsLabelValue(string ecsLabelValue) { DARABONBA_PTR_SET_VALUE(ecsLabelValue_, ecsLabelValue) };


    // ecsType Field Functions 
    bool hasEcsType() const { return this->ecsType_ != nullptr;};
    void deleteEcsType() { this->ecsType_ = nullptr;};
    inline string ecsType() const { DARABONBA_PTR_GET_DEFAULT(ecsType_, "") };
    inline CreateHostGroupRequest& setEcsType(string ecsType) { DARABONBA_PTR_SET_VALUE(ecsType_, ecsType) };


    // envId Field Functions 
    bool hasEnvId() const { return this->envId_ != nullptr;};
    void deleteEnvId() { this->envId_ = nullptr;};
    inline string envId() const { DARABONBA_PTR_GET_DEFAULT(envId_, "") };
    inline CreateHostGroupRequest& setEnvId(string envId) { DARABONBA_PTR_SET_VALUE(envId_, envId) };


    // machineInfos Field Functions 
    bool hasMachineInfos() const { return this->machineInfos_ != nullptr;};
    void deleteMachineInfos() { this->machineInfos_ = nullptr;};
    inline string machineInfos() const { DARABONBA_PTR_GET_DEFAULT(machineInfos_, "") };
    inline CreateHostGroupRequest& setMachineInfos(string machineInfos) { DARABONBA_PTR_SET_VALUE(machineInfos_, machineInfos) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateHostGroupRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // serviceConnectionId Field Functions 
    bool hasServiceConnectionId() const { return this->serviceConnectionId_ != nullptr;};
    void deleteServiceConnectionId() { this->serviceConnectionId_ = nullptr;};
    inline int64_t serviceConnectionId() const { DARABONBA_PTR_GET_DEFAULT(serviceConnectionId_, 0L) };
    inline CreateHostGroupRequest& setServiceConnectionId(int64_t serviceConnectionId) { DARABONBA_PTR_SET_VALUE(serviceConnectionId_, serviceConnectionId) };


    // tagIds Field Functions 
    bool hasTagIds() const { return this->tagIds_ != nullptr;};
    void deleteTagIds() { this->tagIds_ = nullptr;};
    inline string tagIds() const { DARABONBA_PTR_GET_DEFAULT(tagIds_, "") };
    inline CreateHostGroupRequest& setTagIds(string tagIds) { DARABONBA_PTR_SET_VALUE(tagIds_, tagIds) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateHostGroupRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> aliyunRegion_ = nullptr;
    std::shared_ptr<string> ecsLabelKey_ = nullptr;
    std::shared_ptr<string> ecsLabelValue_ = nullptr;
    std::shared_ptr<string> ecsType_ = nullptr;
    std::shared_ptr<string> envId_ = nullptr;
    std::shared_ptr<string> machineInfos_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> serviceConnectionId_ = nullptr;
    std::shared_ptr<string> tagIds_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
