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
        && return this->dealed_ == nullptr && return this->eventId_ == nullptr && return this->fuzzyMaliciousName_ == nullptr && return this->lang_ == nullptr && return this->levels_ == nullptr
        && return this->maliciousMd5_ == nullptr && return this->maliciousType_ == nullptr && return this->pageSize_ == nullptr && return this->remark_ == nullptr && return this->scanRange_ == nullptr
        && return this->uuid_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListAgentlessMaliciousFilesRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // dealed Field Functions 
    bool hasDealed() const { return this->dealed_ != nullptr;};
    void deleteDealed() { this->dealed_ = nullptr;};
    inline string dealed() const { DARABONBA_PTR_GET_DEFAULT(dealed_, "") };
    inline ListAgentlessMaliciousFilesRequest& setDealed(string dealed) { DARABONBA_PTR_SET_VALUE(dealed_, dealed) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline int64_t eventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, 0L) };
    inline ListAgentlessMaliciousFilesRequest& setEventId(int64_t eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // fuzzyMaliciousName Field Functions 
    bool hasFuzzyMaliciousName() const { return this->fuzzyMaliciousName_ != nullptr;};
    void deleteFuzzyMaliciousName() { this->fuzzyMaliciousName_ = nullptr;};
    inline string fuzzyMaliciousName() const { DARABONBA_PTR_GET_DEFAULT(fuzzyMaliciousName_, "") };
    inline ListAgentlessMaliciousFilesRequest& setFuzzyMaliciousName(string fuzzyMaliciousName) { DARABONBA_PTR_SET_VALUE(fuzzyMaliciousName_, fuzzyMaliciousName) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ListAgentlessMaliciousFilesRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // levels Field Functions 
    bool hasLevels() const { return this->levels_ != nullptr;};
    void deleteLevels() { this->levels_ = nullptr;};
    inline string levels() const { DARABONBA_PTR_GET_DEFAULT(levels_, "") };
    inline ListAgentlessMaliciousFilesRequest& setLevels(string levels) { DARABONBA_PTR_SET_VALUE(levels_, levels) };


    // maliciousMd5 Field Functions 
    bool hasMaliciousMd5() const { return this->maliciousMd5_ != nullptr;};
    void deleteMaliciousMd5() { this->maliciousMd5_ = nullptr;};
    inline string maliciousMd5() const { DARABONBA_PTR_GET_DEFAULT(maliciousMd5_, "") };
    inline ListAgentlessMaliciousFilesRequest& setMaliciousMd5(string maliciousMd5) { DARABONBA_PTR_SET_VALUE(maliciousMd5_, maliciousMd5) };


    // maliciousType Field Functions 
    bool hasMaliciousType() const { return this->maliciousType_ != nullptr;};
    void deleteMaliciousType() { this->maliciousType_ = nullptr;};
    inline string maliciousType() const { DARABONBA_PTR_GET_DEFAULT(maliciousType_, "") };
    inline ListAgentlessMaliciousFilesRequest& setMaliciousType(string maliciousType) { DARABONBA_PTR_SET_VALUE(maliciousType_, maliciousType) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline ListAgentlessMaliciousFilesRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline ListAgentlessMaliciousFilesRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // scanRange Field Functions 
    bool hasScanRange() const { return this->scanRange_ != nullptr;};
    void deleteScanRange() { this->scanRange_ = nullptr;};
    inline const vector<string> & scanRange() const { DARABONBA_PTR_GET_CONST(scanRange_, vector<string>) };
    inline vector<string> scanRange() { DARABONBA_PTR_GET(scanRange_, vector<string>) };
    inline ListAgentlessMaliciousFilesRequest& setScanRange(const vector<string> & scanRange) { DARABONBA_PTR_SET_VALUE(scanRange_, scanRange) };
    inline ListAgentlessMaliciousFilesRequest& setScanRange(vector<string> && scanRange) { DARABONBA_PTR_SET_RVALUE(scanRange_, scanRange) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline ListAgentlessMaliciousFilesRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The page number.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // Specifies whether the vulnerability is handled. Valid values:
    // 
    // *   Y: The vulnerability is handled.
    // *   N: The vulnerability is not handled.
    std::shared_ptr<string> dealed_ = nullptr;
    // The event ID.
    std::shared_ptr<int64_t> eventId_ = nullptr;
    // The name of the malicious file that you want to query.
    // 
    // > Fuzzy match is supported.
    std::shared_ptr<string> fuzzyMaliciousName_ = nullptr;
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese.
    // *   **en**: English.
    std::shared_ptr<string> lang_ = nullptr;
    // The severities of the malicious files. Separate multiple values with commas (,). Valid values:
    // 
    // *   serious
    // *   suspicious
    // *   remind
    std::shared_ptr<string> levels_ = nullptr;
    // The MD5 hash value of the malicious file.
    std::shared_ptr<string> maliciousMd5_ = nullptr;
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
    std::shared_ptr<string> maliciousType_ = nullptr;
    // The number of entries per page.
    // 
    // This parameter is required.
    std::shared_ptr<string> pageSize_ = nullptr;
    // The remarks for the asset affected by the vulnerability. The value can be the private IP address, public IP address, or name of the asset. Fuzzy match is supported.
    std::shared_ptr<string> remark_ = nullptr;
    // The source of the malicious file.
    std::shared_ptr<vector<string>> scanRange_ = nullptr;
    // The UUID of the asset.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
