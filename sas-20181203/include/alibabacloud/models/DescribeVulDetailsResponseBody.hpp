// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVULDETAILSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVULDETAILSRESPONSEBODY_HPP_
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
  class DescribeVulDetailsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVulDetailsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Cves, cves_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVulDetailsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Cves, cves_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeVulDetailsResponseBody() = default ;
    DescribeVulDetailsResponseBody(const DescribeVulDetailsResponseBody &) = default ;
    DescribeVulDetailsResponseBody(DescribeVulDetailsResponseBody &&) = default ;
    DescribeVulDetailsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVulDetailsResponseBody() = default ;
    DescribeVulDetailsResponseBody& operator=(const DescribeVulDetailsResponseBody &) = default ;
    DescribeVulDetailsResponseBody& operator=(DescribeVulDetailsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Cves : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Cves& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Cves& obj) { 
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
      Cves() = default ;
      Cves(const Cves &) = default ;
      Cves(Cves &&) = default ;
      Cves(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Cves() = default ;
      Cves& operator=(const Cves &) = default ;
      Cves& operator=(Cves &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Classifys : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Classifys& obj) { 
          DARABONBA_PTR_TO_JSON(Classify, classify_);
          DARABONBA_PTR_TO_JSON(DemoVideoUrl, demoVideoUrl_);
          DARABONBA_PTR_TO_JSON(Description, description_);
        };
        friend void from_json(const Darabonba::Json& j, Classifys& obj) { 
          DARABONBA_PTR_FROM_JSON(Classify, classify_);
          DARABONBA_PTR_FROM_JSON(DemoVideoUrl, demoVideoUrl_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
        };
        Classifys() = default ;
        Classifys(const Classifys &) = default ;
        Classifys(Classifys &&) = default ;
        Classifys(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Classifys() = default ;
        Classifys& operator=(const Classifys &) = default ;
        Classifys& operator=(Classifys &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->classify_ == nullptr
        && this->demoVideoUrl_ == nullptr && this->description_ == nullptr; };
        // classify Field Functions 
        bool hasClassify() const { return this->classify_ != nullptr;};
        void deleteClassify() { this->classify_ = nullptr;};
        inline string getClassify() const { DARABONBA_PTR_GET_DEFAULT(classify_, "") };
        inline Classifys& setClassify(string classify) { DARABONBA_PTR_SET_VALUE(classify_, classify) };


        // demoVideoUrl Field Functions 
        bool hasDemoVideoUrl() const { return this->demoVideoUrl_ != nullptr;};
        void deleteDemoVideoUrl() { this->demoVideoUrl_ = nullptr;};
        inline string getDemoVideoUrl() const { DARABONBA_PTR_GET_DEFAULT(demoVideoUrl_, "") };
        inline Classifys& setDemoVideoUrl(string demoVideoUrl) { DARABONBA_PTR_SET_VALUE(demoVideoUrl_, demoVideoUrl) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Classifys& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      protected:
        // The type of the vulnerability.
        shared_ptr<string> classify_ {};
        // The URL of the demo video for the vulnerability.
        shared_ptr<string> demoVideoUrl_ {};
        // The description of the vulnerability type.
        shared_ptr<string> description_ {};
      };

      virtual bool empty() const override { return this->classify_ == nullptr
        && this->classifys_ == nullptr && this->cnvdId_ == nullptr && this->complexity_ == nullptr && this->content_ == nullptr && this->cveId_ == nullptr
        && this->cveLink_ == nullptr && this->cvssScore_ == nullptr && this->cvssVector_ == nullptr && this->instanceName_ == nullptr && this->internetIp_ == nullptr
        && this->intranetIp_ == nullptr && this->otherId_ == nullptr && this->poc_ == nullptr && this->pocCreateTime_ == nullptr && this->pocDisclosureTime_ == nullptr
        && this->product_ == nullptr && this->reference_ == nullptr && this->releaseTime_ == nullptr && this->solution_ == nullptr && this->summary_ == nullptr
        && this->targetId_ == nullptr && this->targetName_ == nullptr && this->title_ == nullptr && this->vendor_ == nullptr && this->vulLevel_ == nullptr; };
      // classify Field Functions 
      bool hasClassify() const { return this->classify_ != nullptr;};
      void deleteClassify() { this->classify_ = nullptr;};
      inline string getClassify() const { DARABONBA_PTR_GET_DEFAULT(classify_, "") };
      inline Cves& setClassify(string classify) { DARABONBA_PTR_SET_VALUE(classify_, classify) };


      // classifys Field Functions 
      bool hasClassifys() const { return this->classifys_ != nullptr;};
      void deleteClassifys() { this->classifys_ = nullptr;};
      inline const vector<Cves::Classifys> & getClassifys() const { DARABONBA_PTR_GET_CONST(classifys_, vector<Cves::Classifys>) };
      inline vector<Cves::Classifys> getClassifys() { DARABONBA_PTR_GET(classifys_, vector<Cves::Classifys>) };
      inline Cves& setClassifys(const vector<Cves::Classifys> & classifys) { DARABONBA_PTR_SET_VALUE(classifys_, classifys) };
      inline Cves& setClassifys(vector<Cves::Classifys> && classifys) { DARABONBA_PTR_SET_RVALUE(classifys_, classifys) };


      // cnvdId Field Functions 
      bool hasCnvdId() const { return this->cnvdId_ != nullptr;};
      void deleteCnvdId() { this->cnvdId_ = nullptr;};
      inline string getCnvdId() const { DARABONBA_PTR_GET_DEFAULT(cnvdId_, "") };
      inline Cves& setCnvdId(string cnvdId) { DARABONBA_PTR_SET_VALUE(cnvdId_, cnvdId) };


      // complexity Field Functions 
      bool hasComplexity() const { return this->complexity_ != nullptr;};
      void deleteComplexity() { this->complexity_ = nullptr;};
      inline string getComplexity() const { DARABONBA_PTR_GET_DEFAULT(complexity_, "") };
      inline Cves& setComplexity(string complexity) { DARABONBA_PTR_SET_VALUE(complexity_, complexity) };


      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline Cves& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // cveId Field Functions 
      bool hasCveId() const { return this->cveId_ != nullptr;};
      void deleteCveId() { this->cveId_ = nullptr;};
      inline string getCveId() const { DARABONBA_PTR_GET_DEFAULT(cveId_, "") };
      inline Cves& setCveId(string cveId) { DARABONBA_PTR_SET_VALUE(cveId_, cveId) };


      // cveLink Field Functions 
      bool hasCveLink() const { return this->cveLink_ != nullptr;};
      void deleteCveLink() { this->cveLink_ = nullptr;};
      inline string getCveLink() const { DARABONBA_PTR_GET_DEFAULT(cveLink_, "") };
      inline Cves& setCveLink(string cveLink) { DARABONBA_PTR_SET_VALUE(cveLink_, cveLink) };


      // cvssScore Field Functions 
      bool hasCvssScore() const { return this->cvssScore_ != nullptr;};
      void deleteCvssScore() { this->cvssScore_ = nullptr;};
      inline string getCvssScore() const { DARABONBA_PTR_GET_DEFAULT(cvssScore_, "") };
      inline Cves& setCvssScore(string cvssScore) { DARABONBA_PTR_SET_VALUE(cvssScore_, cvssScore) };


      // cvssVector Field Functions 
      bool hasCvssVector() const { return this->cvssVector_ != nullptr;};
      void deleteCvssVector() { this->cvssVector_ = nullptr;};
      inline string getCvssVector() const { DARABONBA_PTR_GET_DEFAULT(cvssVector_, "") };
      inline Cves& setCvssVector(string cvssVector) { DARABONBA_PTR_SET_VALUE(cvssVector_, cvssVector) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline Cves& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // internetIp Field Functions 
      bool hasInternetIp() const { return this->internetIp_ != nullptr;};
      void deleteInternetIp() { this->internetIp_ = nullptr;};
      inline string getInternetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
      inline Cves& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


      // intranetIp Field Functions 
      bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
      void deleteIntranetIp() { this->intranetIp_ = nullptr;};
      inline string getIntranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
      inline Cves& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


      // otherId Field Functions 
      bool hasOtherId() const { return this->otherId_ != nullptr;};
      void deleteOtherId() { this->otherId_ = nullptr;};
      inline string getOtherId() const { DARABONBA_PTR_GET_DEFAULT(otherId_, "") };
      inline Cves& setOtherId(string otherId) { DARABONBA_PTR_SET_VALUE(otherId_, otherId) };


      // poc Field Functions 
      bool hasPoc() const { return this->poc_ != nullptr;};
      void deletePoc() { this->poc_ = nullptr;};
      inline string getPoc() const { DARABONBA_PTR_GET_DEFAULT(poc_, "") };
      inline Cves& setPoc(string poc) { DARABONBA_PTR_SET_VALUE(poc_, poc) };


      // pocCreateTime Field Functions 
      bool hasPocCreateTime() const { return this->pocCreateTime_ != nullptr;};
      void deletePocCreateTime() { this->pocCreateTime_ = nullptr;};
      inline int64_t getPocCreateTime() const { DARABONBA_PTR_GET_DEFAULT(pocCreateTime_, 0L) };
      inline Cves& setPocCreateTime(int64_t pocCreateTime) { DARABONBA_PTR_SET_VALUE(pocCreateTime_, pocCreateTime) };


      // pocDisclosureTime Field Functions 
      bool hasPocDisclosureTime() const { return this->pocDisclosureTime_ != nullptr;};
      void deletePocDisclosureTime() { this->pocDisclosureTime_ = nullptr;};
      inline int64_t getPocDisclosureTime() const { DARABONBA_PTR_GET_DEFAULT(pocDisclosureTime_, 0L) };
      inline Cves& setPocDisclosureTime(int64_t pocDisclosureTime) { DARABONBA_PTR_SET_VALUE(pocDisclosureTime_, pocDisclosureTime) };


      // product Field Functions 
      bool hasProduct() const { return this->product_ != nullptr;};
      void deleteProduct() { this->product_ = nullptr;};
      inline string getProduct() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
      inline Cves& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


      // reference Field Functions 
      bool hasReference() const { return this->reference_ != nullptr;};
      void deleteReference() { this->reference_ = nullptr;};
      inline string getReference() const { DARABONBA_PTR_GET_DEFAULT(reference_, "") };
      inline Cves& setReference(string reference) { DARABONBA_PTR_SET_VALUE(reference_, reference) };


      // releaseTime Field Functions 
      bool hasReleaseTime() const { return this->releaseTime_ != nullptr;};
      void deleteReleaseTime() { this->releaseTime_ = nullptr;};
      inline int64_t getReleaseTime() const { DARABONBA_PTR_GET_DEFAULT(releaseTime_, 0L) };
      inline Cves& setReleaseTime(int64_t releaseTime) { DARABONBA_PTR_SET_VALUE(releaseTime_, releaseTime) };


      // solution Field Functions 
      bool hasSolution() const { return this->solution_ != nullptr;};
      void deleteSolution() { this->solution_ = nullptr;};
      inline string getSolution() const { DARABONBA_PTR_GET_DEFAULT(solution_, "") };
      inline Cves& setSolution(string solution) { DARABONBA_PTR_SET_VALUE(solution_, solution) };


      // summary Field Functions 
      bool hasSummary() const { return this->summary_ != nullptr;};
      void deleteSummary() { this->summary_ = nullptr;};
      inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
      inline Cves& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


      // targetId Field Functions 
      bool hasTargetId() const { return this->targetId_ != nullptr;};
      void deleteTargetId() { this->targetId_ = nullptr;};
      inline string getTargetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, "") };
      inline Cves& setTargetId(string targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


      // targetName Field Functions 
      bool hasTargetName() const { return this->targetName_ != nullptr;};
      void deleteTargetName() { this->targetName_ = nullptr;};
      inline string getTargetName() const { DARABONBA_PTR_GET_DEFAULT(targetName_, "") };
      inline Cves& setTargetName(string targetName) { DARABONBA_PTR_SET_VALUE(targetName_, targetName) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline Cves& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      // vendor Field Functions 
      bool hasVendor() const { return this->vendor_ != nullptr;};
      void deleteVendor() { this->vendor_ = nullptr;};
      inline string getVendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, "") };
      inline Cves& setVendor(string vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


      // vulLevel Field Functions 
      bool hasVulLevel() const { return this->vulLevel_ != nullptr;};
      void deleteVulLevel() { this->vulLevel_ = nullptr;};
      inline string getVulLevel() const { DARABONBA_PTR_GET_DEFAULT(vulLevel_, "") };
      inline Cves& setVulLevel(string vulLevel) { DARABONBA_PTR_SET_VALUE(vulLevel_, vulLevel) };


    protected:
      // The type of the vulnerability.
      shared_ptr<string> classify_ {};
      // The vulnerability types.
      shared_ptr<vector<Cves::Classifys>> classifys_ {};
      // The China National Vulnerability Database (CNVD) ID.
      shared_ptr<string> cnvdId_ {};
      // The difficulty level of exploiting the vulnerability. Valid values:
      // 
      // *   **LOW**
      // *   **MEDIUM**
      // *   **HIGH**
      shared_ptr<string> complexity_ {};
      // The CVE content.
      shared_ptr<string> content_ {};
      // The Common Vulnerabilities and Exposures (CVE) ID.
      shared_ptr<string> cveId_ {};
      // The link to the CVE details.
      shared_ptr<string> cveLink_ {};
      // The Common Vulnerability Scoring System (CVSS) score of the vulnerability in the Alibaba Cloud vulnerability library.
      shared_ptr<string> cvssScore_ {};
      // The vector that is used to calculate the CVSS score.
      shared_ptr<string> cvssVector_ {};
      // The name of the instance.
      // 
      // >  This parameter is deprecated. You can call the [DescribeVulList](~~DescribeVulList~~) operation to query the instance that is affected by the vulnerability.
      shared_ptr<string> instanceName_ {};
      // The public IP address of the server.
      // 
      // >  This parameter is deprecated. You can call the [DescribeVulList](~~DescribeVulList~~) operation to query the instance that is affected by the vulnerability.
      shared_ptr<string> internetIp_ {};
      // The private IP address of the server.
      // 
      // >  This parameter is deprecated. You can call the [DescribeVulList](~~DescribeVulList~~) operation to query the instance that is affected by the vulnerability.
      shared_ptr<string> intranetIp_ {};
      // The ID of the vulnerability.
      shared_ptr<string> otherId_ {};
      // The POC content.
      shared_ptr<string> poc_ {};
      // The UNIX timestamp when the proof of concept (POC) was created. Unit: milliseconds.
      shared_ptr<int64_t> pocCreateTime_ {};
      // The UNIX timestamp when the POC was disclosed. Unit: milliseconds.
      shared_ptr<int64_t> pocDisclosureTime_ {};
      // The service that is affected by the vulnerability.
      shared_ptr<string> product_ {};
      // The reference of the vulnerability in the Alibaba Cloud vulnerability library. The value is a URL.
      shared_ptr<string> reference_ {};
      // The disclosure time that is displayed for the vulnerability in the Alibaba Cloud vulnerability library. The value is a UNIX timestamp. Unit: milliseconds.
      shared_ptr<int64_t> releaseTime_ {};
      // The fixing suggestions of the vulnerability.
      shared_ptr<string> solution_ {};
      // The introduction to the vulnerability.
      shared_ptr<string> summary_ {};
      // The ID of the asset that is scanned.
      // 
      // >  This parameter is deprecated. You can call the [DescribeVulList](~~DescribeVulList~~) operation to query the instance that is affected by the vulnerability.
      shared_ptr<string> targetId_ {};
      // The name of the asset that is scanned.
      // 
      // >  This parameter is deprecated. You can call the [DescribeVulList](~~DescribeVulList~~) operation to query the instance that is affected by the vulnerability.
      shared_ptr<string> targetName_ {};
      // The title of the vulnerability announcement.
      shared_ptr<string> title_ {};
      // The vendor that disclosed the vulnerability.
      shared_ptr<string> vendor_ {};
      // The severity of the vulnerability. Valid values:
      // 
      // *   **serious**
      // *   **high**
      // *   **medium**
      // *   **low**
      shared_ptr<string> vulLevel_ {};
    };

    virtual bool empty() const override { return this->cves_ == nullptr
        && this->requestId_ == nullptr; };
    // cves Field Functions 
    bool hasCves() const { return this->cves_ != nullptr;};
    void deleteCves() { this->cves_ = nullptr;};
    inline const vector<DescribeVulDetailsResponseBody::Cves> & getCves() const { DARABONBA_PTR_GET_CONST(cves_, vector<DescribeVulDetailsResponseBody::Cves>) };
    inline vector<DescribeVulDetailsResponseBody::Cves> getCves() { DARABONBA_PTR_GET(cves_, vector<DescribeVulDetailsResponseBody::Cves>) };
    inline DescribeVulDetailsResponseBody& setCves(const vector<DescribeVulDetailsResponseBody::Cves> & cves) { DARABONBA_PTR_SET_VALUE(cves_, cves) };
    inline DescribeVulDetailsResponseBody& setCves(vector<DescribeVulDetailsResponseBody::Cves> && cves) { DARABONBA_PTR_SET_RVALUE(cves_, cves) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVulDetailsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the vulnerability.
    shared_ptr<vector<DescribeVulDetailsResponseBody::Cves>> cves_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
