// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREPOTAGSCANRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTREPOTAGSCANRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class ListRepoTagScanResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRepoTagScanResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(Vulnerabilities, vulnerabilities_);
    };
    friend void from_json(const Darabonba::Json& j, ListRepoTagScanResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(Vulnerabilities, vulnerabilities_);
    };
    ListRepoTagScanResultResponseBody() = default ;
    ListRepoTagScanResultResponseBody(const ListRepoTagScanResultResponseBody &) = default ;
    ListRepoTagScanResultResponseBody(ListRepoTagScanResultResponseBody &&) = default ;
    ListRepoTagScanResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRepoTagScanResultResponseBody() = default ;
    ListRepoTagScanResultResponseBody& operator=(const ListRepoTagScanResultResponseBody &) = default ;
    ListRepoTagScanResultResponseBody& operator=(ListRepoTagScanResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Vulnerabilities : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Vulnerabilities& obj) { 
        DARABONBA_PTR_TO_JSON(AddedBy, addedBy_);
        DARABONBA_PTR_TO_JSON(AliasName, aliasName_);
        DARABONBA_PTR_TO_JSON(CveLink, cveLink_);
        DARABONBA_PTR_TO_JSON(CveLocation, cveLocation_);
        DARABONBA_PTR_TO_JSON(CveName, cveName_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Feature, feature_);
        DARABONBA_PTR_TO_JSON(FixCmd, fixCmd_);
        DARABONBA_PTR_TO_JSON(ScanType, scanType_);
        DARABONBA_PTR_TO_JSON(Severity, severity_);
        DARABONBA_PTR_TO_JSON(Version, version_);
        DARABONBA_PTR_TO_JSON(VersionFixed, versionFixed_);
        DARABONBA_PTR_TO_JSON(VersionFormat, versionFormat_);
      };
      friend void from_json(const Darabonba::Json& j, Vulnerabilities& obj) { 
        DARABONBA_PTR_FROM_JSON(AddedBy, addedBy_);
        DARABONBA_PTR_FROM_JSON(AliasName, aliasName_);
        DARABONBA_PTR_FROM_JSON(CveLink, cveLink_);
        DARABONBA_PTR_FROM_JSON(CveLocation, cveLocation_);
        DARABONBA_PTR_FROM_JSON(CveName, cveName_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Feature, feature_);
        DARABONBA_PTR_FROM_JSON(FixCmd, fixCmd_);
        DARABONBA_PTR_FROM_JSON(ScanType, scanType_);
        DARABONBA_PTR_FROM_JSON(Severity, severity_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
        DARABONBA_PTR_FROM_JSON(VersionFixed, versionFixed_);
        DARABONBA_PTR_FROM_JSON(VersionFormat, versionFormat_);
      };
      Vulnerabilities() = default ;
      Vulnerabilities(const Vulnerabilities &) = default ;
      Vulnerabilities(Vulnerabilities &&) = default ;
      Vulnerabilities(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Vulnerabilities() = default ;
      Vulnerabilities& operator=(const Vulnerabilities &) = default ;
      Vulnerabilities& operator=(Vulnerabilities &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->addedBy_ == nullptr
        && this->aliasName_ == nullptr && this->cveLink_ == nullptr && this->cveLocation_ == nullptr && this->cveName_ == nullptr && this->description_ == nullptr
        && this->feature_ == nullptr && this->fixCmd_ == nullptr && this->scanType_ == nullptr && this->severity_ == nullptr && this->version_ == nullptr
        && this->versionFixed_ == nullptr && this->versionFormat_ == nullptr; };
      // addedBy Field Functions 
      bool hasAddedBy() const { return this->addedBy_ != nullptr;};
      void deleteAddedBy() { this->addedBy_ = nullptr;};
      inline string getAddedBy() const { DARABONBA_PTR_GET_DEFAULT(addedBy_, "") };
      inline Vulnerabilities& setAddedBy(string addedBy) { DARABONBA_PTR_SET_VALUE(addedBy_, addedBy) };


      // aliasName Field Functions 
      bool hasAliasName() const { return this->aliasName_ != nullptr;};
      void deleteAliasName() { this->aliasName_ = nullptr;};
      inline string getAliasName() const { DARABONBA_PTR_GET_DEFAULT(aliasName_, "") };
      inline Vulnerabilities& setAliasName(string aliasName) { DARABONBA_PTR_SET_VALUE(aliasName_, aliasName) };


      // cveLink Field Functions 
      bool hasCveLink() const { return this->cveLink_ != nullptr;};
      void deleteCveLink() { this->cveLink_ = nullptr;};
      inline string getCveLink() const { DARABONBA_PTR_GET_DEFAULT(cveLink_, "") };
      inline Vulnerabilities& setCveLink(string cveLink) { DARABONBA_PTR_SET_VALUE(cveLink_, cveLink) };


      // cveLocation Field Functions 
      bool hasCveLocation() const { return this->cveLocation_ != nullptr;};
      void deleteCveLocation() { this->cveLocation_ = nullptr;};
      inline string getCveLocation() const { DARABONBA_PTR_GET_DEFAULT(cveLocation_, "") };
      inline Vulnerabilities& setCveLocation(string cveLocation) { DARABONBA_PTR_SET_VALUE(cveLocation_, cveLocation) };


      // cveName Field Functions 
      bool hasCveName() const { return this->cveName_ != nullptr;};
      void deleteCveName() { this->cveName_ = nullptr;};
      inline string getCveName() const { DARABONBA_PTR_GET_DEFAULT(cveName_, "") };
      inline Vulnerabilities& setCveName(string cveName) { DARABONBA_PTR_SET_VALUE(cveName_, cveName) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Vulnerabilities& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // feature Field Functions 
      bool hasFeature() const { return this->feature_ != nullptr;};
      void deleteFeature() { this->feature_ = nullptr;};
      inline string getFeature() const { DARABONBA_PTR_GET_DEFAULT(feature_, "") };
      inline Vulnerabilities& setFeature(string feature) { DARABONBA_PTR_SET_VALUE(feature_, feature) };


      // fixCmd Field Functions 
      bool hasFixCmd() const { return this->fixCmd_ != nullptr;};
      void deleteFixCmd() { this->fixCmd_ = nullptr;};
      inline string getFixCmd() const { DARABONBA_PTR_GET_DEFAULT(fixCmd_, "") };
      inline Vulnerabilities& setFixCmd(string fixCmd) { DARABONBA_PTR_SET_VALUE(fixCmd_, fixCmd) };


      // scanType Field Functions 
      bool hasScanType() const { return this->scanType_ != nullptr;};
      void deleteScanType() { this->scanType_ = nullptr;};
      inline string getScanType() const { DARABONBA_PTR_GET_DEFAULT(scanType_, "") };
      inline Vulnerabilities& setScanType(string scanType) { DARABONBA_PTR_SET_VALUE(scanType_, scanType) };


      // severity Field Functions 
      bool hasSeverity() const { return this->severity_ != nullptr;};
      void deleteSeverity() { this->severity_ = nullptr;};
      inline string getSeverity() const { DARABONBA_PTR_GET_DEFAULT(severity_, "") };
      inline Vulnerabilities& setSeverity(string severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline Vulnerabilities& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      // versionFixed Field Functions 
      bool hasVersionFixed() const { return this->versionFixed_ != nullptr;};
      void deleteVersionFixed() { this->versionFixed_ = nullptr;};
      inline string getVersionFixed() const { DARABONBA_PTR_GET_DEFAULT(versionFixed_, "") };
      inline Vulnerabilities& setVersionFixed(string versionFixed) { DARABONBA_PTR_SET_VALUE(versionFixed_, versionFixed) };


      // versionFormat Field Functions 
      bool hasVersionFormat() const { return this->versionFormat_ != nullptr;};
      void deleteVersionFormat() { this->versionFormat_ = nullptr;};
      inline string getVersionFormat() const { DARABONBA_PTR_GET_DEFAULT(versionFormat_, "") };
      inline Vulnerabilities& setVersionFormat(string versionFormat) { DARABONBA_PTR_SET_VALUE(versionFormat_, versionFormat) };


    protected:
      // The ID of the image layer where the vulnerability was detected.
      shared_ptr<string> addedBy_ {};
      // The name of the vulnerability.
      shared_ptr<string> aliasName_ {};
      // The URL of the vulnerability.
      shared_ptr<string> cveLink_ {};
      // The directory of the vulnerability.
      shared_ptr<string> cveLocation_ {};
      // The name of the vulnerability.
      shared_ptr<string> cveName_ {};
      // The description of the vulnerability.
      shared_ptr<string> description_ {};
      // The cause of the vulnerability.
      shared_ptr<string> feature_ {};
      // The command used to fix the vulnerability.
      shared_ptr<string> fixCmd_ {};
      // The type of the vulnerability. Valid values:
      // 
      // *   `cve`: image system vulnerability
      // *   `sca`: image application vulnerability
      shared_ptr<string> scanType_ {};
      // The severity of the vulnerability.
      shared_ptr<string> severity_ {};
      // The version of the vulnerability.
      shared_ptr<string> version_ {};
      // The version where the vulnerability was fixed.
      shared_ptr<string> versionFixed_ {};
      // The format of the vulnerability.
      shared_ptr<string> versionFormat_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->isSuccess_ == nullptr && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr
        && this->vulnerabilities_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListRepoTagScanResultResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // isSuccess Field Functions 
    bool hasIsSuccess() const { return this->isSuccess_ != nullptr;};
    void deleteIsSuccess() { this->isSuccess_ = nullptr;};
    inline bool getIsSuccess() const { DARABONBA_PTR_GET_DEFAULT(isSuccess_, false) };
    inline ListRepoTagScanResultResponseBody& setIsSuccess(bool isSuccess) { DARABONBA_PTR_SET_VALUE(isSuccess_, isSuccess) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline ListRepoTagScanResultResponseBody& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListRepoTagScanResultResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRepoTagScanResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListRepoTagScanResultResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // vulnerabilities Field Functions 
    bool hasVulnerabilities() const { return this->vulnerabilities_ != nullptr;};
    void deleteVulnerabilities() { this->vulnerabilities_ = nullptr;};
    inline const vector<ListRepoTagScanResultResponseBody::Vulnerabilities> & getVulnerabilities() const { DARABONBA_PTR_GET_CONST(vulnerabilities_, vector<ListRepoTagScanResultResponseBody::Vulnerabilities>) };
    inline vector<ListRepoTagScanResultResponseBody::Vulnerabilities> getVulnerabilities() { DARABONBA_PTR_GET(vulnerabilities_, vector<ListRepoTagScanResultResponseBody::Vulnerabilities>) };
    inline ListRepoTagScanResultResponseBody& setVulnerabilities(const vector<ListRepoTagScanResultResponseBody::Vulnerabilities> & vulnerabilities) { DARABONBA_PTR_SET_VALUE(vulnerabilities_, vulnerabilities) };
    inline ListRepoTagScanResultResponseBody& setVulnerabilities(vector<ListRepoTagScanResultResponseBody::Vulnerabilities> && vulnerabilities) { DARABONBA_PTR_SET_RVALUE(vulnerabilities_, vulnerabilities) };


  protected:
    // The return value.
    shared_ptr<string> code_ {};
    // Indicates whether the request is successful. Valid values:
    // 
    // *   `true`: The request is successful.
    // *   `false`: The request failed.
    shared_ptr<bool> isSuccess_ {};
    // The number of the returned page.
    shared_ptr<int32_t> pageNo_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of vulnerabilities detected on images.
    shared_ptr<int32_t> totalCount_ {};
    // The details about the detected vulnerabilities.
    shared_ptr<vector<ListRepoTagScanResultResponseBody::Vulnerabilities>> vulnerabilities_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
