// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINTERNETOPENIPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINTERNETOPENIPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeInternetOpenIpRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInternetOpenIpRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AssetsInstanceId, assetsInstanceId_);
      DARABONBA_PTR_TO_JSON(AssetsInstanceName, assetsInstanceName_);
      DARABONBA_PTR_TO_JSON(AssetsType, assetsType_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(PublicIp, publicIp_);
      DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInternetOpenIpRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetsInstanceId, assetsInstanceId_);
      DARABONBA_PTR_FROM_JSON(AssetsInstanceName, assetsInstanceName_);
      DARABONBA_PTR_FROM_JSON(AssetsType, assetsType_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(PublicIp, publicIp_);
      DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeInternetOpenIpRequest() = default ;
    DescribeInternetOpenIpRequest(const DescribeInternetOpenIpRequest &) = default ;
    DescribeInternetOpenIpRequest(DescribeInternetOpenIpRequest &&) = default ;
    DescribeInternetOpenIpRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInternetOpenIpRequest() = default ;
    DescribeInternetOpenIpRequest& operator=(const DescribeInternetOpenIpRequest &) = default ;
    DescribeInternetOpenIpRequest& operator=(DescribeInternetOpenIpRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assetsInstanceId_ == nullptr
        && this->assetsInstanceName_ == nullptr && this->assetsType_ == nullptr && this->currentPage_ == nullptr && this->endTime_ == nullptr && this->lang_ == nullptr
        && this->pageSize_ == nullptr && this->port_ == nullptr && this->publicIp_ == nullptr && this->regionNo_ == nullptr && this->riskLevel_ == nullptr
        && this->serviceName_ == nullptr && this->startTime_ == nullptr; };
    // assetsInstanceId Field Functions 
    bool hasAssetsInstanceId() const { return this->assetsInstanceId_ != nullptr;};
    void deleteAssetsInstanceId() { this->assetsInstanceId_ = nullptr;};
    inline string getAssetsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(assetsInstanceId_, "") };
    inline DescribeInternetOpenIpRequest& setAssetsInstanceId(string assetsInstanceId) { DARABONBA_PTR_SET_VALUE(assetsInstanceId_, assetsInstanceId) };


    // assetsInstanceName Field Functions 
    bool hasAssetsInstanceName() const { return this->assetsInstanceName_ != nullptr;};
    void deleteAssetsInstanceName() { this->assetsInstanceName_ = nullptr;};
    inline string getAssetsInstanceName() const { DARABONBA_PTR_GET_DEFAULT(assetsInstanceName_, "") };
    inline DescribeInternetOpenIpRequest& setAssetsInstanceName(string assetsInstanceName) { DARABONBA_PTR_SET_VALUE(assetsInstanceName_, assetsInstanceName) };


    // assetsType Field Functions 
    bool hasAssetsType() const { return this->assetsType_ != nullptr;};
    void deleteAssetsType() { this->assetsType_ = nullptr;};
    inline string getAssetsType() const { DARABONBA_PTR_GET_DEFAULT(assetsType_, "") };
    inline DescribeInternetOpenIpRequest& setAssetsType(string assetsType) { DARABONBA_PTR_SET_VALUE(assetsType_, assetsType) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline string getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, "") };
    inline DescribeInternetOpenIpRequest& setCurrentPage(string currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeInternetOpenIpRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeInternetOpenIpRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeInternetOpenIpRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline DescribeInternetOpenIpRequest& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // publicIp Field Functions 
    bool hasPublicIp() const { return this->publicIp_ != nullptr;};
    void deletePublicIp() { this->publicIp_ = nullptr;};
    inline string getPublicIp() const { DARABONBA_PTR_GET_DEFAULT(publicIp_, "") };
    inline DescribeInternetOpenIpRequest& setPublicIp(string publicIp) { DARABONBA_PTR_SET_VALUE(publicIp_, publicIp) };


    // regionNo Field Functions 
    bool hasRegionNo() const { return this->regionNo_ != nullptr;};
    void deleteRegionNo() { this->regionNo_ = nullptr;};
    inline string getRegionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
    inline DescribeInternetOpenIpRequest& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
    inline DescribeInternetOpenIpRequest& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline DescribeInternetOpenIpRequest& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeInternetOpenIpRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The instance ID.
    shared_ptr<string> assetsInstanceId_ {};
    // The instance name.
    shared_ptr<string> assetsInstanceName_ {};
    // The asset type of the instance.
    shared_ptr<string> assetsType_ {};
    // The page number.
    // 
    // This parameter is required.
    shared_ptr<string> currentPage_ {};
    // The end of the time range to query. The value is a UNIX timestamp. Unit: seconds.
    shared_ptr<string> endTime_ {};
    // The language of the content within the response. Valid values:
    // 
    // *   **zh**: Chinese (default)
    // *   **en**: English
    shared_ptr<string> lang_ {};
    // The number of entries per page.
    // 
    // This parameter is required.
    shared_ptr<string> pageSize_ {};
    // The port number.
    shared_ptr<string> port_ {};
    // The public IP address of the instance.
    shared_ptr<string> publicIp_ {};
    // The region ID of the instance.
    shared_ptr<string> regionNo_ {};
    // The risk level. If you leave this parameter empty, all risk levels are queried. Valid values:
    // 
    // *   **3**: high risk
    // *   **2**: medium risk
    // *   **1**: low risk
    // *   **0**: no risk
    shared_ptr<string> riskLevel_ {};
    // The application.
    shared_ptr<string> serviceName_ {};
    // The beginning of the time range to query. The value is a UNIX timestamp. Unit: seconds.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
