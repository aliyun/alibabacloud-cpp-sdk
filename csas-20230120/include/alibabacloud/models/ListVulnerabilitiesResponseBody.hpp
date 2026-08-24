// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVULNERABILITIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTVULNERABILITIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListVulnerabilitiesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVulnerabilitiesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
      DARABONBA_PTR_TO_JSON(Vulnerabilities, vulnerabilities_);
    };
    friend void from_json(const Darabonba::Json& j, ListVulnerabilitiesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
      DARABONBA_PTR_FROM_JSON(Vulnerabilities, vulnerabilities_);
    };
    ListVulnerabilitiesResponseBody() = default ;
    ListVulnerabilitiesResponseBody(const ListVulnerabilitiesResponseBody &) = default ;
    ListVulnerabilitiesResponseBody(ListVulnerabilitiesResponseBody &&) = default ;
    ListVulnerabilitiesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVulnerabilitiesResponseBody() = default ;
    ListVulnerabilitiesResponseBody& operator=(const ListVulnerabilitiesResponseBody &) = default ;
    ListVulnerabilitiesResponseBody& operator=(ListVulnerabilitiesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Vulnerabilities : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Vulnerabilities& obj) { 
        DARABONBA_PTR_TO_JSON(CveList, cveList_);
        DARABONBA_PTR_TO_JSON(DescriptionEn, descriptionEn_);
        DARABONBA_PTR_TO_JSON(DescriptionZh, descriptionZh_);
        DARABONBA_PTR_TO_JSON(Kbs, kbs_);
        DARABONBA_PTR_TO_JSON(Product, product_);
        DARABONBA_PTR_TO_JSON(ReleaseTime, releaseTime_);
        DARABONBA_PTR_TO_JSON(TitleEn, titleEn_);
        DARABONBA_PTR_TO_JSON(TitleZh, titleZh_);
        DARABONBA_PTR_TO_JSON(UpdateId, updateId_);
        DARABONBA_PTR_TO_JSON(VulDeviceCount, vulDeviceCount_);
        DARABONBA_PTR_TO_JSON(VulLevel, vulLevel_);
        DARABONBA_PTR_TO_JSON(VulType, vulType_);
      };
      friend void from_json(const Darabonba::Json& j, Vulnerabilities& obj) { 
        DARABONBA_PTR_FROM_JSON(CveList, cveList_);
        DARABONBA_PTR_FROM_JSON(DescriptionEn, descriptionEn_);
        DARABONBA_PTR_FROM_JSON(DescriptionZh, descriptionZh_);
        DARABONBA_PTR_FROM_JSON(Kbs, kbs_);
        DARABONBA_PTR_FROM_JSON(Product, product_);
        DARABONBA_PTR_FROM_JSON(ReleaseTime, releaseTime_);
        DARABONBA_PTR_FROM_JSON(TitleEn, titleEn_);
        DARABONBA_PTR_FROM_JSON(TitleZh, titleZh_);
        DARABONBA_PTR_FROM_JSON(UpdateId, updateId_);
        DARABONBA_PTR_FROM_JSON(VulDeviceCount, vulDeviceCount_);
        DARABONBA_PTR_FROM_JSON(VulLevel, vulLevel_);
        DARABONBA_PTR_FROM_JSON(VulType, vulType_);
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
      virtual bool empty() const override { return this->cveList_ == nullptr
        && this->descriptionEn_ == nullptr && this->descriptionZh_ == nullptr && this->kbs_ == nullptr && this->product_ == nullptr && this->releaseTime_ == nullptr
        && this->titleEn_ == nullptr && this->titleZh_ == nullptr && this->updateId_ == nullptr && this->vulDeviceCount_ == nullptr && this->vulLevel_ == nullptr
        && this->vulType_ == nullptr; };
      // cveList Field Functions 
      bool hasCveList() const { return this->cveList_ != nullptr;};
      void deleteCveList() { this->cveList_ = nullptr;};
      inline const vector<string> & getCveList() const { DARABONBA_PTR_GET_CONST(cveList_, vector<string>) };
      inline vector<string> getCveList() { DARABONBA_PTR_GET(cveList_, vector<string>) };
      inline Vulnerabilities& setCveList(const vector<string> & cveList) { DARABONBA_PTR_SET_VALUE(cveList_, cveList) };
      inline Vulnerabilities& setCveList(vector<string> && cveList) { DARABONBA_PTR_SET_RVALUE(cveList_, cveList) };


      // descriptionEn Field Functions 
      bool hasDescriptionEn() const { return this->descriptionEn_ != nullptr;};
      void deleteDescriptionEn() { this->descriptionEn_ = nullptr;};
      inline string getDescriptionEn() const { DARABONBA_PTR_GET_DEFAULT(descriptionEn_, "") };
      inline Vulnerabilities& setDescriptionEn(string descriptionEn) { DARABONBA_PTR_SET_VALUE(descriptionEn_, descriptionEn) };


      // descriptionZh Field Functions 
      bool hasDescriptionZh() const { return this->descriptionZh_ != nullptr;};
      void deleteDescriptionZh() { this->descriptionZh_ = nullptr;};
      inline string getDescriptionZh() const { DARABONBA_PTR_GET_DEFAULT(descriptionZh_, "") };
      inline Vulnerabilities& setDescriptionZh(string descriptionZh) { DARABONBA_PTR_SET_VALUE(descriptionZh_, descriptionZh) };


      // kbs Field Functions 
      bool hasKbs() const { return this->kbs_ != nullptr;};
      void deleteKbs() { this->kbs_ = nullptr;};
      inline const vector<string> & getKbs() const { DARABONBA_PTR_GET_CONST(kbs_, vector<string>) };
      inline vector<string> getKbs() { DARABONBA_PTR_GET(kbs_, vector<string>) };
      inline Vulnerabilities& setKbs(const vector<string> & kbs) { DARABONBA_PTR_SET_VALUE(kbs_, kbs) };
      inline Vulnerabilities& setKbs(vector<string> && kbs) { DARABONBA_PTR_SET_RVALUE(kbs_, kbs) };


      // product Field Functions 
      bool hasProduct() const { return this->product_ != nullptr;};
      void deleteProduct() { this->product_ = nullptr;};
      inline string getProduct() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
      inline Vulnerabilities& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


      // releaseTime Field Functions 
      bool hasReleaseTime() const { return this->releaseTime_ != nullptr;};
      void deleteReleaseTime() { this->releaseTime_ = nullptr;};
      inline int64_t getReleaseTime() const { DARABONBA_PTR_GET_DEFAULT(releaseTime_, 0L) };
      inline Vulnerabilities& setReleaseTime(int64_t releaseTime) { DARABONBA_PTR_SET_VALUE(releaseTime_, releaseTime) };


      // titleEn Field Functions 
      bool hasTitleEn() const { return this->titleEn_ != nullptr;};
      void deleteTitleEn() { this->titleEn_ = nullptr;};
      inline string getTitleEn() const { DARABONBA_PTR_GET_DEFAULT(titleEn_, "") };
      inline Vulnerabilities& setTitleEn(string titleEn) { DARABONBA_PTR_SET_VALUE(titleEn_, titleEn) };


      // titleZh Field Functions 
      bool hasTitleZh() const { return this->titleZh_ != nullptr;};
      void deleteTitleZh() { this->titleZh_ = nullptr;};
      inline string getTitleZh() const { DARABONBA_PTR_GET_DEFAULT(titleZh_, "") };
      inline Vulnerabilities& setTitleZh(string titleZh) { DARABONBA_PTR_SET_VALUE(titleZh_, titleZh) };


      // updateId Field Functions 
      bool hasUpdateId() const { return this->updateId_ != nullptr;};
      void deleteUpdateId() { this->updateId_ = nullptr;};
      inline string getUpdateId() const { DARABONBA_PTR_GET_DEFAULT(updateId_, "") };
      inline Vulnerabilities& setUpdateId(string updateId) { DARABONBA_PTR_SET_VALUE(updateId_, updateId) };


      // vulDeviceCount Field Functions 
      bool hasVulDeviceCount() const { return this->vulDeviceCount_ != nullptr;};
      void deleteVulDeviceCount() { this->vulDeviceCount_ = nullptr;};
      inline int64_t getVulDeviceCount() const { DARABONBA_PTR_GET_DEFAULT(vulDeviceCount_, 0L) };
      inline Vulnerabilities& setVulDeviceCount(int64_t vulDeviceCount) { DARABONBA_PTR_SET_VALUE(vulDeviceCount_, vulDeviceCount) };


      // vulLevel Field Functions 
      bool hasVulLevel() const { return this->vulLevel_ != nullptr;};
      void deleteVulLevel() { this->vulLevel_ = nullptr;};
      inline string getVulLevel() const { DARABONBA_PTR_GET_DEFAULT(vulLevel_, "") };
      inline Vulnerabilities& setVulLevel(string vulLevel) { DARABONBA_PTR_SET_VALUE(vulLevel_, vulLevel) };


      // vulType Field Functions 
      bool hasVulType() const { return this->vulType_ != nullptr;};
      void deleteVulType() { this->vulType_ = nullptr;};
      inline string getVulType() const { DARABONBA_PTR_GET_DEFAULT(vulType_, "") };
      inline Vulnerabilities& setVulType(string vulType) { DARABONBA_PTR_SET_VALUE(vulType_, vulType) };


    protected:
      // The list of CVE IDs corresponding to the vulnerability. An empty list is returned if no CVE is associated.
      shared_ptr<vector<string>> cveList_ {};
      // The English description of the vulnerability.
      shared_ptr<string> descriptionEn_ {};
      // The Chinese description of the vulnerability.
      shared_ptr<string> descriptionZh_ {};
      // The list of Knowledge Base (KB) numbers corresponding to the vulnerability.
      shared_ptr<vector<string>> kbs_ {};
      // The name of the product affected by the vulnerability.
      shared_ptr<string> product_ {};
      // The release time of the vulnerability, in seconds as a UNIX timestamp.
      shared_ptr<int64_t> releaseTime_ {};
      // The English title of the vulnerability.
      shared_ptr<string> titleEn_ {};
      // The Chinese title of the vulnerability.
      shared_ptr<string> titleZh_ {};
      // The patch ID corresponding to the vulnerability. For Windows vulnerabilities, this is the Microsoft patch Update ID.
      shared_ptr<string> updateId_ {};
      // The number of user endpoint devices affected by the vulnerability.
      shared_ptr<int64_t> vulDeviceCount_ {};
      // The vulnerability risk level, mapped from the vendor risk level: Critical is mapped to High, Important is mapped to Mid, and others are mapped to Low. Valid values:
      // - **High**: high risk.
      // - **Mid**: medium risk.
      // - **Low**: low risk.
      shared_ptr<string> vulLevel_ {};
      // The vulnerability type. Valid values:
      // - **windows**: Windows system vulnerability.
      // - **ai_agent**: AI Agent vulnerability.
      shared_ptr<string> vulType_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->totalNum_ == nullptr && this->vulnerabilities_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListVulnerabilitiesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalNum Field Functions 
    bool hasTotalNum() const { return this->totalNum_ != nullptr;};
    void deleteTotalNum() { this->totalNum_ = nullptr;};
    inline int64_t getTotalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0L) };
    inline ListVulnerabilitiesResponseBody& setTotalNum(int64_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


    // vulnerabilities Field Functions 
    bool hasVulnerabilities() const { return this->vulnerabilities_ != nullptr;};
    void deleteVulnerabilities() { this->vulnerabilities_ = nullptr;};
    inline const vector<ListVulnerabilitiesResponseBody::Vulnerabilities> & getVulnerabilities() const { DARABONBA_PTR_GET_CONST(vulnerabilities_, vector<ListVulnerabilitiesResponseBody::Vulnerabilities>) };
    inline vector<ListVulnerabilitiesResponseBody::Vulnerabilities> getVulnerabilities() { DARABONBA_PTR_GET(vulnerabilities_, vector<ListVulnerabilitiesResponseBody::Vulnerabilities>) };
    inline ListVulnerabilitiesResponseBody& setVulnerabilities(const vector<ListVulnerabilitiesResponseBody::Vulnerabilities> & vulnerabilities) { DARABONBA_PTR_SET_VALUE(vulnerabilities_, vulnerabilities) };
    inline ListVulnerabilitiesResponseBody& setVulnerabilities(vector<ListVulnerabilitiesResponseBody::Vulnerabilities> && vulnerabilities) { DARABONBA_PTR_SET_RVALUE(vulnerabilities_, vulnerabilities) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of vulnerabilities that match the query conditions.
    shared_ptr<int64_t> totalNum_ {};
    // The list of vulnerabilities.
    shared_ptr<vector<ListVulnerabilitiesResponseBody::Vulnerabilities>> vulnerabilities_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
