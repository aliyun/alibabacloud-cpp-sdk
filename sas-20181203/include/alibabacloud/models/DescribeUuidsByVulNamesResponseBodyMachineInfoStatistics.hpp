// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUUIDSBYVULNAMESRESPONSEBODYMACHINEINFOSTATISTICS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUUIDSBYVULNAMESRESPONSEBODYMACHINEINFOSTATISTICS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeUuidsByVulNamesResponseBodyMachineInfoStatistics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUuidsByVulNamesResponseBodyMachineInfoStatistics& obj) { 
      DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_TO_JSON(MachineInstanceId, machineInstanceId_);
      DARABONBA_PTR_TO_JSON(MachineIp, machineIp_);
      DARABONBA_PTR_TO_JSON(MachineName, machineName_);
      DARABONBA_PTR_TO_JSON(Os, os_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUuidsByVulNamesResponseBodyMachineInfoStatistics& obj) { 
      DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_FROM_JSON(MachineInstanceId, machineInstanceId_);
      DARABONBA_PTR_FROM_JSON(MachineIp, machineIp_);
      DARABONBA_PTR_FROM_JSON(MachineName, machineName_);
      DARABONBA_PTR_FROM_JSON(Os, os_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    DescribeUuidsByVulNamesResponseBodyMachineInfoStatistics() = default ;
    DescribeUuidsByVulNamesResponseBodyMachineInfoStatistics(const DescribeUuidsByVulNamesResponseBodyMachineInfoStatistics &) = default ;
    DescribeUuidsByVulNamesResponseBodyMachineInfoStatistics(DescribeUuidsByVulNamesResponseBodyMachineInfoStatistics &&) = default ;
    DescribeUuidsByVulNamesResponseBodyMachineInfoStatistics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUuidsByVulNamesResponseBodyMachineInfoStatistics() = default ;
    DescribeUuidsByVulNamesResponseBodyMachineInfoStatistics& operator=(const DescribeUuidsByVulNamesResponseBodyMachineInfoStatistics &) = default ;
    DescribeUuidsByVulNamesResponseBodyMachineInfoStatistics& operator=(DescribeUuidsByVulNamesResponseBodyMachineInfoStatistics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->internetIp_ == nullptr
        && return this->intranetIp_ == nullptr && return this->machineInstanceId_ == nullptr && return this->machineIp_ == nullptr && return this->machineName_ == nullptr && return this->os_ == nullptr
        && return this->regionId_ == nullptr && return this->uuid_ == nullptr; };
    // internetIp Field Functions 
    bool hasInternetIp() const { return this->internetIp_ != nullptr;};
    void deleteInternetIp() { this->internetIp_ = nullptr;};
    inline string internetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
    inline DescribeUuidsByVulNamesResponseBodyMachineInfoStatistics& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


    // intranetIp Field Functions 
    bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
    void deleteIntranetIp() { this->intranetIp_ = nullptr;};
    inline string intranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
    inline DescribeUuidsByVulNamesResponseBodyMachineInfoStatistics& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


    // machineInstanceId Field Functions 
    bool hasMachineInstanceId() const { return this->machineInstanceId_ != nullptr;};
    void deleteMachineInstanceId() { this->machineInstanceId_ = nullptr;};
    inline string machineInstanceId() const { DARABONBA_PTR_GET_DEFAULT(machineInstanceId_, "") };
    inline DescribeUuidsByVulNamesResponseBodyMachineInfoStatistics& setMachineInstanceId(string machineInstanceId) { DARABONBA_PTR_SET_VALUE(machineInstanceId_, machineInstanceId) };


    // machineIp Field Functions 
    bool hasMachineIp() const { return this->machineIp_ != nullptr;};
    void deleteMachineIp() { this->machineIp_ = nullptr;};
    inline string machineIp() const { DARABONBA_PTR_GET_DEFAULT(machineIp_, "") };
    inline DescribeUuidsByVulNamesResponseBodyMachineInfoStatistics& setMachineIp(string machineIp) { DARABONBA_PTR_SET_VALUE(machineIp_, machineIp) };


    // machineName Field Functions 
    bool hasMachineName() const { return this->machineName_ != nullptr;};
    void deleteMachineName() { this->machineName_ = nullptr;};
    inline string machineName() const { DARABONBA_PTR_GET_DEFAULT(machineName_, "") };
    inline DescribeUuidsByVulNamesResponseBodyMachineInfoStatistics& setMachineName(string machineName) { DARABONBA_PTR_SET_VALUE(machineName_, machineName) };


    // os Field Functions 
    bool hasOs() const { return this->os_ != nullptr;};
    void deleteOs() { this->os_ = nullptr;};
    inline string os() const { DARABONBA_PTR_GET_DEFAULT(os_, "") };
    inline DescribeUuidsByVulNamesResponseBodyMachineInfoStatistics& setOs(string os) { DARABONBA_PTR_SET_VALUE(os_, os) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeUuidsByVulNamesResponseBodyMachineInfoStatistics& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline DescribeUuidsByVulNamesResponseBodyMachineInfoStatistics& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The public IP address of the server on which the exception was detected.
    std::shared_ptr<string> internetIp_ = nullptr;
    // The private IP address of the server on which the exception was detected.
    std::shared_ptr<string> intranetIp_ = nullptr;
    // The instance ID of the server.
    std::shared_ptr<string> machineInstanceId_ = nullptr;
    // The IP address of the server.
    std::shared_ptr<string> machineIp_ = nullptr;
    // The name of the server.
    std::shared_ptr<string> machineName_ = nullptr;
    // The operating system that the server runs.
    std::shared_ptr<string> os_ = nullptr;
    // The region ID of the server.
    std::shared_ptr<string> regionId_ = nullptr;
    // The UUID of the server.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
