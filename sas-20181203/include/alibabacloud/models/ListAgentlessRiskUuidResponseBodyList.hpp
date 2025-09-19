// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGENTLESSRISKUUIDRESPONSEBODYLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTAGENTLESSRISKUUIDRESPONSEBODYLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListAgentlessRiskUuidResponseBodyList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAgentlessRiskUuidResponseBodyList& obj) { 
      DARABONBA_PTR_TO_JSON(BaselineCount, baselineCount_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_TO_JSON(MaliciousCount, maliciousCount_);
      DARABONBA_PTR_TO_JSON(ScanTime, scanTime_);
      DARABONBA_PTR_TO_JSON(TargetId, targetId_);
      DARABONBA_PTR_TO_JSON(TargetName, targetName_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      DARABONBA_PTR_TO_JSON(VulCount, vulCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListAgentlessRiskUuidResponseBodyList& obj) { 
      DARABONBA_PTR_FROM_JSON(BaselineCount, baselineCount_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_FROM_JSON(MaliciousCount, maliciousCount_);
      DARABONBA_PTR_FROM_JSON(ScanTime, scanTime_);
      DARABONBA_PTR_FROM_JSON(TargetId, targetId_);
      DARABONBA_PTR_FROM_JSON(TargetName, targetName_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
      DARABONBA_PTR_FROM_JSON(VulCount, vulCount_);
    };
    ListAgentlessRiskUuidResponseBodyList() = default ;
    ListAgentlessRiskUuidResponseBodyList(const ListAgentlessRiskUuidResponseBodyList &) = default ;
    ListAgentlessRiskUuidResponseBodyList(ListAgentlessRiskUuidResponseBodyList &&) = default ;
    ListAgentlessRiskUuidResponseBodyList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAgentlessRiskUuidResponseBodyList() = default ;
    ListAgentlessRiskUuidResponseBodyList& operator=(const ListAgentlessRiskUuidResponseBodyList &) = default ;
    ListAgentlessRiskUuidResponseBodyList& operator=(ListAgentlessRiskUuidResponseBodyList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->baselineCount_ != nullptr
        && this->instanceId_ != nullptr && this->instanceName_ != nullptr && this->internetIp_ != nullptr && this->intranetIp_ != nullptr && this->maliciousCount_ != nullptr
        && this->scanTime_ != nullptr && this->targetId_ != nullptr && this->targetName_ != nullptr && this->uuid_ != nullptr && this->vulCount_ != nullptr; };
    // baselineCount Field Functions 
    bool hasBaselineCount() const { return this->baselineCount_ != nullptr;};
    void deleteBaselineCount() { this->baselineCount_ = nullptr;};
    inline int32_t baselineCount() const { DARABONBA_PTR_GET_DEFAULT(baselineCount_, 0) };
    inline ListAgentlessRiskUuidResponseBodyList& setBaselineCount(int32_t baselineCount) { DARABONBA_PTR_SET_VALUE(baselineCount_, baselineCount) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListAgentlessRiskUuidResponseBodyList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline ListAgentlessRiskUuidResponseBodyList& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // internetIp Field Functions 
    bool hasInternetIp() const { return this->internetIp_ != nullptr;};
    void deleteInternetIp() { this->internetIp_ = nullptr;};
    inline string internetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
    inline ListAgentlessRiskUuidResponseBodyList& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


    // intranetIp Field Functions 
    bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
    void deleteIntranetIp() { this->intranetIp_ = nullptr;};
    inline string intranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
    inline ListAgentlessRiskUuidResponseBodyList& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


    // maliciousCount Field Functions 
    bool hasMaliciousCount() const { return this->maliciousCount_ != nullptr;};
    void deleteMaliciousCount() { this->maliciousCount_ = nullptr;};
    inline int32_t maliciousCount() const { DARABONBA_PTR_GET_DEFAULT(maliciousCount_, 0) };
    inline ListAgentlessRiskUuidResponseBodyList& setMaliciousCount(int32_t maliciousCount) { DARABONBA_PTR_SET_VALUE(maliciousCount_, maliciousCount) };


    // scanTime Field Functions 
    bool hasScanTime() const { return this->scanTime_ != nullptr;};
    void deleteScanTime() { this->scanTime_ = nullptr;};
    inline int64_t scanTime() const { DARABONBA_PTR_GET_DEFAULT(scanTime_, 0L) };
    inline ListAgentlessRiskUuidResponseBodyList& setScanTime(int64_t scanTime) { DARABONBA_PTR_SET_VALUE(scanTime_, scanTime) };


    // targetId Field Functions 
    bool hasTargetId() const { return this->targetId_ != nullptr;};
    void deleteTargetId() { this->targetId_ = nullptr;};
    inline string targetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, "") };
    inline ListAgentlessRiskUuidResponseBodyList& setTargetId(string targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


    // targetName Field Functions 
    bool hasTargetName() const { return this->targetName_ != nullptr;};
    void deleteTargetName() { this->targetName_ = nullptr;};
    inline string targetName() const { DARABONBA_PTR_GET_DEFAULT(targetName_, "") };
    inline ListAgentlessRiskUuidResponseBodyList& setTargetName(string targetName) { DARABONBA_PTR_SET_VALUE(targetName_, targetName) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline ListAgentlessRiskUuidResponseBodyList& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    // vulCount Field Functions 
    bool hasVulCount() const { return this->vulCount_ != nullptr;};
    void deleteVulCount() { this->vulCount_ = nullptr;};
    inline int32_t vulCount() const { DARABONBA_PTR_GET_DEFAULT(vulCount_, 0) };
    inline ListAgentlessRiskUuidResponseBodyList& setVulCount(int32_t vulCount) { DARABONBA_PTR_SET_VALUE(vulCount_, vulCount) };


  protected:
    // The number of baseline risks.
    std::shared_ptr<int32_t> baselineCount_ = nullptr;
    // The instance ID of the asset.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The instance name of the asset.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The public IP address of the server.
    std::shared_ptr<string> internetIp_ = nullptr;
    // The private IP address of the server.
    std::shared_ptr<string> intranetIp_ = nullptr;
    // The number of malicious samples.
    std::shared_ptr<int32_t> maliciousCount_ = nullptr;
    // The timestamp of the detection. Unit: milliseconds.
    std::shared_ptr<int64_t> scanTime_ = nullptr;
    // The ID of the asset that is detected.
    std::shared_ptr<string> targetId_ = nullptr;
    // The name of the asset that is detected.
    std::shared_ptr<string> targetName_ = nullptr;
    // The UUID of the server.
    std::shared_ptr<string> uuid_ = nullptr;
    // The number of detected vulnerabilities.
    std::shared_ptr<int32_t> vulCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
