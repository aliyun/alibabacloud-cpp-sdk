// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINTERNETOPENPORTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINTERNETOPENPORTRESPONSEBODY_HPP_
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
  class DescribeInternetOpenPortResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInternetOpenPortResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataList, dataList_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInternetOpenPortResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataList, dataList_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeInternetOpenPortResponseBody() = default ;
    DescribeInternetOpenPortResponseBody(const DescribeInternetOpenPortResponseBody &) = default ;
    DescribeInternetOpenPortResponseBody(DescribeInternetOpenPortResponseBody &&) = default ;
    DescribeInternetOpenPortResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInternetOpenPortResponseBody() = default ;
    DescribeInternetOpenPortResponseBody& operator=(const DescribeInternetOpenPortResponseBody &) = default ;
    DescribeInternetOpenPortResponseBody& operator=(DescribeInternetOpenPortResponseBody &&) = default ;
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
        DARABONBA_PTR_TO_JSON(DetailNum, detailNum_);
        DARABONBA_PTR_TO_JSON(InBytes, inBytes_);
        DARABONBA_PTR_TO_JSON(OutBytes, outBytes_);
        DARABONBA_PTR_TO_JSON(Port, port_);
        DARABONBA_PTR_TO_JSON(ProbRisk, probRisk_);
        DARABONBA_PTR_TO_JSON(ProbRiskDesc, probRiskDesc_);
        DARABONBA_PTR_TO_JSON(Protocol, protocol_);
        DARABONBA_PTR_TO_JSON(PublicIpNum, publicIpNum_);
        DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
        DARABONBA_PTR_TO_JSON(RiskReason, riskReason_);
        DARABONBA_PTR_TO_JSON(ServiceNameList, serviceNameList_);
        DARABONBA_PTR_TO_JSON(SuggestLevel, suggestLevel_);
        DARABONBA_PTR_TO_JSON(TotalBytes, totalBytes_);
        DARABONBA_PTR_TO_JSON(TrafficPercent1Day, trafficPercent1Day_);
        DARABONBA_PTR_TO_JSON(TrafficPercent30Day, trafficPercent30Day_);
        DARABONBA_PTR_TO_JSON(TrafficPercent7Day, trafficPercent7Day_);
        DARABONBA_PTR_TO_JSON(UnknownReason, unknownReason_);
      };
      friend void from_json(const Darabonba::Json& j, DataList& obj) { 
        DARABONBA_PTR_FROM_JSON(DetailNum, detailNum_);
        DARABONBA_PTR_FROM_JSON(InBytes, inBytes_);
        DARABONBA_PTR_FROM_JSON(OutBytes, outBytes_);
        DARABONBA_PTR_FROM_JSON(Port, port_);
        DARABONBA_PTR_FROM_JSON(ProbRisk, probRisk_);
        DARABONBA_PTR_FROM_JSON(ProbRiskDesc, probRiskDesc_);
        DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
        DARABONBA_PTR_FROM_JSON(PublicIpNum, publicIpNum_);
        DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
        DARABONBA_PTR_FROM_JSON(RiskReason, riskReason_);
        DARABONBA_PTR_FROM_JSON(ServiceNameList, serviceNameList_);
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
      virtual bool empty() const override { return this->detailNum_ == nullptr
        && this->inBytes_ == nullptr && this->outBytes_ == nullptr && this->port_ == nullptr && this->probRisk_ == nullptr && this->probRiskDesc_ == nullptr
        && this->protocol_ == nullptr && this->publicIpNum_ == nullptr && this->riskLevel_ == nullptr && this->riskReason_ == nullptr && this->serviceNameList_ == nullptr
        && this->suggestLevel_ == nullptr && this->totalBytes_ == nullptr && this->trafficPercent1Day_ == nullptr && this->trafficPercent30Day_ == nullptr && this->trafficPercent7Day_ == nullptr
        && this->unknownReason_ == nullptr; };
      // detailNum Field Functions 
      bool hasDetailNum() const { return this->detailNum_ != nullptr;};
      void deleteDetailNum() { this->detailNum_ = nullptr;};
      inline int32_t getDetailNum() const { DARABONBA_PTR_GET_DEFAULT(detailNum_, 0) };
      inline DataList& setDetailNum(int32_t detailNum) { DARABONBA_PTR_SET_VALUE(detailNum_, detailNum) };


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


      // publicIpNum Field Functions 
      bool hasPublicIpNum() const { return this->publicIpNum_ != nullptr;};
      void deletePublicIpNum() { this->publicIpNum_ = nullptr;};
      inline int32_t getPublicIpNum() const { DARABONBA_PTR_GET_DEFAULT(publicIpNum_, 0) };
      inline DataList& setPublicIpNum(int32_t publicIpNum) { DARABONBA_PTR_SET_VALUE(publicIpNum_, publicIpNum) };


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
      shared_ptr<int32_t> detailNum_ {};
      shared_ptr<int64_t> inBytes_ {};
      shared_ptr<int64_t> outBytes_ {};
      shared_ptr<int32_t> port_ {};
      shared_ptr<string> probRisk_ {};
      shared_ptr<string> probRiskDesc_ {};
      shared_ptr<string> protocol_ {};
      shared_ptr<int32_t> publicIpNum_ {};
      shared_ptr<int32_t> riskLevel_ {};
      shared_ptr<string> riskReason_ {};
      shared_ptr<vector<string>> serviceNameList_ {};
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
    inline const vector<DescribeInternetOpenPortResponseBody::DataList> & getDataList() const { DARABONBA_PTR_GET_CONST(dataList_, vector<DescribeInternetOpenPortResponseBody::DataList>) };
    inline vector<DescribeInternetOpenPortResponseBody::DataList> getDataList() { DARABONBA_PTR_GET(dataList_, vector<DescribeInternetOpenPortResponseBody::DataList>) };
    inline DescribeInternetOpenPortResponseBody& setDataList(const vector<DescribeInternetOpenPortResponseBody::DataList> & dataList) { DARABONBA_PTR_SET_VALUE(dataList_, dataList) };
    inline DescribeInternetOpenPortResponseBody& setDataList(vector<DescribeInternetOpenPortResponseBody::DataList> && dataList) { DARABONBA_PTR_SET_RVALUE(dataList_, dataList) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeInternetOpenPortResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeInternetOpenPortResponseBody::PageInfo) };
    inline DescribeInternetOpenPortResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeInternetOpenPortResponseBody::PageInfo) };
    inline DescribeInternetOpenPortResponseBody& setPageInfo(const DescribeInternetOpenPortResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeInternetOpenPortResponseBody& setPageInfo(DescribeInternetOpenPortResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInternetOpenPortResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<DescribeInternetOpenPortResponseBody::DataList>> dataList_ {};
    shared_ptr<DescribeInternetOpenPortResponseBody::PageInfo> pageInfo_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
