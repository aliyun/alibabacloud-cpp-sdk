// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGENTLESSMALICIOUSFILESRESPONSEBODYLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTAGENTLESSMALICIOUSFILESRESPONSEBODYLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAgentlessMaliciousFilesResponseBodyListDetails.hpp>
#include <alibabacloud/models/ListAgentlessMaliciousFilesResponseBodyListNotes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListAgentlessMaliciousFilesResponseBodyList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAgentlessMaliciousFilesResponseBodyList& obj) { 
      DARABONBA_PTR_TO_JSON(Details, details_);
      DARABONBA_PTR_TO_JSON(DownloadUrl, downloadUrl_);
      DARABONBA_PTR_TO_JSON(FilePath, filePath_);
      DARABONBA_PTR_TO_JSON(FirstScanTimestamp, firstScanTimestamp_);
      DARABONBA_PTR_TO_JSON(HighLight, highLight_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_TO_JSON(LatestScanTimestamp, latestScanTimestamp_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(MaliciousMd5, maliciousMd5_);
      DARABONBA_PTR_TO_JSON(MaliciousName, maliciousName_);
      DARABONBA_PTR_TO_JSON(MaliciousType, maliciousType_);
      DARABONBA_PTR_TO_JSON(Notes, notes_);
      DARABONBA_PTR_TO_JSON(OperateResult, operateResult_);
      DARABONBA_PTR_TO_JSON(OperateTimestamp, operateTimestamp_);
      DARABONBA_PTR_TO_JSON(Partition, partition_);
      DARABONBA_PTR_TO_JSON(TargetId, targetId_);
      DARABONBA_PTR_TO_JSON(TargetName, targetName_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, ListAgentlessMaliciousFilesResponseBodyList& obj) { 
      DARABONBA_PTR_FROM_JSON(Details, details_);
      DARABONBA_PTR_FROM_JSON(DownloadUrl, downloadUrl_);
      DARABONBA_PTR_FROM_JSON(FilePath, filePath_);
      DARABONBA_PTR_FROM_JSON(FirstScanTimestamp, firstScanTimestamp_);
      DARABONBA_PTR_FROM_JSON(HighLight, highLight_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_FROM_JSON(LatestScanTimestamp, latestScanTimestamp_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(MaliciousMd5, maliciousMd5_);
      DARABONBA_PTR_FROM_JSON(MaliciousName, maliciousName_);
      DARABONBA_PTR_FROM_JSON(MaliciousType, maliciousType_);
      DARABONBA_PTR_FROM_JSON(Notes, notes_);
      DARABONBA_PTR_FROM_JSON(OperateResult, operateResult_);
      DARABONBA_PTR_FROM_JSON(OperateTimestamp, operateTimestamp_);
      DARABONBA_PTR_FROM_JSON(Partition, partition_);
      DARABONBA_PTR_FROM_JSON(TargetId, targetId_);
      DARABONBA_PTR_FROM_JSON(TargetName, targetName_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    ListAgentlessMaliciousFilesResponseBodyList() = default ;
    ListAgentlessMaliciousFilesResponseBodyList(const ListAgentlessMaliciousFilesResponseBodyList &) = default ;
    ListAgentlessMaliciousFilesResponseBodyList(ListAgentlessMaliciousFilesResponseBodyList &&) = default ;
    ListAgentlessMaliciousFilesResponseBodyList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAgentlessMaliciousFilesResponseBodyList() = default ;
    ListAgentlessMaliciousFilesResponseBodyList& operator=(const ListAgentlessMaliciousFilesResponseBodyList &) = default ;
    ListAgentlessMaliciousFilesResponseBodyList& operator=(ListAgentlessMaliciousFilesResponseBodyList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->details_ == nullptr
        && return this->downloadUrl_ == nullptr && return this->filePath_ == nullptr && return this->firstScanTimestamp_ == nullptr && return this->highLight_ == nullptr && return this->id_ == nullptr
        && return this->instanceName_ == nullptr && return this->internetIp_ == nullptr && return this->intranetIp_ == nullptr && return this->latestScanTimestamp_ == nullptr && return this->level_ == nullptr
        && return this->maliciousMd5_ == nullptr && return this->maliciousName_ == nullptr && return this->maliciousType_ == nullptr && return this->notes_ == nullptr && return this->operateResult_ == nullptr
        && return this->operateTimestamp_ == nullptr && return this->partition_ == nullptr && return this->targetId_ == nullptr && return this->targetName_ == nullptr && return this->targetType_ == nullptr
        && return this->uuid_ == nullptr; };
    // details Field Functions 
    bool hasDetails() const { return this->details_ != nullptr;};
    void deleteDetails() { this->details_ = nullptr;};
    inline const vector<Models::ListAgentlessMaliciousFilesResponseBodyListDetails> & details() const { DARABONBA_PTR_GET_CONST(details_, vector<Models::ListAgentlessMaliciousFilesResponseBodyListDetails>) };
    inline vector<Models::ListAgentlessMaliciousFilesResponseBodyListDetails> details() { DARABONBA_PTR_GET(details_, vector<Models::ListAgentlessMaliciousFilesResponseBodyListDetails>) };
    inline ListAgentlessMaliciousFilesResponseBodyList& setDetails(const vector<Models::ListAgentlessMaliciousFilesResponseBodyListDetails> & details) { DARABONBA_PTR_SET_VALUE(details_, details) };
    inline ListAgentlessMaliciousFilesResponseBodyList& setDetails(vector<Models::ListAgentlessMaliciousFilesResponseBodyListDetails> && details) { DARABONBA_PTR_SET_RVALUE(details_, details) };


    // downloadUrl Field Functions 
    bool hasDownloadUrl() const { return this->downloadUrl_ != nullptr;};
    void deleteDownloadUrl() { this->downloadUrl_ = nullptr;};
    inline string downloadUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadUrl_, "") };
    inline ListAgentlessMaliciousFilesResponseBodyList& setDownloadUrl(string downloadUrl) { DARABONBA_PTR_SET_VALUE(downloadUrl_, downloadUrl) };


    // filePath Field Functions 
    bool hasFilePath() const { return this->filePath_ != nullptr;};
    void deleteFilePath() { this->filePath_ = nullptr;};
    inline int64_t filePath() const { DARABONBA_PTR_GET_DEFAULT(filePath_, 0L) };
    inline ListAgentlessMaliciousFilesResponseBodyList& setFilePath(int64_t filePath) { DARABONBA_PTR_SET_VALUE(filePath_, filePath) };


    // firstScanTimestamp Field Functions 
    bool hasFirstScanTimestamp() const { return this->firstScanTimestamp_ != nullptr;};
    void deleteFirstScanTimestamp() { this->firstScanTimestamp_ = nullptr;};
    inline int64_t firstScanTimestamp() const { DARABONBA_PTR_GET_DEFAULT(firstScanTimestamp_, 0L) };
    inline ListAgentlessMaliciousFilesResponseBodyList& setFirstScanTimestamp(int64_t firstScanTimestamp) { DARABONBA_PTR_SET_VALUE(firstScanTimestamp_, firstScanTimestamp) };


    // highLight Field Functions 
    bool hasHighLight() const { return this->highLight_ != nullptr;};
    void deleteHighLight() { this->highLight_ = nullptr;};
    inline string highLight() const { DARABONBA_PTR_GET_DEFAULT(highLight_, "") };
    inline ListAgentlessMaliciousFilesResponseBodyList& setHighLight(string highLight) { DARABONBA_PTR_SET_VALUE(highLight_, highLight) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListAgentlessMaliciousFilesResponseBodyList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline ListAgentlessMaliciousFilesResponseBodyList& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // internetIp Field Functions 
    bool hasInternetIp() const { return this->internetIp_ != nullptr;};
    void deleteInternetIp() { this->internetIp_ = nullptr;};
    inline string internetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
    inline ListAgentlessMaliciousFilesResponseBodyList& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


    // intranetIp Field Functions 
    bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
    void deleteIntranetIp() { this->intranetIp_ = nullptr;};
    inline string intranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
    inline ListAgentlessMaliciousFilesResponseBodyList& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


    // latestScanTimestamp Field Functions 
    bool hasLatestScanTimestamp() const { return this->latestScanTimestamp_ != nullptr;};
    void deleteLatestScanTimestamp() { this->latestScanTimestamp_ = nullptr;};
    inline int64_t latestScanTimestamp() const { DARABONBA_PTR_GET_DEFAULT(latestScanTimestamp_, 0L) };
    inline ListAgentlessMaliciousFilesResponseBodyList& setLatestScanTimestamp(int64_t latestScanTimestamp) { DARABONBA_PTR_SET_VALUE(latestScanTimestamp_, latestScanTimestamp) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline ListAgentlessMaliciousFilesResponseBodyList& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // maliciousMd5 Field Functions 
    bool hasMaliciousMd5() const { return this->maliciousMd5_ != nullptr;};
    void deleteMaliciousMd5() { this->maliciousMd5_ = nullptr;};
    inline string maliciousMd5() const { DARABONBA_PTR_GET_DEFAULT(maliciousMd5_, "") };
    inline ListAgentlessMaliciousFilesResponseBodyList& setMaliciousMd5(string maliciousMd5) { DARABONBA_PTR_SET_VALUE(maliciousMd5_, maliciousMd5) };


    // maliciousName Field Functions 
    bool hasMaliciousName() const { return this->maliciousName_ != nullptr;};
    void deleteMaliciousName() { this->maliciousName_ = nullptr;};
    inline string maliciousName() const { DARABONBA_PTR_GET_DEFAULT(maliciousName_, "") };
    inline ListAgentlessMaliciousFilesResponseBodyList& setMaliciousName(string maliciousName) { DARABONBA_PTR_SET_VALUE(maliciousName_, maliciousName) };


    // maliciousType Field Functions 
    bool hasMaliciousType() const { return this->maliciousType_ != nullptr;};
    void deleteMaliciousType() { this->maliciousType_ = nullptr;};
    inline string maliciousType() const { DARABONBA_PTR_GET_DEFAULT(maliciousType_, "") };
    inline ListAgentlessMaliciousFilesResponseBodyList& setMaliciousType(string maliciousType) { DARABONBA_PTR_SET_VALUE(maliciousType_, maliciousType) };


    // notes Field Functions 
    bool hasNotes() const { return this->notes_ != nullptr;};
    void deleteNotes() { this->notes_ = nullptr;};
    inline const vector<Models::ListAgentlessMaliciousFilesResponseBodyListNotes> & notes() const { DARABONBA_PTR_GET_CONST(notes_, vector<Models::ListAgentlessMaliciousFilesResponseBodyListNotes>) };
    inline vector<Models::ListAgentlessMaliciousFilesResponseBodyListNotes> notes() { DARABONBA_PTR_GET(notes_, vector<Models::ListAgentlessMaliciousFilesResponseBodyListNotes>) };
    inline ListAgentlessMaliciousFilesResponseBodyList& setNotes(const vector<Models::ListAgentlessMaliciousFilesResponseBodyListNotes> & notes) { DARABONBA_PTR_SET_VALUE(notes_, notes) };
    inline ListAgentlessMaliciousFilesResponseBodyList& setNotes(vector<Models::ListAgentlessMaliciousFilesResponseBodyListNotes> && notes) { DARABONBA_PTR_SET_RVALUE(notes_, notes) };


    // operateResult Field Functions 
    bool hasOperateResult() const { return this->operateResult_ != nullptr;};
    void deleteOperateResult() { this->operateResult_ = nullptr;};
    inline string operateResult() const { DARABONBA_PTR_GET_DEFAULT(operateResult_, "") };
    inline ListAgentlessMaliciousFilesResponseBodyList& setOperateResult(string operateResult) { DARABONBA_PTR_SET_VALUE(operateResult_, operateResult) };


    // operateTimestamp Field Functions 
    bool hasOperateTimestamp() const { return this->operateTimestamp_ != nullptr;};
    void deleteOperateTimestamp() { this->operateTimestamp_ = nullptr;};
    inline string operateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(operateTimestamp_, "") };
    inline ListAgentlessMaliciousFilesResponseBodyList& setOperateTimestamp(string operateTimestamp) { DARABONBA_PTR_SET_VALUE(operateTimestamp_, operateTimestamp) };


    // partition Field Functions 
    bool hasPartition() const { return this->partition_ != nullptr;};
    void deletePartition() { this->partition_ = nullptr;};
    inline string partition() const { DARABONBA_PTR_GET_DEFAULT(partition_, "") };
    inline ListAgentlessMaliciousFilesResponseBodyList& setPartition(string partition) { DARABONBA_PTR_SET_VALUE(partition_, partition) };


    // targetId Field Functions 
    bool hasTargetId() const { return this->targetId_ != nullptr;};
    void deleteTargetId() { this->targetId_ = nullptr;};
    inline string targetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, "") };
    inline ListAgentlessMaliciousFilesResponseBodyList& setTargetId(string targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


    // targetName Field Functions 
    bool hasTargetName() const { return this->targetName_ != nullptr;};
    void deleteTargetName() { this->targetName_ = nullptr;};
    inline string targetName() const { DARABONBA_PTR_GET_DEFAULT(targetName_, "") };
    inline ListAgentlessMaliciousFilesResponseBodyList& setTargetName(string targetName) { DARABONBA_PTR_SET_VALUE(targetName_, targetName) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline ListAgentlessMaliciousFilesResponseBodyList& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline ListAgentlessMaliciousFilesResponseBodyList& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The details of the alert event.
    std::shared_ptr<vector<Models::ListAgentlessMaliciousFilesResponseBodyListDetails>> details_ = nullptr;
    // The URL to download the malicious image sample.
    std::shared_ptr<string> downloadUrl_ = nullptr;
    // The file path.
    std::shared_ptr<int64_t> filePath_ = nullptr;
    // The timestamp generated when the first scan was performed. Unit: milliseconds.
    std::shared_ptr<int64_t> firstScanTimestamp_ = nullptr;
    // The highlighted JSON string.
    std::shared_ptr<string> highLight_ = nullptr;
    // The event ID.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The name of the asset.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The public IP address of the server.
    std::shared_ptr<string> internetIp_ = nullptr;
    // The private IP address of the server.
    std::shared_ptr<string> intranetIp_ = nullptr;
    // The timestamp generated when the last scan was performed. Unit: milliseconds.
    std::shared_ptr<int64_t> latestScanTimestamp_ = nullptr;
    // The severity of the malicious file. Valid values:
    // 
    // *   serious
    // *   suspicious
    // *   remind
    std::shared_ptr<string> level_ = nullptr;
    // The MD5 hash value of the malicious file.
    std::shared_ptr<string> maliciousMd5_ = nullptr;
    // The name of the malicious file.
    std::shared_ptr<string> maliciousName_ = nullptr;
    // The type of the virus.
    std::shared_ptr<string> maliciousType_ = nullptr;
    // The remarks.
    std::shared_ptr<vector<Models::ListAgentlessMaliciousFilesResponseBodyListNotes>> notes_ = nullptr;
    // The handling result of the alert.
    std::shared_ptr<string> operateResult_ = nullptr;
    // The timestamp generated when the alert is handled. Unit: milliseconds.
    std::shared_ptr<string> operateTimestamp_ = nullptr;
    // The partition of the disk.
    std::shared_ptr<string> partition_ = nullptr;
    // The ID of the asset that is scanned.
    std::shared_ptr<string> targetId_ = nullptr;
    // The name of the asset that is scanned.
    std::shared_ptr<string> targetName_ = nullptr;
    // The type of the asset that is scanned. Valid values:
    // 
    // *   2: The scanned asset is an image.
    std::shared_ptr<string> targetType_ = nullptr;
    // The UUID of the asset.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
