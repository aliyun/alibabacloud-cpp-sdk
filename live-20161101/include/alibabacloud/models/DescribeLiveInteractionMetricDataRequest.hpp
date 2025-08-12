// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEINTERACTIONMETRICDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEINTERACTIONMETRICDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveInteractionMetricDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveInteractionMetricDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(BeginTs, beginTs_);
      DARABONBA_PTR_TO_JSON(EndTs, endTs_);
      DARABONBA_PTR_TO_JSON(MetricType, metricType_);
      DARABONBA_PTR_TO_JSON(Os, os_);
      DARABONBA_PTR_TO_JSON(TerminalType, terminalType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveInteractionMetricDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(BeginTs, beginTs_);
      DARABONBA_PTR_FROM_JSON(EndTs, endTs_);
      DARABONBA_PTR_FROM_JSON(MetricType, metricType_);
      DARABONBA_PTR_FROM_JSON(Os, os_);
      DARABONBA_PTR_FROM_JSON(TerminalType, terminalType_);
    };
    DescribeLiveInteractionMetricDataRequest() = default ;
    DescribeLiveInteractionMetricDataRequest(const DescribeLiveInteractionMetricDataRequest &) = default ;
    DescribeLiveInteractionMetricDataRequest(DescribeLiveInteractionMetricDataRequest &&) = default ;
    DescribeLiveInteractionMetricDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveInteractionMetricDataRequest() = default ;
    DescribeLiveInteractionMetricDataRequest& operator=(const DescribeLiveInteractionMetricDataRequest &) = default ;
    DescribeLiveInteractionMetricDataRequest& operator=(DescribeLiveInteractionMetricDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->beginTs_ != nullptr && this->endTs_ != nullptr && this->metricType_ != nullptr && this->os_ != nullptr && this->terminalType_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DescribeLiveInteractionMetricDataRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // beginTs Field Functions 
    bool hasBeginTs() const { return this->beginTs_ != nullptr;};
    void deleteBeginTs() { this->beginTs_ = nullptr;};
    inline int64_t beginTs() const { DARABONBA_PTR_GET_DEFAULT(beginTs_, 0L) };
    inline DescribeLiveInteractionMetricDataRequest& setBeginTs(int64_t beginTs) { DARABONBA_PTR_SET_VALUE(beginTs_, beginTs) };


    // endTs Field Functions 
    bool hasEndTs() const { return this->endTs_ != nullptr;};
    void deleteEndTs() { this->endTs_ = nullptr;};
    inline int64_t endTs() const { DARABONBA_PTR_GET_DEFAULT(endTs_, 0L) };
    inline DescribeLiveInteractionMetricDataRequest& setEndTs(int64_t endTs) { DARABONBA_PTR_SET_VALUE(endTs_, endTs) };


    // metricType Field Functions 
    bool hasMetricType() const { return this->metricType_ != nullptr;};
    void deleteMetricType() { this->metricType_ = nullptr;};
    inline string metricType() const { DARABONBA_PTR_GET_DEFAULT(metricType_, "") };
    inline DescribeLiveInteractionMetricDataRequest& setMetricType(string metricType) { DARABONBA_PTR_SET_VALUE(metricType_, metricType) };


    // os Field Functions 
    bool hasOs() const { return this->os_ != nullptr;};
    void deleteOs() { this->os_ = nullptr;};
    inline string os() const { DARABONBA_PTR_GET_DEFAULT(os_, "") };
    inline DescribeLiveInteractionMetricDataRequest& setOs(string os) { DARABONBA_PTR_SET_VALUE(os_, os) };


    // terminalType Field Functions 
    bool hasTerminalType() const { return this->terminalType_ != nullptr;};
    void deleteTerminalType() { this->terminalType_ = nullptr;};
    inline string terminalType() const { DARABONBA_PTR_GET_DEFAULT(terminalType_, "") };
    inline DescribeLiveInteractionMetricDataRequest& setTerminalType(string terminalType) { DARABONBA_PTR_SET_VALUE(terminalType_, terminalType) };


  protected:
    // The ID of the application.
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // The beginning of the time range to query. The value is a UNIX timestamp. Unit: milliseconds.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> beginTs_ = nullptr;
    // The end of the time range to query. The value is a UNIX timestamp. Unit: milliseconds.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> endTs_ = nullptr;
    // The metric. Valid values:
    // 
    // *   JoinChannelSucRate: the success rate of joining a channel within 5 seconds.
    // *   VideoStuckRate: the video stuttering rate.
    // *   AudioStuckRate: the audio stuttering rate.
    // *   FirstFrameCost: the time to first frame.
    // 
    // This parameter is required.
    std::shared_ptr<string> metricType_ = nullptr;
    // The operating system. Valid values: iOS and Android.
    std::shared_ptr<string> os_ = nullptr;
    // The terminal type. Valid values: web and mobile.
    std::shared_ptr<string> terminalType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
