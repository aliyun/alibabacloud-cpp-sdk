// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMOUNTPOINTSVSCATTACHINFOREQUESTQUERYINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMOUNTPOINTSVSCATTACHINFOREQUESTQUERYINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DFS20180620
{
namespace Models
{
  class DescribeMountPointsVscAttachInfoRequestQueryInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMountPointsVscAttachInfoRequestQueryInfos& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MountPointId, mountPointId_);
      DARABONBA_PTR_TO_JSON(VscId, vscId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMountPointsVscAttachInfoRequestQueryInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MountPointId, mountPointId_);
      DARABONBA_PTR_FROM_JSON(VscId, vscId_);
    };
    DescribeMountPointsVscAttachInfoRequestQueryInfos() = default ;
    DescribeMountPointsVscAttachInfoRequestQueryInfos(const DescribeMountPointsVscAttachInfoRequestQueryInfos &) = default ;
    DescribeMountPointsVscAttachInfoRequestQueryInfos(DescribeMountPointsVscAttachInfoRequestQueryInfos &&) = default ;
    DescribeMountPointsVscAttachInfoRequestQueryInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMountPointsVscAttachInfoRequestQueryInfos() = default ;
    DescribeMountPointsVscAttachInfoRequestQueryInfos& operator=(const DescribeMountPointsVscAttachInfoRequestQueryInfos &) = default ;
    DescribeMountPointsVscAttachInfoRequestQueryInfos& operator=(DescribeMountPointsVscAttachInfoRequestQueryInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->mountPointId_ == nullptr && return this->vscId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeMountPointsVscAttachInfoRequestQueryInfos& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // mountPointId Field Functions 
    bool hasMountPointId() const { return this->mountPointId_ != nullptr;};
    void deleteMountPointId() { this->mountPointId_ = nullptr;};
    inline string mountPointId() const { DARABONBA_PTR_GET_DEFAULT(mountPointId_, "") };
    inline DescribeMountPointsVscAttachInfoRequestQueryInfos& setMountPointId(string mountPointId) { DARABONBA_PTR_SET_VALUE(mountPointId_, mountPointId) };


    // vscId Field Functions 
    bool hasVscId() const { return this->vscId_ != nullptr;};
    void deleteVscId() { this->vscId_ = nullptr;};
    inline string vscId() const { DARABONBA_PTR_GET_DEFAULT(vscId_, "") };
    inline DescribeMountPointsVscAttachInfoRequestQueryInfos& setVscId(string vscId) { DARABONBA_PTR_SET_VALUE(vscId_, vscId) };


  protected:
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> mountPointId_ = nullptr;
    std::shared_ptr<string> vscId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DFS20180620
#endif
