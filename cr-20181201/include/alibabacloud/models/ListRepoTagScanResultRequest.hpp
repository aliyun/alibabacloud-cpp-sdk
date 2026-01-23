// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREPOTAGSCANRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTREPOTAGSCANRESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class ListRepoTagScanResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRepoTagScanResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Digest, digest_);
      DARABONBA_PTR_TO_JSON(FilterValue, filterValue_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RepoId, repoId_);
      DARABONBA_PTR_TO_JSON(ScanTaskId, scanTaskId_);
      DARABONBA_PTR_TO_JSON(ScanType, scanType_);
      DARABONBA_PTR_TO_JSON(Severity, severity_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(VulQueryKey, vulQueryKey_);
    };
    friend void from_json(const Darabonba::Json& j, ListRepoTagScanResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Digest, digest_);
      DARABONBA_PTR_FROM_JSON(FilterValue, filterValue_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RepoId, repoId_);
      DARABONBA_PTR_FROM_JSON(ScanTaskId, scanTaskId_);
      DARABONBA_PTR_FROM_JSON(ScanType, scanType_);
      DARABONBA_PTR_FROM_JSON(Severity, severity_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(VulQueryKey, vulQueryKey_);
    };
    ListRepoTagScanResultRequest() = default ;
    ListRepoTagScanResultRequest(const ListRepoTagScanResultRequest &) = default ;
    ListRepoTagScanResultRequest(ListRepoTagScanResultRequest &&) = default ;
    ListRepoTagScanResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRepoTagScanResultRequest() = default ;
    ListRepoTagScanResultRequest& operator=(const ListRepoTagScanResultRequest &) = default ;
    ListRepoTagScanResultRequest& operator=(ListRepoTagScanResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->digest_ == nullptr
        && this->filterValue_ == nullptr && this->instanceId_ == nullptr && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->repoId_ == nullptr
        && this->scanTaskId_ == nullptr && this->scanType_ == nullptr && this->severity_ == nullptr && this->tag_ == nullptr && this->vulQueryKey_ == nullptr; };
    // digest Field Functions 
    bool hasDigest() const { return this->digest_ != nullptr;};
    void deleteDigest() { this->digest_ = nullptr;};
    inline string getDigest() const { DARABONBA_PTR_GET_DEFAULT(digest_, "") };
    inline ListRepoTagScanResultRequest& setDigest(string digest) { DARABONBA_PTR_SET_VALUE(digest_, digest) };


    // filterValue Field Functions 
    bool hasFilterValue() const { return this->filterValue_ != nullptr;};
    void deleteFilterValue() { this->filterValue_ = nullptr;};
    inline string getFilterValue() const { DARABONBA_PTR_GET_DEFAULT(filterValue_, "") };
    inline ListRepoTagScanResultRequest& setFilterValue(string filterValue) { DARABONBA_PTR_SET_VALUE(filterValue_, filterValue) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListRepoTagScanResultRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline ListRepoTagScanResultRequest& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListRepoTagScanResultRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // repoId Field Functions 
    bool hasRepoId() const { return this->repoId_ != nullptr;};
    void deleteRepoId() { this->repoId_ = nullptr;};
    inline string getRepoId() const { DARABONBA_PTR_GET_DEFAULT(repoId_, "") };
    inline ListRepoTagScanResultRequest& setRepoId(string repoId) { DARABONBA_PTR_SET_VALUE(repoId_, repoId) };


    // scanTaskId Field Functions 
    bool hasScanTaskId() const { return this->scanTaskId_ != nullptr;};
    void deleteScanTaskId() { this->scanTaskId_ = nullptr;};
    inline string getScanTaskId() const { DARABONBA_PTR_GET_DEFAULT(scanTaskId_, "") };
    inline ListRepoTagScanResultRequest& setScanTaskId(string scanTaskId) { DARABONBA_PTR_SET_VALUE(scanTaskId_, scanTaskId) };


    // scanType Field Functions 
    bool hasScanType() const { return this->scanType_ != nullptr;};
    void deleteScanType() { this->scanType_ = nullptr;};
    inline string getScanType() const { DARABONBA_PTR_GET_DEFAULT(scanType_, "") };
    inline ListRepoTagScanResultRequest& setScanType(string scanType) { DARABONBA_PTR_SET_VALUE(scanType_, scanType) };


    // severity Field Functions 
    bool hasSeverity() const { return this->severity_ != nullptr;};
    void deleteSeverity() { this->severity_ = nullptr;};
    inline string getSeverity() const { DARABONBA_PTR_GET_DEFAULT(severity_, "") };
    inline ListRepoTagScanResultRequest& setSeverity(string severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline ListRepoTagScanResultRequest& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


    // vulQueryKey Field Functions 
    bool hasVulQueryKey() const { return this->vulQueryKey_ != nullptr;};
    void deleteVulQueryKey() { this->vulQueryKey_ = nullptr;};
    inline string getVulQueryKey() const { DARABONBA_PTR_GET_DEFAULT(vulQueryKey_, "") };
    inline ListRepoTagScanResultRequest& setVulQueryKey(string vulQueryKey) { DARABONBA_PTR_SET_VALUE(vulQueryKey_, vulQueryKey) };


  protected:
    // The digest of the image.
    shared_ptr<string> digest_ {};
    // The parameter whose value that you want to query. Fox example, if the value is `FixCmd`, only the `FixCmd` parameter is returned.
    shared_ptr<string> filterValue_ {};
    // The ID of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The number of the page to return.
    shared_ptr<int32_t> pageNo_ {};
    // The number of entries to return on each page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the image repository.
    shared_ptr<string> repoId_ {};
    // The ID of the security scan task.
    shared_ptr<string> scanTaskId_ {};
    // The type of the vulnerability. Valid values:
    // 
    // *   `cve`: image system vulnerability
    // *   `sca`: image application vulnerability
    shared_ptr<string> scanType_ {};
    // The severity of the vulnerability. Valid values:
    // 
    // *   `High`
    // *   `Medium`
    // *   `Low`
    // *   `Unknown`
    shared_ptr<string> severity_ {};
    // The name of the image tag.
    shared_ptr<string> tag_ {};
    // The keyword for fuzzy search used in scanning. The value can be a CVE name.
    shared_ptr<string> vulQueryKey_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
