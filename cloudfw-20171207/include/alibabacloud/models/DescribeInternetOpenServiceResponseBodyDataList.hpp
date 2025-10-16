// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINTERNETOPENSERVICERESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINTERNETOPENSERVICERESPONSEBODYDATALIST_HPP_
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
  class DescribeInternetOpenServiceResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInternetOpenServiceResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(DetailNum, detailNum_);
      DARABONBA_PTR_TO_JSON(InBytes, inBytes_);
      DARABONBA_PTR_TO_JSON(OutBytes, outBytes_);
      DARABONBA_PTR_TO_JSON(PortList, portList_);
      DARABONBA_PTR_TO_JSON(ProbRisk, probRisk_);
      DARABONBA_PTR_TO_JSON(ProbRiskDesc, probRiskDesc_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(PublicIpNum, publicIpNum_);
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
    friend void from_json(const Darabonba::Json& j, DescribeInternetOpenServiceResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(DetailNum, detailNum_);
      DARABONBA_PTR_FROM_JSON(InBytes, inBytes_);
      DARABONBA_PTR_FROM_JSON(OutBytes, outBytes_);
      DARABONBA_PTR_FROM_JSON(PortList, portList_);
      DARABONBA_PTR_FROM_JSON(ProbRisk, probRisk_);
      DARABONBA_PTR_FROM_JSON(ProbRiskDesc, probRiskDesc_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(PublicIpNum, publicIpNum_);
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
    DescribeInternetOpenServiceResponseBodyDataList() = default ;
    DescribeInternetOpenServiceResponseBodyDataList(const DescribeInternetOpenServiceResponseBodyDataList &) = default ;
    DescribeInternetOpenServiceResponseBodyDataList(DescribeInternetOpenServiceResponseBodyDataList &&) = default ;
    DescribeInternetOpenServiceResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInternetOpenServiceResponseBodyDataList() = default ;
    DescribeInternetOpenServiceResponseBodyDataList& operator=(const DescribeInternetOpenServiceResponseBodyDataList &) = default ;
    DescribeInternetOpenServiceResponseBodyDataList& operator=(DescribeInternetOpenServiceResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->detailNum_ == nullptr
        && return this->inBytes_ == nullptr && return this->outBytes_ == nullptr && return this->portList_ == nullptr && return this->probRisk_ == nullptr && return this->probRiskDesc_ == nullptr
        && return this->protocol_ == nullptr && return this->publicIpNum_ == nullptr && return this->riskLevel_ == nullptr && return this->riskReason_ == nullptr && return this->serviceName_ == nullptr
        && return this->suggestLevel_ == nullptr && return this->totalBytes_ == nullptr && return this->trafficPercent1Day_ == nullptr && return this->trafficPercent30Day_ == nullptr && return this->trafficPercent7Day_ == nullptr
        && return this->unknownReason_ == nullptr; };
    // detailNum Field Functions 
    bool hasDetailNum() const { return this->detailNum_ != nullptr;};
    void deleteDetailNum() { this->detailNum_ = nullptr;};
    inline int32_t detailNum() const { DARABONBA_PTR_GET_DEFAULT(detailNum_, 0) };
    inline DescribeInternetOpenServiceResponseBodyDataList& setDetailNum(int32_t detailNum) { DARABONBA_PTR_SET_VALUE(detailNum_, detailNum) };


    // inBytes Field Functions 
    bool hasInBytes() const { return this->inBytes_ != nullptr;};
    void deleteInBytes() { this->inBytes_ = nullptr;};
    inline int64_t inBytes() const { DARABONBA_PTR_GET_DEFAULT(inBytes_, 0L) };
    inline DescribeInternetOpenServiceResponseBodyDataList& setInBytes(int64_t inBytes) { DARABONBA_PTR_SET_VALUE(inBytes_, inBytes) };


    // outBytes Field Functions 
    bool hasOutBytes() const { return this->outBytes_ != nullptr;};
    void deleteOutBytes() { this->outBytes_ = nullptr;};
    inline int64_t outBytes() const { DARABONBA_PTR_GET_DEFAULT(outBytes_, 0L) };
    inline DescribeInternetOpenServiceResponseBodyDataList& setOutBytes(int64_t outBytes) { DARABONBA_PTR_SET_VALUE(outBytes_, outBytes) };


    // portList Field Functions 
    bool hasPortList() const { return this->portList_ != nullptr;};
    void deletePortList() { this->portList_ = nullptr;};
    inline const vector<string> & portList() const { DARABONBA_PTR_GET_CONST(portList_, vector<string>) };
    inline vector<string> portList() { DARABONBA_PTR_GET(portList_, vector<string>) };
    inline DescribeInternetOpenServiceResponseBodyDataList& setPortList(const vector<string> & portList) { DARABONBA_PTR_SET_VALUE(portList_, portList) };
    inline DescribeInternetOpenServiceResponseBodyDataList& setPortList(vector<string> && portList) { DARABONBA_PTR_SET_RVALUE(portList_, portList) };


    // probRisk Field Functions 
    bool hasProbRisk() const { return this->probRisk_ != nullptr;};
    void deleteProbRisk() { this->probRisk_ = nullptr;};
    inline string probRisk() const { DARABONBA_PTR_GET_DEFAULT(probRisk_, "") };
    inline DescribeInternetOpenServiceResponseBodyDataList& setProbRisk(string probRisk) { DARABONBA_PTR_SET_VALUE(probRisk_, probRisk) };


    // probRiskDesc Field Functions 
    bool hasProbRiskDesc() const { return this->probRiskDesc_ != nullptr;};
    void deleteProbRiskDesc() { this->probRiskDesc_ = nullptr;};
    inline string probRiskDesc() const { DARABONBA_PTR_GET_DEFAULT(probRiskDesc_, "") };
    inline DescribeInternetOpenServiceResponseBodyDataList& setProbRiskDesc(string probRiskDesc) { DARABONBA_PTR_SET_VALUE(probRiskDesc_, probRiskDesc) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline DescribeInternetOpenServiceResponseBodyDataList& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // publicIpNum Field Functions 
    bool hasPublicIpNum() const { return this->publicIpNum_ != nullptr;};
    void deletePublicIpNum() { this->publicIpNum_ = nullptr;};
    inline int32_t publicIpNum() const { DARABONBA_PTR_GET_DEFAULT(publicIpNum_, 0) };
    inline DescribeInternetOpenServiceResponseBodyDataList& setPublicIpNum(int32_t publicIpNum) { DARABONBA_PTR_SET_VALUE(publicIpNum_, publicIpNum) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline int32_t riskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, 0) };
    inline DescribeInternetOpenServiceResponseBodyDataList& setRiskLevel(int32_t riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // riskReason Field Functions 
    bool hasRiskReason() const { return this->riskReason_ != nullptr;};
    void deleteRiskReason() { this->riskReason_ = nullptr;};
    inline string riskReason() const { DARABONBA_PTR_GET_DEFAULT(riskReason_, "") };
    inline DescribeInternetOpenServiceResponseBodyDataList& setRiskReason(string riskReason) { DARABONBA_PTR_SET_VALUE(riskReason_, riskReason) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline int32_t serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, 0) };
    inline DescribeInternetOpenServiceResponseBodyDataList& setServiceName(int32_t serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // suggestLevel Field Functions 
    bool hasSuggestLevel() const { return this->suggestLevel_ != nullptr;};
    void deleteSuggestLevel() { this->suggestLevel_ = nullptr;};
    inline int32_t suggestLevel() const { DARABONBA_PTR_GET_DEFAULT(suggestLevel_, 0) };
    inline DescribeInternetOpenServiceResponseBodyDataList& setSuggestLevel(int32_t suggestLevel) { DARABONBA_PTR_SET_VALUE(suggestLevel_, suggestLevel) };


    // totalBytes Field Functions 
    bool hasTotalBytes() const { return this->totalBytes_ != nullptr;};
    void deleteTotalBytes() { this->totalBytes_ = nullptr;};
    inline int64_t totalBytes() const { DARABONBA_PTR_GET_DEFAULT(totalBytes_, 0L) };
    inline DescribeInternetOpenServiceResponseBodyDataList& setTotalBytes(int64_t totalBytes) { DARABONBA_PTR_SET_VALUE(totalBytes_, totalBytes) };


    // trafficPercent1Day Field Functions 
    bool hasTrafficPercent1Day() const { return this->trafficPercent1Day_ != nullptr;};
    void deleteTrafficPercent1Day() { this->trafficPercent1Day_ = nullptr;};
    inline string trafficPercent1Day() const { DARABONBA_PTR_GET_DEFAULT(trafficPercent1Day_, "") };
    inline DescribeInternetOpenServiceResponseBodyDataList& setTrafficPercent1Day(string trafficPercent1Day) { DARABONBA_PTR_SET_VALUE(trafficPercent1Day_, trafficPercent1Day) };


    // trafficPercent30Day Field Functions 
    bool hasTrafficPercent30Day() const { return this->trafficPercent30Day_ != nullptr;};
    void deleteTrafficPercent30Day() { this->trafficPercent30Day_ = nullptr;};
    inline string trafficPercent30Day() const { DARABONBA_PTR_GET_DEFAULT(trafficPercent30Day_, "") };
    inline DescribeInternetOpenServiceResponseBodyDataList& setTrafficPercent30Day(string trafficPercent30Day) { DARABONBA_PTR_SET_VALUE(trafficPercent30Day_, trafficPercent30Day) };


    // trafficPercent7Day Field Functions 
    bool hasTrafficPercent7Day() const { return this->trafficPercent7Day_ != nullptr;};
    void deleteTrafficPercent7Day() { this->trafficPercent7Day_ = nullptr;};
    inline string trafficPercent7Day() const { DARABONBA_PTR_GET_DEFAULT(trafficPercent7Day_, "") };
    inline DescribeInternetOpenServiceResponseBodyDataList& setTrafficPercent7Day(string trafficPercent7Day) { DARABONBA_PTR_SET_VALUE(trafficPercent7Day_, trafficPercent7Day) };


    // unknownReason Field Functions 
    bool hasUnknownReason() const { return this->unknownReason_ != nullptr;};
    void deleteUnknownReason() { this->unknownReason_ = nullptr;};
    inline const vector<string> & unknownReason() const { DARABONBA_PTR_GET_CONST(unknownReason_, vector<string>) };
    inline vector<string> unknownReason() { DARABONBA_PTR_GET(unknownReason_, vector<string>) };
    inline DescribeInternetOpenServiceResponseBodyDataList& setUnknownReason(const vector<string> & unknownReason) { DARABONBA_PTR_SET_VALUE(unknownReason_, unknownReason) };
    inline DescribeInternetOpenServiceResponseBodyDataList& setUnknownReason(vector<string> && unknownReason) { DARABONBA_PTR_SET_RVALUE(unknownReason_, unknownReason) };


  protected:
    std::shared_ptr<int32_t> detailNum_ = nullptr;
    std::shared_ptr<int64_t> inBytes_ = nullptr;
    std::shared_ptr<int64_t> outBytes_ = nullptr;
    std::shared_ptr<vector<string>> portList_ = nullptr;
    std::shared_ptr<string> probRisk_ = nullptr;
    std::shared_ptr<string> probRiskDesc_ = nullptr;
    std::shared_ptr<string> protocol_ = nullptr;
    std::shared_ptr<int32_t> publicIpNum_ = nullptr;
    std::shared_ptr<int32_t> riskLevel_ = nullptr;
    std::shared_ptr<string> riskReason_ = nullptr;
    std::shared_ptr<int32_t> serviceName_ = nullptr;
    std::shared_ptr<int32_t> suggestLevel_ = nullptr;
    std::shared_ptr<int64_t> totalBytes_ = nullptr;
    std::shared_ptr<string> trafficPercent1Day_ = nullptr;
    std::shared_ptr<string> trafficPercent30Day_ = nullptr;
    std::shared_ptr<string> trafficPercent7Day_ = nullptr;
    std::shared_ptr<vector<string>> unknownReason_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
