// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKTRAFFICTOPRATIOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKTRAFFICTOPRATIOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeNetworkTrafficTopRatioRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkTrafficTopRatioRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(AssetIP, assetIP_);
      DARABONBA_PTR_TO_JSON(AssetRegion, assetRegion_);
      DARABONBA_PTR_TO_JSON(DataType, dataType_);
      DARABONBA_PTR_TO_JSON(Direction, direction_);
      DARABONBA_PTR_TO_JSON(DstIP, dstIP_);
      DARABONBA_PTR_TO_JSON(DstPort, dstPort_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(IpProperty, ipProperty_);
      DARABONBA_PTR_TO_JSON(Isp, isp_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Location, location_);
      DARABONBA_PTR_TO_JSON(RuleResult, ruleResult_);
      DARABONBA_PTR_TO_JSON(Sort, sort_);
      DARABONBA_PTR_TO_JSON(SourceCode, sourceCode_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(SrcIP, srcIP_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkTrafficTopRatioRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(AssetIP, assetIP_);
      DARABONBA_PTR_FROM_JSON(AssetRegion, assetRegion_);
      DARABONBA_PTR_FROM_JSON(DataType, dataType_);
      DARABONBA_PTR_FROM_JSON(Direction, direction_);
      DARABONBA_PTR_FROM_JSON(DstIP, dstIP_);
      DARABONBA_PTR_FROM_JSON(DstPort, dstPort_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(IpProperty, ipProperty_);
      DARABONBA_PTR_FROM_JSON(Isp, isp_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Location, location_);
      DARABONBA_PTR_FROM_JSON(RuleResult, ruleResult_);
      DARABONBA_PTR_FROM_JSON(Sort, sort_);
      DARABONBA_PTR_FROM_JSON(SourceCode, sourceCode_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(SrcIP, srcIP_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeNetworkTrafficTopRatioRequest() = default ;
    DescribeNetworkTrafficTopRatioRequest(const DescribeNetworkTrafficTopRatioRequest &) = default ;
    DescribeNetworkTrafficTopRatioRequest(DescribeNetworkTrafficTopRatioRequest &&) = default ;
    DescribeNetworkTrafficTopRatioRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkTrafficTopRatioRequest() = default ;
    DescribeNetworkTrafficTopRatioRequest& operator=(const DescribeNetworkTrafficTopRatioRequest &) = default ;
    DescribeNetworkTrafficTopRatioRequest& operator=(DescribeNetworkTrafficTopRatioRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && return this->assetIP_ == nullptr && return this->assetRegion_ == nullptr && return this->dataType_ == nullptr && return this->direction_ == nullptr && return this->dstIP_ == nullptr
        && return this->dstPort_ == nullptr && return this->endTime_ == nullptr && return this->ipProperty_ == nullptr && return this->isp_ == nullptr && return this->lang_ == nullptr
        && return this->location_ == nullptr && return this->ruleResult_ == nullptr && return this->sort_ == nullptr && return this->sourceCode_ == nullptr && return this->sourceIp_ == nullptr
        && return this->srcIP_ == nullptr && return this->startTime_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline DescribeNetworkTrafficTopRatioRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // assetIP Field Functions 
    bool hasAssetIP() const { return this->assetIP_ != nullptr;};
    void deleteAssetIP() { this->assetIP_ = nullptr;};
    inline string assetIP() const { DARABONBA_PTR_GET_DEFAULT(assetIP_, "") };
    inline DescribeNetworkTrafficTopRatioRequest& setAssetIP(string assetIP) { DARABONBA_PTR_SET_VALUE(assetIP_, assetIP) };


    // assetRegion Field Functions 
    bool hasAssetRegion() const { return this->assetRegion_ != nullptr;};
    void deleteAssetRegion() { this->assetRegion_ = nullptr;};
    inline string assetRegion() const { DARABONBA_PTR_GET_DEFAULT(assetRegion_, "") };
    inline DescribeNetworkTrafficTopRatioRequest& setAssetRegion(string assetRegion) { DARABONBA_PTR_SET_VALUE(assetRegion_, assetRegion) };


    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline string dataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
    inline DescribeNetworkTrafficTopRatioRequest& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline string direction() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
    inline DescribeNetworkTrafficTopRatioRequest& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // dstIP Field Functions 
    bool hasDstIP() const { return this->dstIP_ != nullptr;};
    void deleteDstIP() { this->dstIP_ = nullptr;};
    inline string dstIP() const { DARABONBA_PTR_GET_DEFAULT(dstIP_, "") };
    inline DescribeNetworkTrafficTopRatioRequest& setDstIP(string dstIP) { DARABONBA_PTR_SET_VALUE(dstIP_, dstIP) };


    // dstPort Field Functions 
    bool hasDstPort() const { return this->dstPort_ != nullptr;};
    void deleteDstPort() { this->dstPort_ = nullptr;};
    inline string dstPort() const { DARABONBA_PTR_GET_DEFAULT(dstPort_, "") };
    inline DescribeNetworkTrafficTopRatioRequest& setDstPort(string dstPort) { DARABONBA_PTR_SET_VALUE(dstPort_, dstPort) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeNetworkTrafficTopRatioRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // ipProperty Field Functions 
    bool hasIpProperty() const { return this->ipProperty_ != nullptr;};
    void deleteIpProperty() { this->ipProperty_ = nullptr;};
    inline string ipProperty() const { DARABONBA_PTR_GET_DEFAULT(ipProperty_, "") };
    inline DescribeNetworkTrafficTopRatioRequest& setIpProperty(string ipProperty) { DARABONBA_PTR_SET_VALUE(ipProperty_, ipProperty) };


    // isp Field Functions 
    bool hasIsp() const { return this->isp_ != nullptr;};
    void deleteIsp() { this->isp_ = nullptr;};
    inline string isp() const { DARABONBA_PTR_GET_DEFAULT(isp_, "") };
    inline DescribeNetworkTrafficTopRatioRequest& setIsp(string isp) { DARABONBA_PTR_SET_VALUE(isp_, isp) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeNetworkTrafficTopRatioRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline string location() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
    inline DescribeNetworkTrafficTopRatioRequest& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


    // ruleResult Field Functions 
    bool hasRuleResult() const { return this->ruleResult_ != nullptr;};
    void deleteRuleResult() { this->ruleResult_ = nullptr;};
    inline string ruleResult() const { DARABONBA_PTR_GET_DEFAULT(ruleResult_, "") };
    inline DescribeNetworkTrafficTopRatioRequest& setRuleResult(string ruleResult) { DARABONBA_PTR_SET_VALUE(ruleResult_, ruleResult) };


    // sort Field Functions 
    bool hasSort() const { return this->sort_ != nullptr;};
    void deleteSort() { this->sort_ = nullptr;};
    inline string sort() const { DARABONBA_PTR_GET_DEFAULT(sort_, "") };
    inline DescribeNetworkTrafficTopRatioRequest& setSort(string sort) { DARABONBA_PTR_SET_VALUE(sort_, sort) };


    // sourceCode Field Functions 
    bool hasSourceCode() const { return this->sourceCode_ != nullptr;};
    void deleteSourceCode() { this->sourceCode_ = nullptr;};
    inline string sourceCode() const { DARABONBA_PTR_GET_DEFAULT(sourceCode_, "") };
    inline DescribeNetworkTrafficTopRatioRequest& setSourceCode(string sourceCode) { DARABONBA_PTR_SET_VALUE(sourceCode_, sourceCode) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string sourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline DescribeNetworkTrafficTopRatioRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // srcIP Field Functions 
    bool hasSrcIP() const { return this->srcIP_ != nullptr;};
    void deleteSrcIP() { this->srcIP_ = nullptr;};
    inline string srcIP() const { DARABONBA_PTR_GET_DEFAULT(srcIP_, "") };
    inline DescribeNetworkTrafficTopRatioRequest& setSrcIP(string srcIP) { DARABONBA_PTR_SET_VALUE(srcIP_, srcIP) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeNetworkTrafficTopRatioRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    std::shared_ptr<string> appName_ = nullptr;
    std::shared_ptr<string> assetIP_ = nullptr;
    std::shared_ptr<string> assetRegion_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> dataType_ = nullptr;
    std::shared_ptr<string> direction_ = nullptr;
    std::shared_ptr<string> dstIP_ = nullptr;
    std::shared_ptr<string> dstPort_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<string> ipProperty_ = nullptr;
    std::shared_ptr<string> isp_ = nullptr;
    std::shared_ptr<string> lang_ = nullptr;
    std::shared_ptr<string> location_ = nullptr;
    std::shared_ptr<string> ruleResult_ = nullptr;
    std::shared_ptr<string> sort_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> sourceCode_ = nullptr;
    std::shared_ptr<string> sourceIp_ = nullptr;
    std::shared_ptr<string> srcIP_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
