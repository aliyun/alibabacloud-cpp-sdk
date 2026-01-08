// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLDOMAINRELATIONLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLDOMAINRELATIONLISTRESPONSEBODY_HPP_
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
  class DescribeVpcFirewallDomainRelationListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcFirewallDomainRelationListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataList, dataList_);
      DARABONBA_PTR_TO_JSON(DstVpcList, dstVpcList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcFirewallDomainRelationListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataList, dataList_);
      DARABONBA_PTR_FROM_JSON(DstVpcList, dstVpcList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeVpcFirewallDomainRelationListResponseBody() = default ;
    DescribeVpcFirewallDomainRelationListResponseBody(const DescribeVpcFirewallDomainRelationListResponseBody &) = default ;
    DescribeVpcFirewallDomainRelationListResponseBody(DescribeVpcFirewallDomainRelationListResponseBody &&) = default ;
    DescribeVpcFirewallDomainRelationListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcFirewallDomainRelationListResponseBody() = default ;
    DescribeVpcFirewallDomainRelationListResponseBody& operator=(const DescribeVpcFirewallDomainRelationListResponseBody &) = default ;
    DescribeVpcFirewallDomainRelationListResponseBody& operator=(DescribeVpcFirewallDomainRelationListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DstVpcList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DstVpcList& obj) { 
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        DARABONBA_PTR_TO_JSON(VpcName, vpcName_);
      };
      friend void from_json(const Darabonba::Json& j, DstVpcList& obj) { 
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        DARABONBA_PTR_FROM_JSON(VpcName, vpcName_);
      };
      DstVpcList() = default ;
      DstVpcList(const DstVpcList &) = default ;
      DstVpcList(DstVpcList &&) = default ;
      DstVpcList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DstVpcList() = default ;
      DstVpcList& operator=(const DstVpcList &) = default ;
      DstVpcList& operator=(DstVpcList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->vpcId_ == nullptr
        && this->vpcName_ == nullptr; };
      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline DstVpcList& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      // vpcName Field Functions 
      bool hasVpcName() const { return this->vpcName_ != nullptr;};
      void deleteVpcName() { this->vpcName_ = nullptr;};
      inline string getVpcName() const { DARABONBA_PTR_GET_DEFAULT(vpcName_, "") };
      inline DstVpcList& setVpcName(string vpcName) { DARABONBA_PTR_SET_VALUE(vpcName_, vpcName) };


    protected:
      shared_ptr<string> vpcId_ {};
      shared_ptr<string> vpcName_ {};
    };

    class DataList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataList& obj) { 
        DARABONBA_PTR_TO_JSON(Business, business_);
        DARABONBA_PTR_TO_JSON(Domain, domain_);
        DARABONBA_PTR_TO_JSON(DstIP, dstIP_);
        DARABONBA_PTR_TO_JSON(DstRegionId, dstRegionId_);
        DARABONBA_PTR_TO_JSON(DstVpcId, dstVpcId_);
        DARABONBA_PTR_TO_JSON(DstVpcName, dstVpcName_);
        DARABONBA_PTR_TO_JSON(FirstTime, firstTime_);
        DARABONBA_PTR_TO_JSON(GroupName, groupName_);
        DARABONBA_PTR_TO_JSON(IpsHitCnt, ipsHitCnt_);
        DARABONBA_PTR_TO_JSON(LastTime, lastTime_);
        DARABONBA_PTR_TO_JSON(RequestBytes, requestBytes_);
        DARABONBA_PTR_TO_JSON(ResponseBytes, responseBytes_);
        DARABONBA_PTR_TO_JSON(SessionCount, sessionCount_);
        DARABONBA_PTR_TO_JSON(SrcIP, srcIP_);
        DARABONBA_PTR_TO_JSON(SrcRegionId, srcRegionId_);
        DARABONBA_PTR_TO_JSON(SrcVpcId, srcVpcId_);
        DARABONBA_PTR_TO_JSON(SrcVpcName, srcVpcName_);
        DARABONBA_PTR_TO_JSON(TotalBytes, totalBytes_);
      };
      friend void from_json(const Darabonba::Json& j, DataList& obj) { 
        DARABONBA_PTR_FROM_JSON(Business, business_);
        DARABONBA_PTR_FROM_JSON(Domain, domain_);
        DARABONBA_PTR_FROM_JSON(DstIP, dstIP_);
        DARABONBA_PTR_FROM_JSON(DstRegionId, dstRegionId_);
        DARABONBA_PTR_FROM_JSON(DstVpcId, dstVpcId_);
        DARABONBA_PTR_FROM_JSON(DstVpcName, dstVpcName_);
        DARABONBA_PTR_FROM_JSON(FirstTime, firstTime_);
        DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
        DARABONBA_PTR_FROM_JSON(IpsHitCnt, ipsHitCnt_);
        DARABONBA_PTR_FROM_JSON(LastTime, lastTime_);
        DARABONBA_PTR_FROM_JSON(RequestBytes, requestBytes_);
        DARABONBA_PTR_FROM_JSON(ResponseBytes, responseBytes_);
        DARABONBA_PTR_FROM_JSON(SessionCount, sessionCount_);
        DARABONBA_PTR_FROM_JSON(SrcIP, srcIP_);
        DARABONBA_PTR_FROM_JSON(SrcRegionId, srcRegionId_);
        DARABONBA_PTR_FROM_JSON(SrcVpcId, srcVpcId_);
        DARABONBA_PTR_FROM_JSON(SrcVpcName, srcVpcName_);
        DARABONBA_PTR_FROM_JSON(TotalBytes, totalBytes_);
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
      virtual bool empty() const override { return this->business_ == nullptr
        && this->domain_ == nullptr && this->dstIP_ == nullptr && this->dstRegionId_ == nullptr && this->dstVpcId_ == nullptr && this->dstVpcName_ == nullptr
        && this->firstTime_ == nullptr && this->groupName_ == nullptr && this->ipsHitCnt_ == nullptr && this->lastTime_ == nullptr && this->requestBytes_ == nullptr
        && this->responseBytes_ == nullptr && this->sessionCount_ == nullptr && this->srcIP_ == nullptr && this->srcRegionId_ == nullptr && this->srcVpcId_ == nullptr
        && this->srcVpcName_ == nullptr && this->totalBytes_ == nullptr; };
      // business Field Functions 
      bool hasBusiness() const { return this->business_ != nullptr;};
      void deleteBusiness() { this->business_ = nullptr;};
      inline string getBusiness() const { DARABONBA_PTR_GET_DEFAULT(business_, "") };
      inline DataList& setBusiness(string business) { DARABONBA_PTR_SET_VALUE(business_, business) };


      // domain Field Functions 
      bool hasDomain() const { return this->domain_ != nullptr;};
      void deleteDomain() { this->domain_ = nullptr;};
      inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
      inline DataList& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


      // dstIP Field Functions 
      bool hasDstIP() const { return this->dstIP_ != nullptr;};
      void deleteDstIP() { this->dstIP_ = nullptr;};
      inline string getDstIP() const { DARABONBA_PTR_GET_DEFAULT(dstIP_, "") };
      inline DataList& setDstIP(string dstIP) { DARABONBA_PTR_SET_VALUE(dstIP_, dstIP) };


      // dstRegionId Field Functions 
      bool hasDstRegionId() const { return this->dstRegionId_ != nullptr;};
      void deleteDstRegionId() { this->dstRegionId_ = nullptr;};
      inline string getDstRegionId() const { DARABONBA_PTR_GET_DEFAULT(dstRegionId_, "") };
      inline DataList& setDstRegionId(string dstRegionId) { DARABONBA_PTR_SET_VALUE(dstRegionId_, dstRegionId) };


      // dstVpcId Field Functions 
      bool hasDstVpcId() const { return this->dstVpcId_ != nullptr;};
      void deleteDstVpcId() { this->dstVpcId_ = nullptr;};
      inline string getDstVpcId() const { DARABONBA_PTR_GET_DEFAULT(dstVpcId_, "") };
      inline DataList& setDstVpcId(string dstVpcId) { DARABONBA_PTR_SET_VALUE(dstVpcId_, dstVpcId) };


      // dstVpcName Field Functions 
      bool hasDstVpcName() const { return this->dstVpcName_ != nullptr;};
      void deleteDstVpcName() { this->dstVpcName_ = nullptr;};
      inline string getDstVpcName() const { DARABONBA_PTR_GET_DEFAULT(dstVpcName_, "") };
      inline DataList& setDstVpcName(string dstVpcName) { DARABONBA_PTR_SET_VALUE(dstVpcName_, dstVpcName) };


      // firstTime Field Functions 
      bool hasFirstTime() const { return this->firstTime_ != nullptr;};
      void deleteFirstTime() { this->firstTime_ = nullptr;};
      inline int64_t getFirstTime() const { DARABONBA_PTR_GET_DEFAULT(firstTime_, 0L) };
      inline DataList& setFirstTime(int64_t firstTime) { DARABONBA_PTR_SET_VALUE(firstTime_, firstTime) };


      // groupName Field Functions 
      bool hasGroupName() const { return this->groupName_ != nullptr;};
      void deleteGroupName() { this->groupName_ = nullptr;};
      inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
      inline DataList& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


      // ipsHitCnt Field Functions 
      bool hasIpsHitCnt() const { return this->ipsHitCnt_ != nullptr;};
      void deleteIpsHitCnt() { this->ipsHitCnt_ = nullptr;};
      inline int64_t getIpsHitCnt() const { DARABONBA_PTR_GET_DEFAULT(ipsHitCnt_, 0L) };
      inline DataList& setIpsHitCnt(int64_t ipsHitCnt) { DARABONBA_PTR_SET_VALUE(ipsHitCnt_, ipsHitCnt) };


      // lastTime Field Functions 
      bool hasLastTime() const { return this->lastTime_ != nullptr;};
      void deleteLastTime() { this->lastTime_ = nullptr;};
      inline int64_t getLastTime() const { DARABONBA_PTR_GET_DEFAULT(lastTime_, 0L) };
      inline DataList& setLastTime(int64_t lastTime) { DARABONBA_PTR_SET_VALUE(lastTime_, lastTime) };


      // requestBytes Field Functions 
      bool hasRequestBytes() const { return this->requestBytes_ != nullptr;};
      void deleteRequestBytes() { this->requestBytes_ = nullptr;};
      inline int64_t getRequestBytes() const { DARABONBA_PTR_GET_DEFAULT(requestBytes_, 0L) };
      inline DataList& setRequestBytes(int64_t requestBytes) { DARABONBA_PTR_SET_VALUE(requestBytes_, requestBytes) };


      // responseBytes Field Functions 
      bool hasResponseBytes() const { return this->responseBytes_ != nullptr;};
      void deleteResponseBytes() { this->responseBytes_ = nullptr;};
      inline int64_t getResponseBytes() const { DARABONBA_PTR_GET_DEFAULT(responseBytes_, 0L) };
      inline DataList& setResponseBytes(int64_t responseBytes) { DARABONBA_PTR_SET_VALUE(responseBytes_, responseBytes) };


      // sessionCount Field Functions 
      bool hasSessionCount() const { return this->sessionCount_ != nullptr;};
      void deleteSessionCount() { this->sessionCount_ = nullptr;};
      inline int64_t getSessionCount() const { DARABONBA_PTR_GET_DEFAULT(sessionCount_, 0L) };
      inline DataList& setSessionCount(int64_t sessionCount) { DARABONBA_PTR_SET_VALUE(sessionCount_, sessionCount) };


      // srcIP Field Functions 
      bool hasSrcIP() const { return this->srcIP_ != nullptr;};
      void deleteSrcIP() { this->srcIP_ = nullptr;};
      inline string getSrcIP() const { DARABONBA_PTR_GET_DEFAULT(srcIP_, "") };
      inline DataList& setSrcIP(string srcIP) { DARABONBA_PTR_SET_VALUE(srcIP_, srcIP) };


      // srcRegionId Field Functions 
      bool hasSrcRegionId() const { return this->srcRegionId_ != nullptr;};
      void deleteSrcRegionId() { this->srcRegionId_ = nullptr;};
      inline string getSrcRegionId() const { DARABONBA_PTR_GET_DEFAULT(srcRegionId_, "") };
      inline DataList& setSrcRegionId(string srcRegionId) { DARABONBA_PTR_SET_VALUE(srcRegionId_, srcRegionId) };


      // srcVpcId Field Functions 
      bool hasSrcVpcId() const { return this->srcVpcId_ != nullptr;};
      void deleteSrcVpcId() { this->srcVpcId_ = nullptr;};
      inline string getSrcVpcId() const { DARABONBA_PTR_GET_DEFAULT(srcVpcId_, "") };
      inline DataList& setSrcVpcId(string srcVpcId) { DARABONBA_PTR_SET_VALUE(srcVpcId_, srcVpcId) };


      // srcVpcName Field Functions 
      bool hasSrcVpcName() const { return this->srcVpcName_ != nullptr;};
      void deleteSrcVpcName() { this->srcVpcName_ = nullptr;};
      inline string getSrcVpcName() const { DARABONBA_PTR_GET_DEFAULT(srcVpcName_, "") };
      inline DataList& setSrcVpcName(string srcVpcName) { DARABONBA_PTR_SET_VALUE(srcVpcName_, srcVpcName) };


      // totalBytes Field Functions 
      bool hasTotalBytes() const { return this->totalBytes_ != nullptr;};
      void deleteTotalBytes() { this->totalBytes_ = nullptr;};
      inline int64_t getTotalBytes() const { DARABONBA_PTR_GET_DEFAULT(totalBytes_, 0L) };
      inline DataList& setTotalBytes(int64_t totalBytes) { DARABONBA_PTR_SET_VALUE(totalBytes_, totalBytes) };


    protected:
      shared_ptr<string> business_ {};
      shared_ptr<string> domain_ {};
      shared_ptr<string> dstIP_ {};
      shared_ptr<string> dstRegionId_ {};
      shared_ptr<string> dstVpcId_ {};
      shared_ptr<string> dstVpcName_ {};
      shared_ptr<int64_t> firstTime_ {};
      shared_ptr<string> groupName_ {};
      shared_ptr<int64_t> ipsHitCnt_ {};
      shared_ptr<int64_t> lastTime_ {};
      shared_ptr<int64_t> requestBytes_ {};
      shared_ptr<int64_t> responseBytes_ {};
      shared_ptr<int64_t> sessionCount_ {};
      shared_ptr<string> srcIP_ {};
      shared_ptr<string> srcRegionId_ {};
      shared_ptr<string> srcVpcId_ {};
      shared_ptr<string> srcVpcName_ {};
      shared_ptr<int64_t> totalBytes_ {};
    };

    virtual bool empty() const override { return this->dataList_ == nullptr
        && this->dstVpcList_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // dataList Field Functions 
    bool hasDataList() const { return this->dataList_ != nullptr;};
    void deleteDataList() { this->dataList_ = nullptr;};
    inline const vector<DescribeVpcFirewallDomainRelationListResponseBody::DataList> & getDataList() const { DARABONBA_PTR_GET_CONST(dataList_, vector<DescribeVpcFirewallDomainRelationListResponseBody::DataList>) };
    inline vector<DescribeVpcFirewallDomainRelationListResponseBody::DataList> getDataList() { DARABONBA_PTR_GET(dataList_, vector<DescribeVpcFirewallDomainRelationListResponseBody::DataList>) };
    inline DescribeVpcFirewallDomainRelationListResponseBody& setDataList(const vector<DescribeVpcFirewallDomainRelationListResponseBody::DataList> & dataList) { DARABONBA_PTR_SET_VALUE(dataList_, dataList) };
    inline DescribeVpcFirewallDomainRelationListResponseBody& setDataList(vector<DescribeVpcFirewallDomainRelationListResponseBody::DataList> && dataList) { DARABONBA_PTR_SET_RVALUE(dataList_, dataList) };


    // dstVpcList Field Functions 
    bool hasDstVpcList() const { return this->dstVpcList_ != nullptr;};
    void deleteDstVpcList() { this->dstVpcList_ = nullptr;};
    inline const vector<DescribeVpcFirewallDomainRelationListResponseBody::DstVpcList> & getDstVpcList() const { DARABONBA_PTR_GET_CONST(dstVpcList_, vector<DescribeVpcFirewallDomainRelationListResponseBody::DstVpcList>) };
    inline vector<DescribeVpcFirewallDomainRelationListResponseBody::DstVpcList> getDstVpcList() { DARABONBA_PTR_GET(dstVpcList_, vector<DescribeVpcFirewallDomainRelationListResponseBody::DstVpcList>) };
    inline DescribeVpcFirewallDomainRelationListResponseBody& setDstVpcList(const vector<DescribeVpcFirewallDomainRelationListResponseBody::DstVpcList> & dstVpcList) { DARABONBA_PTR_SET_VALUE(dstVpcList_, dstVpcList) };
    inline DescribeVpcFirewallDomainRelationListResponseBody& setDstVpcList(vector<DescribeVpcFirewallDomainRelationListResponseBody::DstVpcList> && dstVpcList) { DARABONBA_PTR_SET_RVALUE(dstVpcList_, dstVpcList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVpcFirewallDomainRelationListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeVpcFirewallDomainRelationListResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<DescribeVpcFirewallDomainRelationListResponseBody::DataList>> dataList_ {};
    shared_ptr<vector<DescribeVpcFirewallDomainRelationListResponseBody::DstVpcList>> dstVpcList_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
