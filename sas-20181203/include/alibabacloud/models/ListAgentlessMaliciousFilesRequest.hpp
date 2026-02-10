// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGENTLESSMALICIOUSFILESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAGENTLESSMALICIOUSFILESREQUEST_HPP_
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
  class ListAgentlessMaliciousFilesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAgentlessMaliciousFilesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Dealed, dealed_);
      DARABONBA_PTR_TO_JSON(EventId, eventId_);
      DARABONBA_PTR_TO_JSON(FuzzyMaliciousName, fuzzyMaliciousName_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Levels, levels_);
      DARABONBA_PTR_TO_JSON(MaliciousMd5, maliciousMd5_);
      DARABONBA_PTR_TO_JSON(MaliciousType, maliciousType_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(ScanRange, scanRange_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, ListAgentlessMaliciousFilesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Dealed, dealed_);
      DARABONBA_PTR_FROM_JSON(EventId, eventId_);
      DARABONBA_PTR_FROM_JSON(FuzzyMaliciousName, fuzzyMaliciousName_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Levels, levels_);
      DARABONBA_PTR_FROM_JSON(MaliciousMd5, maliciousMd5_);
      DARABONBA_PTR_FROM_JSON(MaliciousType, maliciousType_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(ScanRange, scanRange_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    ListAgentlessMaliciousFilesRequest() = default ;
    ListAgentlessMaliciousFilesRequest(const ListAgentlessMaliciousFilesRequest &) = default ;
    ListAgentlessMaliciousFilesRequest(ListAgentlessMaliciousFilesRequest &&) = default ;
    ListAgentlessMaliciousFilesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAgentlessMaliciousFilesRequest() = default ;
    ListAgentlessMaliciousFilesRequest& operator=(const ListAgentlessMaliciousFilesRequest &) = default ;
    ListAgentlessMaliciousFilesRequest& operator=(ListAgentlessMaliciousFilesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->dealed_ == nullptr && this->eventId_ == nullptr && this->fuzzyMaliciousName_ == nullptr && this->lang_ == nullptr && this->levels_ == nullptr
        && this->maliciousMd5_ == nullptr && this->maliciousType_ == nullptr && this->pageSize_ == nullptr && this->remark_ == nullptr && this->scanRange_ == nullptr
        && this->uuid_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListAgentlessMaliciousFilesRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // dealed Field Functions 
    bool hasDealed() const { return this->dealed_ != nullptr;};
    void deleteDealed() { this->dealed_ = nullptr;};
    inline string getDealed() const { DARABONBA_PTR_GET_DEFAULT(dealed_, "") };
    inline ListAgentlessMaliciousFilesRequest& setDealed(string dealed) { DARABONBA_PTR_SET_VALUE(dealed_, dealed) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline int64_t getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, 0L) };
    inline ListAgentlessMaliciousFilesRequest& setEventId(int64_t eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // fuzzyMaliciousName Field Functions 
    bool hasFuzzyMaliciousName() const { return this->fuzzyMaliciousName_ != nullptr;};
    void deleteFuzzyMaliciousName() { this->fuzzyMaliciousName_ = nullptr;};
    inline string getFuzzyMaliciousName() const { DARABONBA_PTR_GET_DEFAULT(fuzzyMaliciousName_, "") };
    inline ListAgentlessMaliciousFilesRequest& setFuzzyMaliciousName(string fuzzyMaliciousName) { DARABONBA_PTR_SET_VALUE(fuzzyMaliciousName_, fuzzyMaliciousName) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ListAgentlessMaliciousFilesRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // levels Field Functions 
    bool hasLevels() const { return this->levels_ != nullptr;};
    void deleteLevels() { this->levels_ = nullptr;};
    inline string getLevels() const { DARABONBA_PTR_GET_DEFAULT(levels_, "") };
    inline ListAgentlessMaliciousFilesRequest& setLevels(string levels) { DARABONBA_PTR_SET_VALUE(levels_, levels) };


    // maliciousMd5 Field Functions 
    bool hasMaliciousMd5() const { return this->maliciousMd5_ != nullptr;};
    void deleteMaliciousMd5() { this->maliciousMd5_ = nullptr;};
    inline string getMaliciousMd5() const { DARABONBA_PTR_GET_DEFAULT(maliciousMd5_, "") };
    inline ListAgentlessMaliciousFilesRequest& setMaliciousMd5(string maliciousMd5) { DARABONBA_PTR_SET_VALUE(maliciousMd5_, maliciousMd5) };


    // maliciousType Field Functions 
    bool hasMaliciousType() const { return this->maliciousType_ != nullptr;};
    void deleteMaliciousType() { this->maliciousType_ = nullptr;};
    inline string getMaliciousType() const { DARABONBA_PTR_GET_DEFAULT(maliciousType_, "") };
    inline ListAgentlessMaliciousFilesRequest& setMaliciousType(string maliciousType) { DARABONBA_PTR_SET_VALUE(maliciousType_, maliciousType) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline ListAgentlessMaliciousFilesRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline ListAgentlessMaliciousFilesRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // scanRange Field Functions 
    bool hasScanRange() const { return this->scanRange_ != nullptr;};
    void deleteScanRange() { this->scanRange_ = nullptr;};
    inline const vector<string> & getScanRange() const { DARABONBA_PTR_GET_CONST(scanRange_, vector<string>) };
    inline vector<string> getScanRange() { DARABONBA_PTR_GET(scanRange_, vector<string>) };
    inline ListAgentlessMaliciousFilesRequest& setScanRange(const vector<string> & scanRange) { DARABONBA_PTR_SET_VALUE(scanRange_, scanRange) };
    inline ListAgentlessMaliciousFilesRequest& setScanRange(vector<string> && scanRange) { DARABONBA_PTR_SET_RVALUE(scanRange_, scanRange) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline ListAgentlessMaliciousFilesRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The page number.
    // 
    // This parameter is required.
    shared_ptr<int32_t> currentPage_ {};
    // Specifies whether the vulnerability is handled. Valid values:
    // 
    // *   Y: The vulnerability is handled.
    // *   N: The vulnerability is not handled.
    shared_ptr<string> dealed_ {};
    // The event ID.
    shared_ptr<int64_t> eventId_ {};
    // The name of the malicious file that you want to query.
    // 
    // > Fuzzy match is supported.
    shared_ptr<string> fuzzyMaliciousName_ {};
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese.
    // *   **en**: English.
    shared_ptr<string> lang_ {};
    // The severities of the malicious files. Separate multiple values with commas (,). Valid values:
    // 
    // *   serious
    // *   suspicious
    // *   remind
    shared_ptr<string> levels_ {};
    // The MD5 hash value of the malicious file.
    shared_ptr<string> maliciousMd5_ {};
    // The alert type.
    // 
    // Valid values when Lang is set to zh:
    // 
    // *   WebShell
    // *   Malicious Software
    // *   Malicious Script
    // 
    // Valid values when Lang is set to en:
    // 
    // *   WebShell
    // *   Malicious Software
    // *   Malicious Script
    shared_ptr<string> maliciousType_ {};
    // The number of entries per page.
    // 
    // This parameter is required.
    shared_ptr<string> pageSize_ {};
    // The remarks for the asset affected by the vulnerability. The value can be the private IP address, public IP address, or name of the asset. Fuzzy match is supported.
    shared_ptr<string> remark_ {};
    // The source of the malicious file.
    shared_ptr<vector<string>> scanRange_ {};
    // The UUID of the asset.
    shared_ptr<string> uuid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
