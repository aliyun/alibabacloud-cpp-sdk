// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLASSETLISTRESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLASSETLISTRESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeVpcFirewallAssetListResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcFirewallAssetListResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(AssetIP, assetIP_);
      DARABONBA_PTR_TO_JSON(AssetInstanceId, assetInstanceId_);
      DARABONBA_PTR_TO_JSON(AssetInstanceName, assetInstanceName_);
      DARABONBA_PTR_TO_JSON(InBytes, inBytes_);
      DARABONBA_PTR_TO_JSON(IpsHitCnt, ipsHitCnt_);
      DARABONBA_PTR_TO_JSON(OutBytes, outBytes_);
      DARABONBA_PTR_TO_JSON(PortList, portList_);
      DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_TO_JSON(RiskReason, riskReason_);
      DARABONBA_PTR_TO_JSON(SessionCount, sessionCount_);
      DARABONBA_PTR_TO_JSON(TotalBytes, totalBytes_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcFirewallAssetListResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetIP, assetIP_);
      DARABONBA_PTR_FROM_JSON(AssetInstanceId, assetInstanceId_);
      DARABONBA_PTR_FROM_JSON(AssetInstanceName, assetInstanceName_);
      DARABONBA_PTR_FROM_JSON(InBytes, inBytes_);
      DARABONBA_PTR_FROM_JSON(IpsHitCnt, ipsHitCnt_);
      DARABONBA_PTR_FROM_JSON(OutBytes, outBytes_);
      DARABONBA_PTR_FROM_JSON(PortList, portList_);
      DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_FROM_JSON(RiskReason, riskReason_);
      DARABONBA_PTR_FROM_JSON(SessionCount, sessionCount_);
      DARABONBA_PTR_FROM_JSON(TotalBytes, totalBytes_);
    };
    DescribeVpcFirewallAssetListResponseBodyDataList() = default ;
    DescribeVpcFirewallAssetListResponseBodyDataList(const DescribeVpcFirewallAssetListResponseBodyDataList &) = default ;
    DescribeVpcFirewallAssetListResponseBodyDataList(DescribeVpcFirewallAssetListResponseBodyDataList &&) = default ;
    DescribeVpcFirewallAssetListResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcFirewallAssetListResponseBodyDataList() = default ;
    DescribeVpcFirewallAssetListResponseBodyDataList& operator=(const DescribeVpcFirewallAssetListResponseBodyDataList &) = default ;
    DescribeVpcFirewallAssetListResponseBodyDataList& operator=(DescribeVpcFirewallAssetListResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assetIP_ == nullptr
        && return this->assetInstanceId_ == nullptr && return this->assetInstanceName_ == nullptr && return this->inBytes_ == nullptr && return this->ipsHitCnt_ == nullptr && return this->outBytes_ == nullptr
        && return this->portList_ == nullptr && return this->regionNo_ == nullptr && return this->riskLevel_ == nullptr && return this->riskReason_ == nullptr && return this->sessionCount_ == nullptr
        && return this->totalBytes_ == nullptr; };
    // assetIP Field Functions 
    bool hasAssetIP() const { return this->assetIP_ != nullptr;};
    void deleteAssetIP() { this->assetIP_ = nullptr;};
    inline string assetIP() const { DARABONBA_PTR_GET_DEFAULT(assetIP_, "") };
    inline DescribeVpcFirewallAssetListResponseBodyDataList& setAssetIP(string assetIP) { DARABONBA_PTR_SET_VALUE(assetIP_, assetIP) };


    // assetInstanceId Field Functions 
    bool hasAssetInstanceId() const { return this->assetInstanceId_ != nullptr;};
    void deleteAssetInstanceId() { this->assetInstanceId_ = nullptr;};
    inline string assetInstanceId() const { DARABONBA_PTR_GET_DEFAULT(assetInstanceId_, "") };
    inline DescribeVpcFirewallAssetListResponseBodyDataList& setAssetInstanceId(string assetInstanceId) { DARABONBA_PTR_SET_VALUE(assetInstanceId_, assetInstanceId) };


    // assetInstanceName Field Functions 
    bool hasAssetInstanceName() const { return this->assetInstanceName_ != nullptr;};
    void deleteAssetInstanceName() { this->assetInstanceName_ = nullptr;};
    inline string assetInstanceName() const { DARABONBA_PTR_GET_DEFAULT(assetInstanceName_, "") };
    inline DescribeVpcFirewallAssetListResponseBodyDataList& setAssetInstanceName(string assetInstanceName) { DARABONBA_PTR_SET_VALUE(assetInstanceName_, assetInstanceName) };


    // inBytes Field Functions 
    bool hasInBytes() const { return this->inBytes_ != nullptr;};
    void deleteInBytes() { this->inBytes_ = nullptr;};
    inline int64_t inBytes() const { DARABONBA_PTR_GET_DEFAULT(inBytes_, 0L) };
    inline DescribeVpcFirewallAssetListResponseBodyDataList& setInBytes(int64_t inBytes) { DARABONBA_PTR_SET_VALUE(inBytes_, inBytes) };


    // ipsHitCnt Field Functions 
    bool hasIpsHitCnt() const { return this->ipsHitCnt_ != nullptr;};
    void deleteIpsHitCnt() { this->ipsHitCnt_ = nullptr;};
    inline int64_t ipsHitCnt() const { DARABONBA_PTR_GET_DEFAULT(ipsHitCnt_, 0L) };
    inline DescribeVpcFirewallAssetListResponseBodyDataList& setIpsHitCnt(int64_t ipsHitCnt) { DARABONBA_PTR_SET_VALUE(ipsHitCnt_, ipsHitCnt) };


    // outBytes Field Functions 
    bool hasOutBytes() const { return this->outBytes_ != nullptr;};
    void deleteOutBytes() { this->outBytes_ = nullptr;};
    inline int64_t outBytes() const { DARABONBA_PTR_GET_DEFAULT(outBytes_, 0L) };
    inline DescribeVpcFirewallAssetListResponseBodyDataList& setOutBytes(int64_t outBytes) { DARABONBA_PTR_SET_VALUE(outBytes_, outBytes) };


    // portList Field Functions 
    bool hasPortList() const { return this->portList_ != nullptr;};
    void deletePortList() { this->portList_ = nullptr;};
    inline const vector<string> & portList() const { DARABONBA_PTR_GET_CONST(portList_, vector<string>) };
    inline vector<string> portList() { DARABONBA_PTR_GET(portList_, vector<string>) };
    inline DescribeVpcFirewallAssetListResponseBodyDataList& setPortList(const vector<string> & portList) { DARABONBA_PTR_SET_VALUE(portList_, portList) };
    inline DescribeVpcFirewallAssetListResponseBodyDataList& setPortList(vector<string> && portList) { DARABONBA_PTR_SET_RVALUE(portList_, portList) };


    // regionNo Field Functions 
    bool hasRegionNo() const { return this->regionNo_ != nullptr;};
    void deleteRegionNo() { this->regionNo_ = nullptr;};
    inline string regionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
    inline DescribeVpcFirewallAssetListResponseBodyDataList& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline int32_t riskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, 0) };
    inline DescribeVpcFirewallAssetListResponseBodyDataList& setRiskLevel(int32_t riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // riskReason Field Functions 
    bool hasRiskReason() const { return this->riskReason_ != nullptr;};
    void deleteRiskReason() { this->riskReason_ = nullptr;};
    inline string riskReason() const { DARABONBA_PTR_GET_DEFAULT(riskReason_, "") };
    inline DescribeVpcFirewallAssetListResponseBodyDataList& setRiskReason(string riskReason) { DARABONBA_PTR_SET_VALUE(riskReason_, riskReason) };


    // sessionCount Field Functions 
    bool hasSessionCount() const { return this->sessionCount_ != nullptr;};
    void deleteSessionCount() { this->sessionCount_ = nullptr;};
    inline int64_t sessionCount() const { DARABONBA_PTR_GET_DEFAULT(sessionCount_, 0L) };
    inline DescribeVpcFirewallAssetListResponseBodyDataList& setSessionCount(int64_t sessionCount) { DARABONBA_PTR_SET_VALUE(sessionCount_, sessionCount) };


    // totalBytes Field Functions 
    bool hasTotalBytes() const { return this->totalBytes_ != nullptr;};
    void deleteTotalBytes() { this->totalBytes_ = nullptr;};
    inline int64_t totalBytes() const { DARABONBA_PTR_GET_DEFAULT(totalBytes_, 0L) };
    inline DescribeVpcFirewallAssetListResponseBodyDataList& setTotalBytes(int64_t totalBytes) { DARABONBA_PTR_SET_VALUE(totalBytes_, totalBytes) };


  protected:
    std::shared_ptr<string> assetIP_ = nullptr;
    std::shared_ptr<string> assetInstanceId_ = nullptr;
    std::shared_ptr<string> assetInstanceName_ = nullptr;
    std::shared_ptr<int64_t> inBytes_ = nullptr;
    std::shared_ptr<int64_t> ipsHitCnt_ = nullptr;
    std::shared_ptr<int64_t> outBytes_ = nullptr;
    std::shared_ptr<vector<string>> portList_ = nullptr;
    std::shared_ptr<string> regionNo_ = nullptr;
    std::shared_ptr<int32_t> riskLevel_ = nullptr;
    std::shared_ptr<string> riskReason_ = nullptr;
    std::shared_ptr<int64_t> sessionCount_ = nullptr;
    std::shared_ptr<int64_t> totalBytes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
