// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAGENTLESSSENSITIVEFILEBYKEYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAGENTLESSSENSITIVEFILEBYKEYRESPONSEBODY_HPP_
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
  class DescribeAgentlessSensitiveFileByKeyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAgentlessSensitiveFileByKeyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SensitiveFileList, sensitiveFileList_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAgentlessSensitiveFileByKeyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SensitiveFileList, sensitiveFileList_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeAgentlessSensitiveFileByKeyResponseBody() = default ;
    DescribeAgentlessSensitiveFileByKeyResponseBody(const DescribeAgentlessSensitiveFileByKeyResponseBody &) = default ;
    DescribeAgentlessSensitiveFileByKeyResponseBody(DescribeAgentlessSensitiveFileByKeyResponseBody &&) = default ;
    DescribeAgentlessSensitiveFileByKeyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAgentlessSensitiveFileByKeyResponseBody() = default ;
    DescribeAgentlessSensitiveFileByKeyResponseBody& operator=(const DescribeAgentlessSensitiveFileByKeyResponseBody &) = default ;
    DescribeAgentlessSensitiveFileByKeyResponseBody& operator=(DescribeAgentlessSensitiveFileByKeyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SensitiveFileList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SensitiveFileList& obj) { 
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
      friend void from_json(const Darabonba::Json& j, SensitiveFileList& obj) { 
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
      SensitiveFileList() = default ;
      SensitiveFileList(const SensitiveFileList &) = default ;
      SensitiveFileList(SensitiveFileList &&) = default ;
      SensitiveFileList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SensitiveFileList() = default ;
      SensitiveFileList& operator=(const SensitiveFileList &) = default ;
      SensitiveFileList& operator=(SensitiveFileList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->filePath_ == nullptr
        && this->firstScanTime_ == nullptr && this->id_ == nullptr && this->instanceName_ == nullptr && this->internetIp_ == nullptr && this->intranetIp_ == nullptr
        && this->lastScanTime_ == nullptr && this->md5_ == nullptr && this->prompt_ == nullptr && this->riskLevel_ == nullptr && this->sensitiveFileKey_ == nullptr
        && this->status_ == nullptr && this->targetName_ == nullptr && this->uuid_ == nullptr; };
      // filePath Field Functions 
      bool hasFilePath() const { return this->filePath_ != nullptr;};
      void deleteFilePath() { this->filePath_ = nullptr;};
      inline string getFilePath() const { DARABONBA_PTR_GET_DEFAULT(filePath_, "") };
      inline SensitiveFileList& setFilePath(string filePath) { DARABONBA_PTR_SET_VALUE(filePath_, filePath) };


      // firstScanTime Field Functions 
      bool hasFirstScanTime() const { return this->firstScanTime_ != nullptr;};
      void deleteFirstScanTime() { this->firstScanTime_ = nullptr;};
      inline int64_t getFirstScanTime() const { DARABONBA_PTR_GET_DEFAULT(firstScanTime_, 0L) };
      inline SensitiveFileList& setFirstScanTime(int64_t firstScanTime) { DARABONBA_PTR_SET_VALUE(firstScanTime_, firstScanTime) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline SensitiveFileList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline SensitiveFileList& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // internetIp Field Functions 
      bool hasInternetIp() const { return this->internetIp_ != nullptr;};
      void deleteInternetIp() { this->internetIp_ = nullptr;};
      inline string getInternetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
      inline SensitiveFileList& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


      // intranetIp Field Functions 
      bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
      void deleteIntranetIp() { this->intranetIp_ = nullptr;};
      inline string getIntranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
      inline SensitiveFileList& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


      // lastScanTime Field Functions 
      bool hasLastScanTime() const { return this->lastScanTime_ != nullptr;};
      void deleteLastScanTime() { this->lastScanTime_ = nullptr;};
      inline int64_t getLastScanTime() const { DARABONBA_PTR_GET_DEFAULT(lastScanTime_, 0L) };
      inline SensitiveFileList& setLastScanTime(int64_t lastScanTime) { DARABONBA_PTR_SET_VALUE(lastScanTime_, lastScanTime) };


      // md5 Field Functions 
      bool hasMd5() const { return this->md5_ != nullptr;};
      void deleteMd5() { this->md5_ = nullptr;};
      inline string getMd5() const { DARABONBA_PTR_GET_DEFAULT(md5_, "") };
      inline SensitiveFileList& setMd5(string md5) { DARABONBA_PTR_SET_VALUE(md5_, md5) };


      // prompt Field Functions 
      bool hasPrompt() const { return this->prompt_ != nullptr;};
      void deletePrompt() { this->prompt_ = nullptr;};
      inline string getPrompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
      inline SensitiveFileList& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


      // riskLevel Field Functions 
      bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
      void deleteRiskLevel() { this->riskLevel_ = nullptr;};
      inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
      inline SensitiveFileList& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


      // sensitiveFileKey Field Functions 
      bool hasSensitiveFileKey() const { return this->sensitiveFileKey_ != nullptr;};
      void deleteSensitiveFileKey() { this->sensitiveFileKey_ = nullptr;};
      inline string getSensitiveFileKey() const { DARABONBA_PTR_GET_DEFAULT(sensitiveFileKey_, "") };
      inline SensitiveFileList& setSensitiveFileKey(string sensitiveFileKey) { DARABONBA_PTR_SET_VALUE(sensitiveFileKey_, sensitiveFileKey) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline SensitiveFileList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // targetName Field Functions 
      bool hasTargetName() const { return this->targetName_ != nullptr;};
      void deleteTargetName() { this->targetName_ = nullptr;};
      inline string getTargetName() const { DARABONBA_PTR_GET_DEFAULT(targetName_, "") };
      inline SensitiveFileList& setTargetName(string targetName) { DARABONBA_PTR_SET_VALUE(targetName_, targetName) };


      // uuid Field Functions 
      bool hasUuid() const { return this->uuid_ != nullptr;};
      void deleteUuid() { this->uuid_ = nullptr;};
      inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
      inline SensitiveFileList& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    protected:
      // The path to the sensitive file.
      shared_ptr<string> filePath_ {};
      // The timestamp when the first scan was performed. Unit: milliseconds.
      shared_ptr<int64_t> firstScanTime_ {};
      // The ID of the alert for the sensitive file.
      shared_ptr<int64_t> id_ {};
      // The instance name of the asset.
      shared_ptr<string> instanceName_ {};
      // The public IP address of the asset.
      shared_ptr<string> internetIp_ {};
      // The private IP address of the asset.
      shared_ptr<string> intranetIp_ {};
      // The timestamp when the last scan was performed. Unit: milliseconds.
      shared_ptr<int64_t> lastScanTime_ {};
      // The MD5 hash value of the sensitive file.
      shared_ptr<string> md5_ {};
      // The content of the sensitive file.
      shared_ptr<string> prompt_ {};
      // The risk level. Valid values:
      // 
      // *   **high**
      // *   **medium**
      // *   **low**
      shared_ptr<string> riskLevel_ {};
      // The type of the sensitive file.
      shared_ptr<string> sensitiveFileKey_ {};
      // The status of the sensitive file. Valid values:
      // 
      // *   **0**: unhandled.
      // *   **1**: ignored.
      // *   **2**: false positive.
      shared_ptr<int32_t> status_ {};
      // The name of the asset.
      shared_ptr<string> targetName_ {};
      // The UUID of the asset.
      shared_ptr<string> uuid_ {};
    };

    class PageInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PageInfo() = default ;
      PageInfo(const PageInfo &) = default ;
      PageInfo(PageInfo &&) = default ;
      PageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageInfo() = default ;
      PageInfo& operator=(const PageInfo &) = default ;
      PageInfo& operator=(PageInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->count_ == nullptr
        && this->currentPage_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline PageInfo& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline PageInfo& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PageInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The number of entries returned on the current page.
      shared_ptr<int32_t> count_ {};
      // The page number.
      shared_ptr<int32_t> currentPage_ {};
      // The number of entries per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->pageInfo_ == nullptr
        && this->requestId_ == nullptr && this->sensitiveFileList_ == nullptr && this->success_ == nullptr; };
    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeAgentlessSensitiveFileByKeyResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeAgentlessSensitiveFileByKeyResponseBody::PageInfo) };
    inline DescribeAgentlessSensitiveFileByKeyResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeAgentlessSensitiveFileByKeyResponseBody::PageInfo) };
    inline DescribeAgentlessSensitiveFileByKeyResponseBody& setPageInfo(const DescribeAgentlessSensitiveFileByKeyResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeAgentlessSensitiveFileByKeyResponseBody& setPageInfo(DescribeAgentlessSensitiveFileByKeyResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAgentlessSensitiveFileByKeyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sensitiveFileList Field Functions 
    bool hasSensitiveFileList() const { return this->sensitiveFileList_ != nullptr;};
    void deleteSensitiveFileList() { this->sensitiveFileList_ = nullptr;};
    inline const vector<DescribeAgentlessSensitiveFileByKeyResponseBody::SensitiveFileList> & getSensitiveFileList() const { DARABONBA_PTR_GET_CONST(sensitiveFileList_, vector<DescribeAgentlessSensitiveFileByKeyResponseBody::SensitiveFileList>) };
    inline vector<DescribeAgentlessSensitiveFileByKeyResponseBody::SensitiveFileList> getSensitiveFileList() { DARABONBA_PTR_GET(sensitiveFileList_, vector<DescribeAgentlessSensitiveFileByKeyResponseBody::SensitiveFileList>) };
    inline DescribeAgentlessSensitiveFileByKeyResponseBody& setSensitiveFileList(const vector<DescribeAgentlessSensitiveFileByKeyResponseBody::SensitiveFileList> & sensitiveFileList) { DARABONBA_PTR_SET_VALUE(sensitiveFileList_, sensitiveFileList) };
    inline DescribeAgentlessSensitiveFileByKeyResponseBody& setSensitiveFileList(vector<DescribeAgentlessSensitiveFileByKeyResponseBody::SensitiveFileList> && sensitiveFileList) { DARABONBA_PTR_SET_RVALUE(sensitiveFileList_, sensitiveFileList) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeAgentlessSensitiveFileByKeyResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The pagination information.
    shared_ptr<DescribeAgentlessSensitiveFileByKeyResponseBody::PageInfo> pageInfo_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The information about the sensitive files that are detected by using the agentless detection feature.
    shared_ptr<vector<DescribeAgentlessSensitiveFileByKeyResponseBody::SensitiveFileList>> sensitiveFileList_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
