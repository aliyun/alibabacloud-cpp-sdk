// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINTERNETOPENIPRESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINTERNETOPENIPRESPONSEBODYDATALIST_HPP_
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
  class DescribeInternetOpenIpResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInternetOpenIpResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(AclRecommendDetail, aclRecommendDetail_);
      DARABONBA_PTR_TO_JSON(AssetsInstanceId, assetsInstanceId_);
      DARABONBA_PTR_TO_JSON(AssetsName, assetsName_);
      DARABONBA_PTR_TO_JSON(AssetsType, assetsType_);
      DARABONBA_PTR_TO_JSON(DetailNum, detailNum_);
      DARABONBA_PTR_TO_JSON(HasAclRecommend, hasAclRecommend_);
      DARABONBA_PTR_TO_JSON(InBytes, inBytes_);
      DARABONBA_PTR_TO_JSON(MemberUid, memberUid_);
      DARABONBA_PTR_TO_JSON(OutBytes, outBytes_);
      DARABONBA_PTR_TO_JSON(PortList, portList_);
      DARABONBA_PTR_TO_JSON(PublicIp, publicIp_);
      DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_TO_JSON(RiskReason, riskReason_);
      DARABONBA_PTR_TO_JSON(ServiceNameList, serviceNameList_);
      DARABONBA_PTR_TO_JSON(SrcIpCnt, srcIpCnt_);
      DARABONBA_PTR_TO_JSON(TotalBytes, totalBytes_);
      DARABONBA_PTR_TO_JSON(TotalReplyBytes, totalReplyBytes_);
      DARABONBA_PTR_TO_JSON(TrafficPercent1Day, trafficPercent1Day_);
      DARABONBA_PTR_TO_JSON(TrafficPercent30Day, trafficPercent30Day_);
      DARABONBA_PTR_TO_JSON(TrafficPercent7Day, trafficPercent7Day_);
      DARABONBA_PTR_TO_JSON(UnknownReason, unknownReason_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInternetOpenIpResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(AclRecommendDetail, aclRecommendDetail_);
      DARABONBA_PTR_FROM_JSON(AssetsInstanceId, assetsInstanceId_);
      DARABONBA_PTR_FROM_JSON(AssetsName, assetsName_);
      DARABONBA_PTR_FROM_JSON(AssetsType, assetsType_);
      DARABONBA_PTR_FROM_JSON(DetailNum, detailNum_);
      DARABONBA_PTR_FROM_JSON(HasAclRecommend, hasAclRecommend_);
      DARABONBA_PTR_FROM_JSON(InBytes, inBytes_);
      DARABONBA_PTR_FROM_JSON(MemberUid, memberUid_);
      DARABONBA_PTR_FROM_JSON(OutBytes, outBytes_);
      DARABONBA_PTR_FROM_JSON(PortList, portList_);
      DARABONBA_PTR_FROM_JSON(PublicIp, publicIp_);
      DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_FROM_JSON(RiskReason, riskReason_);
      DARABONBA_PTR_FROM_JSON(ServiceNameList, serviceNameList_);
      DARABONBA_PTR_FROM_JSON(SrcIpCnt, srcIpCnt_);
      DARABONBA_PTR_FROM_JSON(TotalBytes, totalBytes_);
      DARABONBA_PTR_FROM_JSON(TotalReplyBytes, totalReplyBytes_);
      DARABONBA_PTR_FROM_JSON(TrafficPercent1Day, trafficPercent1Day_);
      DARABONBA_PTR_FROM_JSON(TrafficPercent30Day, trafficPercent30Day_);
      DARABONBA_PTR_FROM_JSON(TrafficPercent7Day, trafficPercent7Day_);
      DARABONBA_PTR_FROM_JSON(UnknownReason, unknownReason_);
    };
    DescribeInternetOpenIpResponseBodyDataList() = default ;
    DescribeInternetOpenIpResponseBodyDataList(const DescribeInternetOpenIpResponseBodyDataList &) = default ;
    DescribeInternetOpenIpResponseBodyDataList(DescribeInternetOpenIpResponseBodyDataList &&) = default ;
    DescribeInternetOpenIpResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInternetOpenIpResponseBodyDataList() = default ;
    DescribeInternetOpenIpResponseBodyDataList& operator=(const DescribeInternetOpenIpResponseBodyDataList &) = default ;
    DescribeInternetOpenIpResponseBodyDataList& operator=(DescribeInternetOpenIpResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aclRecommendDetail_ != nullptr
        && this->assetsInstanceId_ != nullptr && this->assetsName_ != nullptr && this->assetsType_ != nullptr && this->detailNum_ != nullptr && this->hasAclRecommend_ != nullptr
        && this->inBytes_ != nullptr && this->memberUid_ != nullptr && this->outBytes_ != nullptr && this->portList_ != nullptr && this->publicIp_ != nullptr
        && this->regionNo_ != nullptr && this->riskLevel_ != nullptr && this->riskReason_ != nullptr && this->serviceNameList_ != nullptr && this->srcIpCnt_ != nullptr
        && this->totalBytes_ != nullptr && this->totalReplyBytes_ != nullptr && this->trafficPercent1Day_ != nullptr && this->trafficPercent30Day_ != nullptr && this->trafficPercent7Day_ != nullptr
        && this->unknownReason_ != nullptr; };
    // aclRecommendDetail Field Functions 
    bool hasAclRecommendDetail() const { return this->aclRecommendDetail_ != nullptr;};
    void deleteAclRecommendDetail() { this->aclRecommendDetail_ = nullptr;};
    inline string aclRecommendDetail() const { DARABONBA_PTR_GET_DEFAULT(aclRecommendDetail_, "") };
    inline DescribeInternetOpenIpResponseBodyDataList& setAclRecommendDetail(string aclRecommendDetail) { DARABONBA_PTR_SET_VALUE(aclRecommendDetail_, aclRecommendDetail) };


    // assetsInstanceId Field Functions 
    bool hasAssetsInstanceId() const { return this->assetsInstanceId_ != nullptr;};
    void deleteAssetsInstanceId() { this->assetsInstanceId_ = nullptr;};
    inline string assetsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(assetsInstanceId_, "") };
    inline DescribeInternetOpenIpResponseBodyDataList& setAssetsInstanceId(string assetsInstanceId) { DARABONBA_PTR_SET_VALUE(assetsInstanceId_, assetsInstanceId) };


    // assetsName Field Functions 
    bool hasAssetsName() const { return this->assetsName_ != nullptr;};
    void deleteAssetsName() { this->assetsName_ = nullptr;};
    inline string assetsName() const { DARABONBA_PTR_GET_DEFAULT(assetsName_, "") };
    inline DescribeInternetOpenIpResponseBodyDataList& setAssetsName(string assetsName) { DARABONBA_PTR_SET_VALUE(assetsName_, assetsName) };


    // assetsType Field Functions 
    bool hasAssetsType() const { return this->assetsType_ != nullptr;};
    void deleteAssetsType() { this->assetsType_ = nullptr;};
    inline string assetsType() const { DARABONBA_PTR_GET_DEFAULT(assetsType_, "") };
    inline DescribeInternetOpenIpResponseBodyDataList& setAssetsType(string assetsType) { DARABONBA_PTR_SET_VALUE(assetsType_, assetsType) };


    // detailNum Field Functions 
    bool hasDetailNum() const { return this->detailNum_ != nullptr;};
    void deleteDetailNum() { this->detailNum_ = nullptr;};
    inline int32_t detailNum() const { DARABONBA_PTR_GET_DEFAULT(detailNum_, 0) };
    inline DescribeInternetOpenIpResponseBodyDataList& setDetailNum(int32_t detailNum) { DARABONBA_PTR_SET_VALUE(detailNum_, detailNum) };


    // hasAclRecommend Field Functions 
    bool hasHasAclRecommend() const { return this->hasAclRecommend_ != nullptr;};
    void deleteHasAclRecommend() { this->hasAclRecommend_ = nullptr;};
    inline bool hasAclRecommend() const { DARABONBA_PTR_GET_DEFAULT(hasAclRecommend_, false) };
    inline DescribeInternetOpenIpResponseBodyDataList& setHasAclRecommend(bool hasAclRecommend) { DARABONBA_PTR_SET_VALUE(hasAclRecommend_, hasAclRecommend) };


    // inBytes Field Functions 
    bool hasInBytes() const { return this->inBytes_ != nullptr;};
    void deleteInBytes() { this->inBytes_ = nullptr;};
    inline int64_t inBytes() const { DARABONBA_PTR_GET_DEFAULT(inBytes_, 0L) };
    inline DescribeInternetOpenIpResponseBodyDataList& setInBytes(int64_t inBytes) { DARABONBA_PTR_SET_VALUE(inBytes_, inBytes) };


    // memberUid Field Functions 
    bool hasMemberUid() const { return this->memberUid_ != nullptr;};
    void deleteMemberUid() { this->memberUid_ = nullptr;};
    inline int64_t memberUid() const { DARABONBA_PTR_GET_DEFAULT(memberUid_, 0L) };
    inline DescribeInternetOpenIpResponseBodyDataList& setMemberUid(int64_t memberUid) { DARABONBA_PTR_SET_VALUE(memberUid_, memberUid) };


    // outBytes Field Functions 
    bool hasOutBytes() const { return this->outBytes_ != nullptr;};
    void deleteOutBytes() { this->outBytes_ = nullptr;};
    inline int64_t outBytes() const { DARABONBA_PTR_GET_DEFAULT(outBytes_, 0L) };
    inline DescribeInternetOpenIpResponseBodyDataList& setOutBytes(int64_t outBytes) { DARABONBA_PTR_SET_VALUE(outBytes_, outBytes) };


    // portList Field Functions 
    bool hasPortList() const { return this->portList_ != nullptr;};
    void deletePortList() { this->portList_ = nullptr;};
    inline const vector<string> & portList() const { DARABONBA_PTR_GET_CONST(portList_, vector<string>) };
    inline vector<string> portList() { DARABONBA_PTR_GET(portList_, vector<string>) };
    inline DescribeInternetOpenIpResponseBodyDataList& setPortList(const vector<string> & portList) { DARABONBA_PTR_SET_VALUE(portList_, portList) };
    inline DescribeInternetOpenIpResponseBodyDataList& setPortList(vector<string> && portList) { DARABONBA_PTR_SET_RVALUE(portList_, portList) };


    // publicIp Field Functions 
    bool hasPublicIp() const { return this->publicIp_ != nullptr;};
    void deletePublicIp() { this->publicIp_ = nullptr;};
    inline string publicIp() const { DARABONBA_PTR_GET_DEFAULT(publicIp_, "") };
    inline DescribeInternetOpenIpResponseBodyDataList& setPublicIp(string publicIp) { DARABONBA_PTR_SET_VALUE(publicIp_, publicIp) };


    // regionNo Field Functions 
    bool hasRegionNo() const { return this->regionNo_ != nullptr;};
    void deleteRegionNo() { this->regionNo_ = nullptr;};
    inline string regionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
    inline DescribeInternetOpenIpResponseBodyDataList& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline int32_t riskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, 0) };
    inline DescribeInternetOpenIpResponseBodyDataList& setRiskLevel(int32_t riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // riskReason Field Functions 
    bool hasRiskReason() const { return this->riskReason_ != nullptr;};
    void deleteRiskReason() { this->riskReason_ = nullptr;};
    inline string riskReason() const { DARABONBA_PTR_GET_DEFAULT(riskReason_, "") };
    inline DescribeInternetOpenIpResponseBodyDataList& setRiskReason(string riskReason) { DARABONBA_PTR_SET_VALUE(riskReason_, riskReason) };


    // serviceNameList Field Functions 
    bool hasServiceNameList() const { return this->serviceNameList_ != nullptr;};
    void deleteServiceNameList() { this->serviceNameList_ = nullptr;};
    inline const vector<string> & serviceNameList() const { DARABONBA_PTR_GET_CONST(serviceNameList_, vector<string>) };
    inline vector<string> serviceNameList() { DARABONBA_PTR_GET(serviceNameList_, vector<string>) };
    inline DescribeInternetOpenIpResponseBodyDataList& setServiceNameList(const vector<string> & serviceNameList) { DARABONBA_PTR_SET_VALUE(serviceNameList_, serviceNameList) };
    inline DescribeInternetOpenIpResponseBodyDataList& setServiceNameList(vector<string> && serviceNameList) { DARABONBA_PTR_SET_RVALUE(serviceNameList_, serviceNameList) };


    // srcIpCnt Field Functions 
    bool hasSrcIpCnt() const { return this->srcIpCnt_ != nullptr;};
    void deleteSrcIpCnt() { this->srcIpCnt_ = nullptr;};
    inline int64_t srcIpCnt() const { DARABONBA_PTR_GET_DEFAULT(srcIpCnt_, 0L) };
    inline DescribeInternetOpenIpResponseBodyDataList& setSrcIpCnt(int64_t srcIpCnt) { DARABONBA_PTR_SET_VALUE(srcIpCnt_, srcIpCnt) };


    // totalBytes Field Functions 
    bool hasTotalBytes() const { return this->totalBytes_ != nullptr;};
    void deleteTotalBytes() { this->totalBytes_ = nullptr;};
    inline int64_t totalBytes() const { DARABONBA_PTR_GET_DEFAULT(totalBytes_, 0L) };
    inline DescribeInternetOpenIpResponseBodyDataList& setTotalBytes(int64_t totalBytes) { DARABONBA_PTR_SET_VALUE(totalBytes_, totalBytes) };


    // totalReplyBytes Field Functions 
    bool hasTotalReplyBytes() const { return this->totalReplyBytes_ != nullptr;};
    void deleteTotalReplyBytes() { this->totalReplyBytes_ = nullptr;};
    inline int64_t totalReplyBytes() const { DARABONBA_PTR_GET_DEFAULT(totalReplyBytes_, 0L) };
    inline DescribeInternetOpenIpResponseBodyDataList& setTotalReplyBytes(int64_t totalReplyBytes) { DARABONBA_PTR_SET_VALUE(totalReplyBytes_, totalReplyBytes) };


    // trafficPercent1Day Field Functions 
    bool hasTrafficPercent1Day() const { return this->trafficPercent1Day_ != nullptr;};
    void deleteTrafficPercent1Day() { this->trafficPercent1Day_ = nullptr;};
    inline string trafficPercent1Day() const { DARABONBA_PTR_GET_DEFAULT(trafficPercent1Day_, "") };
    inline DescribeInternetOpenIpResponseBodyDataList& setTrafficPercent1Day(string trafficPercent1Day) { DARABONBA_PTR_SET_VALUE(trafficPercent1Day_, trafficPercent1Day) };


    // trafficPercent30Day Field Functions 
    bool hasTrafficPercent30Day() const { return this->trafficPercent30Day_ != nullptr;};
    void deleteTrafficPercent30Day() { this->trafficPercent30Day_ = nullptr;};
    inline string trafficPercent30Day() const { DARABONBA_PTR_GET_DEFAULT(trafficPercent30Day_, "") };
    inline DescribeInternetOpenIpResponseBodyDataList& setTrafficPercent30Day(string trafficPercent30Day) { DARABONBA_PTR_SET_VALUE(trafficPercent30Day_, trafficPercent30Day) };


    // trafficPercent7Day Field Functions 
    bool hasTrafficPercent7Day() const { return this->trafficPercent7Day_ != nullptr;};
    void deleteTrafficPercent7Day() { this->trafficPercent7Day_ = nullptr;};
    inline string trafficPercent7Day() const { DARABONBA_PTR_GET_DEFAULT(trafficPercent7Day_, "") };
    inline DescribeInternetOpenIpResponseBodyDataList& setTrafficPercent7Day(string trafficPercent7Day) { DARABONBA_PTR_SET_VALUE(trafficPercent7Day_, trafficPercent7Day) };


    // unknownReason Field Functions 
    bool hasUnknownReason() const { return this->unknownReason_ != nullptr;};
    void deleteUnknownReason() { this->unknownReason_ = nullptr;};
    inline const vector<string> & unknownReason() const { DARABONBA_PTR_GET_CONST(unknownReason_, vector<string>) };
    inline vector<string> unknownReason() { DARABONBA_PTR_GET(unknownReason_, vector<string>) };
    inline DescribeInternetOpenIpResponseBodyDataList& setUnknownReason(const vector<string> & unknownReason) { DARABONBA_PTR_SET_VALUE(unknownReason_, unknownReason) };
    inline DescribeInternetOpenIpResponseBodyDataList& setUnknownReason(vector<string> && unknownReason) { DARABONBA_PTR_SET_RVALUE(unknownReason_, unknownReason) };


  protected:
    // The reason why recommended intelligent policies are unavailable. Valid values:
    // 
    // *   No recommended intelligent policies are available.
    // *   This feature is available only to some users.
    // *   The policy configuration has been modified. No recommended intelligent policies are available.
    // *   The recommended intelligent policies have been configured. No new recommended intelligent policies are available.
    std::shared_ptr<string> aclRecommendDetail_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> assetsInstanceId_ = nullptr;
    // The instance name.
    std::shared_ptr<string> assetsName_ = nullptr;
    // The asset type of the instance.
    std::shared_ptr<string> assetsType_ = nullptr;
    // The total number of ports.
    std::shared_ptr<int32_t> detailNum_ = nullptr;
    // Specifies whether an access control policy is recommended. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> hasAclRecommend_ = nullptr;
    // The inbound network throughput, which indicates the total number of bytes that are sent inbound. Unit: bytes.
    std::shared_ptr<int64_t> inBytes_ = nullptr;
    // The UID of the member that is managed by your Alibaba Cloud account.
    std::shared_ptr<int64_t> memberUid_ = nullptr;
    // The outbound network throughput, which indicates the total number of bytes that are sent outbound. Unit: bytes.
    std::shared_ptr<int64_t> outBytes_ = nullptr;
    // The list of ports.
    std::shared_ptr<vector<string>> portList_ = nullptr;
    // The public IP address of the instance.
    std::shared_ptr<string> publicIp_ = nullptr;
    // The region ID of the instance.
    std::shared_ptr<string> regionNo_ = nullptr;
    // The risk level. Valid values:
    // 
    // *   **3**: high risk
    // *   **2**: medium risk
    // *   **1**: low risk
    // *   **0**: no risk
    std::shared_ptr<int32_t> riskLevel_ = nullptr;
    // The reason for the risk.
    std::shared_ptr<string> riskReason_ = nullptr;
    // The list of applications.
    std::shared_ptr<vector<string>> serviceNameList_ = nullptr;
    // Number of source IPs.
    std::shared_ptr<int64_t> srcIpCnt_ = nullptr;
    // The total inbound and outbound network throughput, which indicates the total number of bytes that are sent inbound and outbound. Unit: bytes.
    std::shared_ptr<int64_t> totalBytes_ = nullptr;
    // Outbound traffic in the last 7 days.
    std::shared_ptr<int64_t> totalReplyBytes_ = nullptr;
    // For detailed traffic information, see the TotalBytes field.
    std::shared_ptr<string> trafficPercent1Day_ = nullptr;
    // For detailed traffic information, see the TotalBytes field.
    std::shared_ptr<string> trafficPercent30Day_ = nullptr;
    // For detailed traffic information, see the TotalBytes field.
    std::shared_ptr<string> trafficPercent7Day_ = nullptr;
    // Reasons for not analyzing the protocol when the protocol is identified as Unknown.
    std::shared_ptr<vector<string>> unknownReason_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
