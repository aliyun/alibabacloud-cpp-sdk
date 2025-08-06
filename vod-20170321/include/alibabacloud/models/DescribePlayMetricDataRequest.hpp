// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPLAYMETRICDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPLAYMETRICDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribePlayMetricDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePlayMetricDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(BeginTs, beginTs_);
      DARABONBA_PTR_TO_JSON(Definition, definition_);
      DARABONBA_PTR_TO_JSON(EndTs, endTs_);
      DARABONBA_PTR_TO_JSON(ExperienceLevel, experienceLevel_);
      DARABONBA_PTR_TO_JSON(ItemConfigs, itemConfigs_);
      DARABONBA_PTR_TO_JSON(MetricType, metricType_);
      DARABONBA_PTR_TO_JSON(Network, network_);
      DARABONBA_PTR_TO_JSON(Os, os_);
      DARABONBA_PTR_TO_JSON(SdkVersion, sdkVersion_);
      DARABONBA_PTR_TO_JSON(TerminalType, terminalType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePlayMetricDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(BeginTs, beginTs_);
      DARABONBA_PTR_FROM_JSON(Definition, definition_);
      DARABONBA_PTR_FROM_JSON(EndTs, endTs_);
      DARABONBA_PTR_FROM_JSON(ExperienceLevel, experienceLevel_);
      DARABONBA_PTR_FROM_JSON(ItemConfigs, itemConfigs_);
      DARABONBA_PTR_FROM_JSON(MetricType, metricType_);
      DARABONBA_PTR_FROM_JSON(Network, network_);
      DARABONBA_PTR_FROM_JSON(Os, os_);
      DARABONBA_PTR_FROM_JSON(SdkVersion, sdkVersion_);
      DARABONBA_PTR_FROM_JSON(TerminalType, terminalType_);
    };
    DescribePlayMetricDataRequest() = default ;
    DescribePlayMetricDataRequest(const DescribePlayMetricDataRequest &) = default ;
    DescribePlayMetricDataRequest(DescribePlayMetricDataRequest &&) = default ;
    DescribePlayMetricDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePlayMetricDataRequest() = default ;
    DescribePlayMetricDataRequest& operator=(const DescribePlayMetricDataRequest &) = default ;
    DescribePlayMetricDataRequest& operator=(DescribePlayMetricDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appName_ != nullptr
        && this->beginTs_ != nullptr && this->definition_ != nullptr && this->endTs_ != nullptr && this->experienceLevel_ != nullptr && this->itemConfigs_ != nullptr
        && this->metricType_ != nullptr && this->network_ != nullptr && this->os_ != nullptr && this->sdkVersion_ != nullptr && this->terminalType_ != nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline DescribePlayMetricDataRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // beginTs Field Functions 
    bool hasBeginTs() const { return this->beginTs_ != nullptr;};
    void deleteBeginTs() { this->beginTs_ = nullptr;};
    inline string beginTs() const { DARABONBA_PTR_GET_DEFAULT(beginTs_, "") };
    inline DescribePlayMetricDataRequest& setBeginTs(string beginTs) { DARABONBA_PTR_SET_VALUE(beginTs_, beginTs) };


    // definition Field Functions 
    bool hasDefinition() const { return this->definition_ != nullptr;};
    void deleteDefinition() { this->definition_ = nullptr;};
    inline string definition() const { DARABONBA_PTR_GET_DEFAULT(definition_, "") };
    inline DescribePlayMetricDataRequest& setDefinition(string definition) { DARABONBA_PTR_SET_VALUE(definition_, definition) };


    // endTs Field Functions 
    bool hasEndTs() const { return this->endTs_ != nullptr;};
    void deleteEndTs() { this->endTs_ = nullptr;};
    inline string endTs() const { DARABONBA_PTR_GET_DEFAULT(endTs_, "") };
    inline DescribePlayMetricDataRequest& setEndTs(string endTs) { DARABONBA_PTR_SET_VALUE(endTs_, endTs) };


    // experienceLevel Field Functions 
    bool hasExperienceLevel() const { return this->experienceLevel_ != nullptr;};
    void deleteExperienceLevel() { this->experienceLevel_ = nullptr;};
    inline string experienceLevel() const { DARABONBA_PTR_GET_DEFAULT(experienceLevel_, "") };
    inline DescribePlayMetricDataRequest& setExperienceLevel(string experienceLevel) { DARABONBA_PTR_SET_VALUE(experienceLevel_, experienceLevel) };


    // itemConfigs Field Functions 
    bool hasItemConfigs() const { return this->itemConfigs_ != nullptr;};
    void deleteItemConfigs() { this->itemConfigs_ = nullptr;};
    inline string itemConfigs() const { DARABONBA_PTR_GET_DEFAULT(itemConfigs_, "") };
    inline DescribePlayMetricDataRequest& setItemConfigs(string itemConfigs) { DARABONBA_PTR_SET_VALUE(itemConfigs_, itemConfigs) };


    // metricType Field Functions 
    bool hasMetricType() const { return this->metricType_ != nullptr;};
    void deleteMetricType() { this->metricType_ = nullptr;};
    inline string metricType() const { DARABONBA_PTR_GET_DEFAULT(metricType_, "") };
    inline DescribePlayMetricDataRequest& setMetricType(string metricType) { DARABONBA_PTR_SET_VALUE(metricType_, metricType) };


    // network Field Functions 
    bool hasNetwork() const { return this->network_ != nullptr;};
    void deleteNetwork() { this->network_ = nullptr;};
    inline string network() const { DARABONBA_PTR_GET_DEFAULT(network_, "") };
    inline DescribePlayMetricDataRequest& setNetwork(string network) { DARABONBA_PTR_SET_VALUE(network_, network) };


    // os Field Functions 
    bool hasOs() const { return this->os_ != nullptr;};
    void deleteOs() { this->os_ = nullptr;};
    inline string os() const { DARABONBA_PTR_GET_DEFAULT(os_, "") };
    inline DescribePlayMetricDataRequest& setOs(string os) { DARABONBA_PTR_SET_VALUE(os_, os) };


    // sdkVersion Field Functions 
    bool hasSdkVersion() const { return this->sdkVersion_ != nullptr;};
    void deleteSdkVersion() { this->sdkVersion_ = nullptr;};
    inline string sdkVersion() const { DARABONBA_PTR_GET_DEFAULT(sdkVersion_, "") };
    inline DescribePlayMetricDataRequest& setSdkVersion(string sdkVersion) { DARABONBA_PTR_SET_VALUE(sdkVersion_, sdkVersion) };


    // terminalType Field Functions 
    bool hasTerminalType() const { return this->terminalType_ != nullptr;};
    void deleteTerminalType() { this->terminalType_ = nullptr;};
    inline string terminalType() const { DARABONBA_PTR_GET_DEFAULT(terminalType_, "") };
    inline DescribePlayMetricDataRequest& setTerminalType(string terminalType) { DARABONBA_PTR_SET_VALUE(terminalType_, terminalType) };


  protected:
    std::shared_ptr<string> appName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> beginTs_ = nullptr;
    std::shared_ptr<string> definition_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> endTs_ = nullptr;
    std::shared_ptr<string> experienceLevel_ = nullptr;
    std::shared_ptr<string> itemConfigs_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> metricType_ = nullptr;
    std::shared_ptr<string> network_ = nullptr;
    std::shared_ptr<string> os_ = nullptr;
    std::shared_ptr<string> sdkVersion_ = nullptr;
    std::shared_ptr<string> terminalType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
