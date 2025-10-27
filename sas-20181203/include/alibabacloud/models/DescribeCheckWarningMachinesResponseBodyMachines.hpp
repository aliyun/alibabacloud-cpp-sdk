// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECHECKWARNINGMACHINESRESPONSEBODYMACHINES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECHECKWARNINGMACHINESRESPONSEBODYMACHINES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeCheckWarningMachinesResponseBodyMachines : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCheckWarningMachinesResponseBodyMachines& obj) { 
      DARABONBA_PTR_TO_JSON(Bind, bind_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCheckWarningMachinesResponseBodyMachines& obj) { 
      DARABONBA_PTR_FROM_JSON(Bind, bind_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    DescribeCheckWarningMachinesResponseBodyMachines() = default ;
    DescribeCheckWarningMachinesResponseBodyMachines(const DescribeCheckWarningMachinesResponseBodyMachines &) = default ;
    DescribeCheckWarningMachinesResponseBodyMachines(DescribeCheckWarningMachinesResponseBodyMachines &&) = default ;
    DescribeCheckWarningMachinesResponseBodyMachines(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCheckWarningMachinesResponseBodyMachines() = default ;
    DescribeCheckWarningMachinesResponseBodyMachines& operator=(const DescribeCheckWarningMachinesResponseBodyMachines &) = default ;
    DescribeCheckWarningMachinesResponseBodyMachines& operator=(DescribeCheckWarningMachinesResponseBodyMachines &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bind_ == nullptr
        && return this->instanceId_ == nullptr && return this->instanceName_ == nullptr && return this->internetIp_ == nullptr && return this->intranetIp_ == nullptr && return this->regionId_ == nullptr
        && return this->uuid_ == nullptr; };
    // bind Field Functions 
    bool hasBind() const { return this->bind_ != nullptr;};
    void deleteBind() { this->bind_ = nullptr;};
    inline bool bind() const { DARABONBA_PTR_GET_DEFAULT(bind_, false) };
    inline DescribeCheckWarningMachinesResponseBodyMachines& setBind(bool bind) { DARABONBA_PTR_SET_VALUE(bind_, bind) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeCheckWarningMachinesResponseBodyMachines& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeCheckWarningMachinesResponseBodyMachines& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // internetIp Field Functions 
    bool hasInternetIp() const { return this->internetIp_ != nullptr;};
    void deleteInternetIp() { this->internetIp_ = nullptr;};
    inline string internetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
    inline DescribeCheckWarningMachinesResponseBodyMachines& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


    // intranetIp Field Functions 
    bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
    void deleteIntranetIp() { this->intranetIp_ = nullptr;};
    inline string intranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
    inline DescribeCheckWarningMachinesResponseBodyMachines& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeCheckWarningMachinesResponseBodyMachines& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline DescribeCheckWarningMachinesResponseBodyMachines& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // Indicates whether Security Center is authorized to protect the asset. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> bind_ = nullptr;
    // The instance ID of the server.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The instance name of the server.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The public IP address of the server.
    std::shared_ptr<string> internetIp_ = nullptr;
    // The private IP address of the server.
    std::shared_ptr<string> intranetIp_ = nullptr;
    // The ID of the region in which the server resides.
    std::shared_ptr<string> regionId_ = nullptr;
    // The UUID of the server.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
