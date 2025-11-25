// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINTERNETOPENDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINTERNETOPENDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeInternetOpenDetailRequestSortList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeInternetOpenDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInternetOpenDetailRequest& obj) { 
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
      DARABONBA_PTR_TO_JSON(ServiceNameFuzzy, serviceNameFuzzy_);
      DARABONBA_PTR_TO_JSON(SortList, sortList_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(SuggestLevel, suggestLevel_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInternetOpenDetailRequest& obj) { 
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
      DARABONBA_PTR_FROM_JSON(ServiceNameFuzzy, serviceNameFuzzy_);
      DARABONBA_PTR_FROM_JSON(SortList, sortList_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(SuggestLevel, suggestLevel_);
    };
    DescribeInternetOpenDetailRequest() = default ;
    DescribeInternetOpenDetailRequest(const DescribeInternetOpenDetailRequest &) = default ;
    DescribeInternetOpenDetailRequest(DescribeInternetOpenDetailRequest &&) = default ;
    DescribeInternetOpenDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInternetOpenDetailRequest() = default ;
    DescribeInternetOpenDetailRequest& operator=(const DescribeInternetOpenDetailRequest &) = default ;
    DescribeInternetOpenDetailRequest& operator=(DescribeInternetOpenDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assetsInstanceId_ == nullptr
        && return this->assetsInstanceName_ == nullptr && return this->assetsType_ == nullptr && return this->currentPage_ == nullptr && return this->endTime_ == nullptr && return this->lang_ == nullptr
        && return this->pageSize_ == nullptr && return this->port_ == nullptr && return this->publicIp_ == nullptr && return this->regionNo_ == nullptr && return this->riskLevel_ == nullptr
        && return this->serviceName_ == nullptr && return this->serviceNameFuzzy_ == nullptr && return this->sortList_ == nullptr && return this->sourceIp_ == nullptr && return this->startTime_ == nullptr
        && return this->suggestLevel_ == nullptr; };
    // assetsInstanceId Field Functions 
    bool hasAssetsInstanceId() const { return this->assetsInstanceId_ != nullptr;};
    void deleteAssetsInstanceId() { this->assetsInstanceId_ = nullptr;};
    inline string assetsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(assetsInstanceId_, "") };
    inline DescribeInternetOpenDetailRequest& setAssetsInstanceId(string assetsInstanceId) { DARABONBA_PTR_SET_VALUE(assetsInstanceId_, assetsInstanceId) };


    // assetsInstanceName Field Functions 
    bool hasAssetsInstanceName() const { return this->assetsInstanceName_ != nullptr;};
    void deleteAssetsInstanceName() { this->assetsInstanceName_ = nullptr;};
    inline string assetsInstanceName() const { DARABONBA_PTR_GET_DEFAULT(assetsInstanceName_, "") };
    inline DescribeInternetOpenDetailRequest& setAssetsInstanceName(string assetsInstanceName) { DARABONBA_PTR_SET_VALUE(assetsInstanceName_, assetsInstanceName) };


    // assetsType Field Functions 
    bool hasAssetsType() const { return this->assetsType_ != nullptr;};
    void deleteAssetsType() { this->assetsType_ = nullptr;};
    inline string assetsType() const { DARABONBA_PTR_GET_DEFAULT(assetsType_, "") };
    inline DescribeInternetOpenDetailRequest& setAssetsType(string assetsType) { DARABONBA_PTR_SET_VALUE(assetsType_, assetsType) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline string currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, "") };
    inline DescribeInternetOpenDetailRequest& setCurrentPage(string currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeInternetOpenDetailRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeInternetOpenDetailRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeInternetOpenDetailRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string port() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline DescribeInternetOpenDetailRequest& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // publicIp Field Functions 
    bool hasPublicIp() const { return this->publicIp_ != nullptr;};
    void deletePublicIp() { this->publicIp_ = nullptr;};
    inline string publicIp() const { DARABONBA_PTR_GET_DEFAULT(publicIp_, "") };
    inline DescribeInternetOpenDetailRequest& setPublicIp(string publicIp) { DARABONBA_PTR_SET_VALUE(publicIp_, publicIp) };


    // regionNo Field Functions 
    bool hasRegionNo() const { return this->regionNo_ != nullptr;};
    void deleteRegionNo() { this->regionNo_ = nullptr;};
    inline string regionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
    inline DescribeInternetOpenDetailRequest& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline string riskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
    inline DescribeInternetOpenDetailRequest& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline DescribeInternetOpenDetailRequest& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // serviceNameFuzzy Field Functions 
    bool hasServiceNameFuzzy() const { return this->serviceNameFuzzy_ != nullptr;};
    void deleteServiceNameFuzzy() { this->serviceNameFuzzy_ = nullptr;};
    inline string serviceNameFuzzy() const { DARABONBA_PTR_GET_DEFAULT(serviceNameFuzzy_, "") };
    inline DescribeInternetOpenDetailRequest& setServiceNameFuzzy(string serviceNameFuzzy) { DARABONBA_PTR_SET_VALUE(serviceNameFuzzy_, serviceNameFuzzy) };


    // sortList Field Functions 
    bool hasSortList() const { return this->sortList_ != nullptr;};
    void deleteSortList() { this->sortList_ = nullptr;};
    inline const vector<DescribeInternetOpenDetailRequestSortList> & sortList() const { DARABONBA_PTR_GET_CONST(sortList_, vector<DescribeInternetOpenDetailRequestSortList>) };
    inline vector<DescribeInternetOpenDetailRequestSortList> sortList() { DARABONBA_PTR_GET(sortList_, vector<DescribeInternetOpenDetailRequestSortList>) };
    inline DescribeInternetOpenDetailRequest& setSortList(const vector<DescribeInternetOpenDetailRequestSortList> & sortList) { DARABONBA_PTR_SET_VALUE(sortList_, sortList) };
    inline DescribeInternetOpenDetailRequest& setSortList(vector<DescribeInternetOpenDetailRequestSortList> && sortList) { DARABONBA_PTR_SET_RVALUE(sortList_, sortList) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string sourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline DescribeInternetOpenDetailRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeInternetOpenDetailRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // suggestLevel Field Functions 
    bool hasSuggestLevel() const { return this->suggestLevel_ != nullptr;};
    void deleteSuggestLevel() { this->suggestLevel_ = nullptr;};
    inline string suggestLevel() const { DARABONBA_PTR_GET_DEFAULT(suggestLevel_, "") };
    inline DescribeInternetOpenDetailRequest& setSuggestLevel(string suggestLevel) { DARABONBA_PTR_SET_VALUE(suggestLevel_, suggestLevel) };


  protected:
    std::shared_ptr<string> assetsInstanceId_ = nullptr;
    std::shared_ptr<string> assetsInstanceName_ = nullptr;
    std::shared_ptr<string> assetsType_ = nullptr;
    std::shared_ptr<string> currentPage_ = nullptr;
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<string> lang_ = nullptr;
    std::shared_ptr<string> pageSize_ = nullptr;
    std::shared_ptr<string> port_ = nullptr;
    std::shared_ptr<string> publicIp_ = nullptr;
    std::shared_ptr<string> regionNo_ = nullptr;
    std::shared_ptr<string> riskLevel_ = nullptr;
    std::shared_ptr<string> serviceName_ = nullptr;
    std::shared_ptr<string> serviceNameFuzzy_ = nullptr;
    std::shared_ptr<vector<DescribeInternetOpenDetailRequestSortList>> sortList_ = nullptr;
    std::shared_ptr<string> sourceIp_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
    std::shared_ptr<string> suggestLevel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
