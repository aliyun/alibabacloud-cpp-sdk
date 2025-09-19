// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVULDETAILSRESPONSEBODYCVES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVULDETAILSRESPONSEBODYCVES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVulDetailsResponseBodyCvesClassifys.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeVulDetailsResponseBodyCves : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVulDetailsResponseBodyCves& obj) { 
      DARABONBA_PTR_TO_JSON(Classify, classify_);
      DARABONBA_PTR_TO_JSON(Classifys, classifys_);
      DARABONBA_PTR_TO_JSON(CnvdId, cnvdId_);
      DARABONBA_PTR_TO_JSON(Complexity, complexity_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(CveId, cveId_);
      DARABONBA_PTR_TO_JSON(CveLink, cveLink_);
      DARABONBA_PTR_TO_JSON(CvssScore, cvssScore_);
      DARABONBA_PTR_TO_JSON(CvssVector, cvssVector_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_TO_JSON(OtherId, otherId_);
      DARABONBA_PTR_TO_JSON(Poc, poc_);
      DARABONBA_PTR_TO_JSON(PocCreateTime, pocCreateTime_);
      DARABONBA_PTR_TO_JSON(PocDisclosureTime, pocDisclosureTime_);
      DARABONBA_PTR_TO_JSON(Product, product_);
      DARABONBA_PTR_TO_JSON(Reference, reference_);
      DARABONBA_PTR_TO_JSON(ReleaseTime, releaseTime_);
      DARABONBA_PTR_TO_JSON(Solution, solution_);
      DARABONBA_PTR_TO_JSON(Summary, summary_);
      DARABONBA_PTR_TO_JSON(TargetId, targetId_);
      DARABONBA_PTR_TO_JSON(TargetName, targetName_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(Vendor, vendor_);
      DARABONBA_PTR_TO_JSON(VulLevel, vulLevel_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVulDetailsResponseBodyCves& obj) { 
      DARABONBA_PTR_FROM_JSON(Classify, classify_);
      DARABONBA_PTR_FROM_JSON(Classifys, classifys_);
      DARABONBA_PTR_FROM_JSON(CnvdId, cnvdId_);
      DARABONBA_PTR_FROM_JSON(Complexity, complexity_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(CveId, cveId_);
      DARABONBA_PTR_FROM_JSON(CveLink, cveLink_);
      DARABONBA_PTR_FROM_JSON(CvssScore, cvssScore_);
      DARABONBA_PTR_FROM_JSON(CvssVector, cvssVector_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_FROM_JSON(OtherId, otherId_);
      DARABONBA_PTR_FROM_JSON(Poc, poc_);
      DARABONBA_PTR_FROM_JSON(PocCreateTime, pocCreateTime_);
      DARABONBA_PTR_FROM_JSON(PocDisclosureTime, pocDisclosureTime_);
      DARABONBA_PTR_FROM_JSON(Product, product_);
      DARABONBA_PTR_FROM_JSON(Reference, reference_);
      DARABONBA_PTR_FROM_JSON(ReleaseTime, releaseTime_);
      DARABONBA_PTR_FROM_JSON(Solution, solution_);
      DARABONBA_PTR_FROM_JSON(Summary, summary_);
      DARABONBA_PTR_FROM_JSON(TargetId, targetId_);
      DARABONBA_PTR_FROM_JSON(TargetName, targetName_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(Vendor, vendor_);
      DARABONBA_PTR_FROM_JSON(VulLevel, vulLevel_);
    };
    DescribeVulDetailsResponseBodyCves() = default ;
    DescribeVulDetailsResponseBodyCves(const DescribeVulDetailsResponseBodyCves &) = default ;
    DescribeVulDetailsResponseBodyCves(DescribeVulDetailsResponseBodyCves &&) = default ;
    DescribeVulDetailsResponseBodyCves(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVulDetailsResponseBodyCves() = default ;
    DescribeVulDetailsResponseBodyCves& operator=(const DescribeVulDetailsResponseBodyCves &) = default ;
    DescribeVulDetailsResponseBodyCves& operator=(DescribeVulDetailsResponseBodyCves &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->classify_ != nullptr
        && this->classifys_ != nullptr && this->cnvdId_ != nullptr && this->complexity_ != nullptr && this->content_ != nullptr && this->cveId_ != nullptr
        && this->cveLink_ != nullptr && this->cvssScore_ != nullptr && this->cvssVector_ != nullptr && this->instanceName_ != nullptr && this->internetIp_ != nullptr
        && this->intranetIp_ != nullptr && this->otherId_ != nullptr && this->poc_ != nullptr && this->pocCreateTime_ != nullptr && this->pocDisclosureTime_ != nullptr
        && this->product_ != nullptr && this->reference_ != nullptr && this->releaseTime_ != nullptr && this->solution_ != nullptr && this->summary_ != nullptr
        && this->targetId_ != nullptr && this->targetName_ != nullptr && this->title_ != nullptr && this->vendor_ != nullptr && this->vulLevel_ != nullptr; };
    // classify Field Functions 
    bool hasClassify() const { return this->classify_ != nullptr;};
    void deleteClassify() { this->classify_ = nullptr;};
    inline string classify() const { DARABONBA_PTR_GET_DEFAULT(classify_, "") };
    inline DescribeVulDetailsResponseBodyCves& setClassify(string classify) { DARABONBA_PTR_SET_VALUE(classify_, classify) };


    // classifys Field Functions 
    bool hasClassifys() const { return this->classifys_ != nullptr;};
    void deleteClassifys() { this->classifys_ = nullptr;};
    inline const vector<Models::DescribeVulDetailsResponseBodyCvesClassifys> & classifys() const { DARABONBA_PTR_GET_CONST(classifys_, vector<Models::DescribeVulDetailsResponseBodyCvesClassifys>) };
    inline vector<Models::DescribeVulDetailsResponseBodyCvesClassifys> classifys() { DARABONBA_PTR_GET(classifys_, vector<Models::DescribeVulDetailsResponseBodyCvesClassifys>) };
    inline DescribeVulDetailsResponseBodyCves& setClassifys(const vector<Models::DescribeVulDetailsResponseBodyCvesClassifys> & classifys) { DARABONBA_PTR_SET_VALUE(classifys_, classifys) };
    inline DescribeVulDetailsResponseBodyCves& setClassifys(vector<Models::DescribeVulDetailsResponseBodyCvesClassifys> && classifys) { DARABONBA_PTR_SET_RVALUE(classifys_, classifys) };


    // cnvdId Field Functions 
    bool hasCnvdId() const { return this->cnvdId_ != nullptr;};
    void deleteCnvdId() { this->cnvdId_ = nullptr;};
    inline string cnvdId() const { DARABONBA_PTR_GET_DEFAULT(cnvdId_, "") };
    inline DescribeVulDetailsResponseBodyCves& setCnvdId(string cnvdId) { DARABONBA_PTR_SET_VALUE(cnvdId_, cnvdId) };


    // complexity Field Functions 
    bool hasComplexity() const { return this->complexity_ != nullptr;};
    void deleteComplexity() { this->complexity_ = nullptr;};
    inline string complexity() const { DARABONBA_PTR_GET_DEFAULT(complexity_, "") };
    inline DescribeVulDetailsResponseBodyCves& setComplexity(string complexity) { DARABONBA_PTR_SET_VALUE(complexity_, complexity) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline DescribeVulDetailsResponseBodyCves& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // cveId Field Functions 
    bool hasCveId() const { return this->cveId_ != nullptr;};
    void deleteCveId() { this->cveId_ = nullptr;};
    inline string cveId() const { DARABONBA_PTR_GET_DEFAULT(cveId_, "") };
    inline DescribeVulDetailsResponseBodyCves& setCveId(string cveId) { DARABONBA_PTR_SET_VALUE(cveId_, cveId) };


    // cveLink Field Functions 
    bool hasCveLink() const { return this->cveLink_ != nullptr;};
    void deleteCveLink() { this->cveLink_ = nullptr;};
    inline string cveLink() const { DARABONBA_PTR_GET_DEFAULT(cveLink_, "") };
    inline DescribeVulDetailsResponseBodyCves& setCveLink(string cveLink) { DARABONBA_PTR_SET_VALUE(cveLink_, cveLink) };


    // cvssScore Field Functions 
    bool hasCvssScore() const { return this->cvssScore_ != nullptr;};
    void deleteCvssScore() { this->cvssScore_ = nullptr;};
    inline string cvssScore() const { DARABONBA_PTR_GET_DEFAULT(cvssScore_, "") };
    inline DescribeVulDetailsResponseBodyCves& setCvssScore(string cvssScore) { DARABONBA_PTR_SET_VALUE(cvssScore_, cvssScore) };


    // cvssVector Field Functions 
    bool hasCvssVector() const { return this->cvssVector_ != nullptr;};
    void deleteCvssVector() { this->cvssVector_ = nullptr;};
    inline string cvssVector() const { DARABONBA_PTR_GET_DEFAULT(cvssVector_, "") };
    inline DescribeVulDetailsResponseBodyCves& setCvssVector(string cvssVector) { DARABONBA_PTR_SET_VALUE(cvssVector_, cvssVector) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeVulDetailsResponseBodyCves& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // internetIp Field Functions 
    bool hasInternetIp() const { return this->internetIp_ != nullptr;};
    void deleteInternetIp() { this->internetIp_ = nullptr;};
    inline string internetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
    inline DescribeVulDetailsResponseBodyCves& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


    // intranetIp Field Functions 
    bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
    void deleteIntranetIp() { this->intranetIp_ = nullptr;};
    inline string intranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
    inline DescribeVulDetailsResponseBodyCves& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


    // otherId Field Functions 
    bool hasOtherId() const { return this->otherId_ != nullptr;};
    void deleteOtherId() { this->otherId_ = nullptr;};
    inline string otherId() const { DARABONBA_PTR_GET_DEFAULT(otherId_, "") };
    inline DescribeVulDetailsResponseBodyCves& setOtherId(string otherId) { DARABONBA_PTR_SET_VALUE(otherId_, otherId) };


    // poc Field Functions 
    bool hasPoc() const { return this->poc_ != nullptr;};
    void deletePoc() { this->poc_ = nullptr;};
    inline string poc() const { DARABONBA_PTR_GET_DEFAULT(poc_, "") };
    inline DescribeVulDetailsResponseBodyCves& setPoc(string poc) { DARABONBA_PTR_SET_VALUE(poc_, poc) };


    // pocCreateTime Field Functions 
    bool hasPocCreateTime() const { return this->pocCreateTime_ != nullptr;};
    void deletePocCreateTime() { this->pocCreateTime_ = nullptr;};
    inline int64_t pocCreateTime() const { DARABONBA_PTR_GET_DEFAULT(pocCreateTime_, 0L) };
    inline DescribeVulDetailsResponseBodyCves& setPocCreateTime(int64_t pocCreateTime) { DARABONBA_PTR_SET_VALUE(pocCreateTime_, pocCreateTime) };


    // pocDisclosureTime Field Functions 
    bool hasPocDisclosureTime() const { return this->pocDisclosureTime_ != nullptr;};
    void deletePocDisclosureTime() { this->pocDisclosureTime_ = nullptr;};
    inline int64_t pocDisclosureTime() const { DARABONBA_PTR_GET_DEFAULT(pocDisclosureTime_, 0L) };
    inline DescribeVulDetailsResponseBodyCves& setPocDisclosureTime(int64_t pocDisclosureTime) { DARABONBA_PTR_SET_VALUE(pocDisclosureTime_, pocDisclosureTime) };


    // product Field Functions 
    bool hasProduct() const { return this->product_ != nullptr;};
    void deleteProduct() { this->product_ = nullptr;};
    inline string product() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
    inline DescribeVulDetailsResponseBodyCves& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


    // reference Field Functions 
    bool hasReference() const { return this->reference_ != nullptr;};
    void deleteReference() { this->reference_ = nullptr;};
    inline string reference() const { DARABONBA_PTR_GET_DEFAULT(reference_, "") };
    inline DescribeVulDetailsResponseBodyCves& setReference(string reference) { DARABONBA_PTR_SET_VALUE(reference_, reference) };


    // releaseTime Field Functions 
    bool hasReleaseTime() const { return this->releaseTime_ != nullptr;};
    void deleteReleaseTime() { this->releaseTime_ = nullptr;};
    inline int64_t releaseTime() const { DARABONBA_PTR_GET_DEFAULT(releaseTime_, 0L) };
    inline DescribeVulDetailsResponseBodyCves& setReleaseTime(int64_t releaseTime) { DARABONBA_PTR_SET_VALUE(releaseTime_, releaseTime) };


    // solution Field Functions 
    bool hasSolution() const { return this->solution_ != nullptr;};
    void deleteSolution() { this->solution_ = nullptr;};
    inline string solution() const { DARABONBA_PTR_GET_DEFAULT(solution_, "") };
    inline DescribeVulDetailsResponseBodyCves& setSolution(string solution) { DARABONBA_PTR_SET_VALUE(solution_, solution) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline string summary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
    inline DescribeVulDetailsResponseBodyCves& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


    // targetId Field Functions 
    bool hasTargetId() const { return this->targetId_ != nullptr;};
    void deleteTargetId() { this->targetId_ = nullptr;};
    inline string targetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, "") };
    inline DescribeVulDetailsResponseBodyCves& setTargetId(string targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


    // targetName Field Functions 
    bool hasTargetName() const { return this->targetName_ != nullptr;};
    void deleteTargetName() { this->targetName_ = nullptr;};
    inline string targetName() const { DARABONBA_PTR_GET_DEFAULT(targetName_, "") };
    inline DescribeVulDetailsResponseBodyCves& setTargetName(string targetName) { DARABONBA_PTR_SET_VALUE(targetName_, targetName) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline DescribeVulDetailsResponseBodyCves& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // vendor Field Functions 
    bool hasVendor() const { return this->vendor_ != nullptr;};
    void deleteVendor() { this->vendor_ = nullptr;};
    inline string vendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, "") };
    inline DescribeVulDetailsResponseBodyCves& setVendor(string vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


    // vulLevel Field Functions 
    bool hasVulLevel() const { return this->vulLevel_ != nullptr;};
    void deleteVulLevel() { this->vulLevel_ = nullptr;};
    inline string vulLevel() const { DARABONBA_PTR_GET_DEFAULT(vulLevel_, "") };
    inline DescribeVulDetailsResponseBodyCves& setVulLevel(string vulLevel) { DARABONBA_PTR_SET_VALUE(vulLevel_, vulLevel) };


  protected:
    // The type of the vulnerability.
    std::shared_ptr<string> classify_ = nullptr;
    // The vulnerability types.
    std::shared_ptr<vector<Models::DescribeVulDetailsResponseBodyCvesClassifys>> classifys_ = nullptr;
    // The China National Vulnerability Database (CNVD) ID.
    std::shared_ptr<string> cnvdId_ = nullptr;
    // The difficulty level of exploiting the vulnerability. Valid values:
    // 
    // *   **LOW**
    // *   **MEDIUM**
    // *   **HIGH**
    std::shared_ptr<string> complexity_ = nullptr;
    // The CVE content.
    std::shared_ptr<string> content_ = nullptr;
    // The Common Vulnerabilities and Exposures (CVE) ID.
    std::shared_ptr<string> cveId_ = nullptr;
    // The link to the CVE details.
    std::shared_ptr<string> cveLink_ = nullptr;
    // The Common Vulnerability Scoring System (CVSS) score of the vulnerability in the Alibaba Cloud vulnerability library.
    std::shared_ptr<string> cvssScore_ = nullptr;
    // The vector that is used to calculate the CVSS score.
    std::shared_ptr<string> cvssVector_ = nullptr;
    // The name of the instance.
    // 
    // >  This parameter is deprecated. You can call the [DescribeVulList](~~DescribeVulList~~) operation to query the instance that is affected by the vulnerability.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The public IP address of the server.
    // 
    // >  This parameter is deprecated. You can call the [DescribeVulList](~~DescribeVulList~~) operation to query the instance that is affected by the vulnerability.
    std::shared_ptr<string> internetIp_ = nullptr;
    // The private IP address of the server.
    // 
    // >  This parameter is deprecated. You can call the [DescribeVulList](~~DescribeVulList~~) operation to query the instance that is affected by the vulnerability.
    std::shared_ptr<string> intranetIp_ = nullptr;
    // The ID of the vulnerability.
    std::shared_ptr<string> otherId_ = nullptr;
    // The POC content.
    std::shared_ptr<string> poc_ = nullptr;
    // The UNIX timestamp when the proof of concept (POC) was created. Unit: milliseconds.
    std::shared_ptr<int64_t> pocCreateTime_ = nullptr;
    // The UNIX timestamp when the POC was disclosed. Unit: milliseconds.
    std::shared_ptr<int64_t> pocDisclosureTime_ = nullptr;
    // The service that is affected by the vulnerability.
    std::shared_ptr<string> product_ = nullptr;
    // The reference of the vulnerability in the Alibaba Cloud vulnerability library. The value is a URL.
    std::shared_ptr<string> reference_ = nullptr;
    // The disclosure time that is displayed for the vulnerability in the Alibaba Cloud vulnerability library. The value is a UNIX timestamp. Unit: milliseconds.
    std::shared_ptr<int64_t> releaseTime_ = nullptr;
    // The fixing suggestions of the vulnerability.
    std::shared_ptr<string> solution_ = nullptr;
    // The introduction to the vulnerability.
    std::shared_ptr<string> summary_ = nullptr;
    // The ID of the asset that is scanned.
    // 
    // >  This parameter is deprecated. You can call the [DescribeVulList](~~DescribeVulList~~) operation to query the instance that is affected by the vulnerability.
    std::shared_ptr<string> targetId_ = nullptr;
    // The name of the asset that is scanned.
    // 
    // >  This parameter is deprecated. You can call the [DescribeVulList](~~DescribeVulList~~) operation to query the instance that is affected by the vulnerability.
    std::shared_ptr<string> targetName_ = nullptr;
    // The title of the vulnerability announcement.
    std::shared_ptr<string> title_ = nullptr;
    // The vendor that disclosed the vulnerability.
    std::shared_ptr<string> vendor_ = nullptr;
    // The severity of the vulnerability. Valid values:
    // 
    // *   **serious**
    // *   **high**
    // *   **medium**
    // *   **low**
    std::shared_ptr<string> vulLevel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
