// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINTERNETTRAFFICTRENDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINTERNETTRAFFICTRENDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeInternetTrafficTrendRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInternetTrafficTrendRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Direction, direction_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(SourceCode, sourceCode_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(SrcPrivateIP, srcPrivateIP_);
      DARABONBA_PTR_TO_JSON(SrcPublicIP, srcPublicIP_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TrafficType, trafficType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInternetTrafficTrendRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Direction, direction_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(SourceCode, sourceCode_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(SrcPrivateIP, srcPrivateIP_);
      DARABONBA_PTR_FROM_JSON(SrcPublicIP, srcPublicIP_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TrafficType, trafficType_);
    };
    DescribeInternetTrafficTrendRequest() = default ;
    DescribeInternetTrafficTrendRequest(const DescribeInternetTrafficTrendRequest &) = default ;
    DescribeInternetTrafficTrendRequest(DescribeInternetTrafficTrendRequest &&) = default ;
    DescribeInternetTrafficTrendRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInternetTrafficTrendRequest() = default ;
    DescribeInternetTrafficTrendRequest& operator=(const DescribeInternetTrafficTrendRequest &) = default ;
    DescribeInternetTrafficTrendRequest& operator=(DescribeInternetTrafficTrendRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->direction_ == nullptr
        && this->endTime_ == nullptr && this->lang_ == nullptr && this->sourceCode_ == nullptr && this->sourceIp_ == nullptr && this->srcPrivateIP_ == nullptr
        && this->srcPublicIP_ == nullptr && this->startTime_ == nullptr && this->trafficType_ == nullptr; };
    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline string getDirection() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
    inline DescribeInternetTrafficTrendRequest& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeInternetTrafficTrendRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeInternetTrafficTrendRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // sourceCode Field Functions 
    bool hasSourceCode() const { return this->sourceCode_ != nullptr;};
    void deleteSourceCode() { this->sourceCode_ = nullptr;};
    inline string getSourceCode() const { DARABONBA_PTR_GET_DEFAULT(sourceCode_, "") };
    inline DescribeInternetTrafficTrendRequest& setSourceCode(string sourceCode) { DARABONBA_PTR_SET_VALUE(sourceCode_, sourceCode) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline DescribeInternetTrafficTrendRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // srcPrivateIP Field Functions 
    bool hasSrcPrivateIP() const { return this->srcPrivateIP_ != nullptr;};
    void deleteSrcPrivateIP() { this->srcPrivateIP_ = nullptr;};
    inline string getSrcPrivateIP() const { DARABONBA_PTR_GET_DEFAULT(srcPrivateIP_, "") };
    inline DescribeInternetTrafficTrendRequest& setSrcPrivateIP(string srcPrivateIP) { DARABONBA_PTR_SET_VALUE(srcPrivateIP_, srcPrivateIP) };


    // srcPublicIP Field Functions 
    bool hasSrcPublicIP() const { return this->srcPublicIP_ != nullptr;};
    void deleteSrcPublicIP() { this->srcPublicIP_ = nullptr;};
    inline string getSrcPublicIP() const { DARABONBA_PTR_GET_DEFAULT(srcPublicIP_, "") };
    inline DescribeInternetTrafficTrendRequest& setSrcPublicIP(string srcPublicIP) { DARABONBA_PTR_SET_VALUE(srcPublicIP_, srcPublicIP) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeInternetTrafficTrendRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // trafficType Field Functions 
    bool hasTrafficType() const { return this->trafficType_ != nullptr;};
    void deleteTrafficType() { this->trafficType_ = nullptr;};
    inline string getTrafficType() const { DARABONBA_PTR_GET_DEFAULT(trafficType_, "") };
    inline DescribeInternetTrafficTrendRequest& setTrafficType(string trafficType) { DARABONBA_PTR_SET_VALUE(trafficType_, trafficType) };


  protected:
    // The direction of the internet traffic.
    // 
    // Valid values:
    // 
    // *   **in**: inbound traffic
    // *   **out**: outbound traffic
    shared_ptr<string> direction_ {};
    // The end of the time range to query. The value is a UNIX timestamp. Unit: seconds.
    // 
    // This parameter is required.
    shared_ptr<string> endTime_ {};
    // The language of the content in the request and response. Valid values:
    // 
    // *   **zh** (default): Chinese
    // *   **en**: English
    shared_ptr<string> lang_ {};
    // The source code.
    // 
    // This parameter is required.
    shared_ptr<string> sourceCode_ {};
    // The IP address of the access source.
    shared_ptr<string> sourceIp_ {};
    // The private IP address of the source.
    shared_ptr<string> srcPrivateIP_ {};
    // The public IP address of the source.
    shared_ptr<string> srcPublicIP_ {};
    // The beginning of the time range to query. The value is a UNIX timestamp. Unit: seconds.
    // 
    // This parameter is required.
    shared_ptr<string> startTime_ {};
    // The type of the traffic that is captured. Valid values:
    // 
    // *   **max** (default): peak traffic
    // *   **avg**: average traffic
    shared_ptr<string> trafficType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
