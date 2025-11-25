// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINTERNETOPENDETAILRESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINTERNETOPENDETAILRESPONSEBODYDATALIST_HPP_
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
  class DescribeInternetOpenDetailResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInternetOpenDetailResponseBodyDataList& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeInternetOpenDetailResponseBodyDataList& obj) { 
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
    DescribeInternetOpenDetailResponseBodyDataList() = default ;
    DescribeInternetOpenDetailResponseBodyDataList(const DescribeInternetOpenDetailResponseBodyDataList &) = default ;
    DescribeInternetOpenDetailResponseBodyDataList(DescribeInternetOpenDetailResponseBodyDataList &&) = default ;
    DescribeInternetOpenDetailResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInternetOpenDetailResponseBodyDataList() = default ;
    DescribeInternetOpenDetailResponseBodyDataList& operator=(const DescribeInternetOpenDetailResponseBodyDataList &) = default ;
    DescribeInternetOpenDetailResponseBodyDataList& operator=(DescribeInternetOpenDetailResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assetsInstanceId_ == nullptr
        && return this->assetsName_ == nullptr && return this->assetsType_ == nullptr && return this->id_ == nullptr && return this->inBytes_ == nullptr && return this->outBytes_ == nullptr
        && return this->port_ == nullptr && return this->probRisk_ == nullptr && return this->probRiskDesc_ == nullptr && return this->protocol_ == nullptr && return this->publicIp_ == nullptr
        && return this->regionNo_ == nullptr && return this->riskLevel_ == nullptr && return this->riskReason_ == nullptr && return this->serviceName_ == nullptr && return this->suggestLevel_ == nullptr
        && return this->totalBytes_ == nullptr && return this->trafficPercent1Day_ == nullptr && return this->trafficPercent30Day_ == nullptr && return this->trafficPercent7Day_ == nullptr && return this->unknownReason_ == nullptr; };
    // assetsInstanceId Field Functions 
    bool hasAssetsInstanceId() const { return this->assetsInstanceId_ != nullptr;};
    void deleteAssetsInstanceId() { this->assetsInstanceId_ = nullptr;};
    inline string assetsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(assetsInstanceId_, "") };
    inline DescribeInternetOpenDetailResponseBodyDataList& setAssetsInstanceId(string assetsInstanceId) { DARABONBA_PTR_SET_VALUE(assetsInstanceId_, assetsInstanceId) };


    // assetsName Field Functions 
    bool hasAssetsName() const { return this->assetsName_ != nullptr;};
    void deleteAssetsName() { this->assetsName_ = nullptr;};
    inline string assetsName() const { DARABONBA_PTR_GET_DEFAULT(assetsName_, "") };
    inline DescribeInternetOpenDetailResponseBodyDataList& setAssetsName(string assetsName) { DARABONBA_PTR_SET_VALUE(assetsName_, assetsName) };


    // assetsType Field Functions 
    bool hasAssetsType() const { return this->assetsType_ != nullptr;};
    void deleteAssetsType() { this->assetsType_ = nullptr;};
    inline string assetsType() const { DARABONBA_PTR_GET_DEFAULT(assetsType_, "") };
    inline DescribeInternetOpenDetailResponseBodyDataList& setAssetsType(string assetsType) { DARABONBA_PTR_SET_VALUE(assetsType_, assetsType) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DescribeInternetOpenDetailResponseBodyDataList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // inBytes Field Functions 
    bool hasInBytes() const { return this->inBytes_ != nullptr;};
    void deleteInBytes() { this->inBytes_ = nullptr;};
    inline int64_t inBytes() const { DARABONBA_PTR_GET_DEFAULT(inBytes_, 0L) };
    inline DescribeInternetOpenDetailResponseBodyDataList& setInBytes(int64_t inBytes) { DARABONBA_PTR_SET_VALUE(inBytes_, inBytes) };


    // outBytes Field Functions 
    bool hasOutBytes() const { return this->outBytes_ != nullptr;};
    void deleteOutBytes() { this->outBytes_ = nullptr;};
    inline int64_t outBytes() const { DARABONBA_PTR_GET_DEFAULT(outBytes_, 0L) };
    inline DescribeInternetOpenDetailResponseBodyDataList& setOutBytes(int64_t outBytes) { DARABONBA_PTR_SET_VALUE(outBytes_, outBytes) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline DescribeInternetOpenDetailResponseBodyDataList& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // probRisk Field Functions 
    bool hasProbRisk() const { return this->probRisk_ != nullptr;};
    void deleteProbRisk() { this->probRisk_ = nullptr;};
    inline string probRisk() const { DARABONBA_PTR_GET_DEFAULT(probRisk_, "") };
    inline DescribeInternetOpenDetailResponseBodyDataList& setProbRisk(string probRisk) { DARABONBA_PTR_SET_VALUE(probRisk_, probRisk) };


    // probRiskDesc Field Functions 
    bool hasProbRiskDesc() const { return this->probRiskDesc_ != nullptr;};
    void deleteProbRiskDesc() { this->probRiskDesc_ = nullptr;};
    inline string probRiskDesc() const { DARABONBA_PTR_GET_DEFAULT(probRiskDesc_, "") };
    inline DescribeInternetOpenDetailResponseBodyDataList& setProbRiskDesc(string probRiskDesc) { DARABONBA_PTR_SET_VALUE(probRiskDesc_, probRiskDesc) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline DescribeInternetOpenDetailResponseBodyDataList& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // publicIp Field Functions 
    bool hasPublicIp() const { return this->publicIp_ != nullptr;};
    void deletePublicIp() { this->publicIp_ = nullptr;};
    inline string publicIp() const { DARABONBA_PTR_GET_DEFAULT(publicIp_, "") };
    inline DescribeInternetOpenDetailResponseBodyDataList& setPublicIp(string publicIp) { DARABONBA_PTR_SET_VALUE(publicIp_, publicIp) };


    // regionNo Field Functions 
    bool hasRegionNo() const { return this->regionNo_ != nullptr;};
    void deleteRegionNo() { this->regionNo_ = nullptr;};
    inline string regionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
    inline DescribeInternetOpenDetailResponseBodyDataList& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline int32_t riskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, 0) };
    inline DescribeInternetOpenDetailResponseBodyDataList& setRiskLevel(int32_t riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // riskReason Field Functions 
    bool hasRiskReason() const { return this->riskReason_ != nullptr;};
    void deleteRiskReason() { this->riskReason_ = nullptr;};
    inline string riskReason() const { DARABONBA_PTR_GET_DEFAULT(riskReason_, "") };
    inline DescribeInternetOpenDetailResponseBodyDataList& setRiskReason(string riskReason) { DARABONBA_PTR_SET_VALUE(riskReason_, riskReason) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline DescribeInternetOpenDetailResponseBodyDataList& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // suggestLevel Field Functions 
    bool hasSuggestLevel() const { return this->suggestLevel_ != nullptr;};
    void deleteSuggestLevel() { this->suggestLevel_ = nullptr;};
    inline int32_t suggestLevel() const { DARABONBA_PTR_GET_DEFAULT(suggestLevel_, 0) };
    inline DescribeInternetOpenDetailResponseBodyDataList& setSuggestLevel(int32_t suggestLevel) { DARABONBA_PTR_SET_VALUE(suggestLevel_, suggestLevel) };


    // totalBytes Field Functions 
    bool hasTotalBytes() const { return this->totalBytes_ != nullptr;};
    void deleteTotalBytes() { this->totalBytes_ = nullptr;};
    inline int64_t totalBytes() const { DARABONBA_PTR_GET_DEFAULT(totalBytes_, 0L) };
    inline DescribeInternetOpenDetailResponseBodyDataList& setTotalBytes(int64_t totalBytes) { DARABONBA_PTR_SET_VALUE(totalBytes_, totalBytes) };


    // trafficPercent1Day Field Functions 
    bool hasTrafficPercent1Day() const { return this->trafficPercent1Day_ != nullptr;};
    void deleteTrafficPercent1Day() { this->trafficPercent1Day_ = nullptr;};
    inline string trafficPercent1Day() const { DARABONBA_PTR_GET_DEFAULT(trafficPercent1Day_, "") };
    inline DescribeInternetOpenDetailResponseBodyDataList& setTrafficPercent1Day(string trafficPercent1Day) { DARABONBA_PTR_SET_VALUE(trafficPercent1Day_, trafficPercent1Day) };


    // trafficPercent30Day Field Functions 
    bool hasTrafficPercent30Day() const { return this->trafficPercent30Day_ != nullptr;};
    void deleteTrafficPercent30Day() { this->trafficPercent30Day_ = nullptr;};
    inline string trafficPercent30Day() const { DARABONBA_PTR_GET_DEFAULT(trafficPercent30Day_, "") };
    inline DescribeInternetOpenDetailResponseBodyDataList& setTrafficPercent30Day(string trafficPercent30Day) { DARABONBA_PTR_SET_VALUE(trafficPercent30Day_, trafficPercent30Day) };


    // trafficPercent7Day Field Functions 
    bool hasTrafficPercent7Day() const { return this->trafficPercent7Day_ != nullptr;};
    void deleteTrafficPercent7Day() { this->trafficPercent7Day_ = nullptr;};
    inline string trafficPercent7Day() const { DARABONBA_PTR_GET_DEFAULT(trafficPercent7Day_, "") };
    inline DescribeInternetOpenDetailResponseBodyDataList& setTrafficPercent7Day(string trafficPercent7Day) { DARABONBA_PTR_SET_VALUE(trafficPercent7Day_, trafficPercent7Day) };


    // unknownReason Field Functions 
    bool hasUnknownReason() const { return this->unknownReason_ != nullptr;};
    void deleteUnknownReason() { this->unknownReason_ = nullptr;};
    inline const vector<string> & unknownReason() const { DARABONBA_PTR_GET_CONST(unknownReason_, vector<string>) };
    inline vector<string> unknownReason() { DARABONBA_PTR_GET(unknownReason_, vector<string>) };
    inline DescribeInternetOpenDetailResponseBodyDataList& setUnknownReason(const vector<string> & unknownReason) { DARABONBA_PTR_SET_VALUE(unknownReason_, unknownReason) };
    inline DescribeInternetOpenDetailResponseBodyDataList& setUnknownReason(vector<string> && unknownReason) { DARABONBA_PTR_SET_RVALUE(unknownReason_, unknownReason) };


  protected:
    std::shared_ptr<string> assetsInstanceId_ = nullptr;
    std::shared_ptr<string> assetsName_ = nullptr;
    std::shared_ptr<string> assetsType_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<int64_t> inBytes_ = nullptr;
    std::shared_ptr<int64_t> outBytes_ = nullptr;
    std::shared_ptr<int32_t> port_ = nullptr;
    std::shared_ptr<string> probRisk_ = nullptr;
    std::shared_ptr<string> probRiskDesc_ = nullptr;
    std::shared_ptr<string> protocol_ = nullptr;
    std::shared_ptr<string> publicIp_ = nullptr;
    std::shared_ptr<string> regionNo_ = nullptr;
    std::shared_ptr<int32_t> riskLevel_ = nullptr;
    std::shared_ptr<string> riskReason_ = nullptr;
    std::shared_ptr<string> serviceName_ = nullptr;
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
