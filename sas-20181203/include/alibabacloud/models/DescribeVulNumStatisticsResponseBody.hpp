// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVULNUMSTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVULNUMSTATISTICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeVulNumStatisticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVulNumStatisticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AppCnt, appCnt_);
      DARABONBA_PTR_TO_JSON(AppNum, appNum_);
      DARABONBA_PTR_TO_JSON(CmsDealedTotalNum, cmsDealedTotalNum_);
      DARABONBA_PTR_TO_JSON(CmsNum, cmsNum_);
      DARABONBA_PTR_TO_JSON(CveNum, cveNum_);
      DARABONBA_PTR_TO_JSON(EmgNum, emgNum_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ScaNum, scaNum_);
      DARABONBA_PTR_TO_JSON(SysNum, sysNum_);
      DARABONBA_PTR_TO_JSON(VulAsapSum, vulAsapSum_);
      DARABONBA_PTR_TO_JSON(VulDealedTotalNum, vulDealedTotalNum_);
      DARABONBA_PTR_TO_JSON(VulLaterSum, vulLaterSum_);
      DARABONBA_PTR_TO_JSON(VulNntfSum, vulNntfSum_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVulNumStatisticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AppCnt, appCnt_);
      DARABONBA_PTR_FROM_JSON(AppNum, appNum_);
      DARABONBA_PTR_FROM_JSON(CmsDealedTotalNum, cmsDealedTotalNum_);
      DARABONBA_PTR_FROM_JSON(CmsNum, cmsNum_);
      DARABONBA_PTR_FROM_JSON(CveNum, cveNum_);
      DARABONBA_PTR_FROM_JSON(EmgNum, emgNum_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ScaNum, scaNum_);
      DARABONBA_PTR_FROM_JSON(SysNum, sysNum_);
      DARABONBA_PTR_FROM_JSON(VulAsapSum, vulAsapSum_);
      DARABONBA_PTR_FROM_JSON(VulDealedTotalNum, vulDealedTotalNum_);
      DARABONBA_PTR_FROM_JSON(VulLaterSum, vulLaterSum_);
      DARABONBA_PTR_FROM_JSON(VulNntfSum, vulNntfSum_);
    };
    DescribeVulNumStatisticsResponseBody() = default ;
    DescribeVulNumStatisticsResponseBody(const DescribeVulNumStatisticsResponseBody &) = default ;
    DescribeVulNumStatisticsResponseBody(DescribeVulNumStatisticsResponseBody &&) = default ;
    DescribeVulNumStatisticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVulNumStatisticsResponseBody() = default ;
    DescribeVulNumStatisticsResponseBody& operator=(const DescribeVulNumStatisticsResponseBody &) = default ;
    DescribeVulNumStatisticsResponseBody& operator=(DescribeVulNumStatisticsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appCnt_ != nullptr
        && this->appNum_ != nullptr && this->cmsDealedTotalNum_ != nullptr && this->cmsNum_ != nullptr && this->cveNum_ != nullptr && this->emgNum_ != nullptr
        && this->requestId_ != nullptr && this->scaNum_ != nullptr && this->sysNum_ != nullptr && this->vulAsapSum_ != nullptr && this->vulDealedTotalNum_ != nullptr
        && this->vulLaterSum_ != nullptr && this->vulNntfSum_ != nullptr; };
    // appCnt Field Functions 
    bool hasAppCnt() const { return this->appCnt_ != nullptr;};
    void deleteAppCnt() { this->appCnt_ = nullptr;};
    inline int32_t appCnt() const { DARABONBA_PTR_GET_DEFAULT(appCnt_, 0) };
    inline DescribeVulNumStatisticsResponseBody& setAppCnt(int32_t appCnt) { DARABONBA_PTR_SET_VALUE(appCnt_, appCnt) };


    // appNum Field Functions 
    bool hasAppNum() const { return this->appNum_ != nullptr;};
    void deleteAppNum() { this->appNum_ = nullptr;};
    inline int32_t appNum() const { DARABONBA_PTR_GET_DEFAULT(appNum_, 0) };
    inline DescribeVulNumStatisticsResponseBody& setAppNum(int32_t appNum) { DARABONBA_PTR_SET_VALUE(appNum_, appNum) };


    // cmsDealedTotalNum Field Functions 
    bool hasCmsDealedTotalNum() const { return this->cmsDealedTotalNum_ != nullptr;};
    void deleteCmsDealedTotalNum() { this->cmsDealedTotalNum_ = nullptr;};
    inline int32_t cmsDealedTotalNum() const { DARABONBA_PTR_GET_DEFAULT(cmsDealedTotalNum_, 0) };
    inline DescribeVulNumStatisticsResponseBody& setCmsDealedTotalNum(int32_t cmsDealedTotalNum) { DARABONBA_PTR_SET_VALUE(cmsDealedTotalNum_, cmsDealedTotalNum) };


    // cmsNum Field Functions 
    bool hasCmsNum() const { return this->cmsNum_ != nullptr;};
    void deleteCmsNum() { this->cmsNum_ = nullptr;};
    inline int32_t cmsNum() const { DARABONBA_PTR_GET_DEFAULT(cmsNum_, 0) };
    inline DescribeVulNumStatisticsResponseBody& setCmsNum(int32_t cmsNum) { DARABONBA_PTR_SET_VALUE(cmsNum_, cmsNum) };


    // cveNum Field Functions 
    bool hasCveNum() const { return this->cveNum_ != nullptr;};
    void deleteCveNum() { this->cveNum_ = nullptr;};
    inline int32_t cveNum() const { DARABONBA_PTR_GET_DEFAULT(cveNum_, 0) };
    inline DescribeVulNumStatisticsResponseBody& setCveNum(int32_t cveNum) { DARABONBA_PTR_SET_VALUE(cveNum_, cveNum) };


    // emgNum Field Functions 
    bool hasEmgNum() const { return this->emgNum_ != nullptr;};
    void deleteEmgNum() { this->emgNum_ = nullptr;};
    inline int32_t emgNum() const { DARABONBA_PTR_GET_DEFAULT(emgNum_, 0) };
    inline DescribeVulNumStatisticsResponseBody& setEmgNum(int32_t emgNum) { DARABONBA_PTR_SET_VALUE(emgNum_, emgNum) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVulNumStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scaNum Field Functions 
    bool hasScaNum() const { return this->scaNum_ != nullptr;};
    void deleteScaNum() { this->scaNum_ = nullptr;};
    inline int32_t scaNum() const { DARABONBA_PTR_GET_DEFAULT(scaNum_, 0) };
    inline DescribeVulNumStatisticsResponseBody& setScaNum(int32_t scaNum) { DARABONBA_PTR_SET_VALUE(scaNum_, scaNum) };


    // sysNum Field Functions 
    bool hasSysNum() const { return this->sysNum_ != nullptr;};
    void deleteSysNum() { this->sysNum_ = nullptr;};
    inline int32_t sysNum() const { DARABONBA_PTR_GET_DEFAULT(sysNum_, 0) };
    inline DescribeVulNumStatisticsResponseBody& setSysNum(int32_t sysNum) { DARABONBA_PTR_SET_VALUE(sysNum_, sysNum) };


    // vulAsapSum Field Functions 
    bool hasVulAsapSum() const { return this->vulAsapSum_ != nullptr;};
    void deleteVulAsapSum() { this->vulAsapSum_ = nullptr;};
    inline int32_t vulAsapSum() const { DARABONBA_PTR_GET_DEFAULT(vulAsapSum_, 0) };
    inline DescribeVulNumStatisticsResponseBody& setVulAsapSum(int32_t vulAsapSum) { DARABONBA_PTR_SET_VALUE(vulAsapSum_, vulAsapSum) };


    // vulDealedTotalNum Field Functions 
    bool hasVulDealedTotalNum() const { return this->vulDealedTotalNum_ != nullptr;};
    void deleteVulDealedTotalNum() { this->vulDealedTotalNum_ = nullptr;};
    inline int32_t vulDealedTotalNum() const { DARABONBA_PTR_GET_DEFAULT(vulDealedTotalNum_, 0) };
    inline DescribeVulNumStatisticsResponseBody& setVulDealedTotalNum(int32_t vulDealedTotalNum) { DARABONBA_PTR_SET_VALUE(vulDealedTotalNum_, vulDealedTotalNum) };


    // vulLaterSum Field Functions 
    bool hasVulLaterSum() const { return this->vulLaterSum_ != nullptr;};
    void deleteVulLaterSum() { this->vulLaterSum_ = nullptr;};
    inline int32_t vulLaterSum() const { DARABONBA_PTR_GET_DEFAULT(vulLaterSum_, 0) };
    inline DescribeVulNumStatisticsResponseBody& setVulLaterSum(int32_t vulLaterSum) { DARABONBA_PTR_SET_VALUE(vulLaterSum_, vulLaterSum) };


    // vulNntfSum Field Functions 
    bool hasVulNntfSum() const { return this->vulNntfSum_ != nullptr;};
    void deleteVulNntfSum() { this->vulNntfSum_ = nullptr;};
    inline int32_t vulNntfSum() const { DARABONBA_PTR_GET_DEFAULT(vulNntfSum_, 0) };
    inline DescribeVulNumStatisticsResponseBody& setVulNntfSum(int32_t vulNntfSum) { DARABONBA_PTR_SET_VALUE(vulNntfSum_, vulNntfSum) };


  protected:
    // The number of application vulnerabilities that are detected on the asset by using the web scanner.
    std::shared_ptr<int32_t> appCnt_ = nullptr;
    // The number of application vulnerabilities that are detected on the asset by using the web scanner.
    std::shared_ptr<int32_t> appNum_ = nullptr;
    // The number of Web-CMS vulnerabilities that are handled.
    std::shared_ptr<int32_t> cmsDealedTotalNum_ = nullptr;
    // The number of Web-CMS vulnerabilities that are detected on the asset.
    std::shared_ptr<int32_t> cmsNum_ = nullptr;
    // The number of Linux software vulnerabilities that are detected on the asset.
    std::shared_ptr<int32_t> cveNum_ = nullptr;
    // The number of urgent vulnerabilities that are detected on the asset.
    std::shared_ptr<int32_t> emgNum_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The number of middleware vulnerabilities that are detected on the asset.
    std::shared_ptr<int32_t> scaNum_ = nullptr;
    // The number of Windows system vulnerabilities that are detected on the asset.
    std::shared_ptr<int32_t> sysNum_ = nullptr;
    // The number of vulnerabilities that have the high priority.
    std::shared_ptr<int32_t> vulAsapSum_ = nullptr;
    // The number of vulnerabilities that are handled.
    std::shared_ptr<int32_t> vulDealedTotalNum_ = nullptr;
    // The number of vulnerabilities that have the medium priority.
    std::shared_ptr<int32_t> vulLaterSum_ = nullptr;
    // The number of vulnerabilities that have the low priority.
    std::shared_ptr<int32_t> vulNntfSum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
