// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINTERNETOPENIPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINTERNETOPENIPRESPONSEBODY_HPP_
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
  class DescribeInternetOpenIpResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInternetOpenIpResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataList, dataList_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInternetOpenIpResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataList, dataList_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeInternetOpenIpResponseBody() = default ;
    DescribeInternetOpenIpResponseBody(const DescribeInternetOpenIpResponseBody &) = default ;
    DescribeInternetOpenIpResponseBody(DescribeInternetOpenIpResponseBody &&) = default ;
    DescribeInternetOpenIpResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInternetOpenIpResponseBody() = default ;
    DescribeInternetOpenIpResponseBody& operator=(const DescribeInternetOpenIpResponseBody &) = default ;
    DescribeInternetOpenIpResponseBody& operator=(DescribeInternetOpenIpResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PageInfo() = default ;
      PageInfo(const PageInfo &) = default ;
      PageInfo(PageInfo &&) = default ;
      PageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageInfo() = default ;
      PageInfo& operator=(const PageInfo &) = default ;
      PageInfo& operator=(PageInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline PageInfo& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PageInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The page number.
      shared_ptr<int32_t> currentPage_ {};
      // The number of entries per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    class DataList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataList& obj) { 
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
      friend void from_json(const Darabonba::Json& j, DataList& obj) { 
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
      DataList() = default ;
      DataList(const DataList &) = default ;
      DataList(DataList &&) = default ;
      DataList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DataList() = default ;
      DataList& operator=(const DataList &) = default ;
      DataList& operator=(DataList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->aclRecommendDetail_ == nullptr
        && this->assetsInstanceId_ == nullptr && this->assetsName_ == nullptr && this->assetsType_ == nullptr && this->detailNum_ == nullptr && this->hasAclRecommend_ == nullptr
        && this->inBytes_ == nullptr && this->memberUid_ == nullptr && this->outBytes_ == nullptr && this->portList_ == nullptr && this->publicIp_ == nullptr
        && this->regionNo_ == nullptr && this->riskLevel_ == nullptr && this->riskReason_ == nullptr && this->serviceNameList_ == nullptr && this->srcIpCnt_ == nullptr
        && this->totalBytes_ == nullptr && this->totalReplyBytes_ == nullptr && this->trafficPercent1Day_ == nullptr && this->trafficPercent30Day_ == nullptr && this->trafficPercent7Day_ == nullptr
        && this->unknownReason_ == nullptr; };
      // aclRecommendDetail Field Functions 
      bool hasAclRecommendDetail() const { return this->aclRecommendDetail_ != nullptr;};
      void deleteAclRecommendDetail() { this->aclRecommendDetail_ = nullptr;};
      inline string getAclRecommendDetail() const { DARABONBA_PTR_GET_DEFAULT(aclRecommendDetail_, "") };
      inline DataList& setAclRecommendDetail(string aclRecommendDetail) { DARABONBA_PTR_SET_VALUE(aclRecommendDetail_, aclRecommendDetail) };


      // assetsInstanceId Field Functions 
      bool hasAssetsInstanceId() const { return this->assetsInstanceId_ != nullptr;};
      void deleteAssetsInstanceId() { this->assetsInstanceId_ = nullptr;};
      inline string getAssetsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(assetsInstanceId_, "") };
      inline DataList& setAssetsInstanceId(string assetsInstanceId) { DARABONBA_PTR_SET_VALUE(assetsInstanceId_, assetsInstanceId) };


      // assetsName Field Functions 
      bool hasAssetsName() const { return this->assetsName_ != nullptr;};
      void deleteAssetsName() { this->assetsName_ = nullptr;};
      inline string getAssetsName() const { DARABONBA_PTR_GET_DEFAULT(assetsName_, "") };
      inline DataList& setAssetsName(string assetsName) { DARABONBA_PTR_SET_VALUE(assetsName_, assetsName) };


      // assetsType Field Functions 
      bool hasAssetsType() const { return this->assetsType_ != nullptr;};
      void deleteAssetsType() { this->assetsType_ = nullptr;};
      inline string getAssetsType() const { DARABONBA_PTR_GET_DEFAULT(assetsType_, "") };
      inline DataList& setAssetsType(string assetsType) { DARABONBA_PTR_SET_VALUE(assetsType_, assetsType) };


      // detailNum Field Functions 
      bool hasDetailNum() const { return this->detailNum_ != nullptr;};
      void deleteDetailNum() { this->detailNum_ = nullptr;};
      inline int32_t getDetailNum() const { DARABONBA_PTR_GET_DEFAULT(detailNum_, 0) };
      inline DataList& setDetailNum(int32_t detailNum) { DARABONBA_PTR_SET_VALUE(detailNum_, detailNum) };


      // hasAclRecommend Field Functions 
      bool hasHasAclRecommend() const { return this->hasAclRecommend_ != nullptr;};
      void deleteHasAclRecommend() { this->hasAclRecommend_ = nullptr;};
      inline bool getHasAclRecommend() const { DARABONBA_PTR_GET_DEFAULT(hasAclRecommend_, false) };
      inline DataList& setHasAclRecommend(bool hasAclRecommend) { DARABONBA_PTR_SET_VALUE(hasAclRecommend_, hasAclRecommend) };


      // inBytes Field Functions 
      bool hasInBytes() const { return this->inBytes_ != nullptr;};
      void deleteInBytes() { this->inBytes_ = nullptr;};
      inline int64_t getInBytes() const { DARABONBA_PTR_GET_DEFAULT(inBytes_, 0L) };
      inline DataList& setInBytes(int64_t inBytes) { DARABONBA_PTR_SET_VALUE(inBytes_, inBytes) };


      // memberUid Field Functions 
      bool hasMemberUid() const { return this->memberUid_ != nullptr;};
      void deleteMemberUid() { this->memberUid_ = nullptr;};
      inline int64_t getMemberUid() const { DARABONBA_PTR_GET_DEFAULT(memberUid_, 0L) };
      inline DataList& setMemberUid(int64_t memberUid) { DARABONBA_PTR_SET_VALUE(memberUid_, memberUid) };


      // outBytes Field Functions 
      bool hasOutBytes() const { return this->outBytes_ != nullptr;};
      void deleteOutBytes() { this->outBytes_ = nullptr;};
      inline int64_t getOutBytes() const { DARABONBA_PTR_GET_DEFAULT(outBytes_, 0L) };
      inline DataList& setOutBytes(int64_t outBytes) { DARABONBA_PTR_SET_VALUE(outBytes_, outBytes) };


      // portList Field Functions 
      bool hasPortList() const { return this->portList_ != nullptr;};
      void deletePortList() { this->portList_ = nullptr;};
      inline const vector<string> & getPortList() const { DARABONBA_PTR_GET_CONST(portList_, vector<string>) };
      inline vector<string> getPortList() { DARABONBA_PTR_GET(portList_, vector<string>) };
      inline DataList& setPortList(const vector<string> & portList) { DARABONBA_PTR_SET_VALUE(portList_, portList) };
      inline DataList& setPortList(vector<string> && portList) { DARABONBA_PTR_SET_RVALUE(portList_, portList) };


      // publicIp Field Functions 
      bool hasPublicIp() const { return this->publicIp_ != nullptr;};
      void deletePublicIp() { this->publicIp_ = nullptr;};
      inline string getPublicIp() const { DARABONBA_PTR_GET_DEFAULT(publicIp_, "") };
      inline DataList& setPublicIp(string publicIp) { DARABONBA_PTR_SET_VALUE(publicIp_, publicIp) };


      // regionNo Field Functions 
      bool hasRegionNo() const { return this->regionNo_ != nullptr;};
      void deleteRegionNo() { this->regionNo_ = nullptr;};
      inline string getRegionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
      inline DataList& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


      // riskLevel Field Functions 
      bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
      void deleteRiskLevel() { this->riskLevel_ = nullptr;};
      inline int32_t getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, 0) };
      inline DataList& setRiskLevel(int32_t riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


      // riskReason Field Functions 
      bool hasRiskReason() const { return this->riskReason_ != nullptr;};
      void deleteRiskReason() { this->riskReason_ = nullptr;};
      inline string getRiskReason() const { DARABONBA_PTR_GET_DEFAULT(riskReason_, "") };
      inline DataList& setRiskReason(string riskReason) { DARABONBA_PTR_SET_VALUE(riskReason_, riskReason) };


      // serviceNameList Field Functions 
      bool hasServiceNameList() const { return this->serviceNameList_ != nullptr;};
      void deleteServiceNameList() { this->serviceNameList_ = nullptr;};
      inline const vector<string> & getServiceNameList() const { DARABONBA_PTR_GET_CONST(serviceNameList_, vector<string>) };
      inline vector<string> getServiceNameList() { DARABONBA_PTR_GET(serviceNameList_, vector<string>) };
      inline DataList& setServiceNameList(const vector<string> & serviceNameList) { DARABONBA_PTR_SET_VALUE(serviceNameList_, serviceNameList) };
      inline DataList& setServiceNameList(vector<string> && serviceNameList) { DARABONBA_PTR_SET_RVALUE(serviceNameList_, serviceNameList) };


      // srcIpCnt Field Functions 
      bool hasSrcIpCnt() const { return this->srcIpCnt_ != nullptr;};
      void deleteSrcIpCnt() { this->srcIpCnt_ = nullptr;};
      inline int64_t getSrcIpCnt() const { DARABONBA_PTR_GET_DEFAULT(srcIpCnt_, 0L) };
      inline DataList& setSrcIpCnt(int64_t srcIpCnt) { DARABONBA_PTR_SET_VALUE(srcIpCnt_, srcIpCnt) };


      // totalBytes Field Functions 
      bool hasTotalBytes() const { return this->totalBytes_ != nullptr;};
      void deleteTotalBytes() { this->totalBytes_ = nullptr;};
      inline int64_t getTotalBytes() const { DARABONBA_PTR_GET_DEFAULT(totalBytes_, 0L) };
      inline DataList& setTotalBytes(int64_t totalBytes) { DARABONBA_PTR_SET_VALUE(totalBytes_, totalBytes) };


      // totalReplyBytes Field Functions 
      bool hasTotalReplyBytes() const { return this->totalReplyBytes_ != nullptr;};
      void deleteTotalReplyBytes() { this->totalReplyBytes_ = nullptr;};
      inline int64_t getTotalReplyBytes() const { DARABONBA_PTR_GET_DEFAULT(totalReplyBytes_, 0L) };
      inline DataList& setTotalReplyBytes(int64_t totalReplyBytes) { DARABONBA_PTR_SET_VALUE(totalReplyBytes_, totalReplyBytes) };


      // trafficPercent1Day Field Functions 
      bool hasTrafficPercent1Day() const { return this->trafficPercent1Day_ != nullptr;};
      void deleteTrafficPercent1Day() { this->trafficPercent1Day_ = nullptr;};
      inline string getTrafficPercent1Day() const { DARABONBA_PTR_GET_DEFAULT(trafficPercent1Day_, "") };
      inline DataList& setTrafficPercent1Day(string trafficPercent1Day) { DARABONBA_PTR_SET_VALUE(trafficPercent1Day_, trafficPercent1Day) };


      // trafficPercent30Day Field Functions 
      bool hasTrafficPercent30Day() const { return this->trafficPercent30Day_ != nullptr;};
      void deleteTrafficPercent30Day() { this->trafficPercent30Day_ = nullptr;};
      inline string getTrafficPercent30Day() const { DARABONBA_PTR_GET_DEFAULT(trafficPercent30Day_, "") };
      inline DataList& setTrafficPercent30Day(string trafficPercent30Day) { DARABONBA_PTR_SET_VALUE(trafficPercent30Day_, trafficPercent30Day) };


      // trafficPercent7Day Field Functions 
      bool hasTrafficPercent7Day() const { return this->trafficPercent7Day_ != nullptr;};
      void deleteTrafficPercent7Day() { this->trafficPercent7Day_ = nullptr;};
      inline string getTrafficPercent7Day() const { DARABONBA_PTR_GET_DEFAULT(trafficPercent7Day_, "") };
      inline DataList& setTrafficPercent7Day(string trafficPercent7Day) { DARABONBA_PTR_SET_VALUE(trafficPercent7Day_, trafficPercent7Day) };


      // unknownReason Field Functions 
      bool hasUnknownReason() const { return this->unknownReason_ != nullptr;};
      void deleteUnknownReason() { this->unknownReason_ = nullptr;};
      inline const vector<string> & getUnknownReason() const { DARABONBA_PTR_GET_CONST(unknownReason_, vector<string>) };
      inline vector<string> getUnknownReason() { DARABONBA_PTR_GET(unknownReason_, vector<string>) };
      inline DataList& setUnknownReason(const vector<string> & unknownReason) { DARABONBA_PTR_SET_VALUE(unknownReason_, unknownReason) };
      inline DataList& setUnknownReason(vector<string> && unknownReason) { DARABONBA_PTR_SET_RVALUE(unknownReason_, unknownReason) };


    protected:
      // The reason why recommended intelligent policies are unavailable. Valid values:
      // 
      // *   No recommended intelligent policies are available.
      // *   This feature is available only to some users.
      // *   The policy configuration has been modified. No recommended intelligent policies are available.
      // *   The recommended intelligent policies have been configured. No new recommended intelligent policies are available.
      shared_ptr<string> aclRecommendDetail_ {};
      // The instance ID.
      shared_ptr<string> assetsInstanceId_ {};
      // The instance name.
      shared_ptr<string> assetsName_ {};
      // The asset type of the instance.
      shared_ptr<string> assetsType_ {};
      // The total number of ports.
      shared_ptr<int32_t> detailNum_ {};
      // Specifies whether an access control policy is recommended. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> hasAclRecommend_ {};
      // The inbound network throughput, which indicates the total number of bytes that are sent inbound. Unit: bytes.
      shared_ptr<int64_t> inBytes_ {};
      // The UID of the member that is managed by your Alibaba Cloud account.
      shared_ptr<int64_t> memberUid_ {};
      // The outbound network throughput, which indicates the total number of bytes that are sent outbound. Unit: bytes.
      shared_ptr<int64_t> outBytes_ {};
      // The list of ports.
      shared_ptr<vector<string>> portList_ {};
      // The public IP address of the instance.
      shared_ptr<string> publicIp_ {};
      // The region ID of the instance.
      shared_ptr<string> regionNo_ {};
      // The risk level. Valid values:
      // 
      // *   **3**: high risk
      // *   **2**: medium risk
      // *   **1**: low risk
      // *   **0**: no risk
      shared_ptr<int32_t> riskLevel_ {};
      // The reason for the risk.
      shared_ptr<string> riskReason_ {};
      // The list of applications.
      shared_ptr<vector<string>> serviceNameList_ {};
      // Number of source IPs.
      shared_ptr<int64_t> srcIpCnt_ {};
      // The total inbound and outbound network throughput, which indicates the total number of bytes that are sent inbound and outbound. Unit: bytes.
      shared_ptr<int64_t> totalBytes_ {};
      // Outbound traffic in the last 7 days.
      shared_ptr<int64_t> totalReplyBytes_ {};
      // For detailed traffic information, see the TotalBytes field.
      shared_ptr<string> trafficPercent1Day_ {};
      // For detailed traffic information, see the TotalBytes field.
      shared_ptr<string> trafficPercent30Day_ {};
      // For detailed traffic information, see the TotalBytes field.
      shared_ptr<string> trafficPercent7Day_ {};
      // Reasons for not analyzing the protocol when the protocol is identified as Unknown.
      shared_ptr<vector<string>> unknownReason_ {};
    };

    virtual bool empty() const override { return this->dataList_ == nullptr
        && this->pageInfo_ == nullptr && this->requestId_ == nullptr; };
    // dataList Field Functions 
    bool hasDataList() const { return this->dataList_ != nullptr;};
    void deleteDataList() { this->dataList_ = nullptr;};
    inline const vector<DescribeInternetOpenIpResponseBody::DataList> & getDataList() const { DARABONBA_PTR_GET_CONST(dataList_, vector<DescribeInternetOpenIpResponseBody::DataList>) };
    inline vector<DescribeInternetOpenIpResponseBody::DataList> getDataList() { DARABONBA_PTR_GET(dataList_, vector<DescribeInternetOpenIpResponseBody::DataList>) };
    inline DescribeInternetOpenIpResponseBody& setDataList(const vector<DescribeInternetOpenIpResponseBody::DataList> & dataList) { DARABONBA_PTR_SET_VALUE(dataList_, dataList) };
    inline DescribeInternetOpenIpResponseBody& setDataList(vector<DescribeInternetOpenIpResponseBody::DataList> && dataList) { DARABONBA_PTR_SET_RVALUE(dataList_, dataList) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeInternetOpenIpResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeInternetOpenIpResponseBody::PageInfo) };
    inline DescribeInternetOpenIpResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeInternetOpenIpResponseBody::PageInfo) };
    inline DescribeInternetOpenIpResponseBody& setPageInfo(const DescribeInternetOpenIpResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeInternetOpenIpResponseBody& setPageInfo(DescribeInternetOpenIpResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInternetOpenIpResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    shared_ptr<vector<DescribeInternetOpenIpResponseBody::DataList>> dataList_ {};
    // The pagination information.
    shared_ptr<DescribeInternetOpenIpResponseBody::PageInfo> pageInfo_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
