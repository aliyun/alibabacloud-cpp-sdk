// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREPOTAGSCANRESULTRESPONSEBODYVULNERABILITIES_HPP_
#define ALIBABACLOUD_MODELS_LISTREPOTAGSCANRESULTRESPONSEBODYVULNERABILITIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class ListRepoTagScanResultResponseBodyVulnerabilities : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRepoTagScanResultResponseBodyVulnerabilities& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListRepoTagScanResultResponseBodyVulnerabilities& obj) { 
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
    ListRepoTagScanResultResponseBodyVulnerabilities() = default ;
    ListRepoTagScanResultResponseBodyVulnerabilities(const ListRepoTagScanResultResponseBodyVulnerabilities &) = default ;
    ListRepoTagScanResultResponseBodyVulnerabilities(ListRepoTagScanResultResponseBodyVulnerabilities &&) = default ;
    ListRepoTagScanResultResponseBodyVulnerabilities(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRepoTagScanResultResponseBodyVulnerabilities() = default ;
    ListRepoTagScanResultResponseBodyVulnerabilities& operator=(const ListRepoTagScanResultResponseBodyVulnerabilities &) = default ;
    ListRepoTagScanResultResponseBodyVulnerabilities& operator=(ListRepoTagScanResultResponseBodyVulnerabilities &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->addedBy_ != nullptr
        && this->aliasName_ != nullptr && this->cveLink_ != nullptr && this->cveLocation_ != nullptr && this->cveName_ != nullptr && this->description_ != nullptr
        && this->feature_ != nullptr && this->fixCmd_ != nullptr && this->scanType_ != nullptr && this->severity_ != nullptr && this->version_ != nullptr
        && this->versionFixed_ != nullptr && this->versionFormat_ != nullptr; };
    // addedBy Field Functions 
    bool hasAddedBy() const { return this->addedBy_ != nullptr;};
    void deleteAddedBy() { this->addedBy_ = nullptr;};
    inline string addedBy() const { DARABONBA_PTR_GET_DEFAULT(addedBy_, "") };
    inline ListRepoTagScanResultResponseBodyVulnerabilities& setAddedBy(string addedBy) { DARABONBA_PTR_SET_VALUE(addedBy_, addedBy) };


    // aliasName Field Functions 
    bool hasAliasName() const { return this->aliasName_ != nullptr;};
    void deleteAliasName() { this->aliasName_ = nullptr;};
    inline string aliasName() const { DARABONBA_PTR_GET_DEFAULT(aliasName_, "") };
    inline ListRepoTagScanResultResponseBodyVulnerabilities& setAliasName(string aliasName) { DARABONBA_PTR_SET_VALUE(aliasName_, aliasName) };


    // cveLink Field Functions 
    bool hasCveLink() const { return this->cveLink_ != nullptr;};
    void deleteCveLink() { this->cveLink_ = nullptr;};
    inline string cveLink() const { DARABONBA_PTR_GET_DEFAULT(cveLink_, "") };
    inline ListRepoTagScanResultResponseBodyVulnerabilities& setCveLink(string cveLink) { DARABONBA_PTR_SET_VALUE(cveLink_, cveLink) };


    // cveLocation Field Functions 
    bool hasCveLocation() const { return this->cveLocation_ != nullptr;};
    void deleteCveLocation() { this->cveLocation_ = nullptr;};
    inline string cveLocation() const { DARABONBA_PTR_GET_DEFAULT(cveLocation_, "") };
    inline ListRepoTagScanResultResponseBodyVulnerabilities& setCveLocation(string cveLocation) { DARABONBA_PTR_SET_VALUE(cveLocation_, cveLocation) };


    // cveName Field Functions 
    bool hasCveName() const { return this->cveName_ != nullptr;};
    void deleteCveName() { this->cveName_ = nullptr;};
    inline string cveName() const { DARABONBA_PTR_GET_DEFAULT(cveName_, "") };
    inline ListRepoTagScanResultResponseBodyVulnerabilities& setCveName(string cveName) { DARABONBA_PTR_SET_VALUE(cveName_, cveName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListRepoTagScanResultResponseBodyVulnerabilities& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // feature Field Functions 
    bool hasFeature() const { return this->feature_ != nullptr;};
    void deleteFeature() { this->feature_ = nullptr;};
    inline string feature() const { DARABONBA_PTR_GET_DEFAULT(feature_, "") };
    inline ListRepoTagScanResultResponseBodyVulnerabilities& setFeature(string feature) { DARABONBA_PTR_SET_VALUE(feature_, feature) };


    // fixCmd Field Functions 
    bool hasFixCmd() const { return this->fixCmd_ != nullptr;};
    void deleteFixCmd() { this->fixCmd_ = nullptr;};
    inline string fixCmd() const { DARABONBA_PTR_GET_DEFAULT(fixCmd_, "") };
    inline ListRepoTagScanResultResponseBodyVulnerabilities& setFixCmd(string fixCmd) { DARABONBA_PTR_SET_VALUE(fixCmd_, fixCmd) };


    // scanType Field Functions 
    bool hasScanType() const { return this->scanType_ != nullptr;};
    void deleteScanType() { this->scanType_ = nullptr;};
    inline string scanType() const { DARABONBA_PTR_GET_DEFAULT(scanType_, "") };
    inline ListRepoTagScanResultResponseBodyVulnerabilities& setScanType(string scanType) { DARABONBA_PTR_SET_VALUE(scanType_, scanType) };


    // severity Field Functions 
    bool hasSeverity() const { return this->severity_ != nullptr;};
    void deleteSeverity() { this->severity_ = nullptr;};
    inline string severity() const { DARABONBA_PTR_GET_DEFAULT(severity_, "") };
    inline ListRepoTagScanResultResponseBodyVulnerabilities& setSeverity(string severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline ListRepoTagScanResultResponseBodyVulnerabilities& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // versionFixed Field Functions 
    bool hasVersionFixed() const { return this->versionFixed_ != nullptr;};
    void deleteVersionFixed() { this->versionFixed_ = nullptr;};
    inline string versionFixed() const { DARABONBA_PTR_GET_DEFAULT(versionFixed_, "") };
    inline ListRepoTagScanResultResponseBodyVulnerabilities& setVersionFixed(string versionFixed) { DARABONBA_PTR_SET_VALUE(versionFixed_, versionFixed) };


    // versionFormat Field Functions 
    bool hasVersionFormat() const { return this->versionFormat_ != nullptr;};
    void deleteVersionFormat() { this->versionFormat_ = nullptr;};
    inline string versionFormat() const { DARABONBA_PTR_GET_DEFAULT(versionFormat_, "") };
    inline ListRepoTagScanResultResponseBodyVulnerabilities& setVersionFormat(string versionFormat) { DARABONBA_PTR_SET_VALUE(versionFormat_, versionFormat) };


  protected:
    // The ID of the image layer where the vulnerability was detected.
    std::shared_ptr<string> addedBy_ = nullptr;
    // The name of the vulnerability.
    std::shared_ptr<string> aliasName_ = nullptr;
    // The URL of the vulnerability.
    std::shared_ptr<string> cveLink_ = nullptr;
    // The directory of the vulnerability.
    std::shared_ptr<string> cveLocation_ = nullptr;
    // The name of the vulnerability.
    std::shared_ptr<string> cveName_ = nullptr;
    // The description of the vulnerability.
    std::shared_ptr<string> description_ = nullptr;
    // The cause of the vulnerability.
    std::shared_ptr<string> feature_ = nullptr;
    // The command used to fix the vulnerability.
    std::shared_ptr<string> fixCmd_ = nullptr;
    // The type of the vulnerability. Valid values:
    // 
    // *   `cve`: image system vulnerability
    // *   `sca`: image application vulnerability
    std::shared_ptr<string> scanType_ = nullptr;
    // The severity of the vulnerability.
    std::shared_ptr<string> severity_ = nullptr;
    // The version of the vulnerability.
    std::shared_ptr<string> version_ = nullptr;
    // The version where the vulnerability was fixed.
    std::shared_ptr<string> versionFixed_ = nullptr;
    // The format of the vulnerability.
    std::shared_ptr<string> versionFormat_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
