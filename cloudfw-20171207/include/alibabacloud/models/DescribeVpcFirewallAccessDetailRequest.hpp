// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLACCESSDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLACCESSDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeVpcFirewallAccessDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcFirewallAccessDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AssetIP, assetIP_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Direction, direction_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(IPProtocol, IPProtocol_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PeerAssetIP, peerAssetIP_);
      DARABONBA_PTR_TO_JSON(PeerAssetInstanceId, peerAssetInstanceId_);
      DARABONBA_PTR_TO_JSON(PeerAssetInstanceName, peerAssetInstanceName_);
      DARABONBA_PTR_TO_JSON(PeerVpcId, peerVpcId_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_TO_JSON(Sort, sort_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcFirewallAccessDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetIP, assetIP_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Direction, direction_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(IPProtocol, IPProtocol_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PeerAssetIP, peerAssetIP_);
      DARABONBA_PTR_FROM_JSON(PeerAssetInstanceId, peerAssetInstanceId_);
      DARABONBA_PTR_FROM_JSON(PeerAssetInstanceName, peerAssetInstanceName_);
      DARABONBA_PTR_FROM_JSON(PeerVpcId, peerVpcId_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_FROM_JSON(Sort, sort_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    DescribeVpcFirewallAccessDetailRequest() = default ;
    DescribeVpcFirewallAccessDetailRequest(const DescribeVpcFirewallAccessDetailRequest &) = default ;
    DescribeVpcFirewallAccessDetailRequest(DescribeVpcFirewallAccessDetailRequest &&) = default ;
    DescribeVpcFirewallAccessDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcFirewallAccessDetailRequest() = default ;
    DescribeVpcFirewallAccessDetailRequest& operator=(const DescribeVpcFirewallAccessDetailRequest &) = default ;
    DescribeVpcFirewallAccessDetailRequest& operator=(DescribeVpcFirewallAccessDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assetIP_ == nullptr
        && return this->currentPage_ == nullptr && return this->direction_ == nullptr && return this->endTime_ == nullptr && return this->IPProtocol_ == nullptr && return this->lang_ == nullptr
        && return this->order_ == nullptr && return this->pageSize_ == nullptr && return this->peerAssetIP_ == nullptr && return this->peerAssetInstanceId_ == nullptr && return this->peerAssetInstanceName_ == nullptr
        && return this->peerVpcId_ == nullptr && return this->port_ == nullptr && return this->riskLevel_ == nullptr && return this->sort_ == nullptr && return this->startTime_ == nullptr
        && return this->vpcId_ == nullptr; };
    // assetIP Field Functions 
    bool hasAssetIP() const { return this->assetIP_ != nullptr;};
    void deleteAssetIP() { this->assetIP_ = nullptr;};
    inline string assetIP() const { DARABONBA_PTR_GET_DEFAULT(assetIP_, "") };
    inline DescribeVpcFirewallAccessDetailRequest& setAssetIP(string assetIP) { DARABONBA_PTR_SET_VALUE(assetIP_, assetIP) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline string currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, "") };
    inline DescribeVpcFirewallAccessDetailRequest& setCurrentPage(string currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline string direction() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
    inline DescribeVpcFirewallAccessDetailRequest& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeVpcFirewallAccessDetailRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // IPProtocol Field Functions 
    bool hasIPProtocol() const { return this->IPProtocol_ != nullptr;};
    void deleteIPProtocol() { this->IPProtocol_ = nullptr;};
    inline string IPProtocol() const { DARABONBA_PTR_GET_DEFAULT(IPProtocol_, "") };
    inline DescribeVpcFirewallAccessDetailRequest& setIPProtocol(string IPProtocol) { DARABONBA_PTR_SET_VALUE(IPProtocol_, IPProtocol) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeVpcFirewallAccessDetailRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string order() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline DescribeVpcFirewallAccessDetailRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeVpcFirewallAccessDetailRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // peerAssetIP Field Functions 
    bool hasPeerAssetIP() const { return this->peerAssetIP_ != nullptr;};
    void deletePeerAssetIP() { this->peerAssetIP_ = nullptr;};
    inline string peerAssetIP() const { DARABONBA_PTR_GET_DEFAULT(peerAssetIP_, "") };
    inline DescribeVpcFirewallAccessDetailRequest& setPeerAssetIP(string peerAssetIP) { DARABONBA_PTR_SET_VALUE(peerAssetIP_, peerAssetIP) };


    // peerAssetInstanceId Field Functions 
    bool hasPeerAssetInstanceId() const { return this->peerAssetInstanceId_ != nullptr;};
    void deletePeerAssetInstanceId() { this->peerAssetInstanceId_ = nullptr;};
    inline string peerAssetInstanceId() const { DARABONBA_PTR_GET_DEFAULT(peerAssetInstanceId_, "") };
    inline DescribeVpcFirewallAccessDetailRequest& setPeerAssetInstanceId(string peerAssetInstanceId) { DARABONBA_PTR_SET_VALUE(peerAssetInstanceId_, peerAssetInstanceId) };


    // peerAssetInstanceName Field Functions 
    bool hasPeerAssetInstanceName() const { return this->peerAssetInstanceName_ != nullptr;};
    void deletePeerAssetInstanceName() { this->peerAssetInstanceName_ = nullptr;};
    inline string peerAssetInstanceName() const { DARABONBA_PTR_GET_DEFAULT(peerAssetInstanceName_, "") };
    inline DescribeVpcFirewallAccessDetailRequest& setPeerAssetInstanceName(string peerAssetInstanceName) { DARABONBA_PTR_SET_VALUE(peerAssetInstanceName_, peerAssetInstanceName) };


    // peerVpcId Field Functions 
    bool hasPeerVpcId() const { return this->peerVpcId_ != nullptr;};
    void deletePeerVpcId() { this->peerVpcId_ = nullptr;};
    inline string peerVpcId() const { DARABONBA_PTR_GET_DEFAULT(peerVpcId_, "") };
    inline DescribeVpcFirewallAccessDetailRequest& setPeerVpcId(string peerVpcId) { DARABONBA_PTR_SET_VALUE(peerVpcId_, peerVpcId) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string port() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline DescribeVpcFirewallAccessDetailRequest& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline string riskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
    inline DescribeVpcFirewallAccessDetailRequest& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // sort Field Functions 
    bool hasSort() const { return this->sort_ != nullptr;};
    void deleteSort() { this->sort_ = nullptr;};
    inline string sort() const { DARABONBA_PTR_GET_DEFAULT(sort_, "") };
    inline DescribeVpcFirewallAccessDetailRequest& setSort(string sort) { DARABONBA_PTR_SET_VALUE(sort_, sort) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeVpcFirewallAccessDetailRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeVpcFirewallAccessDetailRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    std::shared_ptr<string> assetIP_ = nullptr;
    std::shared_ptr<string> currentPage_ = nullptr;
    std::shared_ptr<string> direction_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<string> IPProtocol_ = nullptr;
    std::shared_ptr<string> lang_ = nullptr;
    std::shared_ptr<string> order_ = nullptr;
    std::shared_ptr<string> pageSize_ = nullptr;
    std::shared_ptr<string> peerAssetIP_ = nullptr;
    std::shared_ptr<string> peerAssetInstanceId_ = nullptr;
    std::shared_ptr<string> peerAssetInstanceName_ = nullptr;
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
