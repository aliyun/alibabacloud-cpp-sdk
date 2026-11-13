// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINVADEEVENTPAYLOADREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINVADEEVENTPAYLOADREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeInvadeEventPayloadRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInvadeEventPayloadRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AssetsInstanceId, assetsInstanceId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(EventUuid, eventUuid_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PrivateIP, privateIP_);
      DARABONBA_PTR_TO_JSON(PublicIP, publicIP_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInvadeEventPayloadRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetsInstanceId, assetsInstanceId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(EventUuid, eventUuid_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PrivateIP, privateIP_);
      DARABONBA_PTR_FROM_JSON(PublicIP, publicIP_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeInvadeEventPayloadRequest() = default ;
    DescribeInvadeEventPayloadRequest(const DescribeInvadeEventPayloadRequest &) = default ;
    DescribeInvadeEventPayloadRequest(DescribeInvadeEventPayloadRequest &&) = default ;
    DescribeInvadeEventPayloadRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInvadeEventPayloadRequest() = default ;
    DescribeInvadeEventPayloadRequest& operator=(const DescribeInvadeEventPayloadRequest &) = default ;
    DescribeInvadeEventPayloadRequest& operator=(DescribeInvadeEventPayloadRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assetsInstanceId_ == nullptr
        && this->endTime_ == nullptr && this->eventUuid_ == nullptr && this->lang_ == nullptr && this->privateIP_ == nullptr && this->publicIP_ == nullptr
        && this->sourceIp_ == nullptr && this->startTime_ == nullptr; };
    // assetsInstanceId Field Functions 
    bool hasAssetsInstanceId() const { return this->assetsInstanceId_ != nullptr;};
    void deleteAssetsInstanceId() { this->assetsInstanceId_ = nullptr;};
    inline string getAssetsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(assetsInstanceId_, "") };
    inline DescribeInvadeEventPayloadRequest& setAssetsInstanceId(string assetsInstanceId) { DARABONBA_PTR_SET_VALUE(assetsInstanceId_, assetsInstanceId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeInvadeEventPayloadRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // eventUuid Field Functions 
    bool hasEventUuid() const { return this->eventUuid_ != nullptr;};
    void deleteEventUuid() { this->eventUuid_ = nullptr;};
    inline string getEventUuid() const { DARABONBA_PTR_GET_DEFAULT(eventUuid_, "") };
    inline DescribeInvadeEventPayloadRequest& setEventUuid(string eventUuid) { DARABONBA_PTR_SET_VALUE(eventUuid_, eventUuid) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeInvadeEventPayloadRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // privateIP Field Functions 
    bool hasPrivateIP() const { return this->privateIP_ != nullptr;};
    void deletePrivateIP() { this->privateIP_ = nullptr;};
    inline string getPrivateIP() const { DARABONBA_PTR_GET_DEFAULT(privateIP_, "") };
    inline DescribeInvadeEventPayloadRequest& setPrivateIP(string privateIP) { DARABONBA_PTR_SET_VALUE(privateIP_, privateIP) };


    // publicIP Field Functions 
    bool hasPublicIP() const { return this->publicIP_ != nullptr;};
    void deletePublicIP() { this->publicIP_ = nullptr;};
    inline string getPublicIP() const { DARABONBA_PTR_GET_DEFAULT(publicIP_, "") };
    inline DescribeInvadeEventPayloadRequest& setPublicIP(string publicIP) { DARABONBA_PTR_SET_VALUE(publicIP_, publicIP) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline DescribeInvadeEventPayloadRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeInvadeEventPayloadRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The instance ID of the asset where the intrusion event occurred.
    shared_ptr<string> assetsInstanceId_ {};
    // The end time of the time range during which the event occurred. The value is a UNIX timestamp in seconds.
    // 
    // This parameter is required.
    shared_ptr<string> endTime_ {};
    // The unique ID of the event.
    shared_ptr<string> eventUuid_ {};
    // The language of the request and response. Valid values:
    // - **zh**: Chinese
    // - **en**: English
    shared_ptr<string> lang_ {};
    // The private IP address of the asset where the intrusion event occurred.
    shared_ptr<string> privateIP_ {};
    // The public IP address of the asset where the intrusion event occurred.
    shared_ptr<string> publicIP_ {};
    // The source IP address of the caller.
    shared_ptr<string> sourceIp_ {};
    // The start time of the time range during which the event occurred. The value is a UNIX timestamp in seconds.
    // 
    // This parameter is required.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
