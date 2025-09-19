// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAGENTLESSSENSITIVEFILEBYKEYRESPONSEBODYSENSITIVEFILELIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAGENTLESSSENSITIVEFILEBYKEYRESPONSEBODYSENSITIVEFILELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeAgentlessSensitiveFileByKeyResponseBodySensitiveFileList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAgentlessSensitiveFileByKeyResponseBodySensitiveFileList& obj) { 
      DARABONBA_PTR_TO_JSON(FilePath, filePath_);
      DARABONBA_PTR_TO_JSON(FirstScanTime, firstScanTime_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_TO_JSON(LastScanTime, lastScanTime_);
      DARABONBA_PTR_TO_JSON(Md5, md5_);
      DARABONBA_PTR_TO_JSON(Prompt, prompt_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_TO_JSON(SensitiveFileKey, sensitiveFileKey_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TargetName, targetName_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAgentlessSensitiveFileByKeyResponseBodySensitiveFileList& obj) { 
      DARABONBA_PTR_FROM_JSON(FilePath, filePath_);
      DARABONBA_PTR_FROM_JSON(FirstScanTime, firstScanTime_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_FROM_JSON(LastScanTime, lastScanTime_);
      DARABONBA_PTR_FROM_JSON(Md5, md5_);
      DARABONBA_PTR_FROM_JSON(Prompt, prompt_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_FROM_JSON(SensitiveFileKey, sensitiveFileKey_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TargetName, targetName_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    DescribeAgentlessSensitiveFileByKeyResponseBodySensitiveFileList() = default ;
    DescribeAgentlessSensitiveFileByKeyResponseBodySensitiveFileList(const DescribeAgentlessSensitiveFileByKeyResponseBodySensitiveFileList &) = default ;
    DescribeAgentlessSensitiveFileByKeyResponseBodySensitiveFileList(DescribeAgentlessSensitiveFileByKeyResponseBodySensitiveFileList &&) = default ;
    DescribeAgentlessSensitiveFileByKeyResponseBodySensitiveFileList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAgentlessSensitiveFileByKeyResponseBodySensitiveFileList() = default ;
    DescribeAgentlessSensitiveFileByKeyResponseBodySensitiveFileList& operator=(const DescribeAgentlessSensitiveFileByKeyResponseBodySensitiveFileList &) = default ;
    DescribeAgentlessSensitiveFileByKeyResponseBodySensitiveFileList& operator=(DescribeAgentlessSensitiveFileByKeyResponseBodySensitiveFileList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->filePath_ != nullptr
        && this->firstScanTime_ != nullptr && this->id_ != nullptr && this->instanceName_ != nullptr && this->internetIp_ != nullptr && this->intranetIp_ != nullptr
        && this->lastScanTime_ != nullptr && this->md5_ != nullptr && this->prompt_ != nullptr && this->riskLevel_ != nullptr && this->sensitiveFileKey_ != nullptr
        && this->status_ != nullptr && this->targetName_ != nullptr && this->uuid_ != nullptr; };
    // filePath Field Functions 
    bool hasFilePath() const { return this->filePath_ != nullptr;};
    void deleteFilePath() { this->filePath_ = nullptr;};
    inline string filePath() const { DARABONBA_PTR_GET_DEFAULT(filePath_, "") };
    inline DescribeAgentlessSensitiveFileByKeyResponseBodySensitiveFileList& setFilePath(string filePath) { DARABONBA_PTR_SET_VALUE(filePath_, filePath) };


    // firstScanTime Field Functions 
    bool hasFirstScanTime() const { return this->firstScanTime_ != nullptr;};
    void deleteFirstScanTime() { this->firstScanTime_ = nullptr;};
    inline int64_t firstScanTime() const { DARABONBA_PTR_GET_DEFAULT(firstScanTime_, 0L) };
    inline DescribeAgentlessSensitiveFileByKeyResponseBodySensitiveFileList& setFirstScanTime(int64_t firstScanTime) { DARABONBA_PTR_SET_VALUE(firstScanTime_, firstScanTime) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeAgentlessSensitiveFileByKeyResponseBodySensitiveFileList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeAgentlessSensitiveFileByKeyResponseBodySensitiveFileList& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // internetIp Field Functions 
    bool hasInternetIp() const { return this->internetIp_ != nullptr;};
    void deleteInternetIp() { this->internetIp_ = nullptr;};
    inline string internetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
    inline DescribeAgentlessSensitiveFileByKeyResponseBodySensitiveFileList& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


    // intranetIp Field Functions 
    bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
    void deleteIntranetIp() { this->intranetIp_ = nullptr;};
    inline string intranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
    inline DescribeAgentlessSensitiveFileByKeyResponseBodySensitiveFileList& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


    // lastScanTime Field Functions 
    bool hasLastScanTime() const { return this->lastScanTime_ != nullptr;};
    void deleteLastScanTime() { this->lastScanTime_ = nullptr;};
    inline int64_t lastScanTime() const { DARABONBA_PTR_GET_DEFAULT(lastScanTime_, 0L) };
    inline DescribeAgentlessSensitiveFileByKeyResponseBodySensitiveFileList& setLastScanTime(int64_t lastScanTime) { DARABONBA_PTR_SET_VALUE(lastScanTime_, lastScanTime) };


    // md5 Field Functions 
    bool hasMd5() const { return this->md5_ != nullptr;};
    void deleteMd5() { this->md5_ = nullptr;};
    inline string md5() const { DARABONBA_PTR_GET_DEFAULT(md5_, "") };
    inline DescribeAgentlessSensitiveFileByKeyResponseBodySensitiveFileList& setMd5(string md5) { DARABONBA_PTR_SET_VALUE(md5_, md5) };


    // prompt Field Functions 
    bool hasPrompt() const { return this->prompt_ != nullptr;};
    void deletePrompt() { this->prompt_ = nullptr;};
    inline string prompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
    inline DescribeAgentlessSensitiveFileByKeyResponseBodySensitiveFileList& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline string riskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
    inline DescribeAgentlessSensitiveFileByKeyResponseBodySensitiveFileList& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // sensitiveFileKey Field Functions 
    bool hasSensitiveFileKey() const { return this->sensitiveFileKey_ != nullptr;};
    void deleteSensitiveFileKey() { this->sensitiveFileKey_ = nullptr;};
    inline string sensitiveFileKey() const { DARABONBA_PTR_GET_DEFAULT(sensitiveFileKey_, "") };
    inline DescribeAgentlessSensitiveFileByKeyResponseBodySensitiveFileList& setSensitiveFileKey(string sensitiveFileKey) { DARABONBA_PTR_SET_VALUE(sensitiveFileKey_, sensitiveFileKey) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeAgentlessSensitiveFileByKeyResponseBodySensitiveFileList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // targetName Field Functions 
    bool hasTargetName() const { return this->targetName_ != nullptr;};
    void deleteTargetName() { this->targetName_ = nullptr;};
    inline string targetName() const { DARABONBA_PTR_GET_DEFAULT(targetName_, "") };
    inline DescribeAgentlessSensitiveFileByKeyResponseBodySensitiveFileList& setTargetName(string targetName) { DARABONBA_PTR_SET_VALUE(targetName_, targetName) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline DescribeAgentlessSensitiveFileByKeyResponseBodySensitiveFileList& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The path to the sensitive file.
    std::shared_ptr<string> filePath_ = nullptr;
    // The timestamp when the first scan was performed. Unit: milliseconds.
    std::shared_ptr<int64_t> firstScanTime_ = nullptr;
    // The ID of the alert for the sensitive file.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The instance name of the asset.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The public IP address of the asset.
    std::shared_ptr<string> internetIp_ = nullptr;
    // The private IP address of the asset.
    std::shared_ptr<string> intranetIp_ = nullptr;
    // The timestamp when the last scan was performed. Unit: milliseconds.
    std::shared_ptr<int64_t> lastScanTime_ = nullptr;
    // The MD5 hash value of the sensitive file.
    std::shared_ptr<string> md5_ = nullptr;
    // The content of the sensitive file.
    std::shared_ptr<string> prompt_ = nullptr;
    // The risk level. Valid values:
    // 
    // *   **high**
    // *   **medium**
    // *   **low**
    std::shared_ptr<string> riskLevel_ = nullptr;
    // The type of the sensitive file.
    std::shared_ptr<string> sensitiveFileKey_ = nullptr;
    // The status of the sensitive file. Valid values:
    // 
    // *   **0**: unhandled.
    // *   **1**: ignored.
    // *   **2**: false positive.
    std::shared_ptr<int32_t> status_ = nullptr;
    // The name of the asset.
    std::shared_ptr<string> targetName_ = nullptr;
    // The UUID of the asset.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
