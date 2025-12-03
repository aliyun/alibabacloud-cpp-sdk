// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMOUNTPOINTSVSCATTACHINFORESPONSEBODYATTACHINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMOUNTPOINTSVSCATTACHINFORESPONSEBODYATTACHINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DFS20180620
{
namespace Models
{
  class DescribeMountPointsVscAttachInfoResponseBodyAttachInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMountPointsVscAttachInfoResponseBodyAttachInfos& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MountPointId, mountPointId_);
      DARABONBA_PTR_TO_JSON(VscId, vscId_);
      DARABONBA_PTR_TO_JSON(VscName, vscName_);
      DARABONBA_PTR_TO_JSON(VscStatus, vscStatus_);
      DARABONBA_PTR_TO_JSON(VscType, vscType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMountPointsVscAttachInfoResponseBodyAttachInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MountPointId, mountPointId_);
      DARABONBA_PTR_FROM_JSON(VscId, vscId_);
      DARABONBA_PTR_FROM_JSON(VscName, vscName_);
      DARABONBA_PTR_FROM_JSON(VscStatus, vscStatus_);
      DARABONBA_PTR_FROM_JSON(VscType, vscType_);
    };
    DescribeMountPointsVscAttachInfoResponseBodyAttachInfos() = default ;
    DescribeMountPointsVscAttachInfoResponseBodyAttachInfos(const DescribeMountPointsVscAttachInfoResponseBodyAttachInfos &) = default ;
    DescribeMountPointsVscAttachInfoResponseBodyAttachInfos(DescribeMountPointsVscAttachInfoResponseBodyAttachInfos &&) = default ;
    DescribeMountPointsVscAttachInfoResponseBodyAttachInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMountPointsVscAttachInfoResponseBodyAttachInfos() = default ;
    DescribeMountPointsVscAttachInfoResponseBodyAttachInfos& operator=(const DescribeMountPointsVscAttachInfoResponseBodyAttachInfos &) = default ;
    DescribeMountPointsVscAttachInfoResponseBodyAttachInfos& operator=(DescribeMountPointsVscAttachInfoResponseBodyAttachInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->mountPointId_ == nullptr && return this->vscId_ == nullptr && return this->vscName_ == nullptr && return this->vscStatus_ == nullptr && return this->vscType_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeMountPointsVscAttachInfoResponseBodyAttachInfos& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // mountPointId Field Functions 
    bool hasMountPointId() const { return this->mountPointId_ != nullptr;};
    void deleteMountPointId() { this->mountPointId_ = nullptr;};
    inline string mountPointId() const { DARABONBA_PTR_GET_DEFAULT(mountPointId_, "") };
    inline DescribeMountPointsVscAttachInfoResponseBodyAttachInfos& setMountPointId(string mountPointId) { DARABONBA_PTR_SET_VALUE(mountPointId_, mountPointId) };


    // vscId Field Functions 
    bool hasVscId() const { return this->vscId_ != nullptr;};
    void deleteVscId() { this->vscId_ = nullptr;};
    inline string vscId() const { DARABONBA_PTR_GET_DEFAULT(vscId_, "") };
    inline DescribeMountPointsVscAttachInfoResponseBodyAttachInfos& setVscId(string vscId) { DARABONBA_PTR_SET_VALUE(vscId_, vscId) };


    // vscName Field Functions 
    bool hasVscName() const { return this->vscName_ != nullptr;};
    void deleteVscName() { this->vscName_ = nullptr;};
    inline string vscName() const { DARABONBA_PTR_GET_DEFAULT(vscName_, "") };
    inline DescribeMountPointsVscAttachInfoResponseBodyAttachInfos& setVscName(string vscName) { DARABONBA_PTR_SET_VALUE(vscName_, vscName) };


    // vscStatus Field Functions 
    bool hasVscStatus() const { return this->vscStatus_ != nullptr;};
    void deleteVscStatus() { this->vscStatus_ = nullptr;};
    inline string vscStatus() const { DARABONBA_PTR_GET_DEFAULT(vscStatus_, "") };
    inline DescribeMountPointsVscAttachInfoResponseBodyAttachInfos& setVscStatus(string vscStatus) { DARABONBA_PTR_SET_VALUE(vscStatus_, vscStatus) };


    // vscType Field Functions 
    bool hasVscType() const { return this->vscType_ != nullptr;};
    void deleteVscType() { this->vscType_ = nullptr;};
    inline string vscType() const { DARABONBA_PTR_GET_DEFAULT(vscType_, "") };
    inline DescribeMountPointsVscAttachInfoResponseBodyAttachInfos& setVscType(string vscType) { DARABONBA_PTR_SET_VALUE(vscType_, vscType) };


  protected:
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> mountPointId_ = nullptr;
    std::shared_ptr<string> vscId_ = nullptr;
    std::shared_ptr<string> vscName_ = nullptr;
    std::shared_ptr<string> vscStatus_ = nullptr;
    std::shared_ptr<string> vscType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DFS20180620
#endif
