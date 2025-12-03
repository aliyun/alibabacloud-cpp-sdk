// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHOSTGROUPRESPONSEBODYHOSTGROUPHOSTINFOS_HPP_
#define ALIBABACLOUD_MODELS_GETHOSTGROUPRESPONSEBODYHOSTGROUPHOSTINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class GetHostGroupResponseBodyHostGroupHostInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHostGroupResponseBodyHostGroupHostInfos& obj) { 
      DARABONBA_PTR_TO_JSON(aliyunRegionId, aliyunRegionId_);
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(creatorAccountId, creatorAccountId_);
      DARABONBA_PTR_TO_JSON(instanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(ip, ip_);
      DARABONBA_PTR_TO_JSON(machineSn, machineSn_);
      DARABONBA_PTR_TO_JSON(modifierAccountId, modifierAccountId_);
      DARABONBA_PTR_TO_JSON(objectType, objectType_);
      DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetHostGroupResponseBodyHostGroupHostInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(aliyunRegionId, aliyunRegionId_);
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(creatorAccountId, creatorAccountId_);
      DARABONBA_PTR_FROM_JSON(instanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(ip, ip_);
      DARABONBA_PTR_FROM_JSON(machineSn, machineSn_);
      DARABONBA_PTR_FROM_JSON(modifierAccountId, modifierAccountId_);
      DARABONBA_PTR_FROM_JSON(objectType, objectType_);
      DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
    };
    GetHostGroupResponseBodyHostGroupHostInfos() = default ;
    GetHostGroupResponseBodyHostGroupHostInfos(const GetHostGroupResponseBodyHostGroupHostInfos &) = default ;
    GetHostGroupResponseBodyHostGroupHostInfos(GetHostGroupResponseBodyHostGroupHostInfos &&) = default ;
    GetHostGroupResponseBodyHostGroupHostInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHostGroupResponseBodyHostGroupHostInfos() = default ;
    GetHostGroupResponseBodyHostGroupHostInfos& operator=(const GetHostGroupResponseBodyHostGroupHostInfos &) = default ;
    GetHostGroupResponseBodyHostGroupHostInfos& operator=(GetHostGroupResponseBodyHostGroupHostInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliyunRegionId_ == nullptr
        && return this->createTime_ == nullptr && return this->creatorAccountId_ == nullptr && return this->instanceName_ == nullptr && return this->ip_ == nullptr && return this->machineSn_ == nullptr
        && return this->modifierAccountId_ == nullptr && return this->objectType_ == nullptr && return this->updateTime_ == nullptr; };
    // aliyunRegionId Field Functions 
    bool hasAliyunRegionId() const { return this->aliyunRegionId_ != nullptr;};
    void deleteAliyunRegionId() { this->aliyunRegionId_ = nullptr;};
    inline string aliyunRegionId() const { DARABONBA_PTR_GET_DEFAULT(aliyunRegionId_, "") };
    inline GetHostGroupResponseBodyHostGroupHostInfos& setAliyunRegionId(string aliyunRegionId) { DARABONBA_PTR_SET_VALUE(aliyunRegionId_, aliyunRegionId) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline GetHostGroupResponseBodyHostGroupHostInfos& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // creatorAccountId Field Functions 
    bool hasCreatorAccountId() const { return this->creatorAccountId_ != nullptr;};
    void deleteCreatorAccountId() { this->creatorAccountId_ = nullptr;};
    inline string creatorAccountId() const { DARABONBA_PTR_GET_DEFAULT(creatorAccountId_, "") };
    inline GetHostGroupResponseBodyHostGroupHostInfos& setCreatorAccountId(string creatorAccountId) { DARABONBA_PTR_SET_VALUE(creatorAccountId_, creatorAccountId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline GetHostGroupResponseBodyHostGroupHostInfos& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline GetHostGroupResponseBodyHostGroupHostInfos& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // machineSn Field Functions 
    bool hasMachineSn() const { return this->machineSn_ != nullptr;};
    void deleteMachineSn() { this->machineSn_ = nullptr;};
    inline string machineSn() const { DARABONBA_PTR_GET_DEFAULT(machineSn_, "") };
    inline GetHostGroupResponseBodyHostGroupHostInfos& setMachineSn(string machineSn) { DARABONBA_PTR_SET_VALUE(machineSn_, machineSn) };


    // modifierAccountId Field Functions 
    bool hasModifierAccountId() const { return this->modifierAccountId_ != nullptr;};
    void deleteModifierAccountId() { this->modifierAccountId_ = nullptr;};
    inline string modifierAccountId() const { DARABONBA_PTR_GET_DEFAULT(modifierAccountId_, "") };
    inline GetHostGroupResponseBodyHostGroupHostInfos& setModifierAccountId(string modifierAccountId) { DARABONBA_PTR_SET_VALUE(modifierAccountId_, modifierAccountId) };


    // objectType Field Functions 
    bool hasObjectType() const { return this->objectType_ != nullptr;};
    void deleteObjectType() { this->objectType_ = nullptr;};
    inline string objectType() const { DARABONBA_PTR_GET_DEFAULT(objectType_, "") };
    inline GetHostGroupResponseBodyHostGroupHostInfos& setObjectType(string objectType) { DARABONBA_PTR_SET_VALUE(objectType_, objectType) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline GetHostGroupResponseBodyHostGroupHostInfos& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    std::shared_ptr<string> aliyunRegionId_ = nullptr;
    std::shared_ptr<int64_t> createTime_ = nullptr;
    std::shared_ptr<string> creatorAccountId_ = nullptr;
    std::shared_ptr<string> instanceName_ = nullptr;
    std::shared_ptr<string> ip_ = nullptr;
    std::shared_ptr<string> machineSn_ = nullptr;
    std::shared_ptr<string> modifierAccountId_ = nullptr;
    std::shared_ptr<string> objectType_ = nullptr;
    std::shared_ptr<int64_t> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
