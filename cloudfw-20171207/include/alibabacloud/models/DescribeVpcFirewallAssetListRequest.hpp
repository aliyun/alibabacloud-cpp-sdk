// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLASSETLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLASSETLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeVpcFirewallAssetListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcFirewallAssetListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(AssetIP, assetIP_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Direction, direction_);
      DARABONBA_PTR_TO_JSON(EcsInstanceId, ecsInstanceId_);
      DARABONBA_PTR_TO_JSON(EcsInstanceName, ecsInstanceName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(IPProtocol, IPProtocol_);
      DARABONBA_PTR_TO_JSON(IsAITraffic, isAITraffic_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PeerVpcId, peerVpcId_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_TO_JSON(Sort, sort_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcFirewallAssetListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(AssetIP, assetIP_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Direction, direction_);
      DARABONBA_PTR_FROM_JSON(EcsInstanceId, ecsInstanceId_);
      DARABONBA_PTR_FROM_JSON(EcsInstanceName, ecsInstanceName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(IPProtocol, IPProtocol_);
      DARABONBA_PTR_FROM_JSON(IsAITraffic, isAITraffic_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PeerVpcId, peerVpcId_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_FROM_JSON(Sort, sort_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    DescribeVpcFirewallAssetListRequest() = default ;
    DescribeVpcFirewallAssetListRequest(const DescribeVpcFirewallAssetListRequest &) = default ;
    DescribeVpcFirewallAssetListRequest(DescribeVpcFirewallAssetListRequest &&) = default ;
    DescribeVpcFirewallAssetListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcFirewallAssetListRequest() = default ;
    DescribeVpcFirewallAssetListRequest& operator=(const DescribeVpcFirewallAssetListRequest &) = default ;
    DescribeVpcFirewallAssetListRequest& operator=(DescribeVpcFirewallAssetListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && return this->assetIP_ == nullptr && return this->currentPage_ == nullptr && return this->direction_ == nullptr && return this->ecsInstanceId_ == nullptr && return this->ecsInstanceName_ == nullptr
        && return this->endTime_ == nullptr && return this->IPProtocol_ == nullptr && return this->isAITraffic_ == nullptr && return this->lang_ == nullptr && return this->order_ == nullptr
        && return this->pageSize_ == nullptr && return this->peerVpcId_ == nullptr && return this->port_ == nullptr && return this->riskLevel_ == nullptr && return this->sort_ == nullptr
        && return this->startTime_ == nullptr && return this->vpcId_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline DescribeVpcFirewallAssetListRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // assetIP Field Functions 
    bool hasAssetIP() const { return this->assetIP_ != nullptr;};
    void deleteAssetIP() { this->assetIP_ = nullptr;};
    inline string assetIP() const { DARABONBA_PTR_GET_DEFAULT(assetIP_, "") };
    inline DescribeVpcFirewallAssetListRequest& setAssetIP(string assetIP) { DARABONBA_PTR_SET_VALUE(assetIP_, assetIP) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline string currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, "") };
    inline DescribeVpcFirewallAssetListRequest& setCurrentPage(string currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline string direction() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
    inline DescribeVpcFirewallAssetListRequest& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // ecsInstanceId Field Functions 
    bool hasEcsInstanceId() const { return this->ecsInstanceId_ != nullptr;};
    void deleteEcsInstanceId() { this->ecsInstanceId_ = nullptr;};
    inline string ecsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(ecsInstanceId_, "") };
    inline DescribeVpcFirewallAssetListRequest& setEcsInstanceId(string ecsInstanceId) { DARABONBA_PTR_SET_VALUE(ecsInstanceId_, ecsInstanceId) };


    // ecsInstanceName Field Functions 
    bool hasEcsInstanceName() const { return this->ecsInstanceName_ != nullptr;};
    void deleteEcsInstanceName() { this->ecsInstanceName_ = nullptr;};
    inline string ecsInstanceName() const { DARABONBA_PTR_GET_DEFAULT(ecsInstanceName_, "") };
    inline DescribeVpcFirewallAssetListRequest& setEcsInstanceName(string ecsInstanceName) { DARABONBA_PTR_SET_VALUE(ecsInstanceName_, ecsInstanceName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeVpcFirewallAssetListRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // IPProtocol Field Functions 
    bool hasIPProtocol() const { return this->IPProtocol_ != nullptr;};
    void deleteIPProtocol() { this->IPProtocol_ = nullptr;};
    inline string IPProtocol() const { DARABONBA_PTR_GET_DEFAULT(IPProtocol_, "") };
    inline DescribeVpcFirewallAssetListRequest& setIPProtocol(string IPProtocol) { DARABONBA_PTR_SET_VALUE(IPProtocol_, IPProtocol) };


    // isAITraffic Field Functions 
    bool hasIsAITraffic() const { return this->isAITraffic_ != nullptr;};
    void deleteIsAITraffic() { this->isAITraffic_ = nullptr;};
    inline string isAITraffic() const { DARABONBA_PTR_GET_DEFAULT(isAITraffic_, "") };
    inline DescribeVpcFirewallAssetListRequest& setIsAITraffic(string isAITraffic) { DARABONBA_PTR_SET_VALUE(isAITraffic_, isAITraffic) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeVpcFirewallAssetListRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string order() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline DescribeVpcFirewallAssetListRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeVpcFirewallAssetListRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // peerVpcId Field Functions 
    bool hasPeerVpcId() const { return this->peerVpcId_ != nullptr;};
    void deletePeerVpcId() { this->peerVpcId_ = nullptr;};
    inline string peerVpcId() const { DARABONBA_PTR_GET_DEFAULT(peerVpcId_, "") };
    inline DescribeVpcFirewallAssetListRequest& setPeerVpcId(string peerVpcId) { DARABONBA_PTR_SET_VALUE(peerVpcId_, peerVpcId) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string port() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline DescribeVpcFirewallAssetListRequest& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline string riskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
    inline DescribeVpcFirewallAssetListRequest& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // sort Field Functions 
    bool hasSort() const { return this->sort_ != nullptr;};
    void deleteSort() { this->sort_ = nullptr;};
    inline string sort() const { DARABONBA_PTR_GET_DEFAULT(sort_, "") };
    inline DescribeVpcFirewallAssetListRequest& setSort(string sort) { DARABONBA_PTR_SET_VALUE(sort_, sort) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeVpcFirewallAssetListRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeVpcFirewallAssetListRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    std::shared_ptr<string> appName_ = nullptr;
    std::shared_ptr<string> assetIP_ = nullptr;
    std::shared_ptr<string> currentPage_ = nullptr;
    std::shared_ptr<string> direction_ = nullptr;
    std::shared_ptr<string> ecsInstanceId_ = nullptr;
    std::shared_ptr<string> ecsInstanceName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<string> IPProtocol_ = nullptr;
    std::shared_ptr<string> isAITraffic_ = nullptr;
    std::shared_ptr<string> lang_ = nullptr;
    std::shared_ptr<string> order_ = nullptr;
    std::shared_ptr<string> pageSize_ = nullptr;
    std::shared_ptr<string> peerVpcId_ = nullptr;
    std::shared_ptr<string> port_ = nullptr;
    std::shared_ptr<string> riskLevel_ = nullptr;
    std::shared_ptr<string> sort_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> startTime_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
