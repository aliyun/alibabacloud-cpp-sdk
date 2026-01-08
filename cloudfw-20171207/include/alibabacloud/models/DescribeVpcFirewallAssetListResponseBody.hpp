// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLASSETLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLASSETLISTRESPONSEBODY_HPP_
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
  class DescribeVpcFirewallAssetListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcFirewallAssetListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataList, dataList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcFirewallAssetListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataList, dataList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeVpcFirewallAssetListResponseBody() = default ;
    DescribeVpcFirewallAssetListResponseBody(const DescribeVpcFirewallAssetListResponseBody &) = default ;
    DescribeVpcFirewallAssetListResponseBody(DescribeVpcFirewallAssetListResponseBody &&) = default ;
    DescribeVpcFirewallAssetListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcFirewallAssetListResponseBody() = default ;
    DescribeVpcFirewallAssetListResponseBody& operator=(const DescribeVpcFirewallAssetListResponseBody &) = default ;
    DescribeVpcFirewallAssetListResponseBody& operator=(DescribeVpcFirewallAssetListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DataList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataList& obj) { 
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
      friend void from_json(const Darabonba::Json& j, DataList& obj) { 
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
      virtual bool empty() const override { return this->assetIP_ == nullptr
        && this->assetInstanceId_ == nullptr && this->assetInstanceName_ == nullptr && this->inBytes_ == nullptr && this->ipsHitCnt_ == nullptr && this->outBytes_ == nullptr
        && this->portList_ == nullptr && this->regionNo_ == nullptr && this->riskLevel_ == nullptr && this->riskReason_ == nullptr && this->sessionCount_ == nullptr
        && this->totalBytes_ == nullptr; };
      // assetIP Field Functions 
      bool hasAssetIP() const { return this->assetIP_ != nullptr;};
      void deleteAssetIP() { this->assetIP_ = nullptr;};
      inline string getAssetIP() const { DARABONBA_PTR_GET_DEFAULT(assetIP_, "") };
      inline DataList& setAssetIP(string assetIP) { DARABONBA_PTR_SET_VALUE(assetIP_, assetIP) };


      // assetInstanceId Field Functions 
      bool hasAssetInstanceId() const { return this->assetInstanceId_ != nullptr;};
      void deleteAssetInstanceId() { this->assetInstanceId_ = nullptr;};
      inline string getAssetInstanceId() const { DARABONBA_PTR_GET_DEFAULT(assetInstanceId_, "") };
      inline DataList& setAssetInstanceId(string assetInstanceId) { DARABONBA_PTR_SET_VALUE(assetInstanceId_, assetInstanceId) };


      // assetInstanceName Field Functions 
      bool hasAssetInstanceName() const { return this->assetInstanceName_ != nullptr;};
      void deleteAssetInstanceName() { this->assetInstanceName_ = nullptr;};
      inline string getAssetInstanceName() const { DARABONBA_PTR_GET_DEFAULT(assetInstanceName_, "") };
      inline DataList& setAssetInstanceName(string assetInstanceName) { DARABONBA_PTR_SET_VALUE(assetInstanceName_, assetInstanceName) };


      // inBytes Field Functions 
      bool hasInBytes() const { return this->inBytes_ != nullptr;};
      void deleteInBytes() { this->inBytes_ = nullptr;};
      inline int64_t getInBytes() const { DARABONBA_PTR_GET_DEFAULT(inBytes_, 0L) };
      inline DataList& setInBytes(int64_t inBytes) { DARABONBA_PTR_SET_VALUE(inBytes_, inBytes) };


      // ipsHitCnt Field Functions 
      bool hasIpsHitCnt() const { return this->ipsHitCnt_ != nullptr;};
      void deleteIpsHitCnt() { this->ipsHitCnt_ = nullptr;};
      inline int64_t getIpsHitCnt() const { DARABONBA_PTR_GET_DEFAULT(ipsHitCnt_, 0L) };
      inline DataList& setIpsHitCnt(int64_t ipsHitCnt) { DARABONBA_PTR_SET_VALUE(ipsHitCnt_, ipsHitCnt) };


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


      // sessionCount Field Functions 
      bool hasSessionCount() const { return this->sessionCount_ != nullptr;};
      void deleteSessionCount() { this->sessionCount_ = nullptr;};
      inline int64_t getSessionCount() const { DARABONBA_PTR_GET_DEFAULT(sessionCount_, 0L) };
      inline DataList& setSessionCount(int64_t sessionCount) { DARABONBA_PTR_SET_VALUE(sessionCount_, sessionCount) };


      // totalBytes Field Functions 
      bool hasTotalBytes() const { return this->totalBytes_ != nullptr;};
      void deleteTotalBytes() { this->totalBytes_ = nullptr;};
      inline int64_t getTotalBytes() const { DARABONBA_PTR_GET_DEFAULT(totalBytes_, 0L) };
      inline DataList& setTotalBytes(int64_t totalBytes) { DARABONBA_PTR_SET_VALUE(totalBytes_, totalBytes) };


    protected:
      shared_ptr<string> assetIP_ {};
      shared_ptr<string> assetInstanceId_ {};
      shared_ptr<string> assetInstanceName_ {};
      shared_ptr<int64_t> inBytes_ {};
      shared_ptr<int64_t> ipsHitCnt_ {};
      shared_ptr<int64_t> outBytes_ {};
      shared_ptr<vector<string>> portList_ {};
      shared_ptr<string> regionNo_ {};
      shared_ptr<int32_t> riskLevel_ {};
      shared_ptr<string> riskReason_ {};
      shared_ptr<int64_t> sessionCount_ {};
      shared_ptr<int64_t> totalBytes_ {};
    };

    virtual bool empty() const override { return this->dataList_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // dataList Field Functions 
    bool hasDataList() const { return this->dataList_ != nullptr;};
    void deleteDataList() { this->dataList_ = nullptr;};
    inline const vector<DescribeVpcFirewallAssetListResponseBody::DataList> & getDataList() const { DARABONBA_PTR_GET_CONST(dataList_, vector<DescribeVpcFirewallAssetListResponseBody::DataList>) };
    inline vector<DescribeVpcFirewallAssetListResponseBody::DataList> getDataList() { DARABONBA_PTR_GET(dataList_, vector<DescribeVpcFirewallAssetListResponseBody::DataList>) };
    inline DescribeVpcFirewallAssetListResponseBody& setDataList(const vector<DescribeVpcFirewallAssetListResponseBody::DataList> & dataList) { DARABONBA_PTR_SET_VALUE(dataList_, dataList) };
    inline DescribeVpcFirewallAssetListResponseBody& setDataList(vector<DescribeVpcFirewallAssetListResponseBody::DataList> && dataList) { DARABONBA_PTR_SET_RVALUE(dataList_, dataList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVpcFirewallAssetListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeVpcFirewallAssetListResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<DescribeVpcFirewallAssetListResponseBody::DataList>> dataList_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
