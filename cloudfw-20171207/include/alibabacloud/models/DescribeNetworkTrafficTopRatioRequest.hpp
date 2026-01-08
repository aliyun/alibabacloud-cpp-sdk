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
        && this->assetIP_ == nullptr && this->assetRegion_ == nullptr && this->dataType_ == nullptr && this->direction_ == nullptr && this->dstIP_ == nullptr
        && this->dstPort_ == nullptr && this->endTime_ == nullptr && this->ipProperty_ == nullptr && this->isp_ == nullptr && this->lang_ == nullptr
        && this->location_ == nullptr && this->ruleResult_ == nullptr && this->sort_ == nullptr && this->sourceCode_ == nullptr && this->sourceIp_ == nullptr
        && this->srcIP_ == nullptr && this->startTime_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline DescribeNetworkTrafficTopRatioRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // assetIP Field Functions 
    bool hasAssetIP() const { return this->assetIP_ != nullptr;};
    void deleteAssetIP() { this->assetIP_ = nullptr;};
    inline string getAssetIP() const { DARABONBA_PTR_GET_DEFAULT(assetIP_, "") };
    inline DescribeNetworkTrafficTopRatioRequest& setAssetIP(string assetIP) { DARABONBA_PTR_SET_VALUE(assetIP_, assetIP) };


    // assetRegion Field Functions 
    bool hasAssetRegion() const { return this->assetRegion_ != nullptr;};
    void deleteAssetRegion() { this->assetRegion_ = nullptr;};
    inline string getAssetRegion() const { DARABONBA_PTR_GET_DEFAULT(assetRegion_, "") };
    inline DescribeNetworkTrafficTopRatioRequest& setAssetRegion(string assetRegion) { DARABONBA_PTR_SET_VALUE(assetRegion_, assetRegion) };


    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline string getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
    inline DescribeNetworkTrafficTopRatioRequest& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline string getDirection() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
    inline DescribeNetworkTrafficTopRatioRequest& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // dstIP Field Functions 
    bool hasDstIP() const { return this->dstIP_ != nullptr;};
    void deleteDstIP() { this->dstIP_ = nullptr;};
    inline string getDstIP() const { DARABONBA_PTR_GET_DEFAULT(dstIP_, "") };
    inline DescribeNetworkTrafficTopRatioRequest& setDstIP(string dstIP) { DARABONBA_PTR_SET_VALUE(dstIP_, dstIP) };


    // dstPort Field Functions 
    bool hasDstPort() const { return this->dstPort_ != nullptr;};
    void deleteDstPort() { this->dstPort_ = nullptr;};
    inline string getDstPort() const { DARABONBA_PTR_GET_DEFAULT(dstPort_, "") };
    inline DescribeNetworkTrafficTopRatioRequest& setDstPort(string dstPort) { DARABONBA_PTR_SET_VALUE(dstPort_, dstPort) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeNetworkTrafficTopRatioRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // ipProperty Field Functions 
    bool hasIpProperty() const { return this->ipProperty_ != nullptr;};
    void deleteIpProperty() { this->ipProperty_ = nullptr;};
    inline string getIpProperty() const { DARABONBA_PTR_GET_DEFAULT(ipProperty_, "") };
    inline DescribeNetworkTrafficTopRatioRequest& setIpProperty(string ipProperty) { DARABONBA_PTR_SET_VALUE(ipProperty_, ipProperty) };


    // isp Field Functions 
    bool hasIsp() const { return this->isp_ != nullptr;};
    void deleteIsp() { this->isp_ = nullptr;};
    inline string getIsp() const { DARABONBA_PTR_GET_DEFAULT(isp_, "") };
    inline DescribeNetworkTrafficTopRatioRequest& setIsp(string isp) { DARABONBA_PTR_SET_VALUE(isp_, isp) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeNetworkTrafficTopRatioRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline string getLocation() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
    inline DescribeNetworkTrafficTopRatioRequest& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


    // ruleResult Field Functions 
    bool hasRuleResult() const { return this->ruleResult_ != nullptr;};
    void deleteRuleResult() { this->ruleResult_ = nullptr;};
    inline string getRuleResult() const { DARABONBA_PTR_GET_DEFAULT(ruleResult_, "") };
    inline DescribeNetworkTrafficTopRatioRequest& setRuleResult(string ruleResult) { DARABONBA_PTR_SET_VALUE(ruleResult_, ruleResult) };


    // sort Field Functions 
    bool hasSort() const { return this->sort_ != nullptr;};
    void deleteSort() { this->sort_ = nullptr;};
    inline string getSort() const { DARABONBA_PTR_GET_DEFAULT(sort_, "") };
    inline DescribeNetworkTrafficTopRatioRequest& setSort(string sort) { DARABONBA_PTR_SET_VALUE(sort_, sort) };


    // sourceCode Field Functions 
    bool hasSourceCode() const { return this->sourceCode_ != nullptr;};
    void deleteSourceCode() { this->sourceCode_ = nullptr;};
    inline string getSourceCode() const { DARABONBA_PTR_GET_DEFAULT(sourceCode_, "") };
    inline DescribeNetworkTrafficTopRatioRequest& setSourceCode(string sourceCode) { DARABONBA_PTR_SET_VALUE(sourceCode_, sourceCode) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline DescribeNetworkTrafficTopRatioRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // srcIP Field Functions 
    bool hasSrcIP() const { return this->srcIP_ != nullptr;};
    void deleteSrcIP() { this->srcIP_ = nullptr;};
    inline string getSrcIP() const { DARABONBA_PTR_GET_DEFAULT(srcIP_, "") };
    inline DescribeNetworkTrafficTopRatioRequest& setSrcIP(string srcIP) { DARABONBA_PTR_SET_VALUE(srcIP_, srcIP) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeNetworkTrafficTopRatioRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    shared_ptr<string> appName_ {};
    shared_ptr<string> assetIP_ {};
    shared_ptr<string> assetRegion_ {};
    // This parameter is required.
    shared_ptr<string> dataType_ {};
    shared_ptr<string> direction_ {};
    shared_ptr<string> dstIP_ {};
    shared_ptr<string> dstPort_ {};
    // This parameter is required.
    shared_ptr<string> endTime_ {};
    shared_ptr<string> ipProperty_ {};
    shared_ptr<string> isp_ {};
    shared_ptr<string> lang_ {};
    shared_ptr<string> location_ {};
    shared_ptr<string> ruleResult_ {};
    shared_ptr<string> sort_ {};
    // This parameter is required.
    shared_ptr<string> sourceCode_ {};
    shared_ptr<string> sourceIp_ {};
    shared_ptr<string> srcIP_ {};
    // This parameter is required.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
