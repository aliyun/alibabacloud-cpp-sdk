// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINTERNETOPENDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINTERNETOPENDETAILRESPONSEBODY_HPP_
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
  class DescribeInternetOpenDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInternetOpenDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataList, dataList_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInternetOpenDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataList, dataList_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeInternetOpenDetailResponseBody() = default ;
    DescribeInternetOpenDetailResponseBody(const DescribeInternetOpenDetailResponseBody &) = default ;
    DescribeInternetOpenDetailResponseBody(DescribeInternetOpenDetailResponseBody &&) = default ;
    DescribeInternetOpenDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInternetOpenDetailResponseBody() = default ;
    DescribeInternetOpenDetailResponseBody& operator=(const DescribeInternetOpenDetailResponseBody &) = default ;
    DescribeInternetOpenDetailResponseBody& operator=(DescribeInternetOpenDetailResponseBody &&) = default ;
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
      shared_ptr<int32_t> currentPage_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<int32_t> totalCount_ {};
    };

    class DataList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataList& obj) { 
        DARABONBA_PTR_TO_JSON(AssetsInstanceId, assetsInstanceId_);
        DARABONBA_PTR_TO_JSON(AssetsName, assetsName_);
        DARABONBA_PTR_TO_JSON(AssetsType, assetsType_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(InBytes, inBytes_);
        DARABONBA_PTR_TO_JSON(OutBytes, outBytes_);
        DARABONBA_PTR_TO_JSON(Port, port_);
        DARABONBA_PTR_TO_JSON(ProbRisk, probRisk_);
        DARABONBA_PTR_TO_JSON(ProbRiskDesc, probRiskDesc_);
        DARABONBA_PTR_TO_JSON(Protocol, protocol_);
        DARABONBA_PTR_TO_JSON(PublicIp, publicIp_);
        DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
        DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
        DARABONBA_PTR_TO_JSON(RiskReason, riskReason_);
        DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
        DARABONBA_PTR_TO_JSON(SuggestLevel, suggestLevel_);
        DARABONBA_PTR_TO_JSON(TotalBytes, totalBytes_);
        DARABONBA_PTR_TO_JSON(TrafficPercent1Day, trafficPercent1Day_);
        DARABONBA_PTR_TO_JSON(TrafficPercent30Day, trafficPercent30Day_);
        DARABONBA_PTR_TO_JSON(TrafficPercent7Day, trafficPercent7Day_);
        DARABONBA_PTR_TO_JSON(UnknownReason, unknownReason_);
      };
      friend void from_json(const Darabonba::Json& j, DataList& obj) { 
        DARABONBA_PTR_FROM_JSON(AssetsInstanceId, assetsInstanceId_);
        DARABONBA_PTR_FROM_JSON(AssetsName, assetsName_);
        DARABONBA_PTR_FROM_JSON(AssetsType, assetsType_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(InBytes, inBytes_);
        DARABONBA_PTR_FROM_JSON(OutBytes, outBytes_);
        DARABONBA_PTR_FROM_JSON(Port, port_);
        DARABONBA_PTR_FROM_JSON(ProbRisk, probRisk_);
        DARABONBA_PTR_FROM_JSON(ProbRiskDesc, probRiskDesc_);
        DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
        DARABONBA_PTR_FROM_JSON(PublicIp, publicIp_);
        DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
        DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
        DARABONBA_PTR_FROM_JSON(RiskReason, riskReason_);
        DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
        DARABONBA_PTR_FROM_JSON(SuggestLevel, suggestLevel_);
        DARABONBA_PTR_FROM_JSON(TotalBytes, totalBytes_);
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
      virtual bool empty() const override { return this->assetsInstanceId_ == nullptr
        && this->assetsName_ == nullptr && this->assetsType_ == nullptr && this->id_ == nullptr && this->inBytes_ == nullptr && this->outBytes_ == nullptr
        && this->port_ == nullptr && this->probRisk_ == nullptr && this->probRiskDesc_ == nullptr && this->protocol_ == nullptr && this->publicIp_ == nullptr
        && this->regionNo_ == nullptr && this->riskLevel_ == nullptr && this->riskReason_ == nullptr && this->serviceName_ == nullptr && this->suggestLevel_ == nullptr
        && this->totalBytes_ == nullptr && this->trafficPercent1Day_ == nullptr && this->trafficPercent30Day_ == nullptr && this->trafficPercent7Day_ == nullptr && this->unknownReason_ == nullptr; };
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


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline DataList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // inBytes Field Functions 
      bool hasInBytes() const { return this->inBytes_ != nullptr;};
      void deleteInBytes() { this->inBytes_ = nullptr;};
      inline int64_t getInBytes() const { DARABONBA_PTR_GET_DEFAULT(inBytes_, 0L) };
      inline DataList& setInBytes(int64_t inBytes) { DARABONBA_PTR_SET_VALUE(inBytes_, inBytes) };


      // outBytes Field Functions 
      bool hasOutBytes() const { return this->outBytes_ != nullptr;};
      void deleteOutBytes() { this->outBytes_ = nullptr;};
      inline int64_t getOutBytes() const { DARABONBA_PTR_GET_DEFAULT(outBytes_, 0L) };
      inline DataList& setOutBytes(int64_t outBytes) { DARABONBA_PTR_SET_VALUE(outBytes_, outBytes) };


      // port Field Functions 
      bool hasPort() const { return this->port_ != nullptr;};
      void deletePort() { this->port_ = nullptr;};
      inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
      inline DataList& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


      // probRisk Field Functions 
      bool hasProbRisk() const { return this->probRisk_ != nullptr;};
      void deleteProbRisk() { this->probRisk_ = nullptr;};
      inline string getProbRisk() const { DARABONBA_PTR_GET_DEFAULT(probRisk_, "") };
      inline DataList& setProbRisk(string probRisk) { DARABONBA_PTR_SET_VALUE(probRisk_, probRisk) };


      // probRiskDesc Field Functions 
      bool hasProbRiskDesc() const { return this->probRiskDesc_ != nullptr;};
      void deleteProbRiskDesc() { this->probRiskDesc_ = nullptr;};
      inline string getProbRiskDesc() const { DARABONBA_PTR_GET_DEFAULT(probRiskDesc_, "") };
      inline DataList& setProbRiskDesc(string probRiskDesc) { DARABONBA_PTR_SET_VALUE(probRiskDesc_, probRiskDesc) };


      // protocol Field Functions 
      bool hasProtocol() const { return this->protocol_ != nullptr;};
      void deleteProtocol() { this->protocol_ = nullptr;};
      inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
      inline DataList& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


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


      // serviceName Field Functions 
      bool hasServiceName() const { return this->serviceName_ != nullptr;};
      void deleteServiceName() { this->serviceName_ = nullptr;};
      inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
      inline DataList& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


      // suggestLevel Field Functions 
      bool hasSuggestLevel() const { return this->suggestLevel_ != nullptr;};
      void deleteSuggestLevel() { this->suggestLevel_ = nullptr;};
      inline int32_t getSuggestLevel() const { DARABONBA_PTR_GET_DEFAULT(suggestLevel_, 0) };
      inline DataList& setSuggestLevel(int32_t suggestLevel) { DARABONBA_PTR_SET_VALUE(suggestLevel_, suggestLevel) };


      // totalBytes Field Functions 
      bool hasTotalBytes() const { return this->totalBytes_ != nullptr;};
      void deleteTotalBytes() { this->totalBytes_ = nullptr;};
      inline int64_t getTotalBytes() const { DARABONBA_PTR_GET_DEFAULT(totalBytes_, 0L) };
      inline DataList& setTotalBytes(int64_t totalBytes) { DARABONBA_PTR_SET_VALUE(totalBytes_, totalBytes) };


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
      shared_ptr<string> assetsInstanceId_ {};
      shared_ptr<string> assetsName_ {};
      shared_ptr<string> assetsType_ {};
      shared_ptr<string> id_ {};
      shared_ptr<int64_t> inBytes_ {};
      shared_ptr<int64_t> outBytes_ {};
      shared_ptr<int32_t> port_ {};
      shared_ptr<string> probRisk_ {};
      shared_ptr<string> probRiskDesc_ {};
      shared_ptr<string> protocol_ {};
      shared_ptr<string> publicIp_ {};
      shared_ptr<string> regionNo_ {};
      shared_ptr<int32_t> riskLevel_ {};
      shared_ptr<string> riskReason_ {};
      shared_ptr<string> serviceName_ {};
      shared_ptr<int32_t> suggestLevel_ {};
      shared_ptr<int64_t> totalBytes_ {};
      shared_ptr<string> trafficPercent1Day_ {};
      shared_ptr<string> trafficPercent30Day_ {};
      shared_ptr<string> trafficPercent7Day_ {};
      shared_ptr<vector<string>> unknownReason_ {};
    };

    virtual bool empty() const override { return this->dataList_ == nullptr
        && this->pageInfo_ == nullptr && this->requestId_ == nullptr; };
    // dataList Field Functions 
    bool hasDataList() const { return this->dataList_ != nullptr;};
    void deleteDataList() { this->dataList_ = nullptr;};
    inline const vector<DescribeInternetOpenDetailResponseBody::DataList> & getDataList() const { DARABONBA_PTR_GET_CONST(dataList_, vector<DescribeInternetOpenDetailResponseBody::DataList>) };
    inline vector<DescribeInternetOpenDetailResponseBody::DataList> getDataList() { DARABONBA_PTR_GET(dataList_, vector<DescribeInternetOpenDetailResponseBody::DataList>) };
    inline DescribeInternetOpenDetailResponseBody& setDataList(const vector<DescribeInternetOpenDetailResponseBody::DataList> & dataList) { DARABONBA_PTR_SET_VALUE(dataList_, dataList) };
    inline DescribeInternetOpenDetailResponseBody& setDataList(vector<DescribeInternetOpenDetailResponseBody::DataList> && dataList) { DARABONBA_PTR_SET_RVALUE(dataList_, dataList) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeInternetOpenDetailResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeInternetOpenDetailResponseBody::PageInfo) };
    inline DescribeInternetOpenDetailResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeInternetOpenDetailResponseBody::PageInfo) };
    inline DescribeInternetOpenDetailResponseBody& setPageInfo(const DescribeInternetOpenDetailResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeInternetOpenDetailResponseBody& setPageInfo(DescribeInternetOpenDetailResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInternetOpenDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<DescribeInternetOpenDetailResponseBody::DataList>> dataList_ {};
    shared_ptr<DescribeInternetOpenDetailResponseBody::PageInfo> pageInfo_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
