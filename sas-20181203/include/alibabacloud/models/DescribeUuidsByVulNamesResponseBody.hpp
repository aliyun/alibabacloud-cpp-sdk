// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUUIDSBYVULNAMESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUUIDSBYVULNAMESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeUuidsByVulNamesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUuidsByVulNamesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MachineInfoStatistics, machineInfoStatistics_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VulCount, vulCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUuidsByVulNamesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MachineInfoStatistics, machineInfoStatistics_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VulCount, vulCount_);
    };
    DescribeUuidsByVulNamesResponseBody() = default ;
    DescribeUuidsByVulNamesResponseBody(const DescribeUuidsByVulNamesResponseBody &) = default ;
    DescribeUuidsByVulNamesResponseBody(DescribeUuidsByVulNamesResponseBody &&) = default ;
    DescribeUuidsByVulNamesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUuidsByVulNamesResponseBody() = default ;
    DescribeUuidsByVulNamesResponseBody& operator=(const DescribeUuidsByVulNamesResponseBody &) = default ;
    DescribeUuidsByVulNamesResponseBody& operator=(DescribeUuidsByVulNamesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MachineInfoStatistics : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MachineInfoStatistics& obj) { 
        DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
        DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
        DARABONBA_PTR_TO_JSON(MachineInstanceId, machineInstanceId_);
        DARABONBA_PTR_TO_JSON(MachineIp, machineIp_);
        DARABONBA_PTR_TO_JSON(MachineName, machineName_);
        DARABONBA_PTR_TO_JSON(Os, os_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      };
      friend void from_json(const Darabonba::Json& j, MachineInfoStatistics& obj) { 
        DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
        DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
        DARABONBA_PTR_FROM_JSON(MachineInstanceId, machineInstanceId_);
        DARABONBA_PTR_FROM_JSON(MachineIp, machineIp_);
        DARABONBA_PTR_FROM_JSON(MachineName, machineName_);
        DARABONBA_PTR_FROM_JSON(Os, os_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
      };
      MachineInfoStatistics() = default ;
      MachineInfoStatistics(const MachineInfoStatistics &) = default ;
      MachineInfoStatistics(MachineInfoStatistics &&) = default ;
      MachineInfoStatistics(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MachineInfoStatistics() = default ;
      MachineInfoStatistics& operator=(const MachineInfoStatistics &) = default ;
      MachineInfoStatistics& operator=(MachineInfoStatistics &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->internetIp_ == nullptr
        && this->intranetIp_ == nullptr && this->machineInstanceId_ == nullptr && this->machineIp_ == nullptr && this->machineName_ == nullptr && this->os_ == nullptr
        && this->regionId_ == nullptr && this->uuid_ == nullptr; };
      // internetIp Field Functions 
      bool hasInternetIp() const { return this->internetIp_ != nullptr;};
      void deleteInternetIp() { this->internetIp_ = nullptr;};
      inline string getInternetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
      inline MachineInfoStatistics& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


      // intranetIp Field Functions 
      bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
      void deleteIntranetIp() { this->intranetIp_ = nullptr;};
      inline string getIntranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
      inline MachineInfoStatistics& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


      // machineInstanceId Field Functions 
      bool hasMachineInstanceId() const { return this->machineInstanceId_ != nullptr;};
      void deleteMachineInstanceId() { this->machineInstanceId_ = nullptr;};
      inline string getMachineInstanceId() const { DARABONBA_PTR_GET_DEFAULT(machineInstanceId_, "") };
      inline MachineInfoStatistics& setMachineInstanceId(string machineInstanceId) { DARABONBA_PTR_SET_VALUE(machineInstanceId_, machineInstanceId) };


      // machineIp Field Functions 
      bool hasMachineIp() const { return this->machineIp_ != nullptr;};
      void deleteMachineIp() { this->machineIp_ = nullptr;};
      inline string getMachineIp() const { DARABONBA_PTR_GET_DEFAULT(machineIp_, "") };
      inline MachineInfoStatistics& setMachineIp(string machineIp) { DARABONBA_PTR_SET_VALUE(machineIp_, machineIp) };


      // machineName Field Functions 
      bool hasMachineName() const { return this->machineName_ != nullptr;};
      void deleteMachineName() { this->machineName_ = nullptr;};
      inline string getMachineName() const { DARABONBA_PTR_GET_DEFAULT(machineName_, "") };
      inline MachineInfoStatistics& setMachineName(string machineName) { DARABONBA_PTR_SET_VALUE(machineName_, machineName) };


      // os Field Functions 
      bool hasOs() const { return this->os_ != nullptr;};
      void deleteOs() { this->os_ = nullptr;};
      inline string getOs() const { DARABONBA_PTR_GET_DEFAULT(os_, "") };
      inline MachineInfoStatistics& setOs(string os) { DARABONBA_PTR_SET_VALUE(os_, os) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline MachineInfoStatistics& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // uuid Field Functions 
      bool hasUuid() const { return this->uuid_ != nullptr;};
      void deleteUuid() { this->uuid_ = nullptr;};
      inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
      inline MachineInfoStatistics& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    protected:
      // The public IP address of the server on which the exception was detected.
      shared_ptr<string> internetIp_ {};
      // The private IP address of the server on which the exception was detected.
      shared_ptr<string> intranetIp_ {};
      // The instance ID of the server.
      shared_ptr<string> machineInstanceId_ {};
      // The IP address of the server.
      shared_ptr<string> machineIp_ {};
      // The name of the server.
      shared_ptr<string> machineName_ {};
      // The operating system that the server runs.
      shared_ptr<string> os_ {};
      // The region ID of the server.
      shared_ptr<string> regionId_ {};
      // The UUID of the server.
      shared_ptr<string> uuid_ {};
    };

    virtual bool empty() const override { return this->machineInfoStatistics_ == nullptr
        && this->requestId_ == nullptr && this->vulCount_ == nullptr; };
    // machineInfoStatistics Field Functions 
    bool hasMachineInfoStatistics() const { return this->machineInfoStatistics_ != nullptr;};
    void deleteMachineInfoStatistics() { this->machineInfoStatistics_ = nullptr;};
    inline const vector<DescribeUuidsByVulNamesResponseBody::MachineInfoStatistics> & getMachineInfoStatistics() const { DARABONBA_PTR_GET_CONST(machineInfoStatistics_, vector<DescribeUuidsByVulNamesResponseBody::MachineInfoStatistics>) };
    inline vector<DescribeUuidsByVulNamesResponseBody::MachineInfoStatistics> getMachineInfoStatistics() { DARABONBA_PTR_GET(machineInfoStatistics_, vector<DescribeUuidsByVulNamesResponseBody::MachineInfoStatistics>) };
    inline DescribeUuidsByVulNamesResponseBody& setMachineInfoStatistics(const vector<DescribeUuidsByVulNamesResponseBody::MachineInfoStatistics> & machineInfoStatistics) { DARABONBA_PTR_SET_VALUE(machineInfoStatistics_, machineInfoStatistics) };
    inline DescribeUuidsByVulNamesResponseBody& setMachineInfoStatistics(vector<DescribeUuidsByVulNamesResponseBody::MachineInfoStatistics> && machineInfoStatistics) { DARABONBA_PTR_SET_RVALUE(machineInfoStatistics_, machineInfoStatistics) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUuidsByVulNamesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vulCount Field Functions 
    bool hasVulCount() const { return this->vulCount_ != nullptr;};
    void deleteVulCount() { this->vulCount_ = nullptr;};
    inline int32_t getVulCount() const { DARABONBA_PTR_GET_DEFAULT(vulCount_, 0) };
    inline DescribeUuidsByVulNamesResponseBody& setVulCount(int32_t vulCount) { DARABONBA_PTR_SET_VALUE(vulCount_, vulCount) };


  protected:
    // The statistics about the servers.
    shared_ptr<vector<DescribeUuidsByVulNamesResponseBody::MachineInfoStatistics>> machineInfoStatistics_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The total number of vulnerabilities on the server.
    shared_ptr<int32_t> vulCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
