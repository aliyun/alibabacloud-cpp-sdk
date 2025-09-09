// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINLOGSRESPONSEBODYDOMAINLOGSDOMAINLOG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINLOGSRESPONSEBODYDOMAINLOGSDOMAINLOG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDomainLogsResponseBodyDomainLogsDomainLog : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainLogsResponseBodyDomainLogsDomainLog& obj) { 
      DARABONBA_PTR_TO_JSON(Action, action_);
      DARABONBA_PTR_TO_JSON(ActionTime, actionTime_);
      DARABONBA_PTR_TO_JSON(ActionTimestamp, actionTimestamp_);
      DARABONBA_PTR_TO_JSON(ClientIp, clientIp_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainLogsResponseBodyDomainLogsDomainLog& obj) { 
      DARABONBA_PTR_FROM_JSON(Action, action_);
      DARABONBA_PTR_FROM_JSON(ActionTime, actionTime_);
      DARABONBA_PTR_FROM_JSON(ActionTimestamp, actionTimestamp_);
      DARABONBA_PTR_FROM_JSON(ClientIp, clientIp_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeDomainLogsResponseBodyDomainLogsDomainLog() = default ;
    DescribeDomainLogsResponseBodyDomainLogsDomainLog(const DescribeDomainLogsResponseBodyDomainLogsDomainLog &) = default ;
    DescribeDomainLogsResponseBodyDomainLogsDomainLog(DescribeDomainLogsResponseBodyDomainLogsDomainLog &&) = default ;
    DescribeDomainLogsResponseBodyDomainLogsDomainLog(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainLogsResponseBodyDomainLogsDomainLog() = default ;
    DescribeDomainLogsResponseBodyDomainLogsDomainLog& operator=(const DescribeDomainLogsResponseBodyDomainLogsDomainLog &) = default ;
    DescribeDomainLogsResponseBodyDomainLogsDomainLog& operator=(DescribeDomainLogsResponseBodyDomainLogsDomainLog &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->action_ != nullptr
        && this->actionTime_ != nullptr && this->actionTimestamp_ != nullptr && this->clientIp_ != nullptr && this->domainName_ != nullptr && this->message_ != nullptr
        && this->zoneId_ != nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string action() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline DescribeDomainLogsResponseBodyDomainLogsDomainLog& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // actionTime Field Functions 
    bool hasActionTime() const { return this->actionTime_ != nullptr;};
    void deleteActionTime() { this->actionTime_ = nullptr;};
    inline string actionTime() const { DARABONBA_PTR_GET_DEFAULT(actionTime_, "") };
    inline DescribeDomainLogsResponseBodyDomainLogsDomainLog& setActionTime(string actionTime) { DARABONBA_PTR_SET_VALUE(actionTime_, actionTime) };


    // actionTimestamp Field Functions 
    bool hasActionTimestamp() const { return this->actionTimestamp_ != nullptr;};
    void deleteActionTimestamp() { this->actionTimestamp_ = nullptr;};
    inline int64_t actionTimestamp() const { DARABONBA_PTR_GET_DEFAULT(actionTimestamp_, 0L) };
    inline DescribeDomainLogsResponseBodyDomainLogsDomainLog& setActionTimestamp(int64_t actionTimestamp) { DARABONBA_PTR_SET_VALUE(actionTimestamp_, actionTimestamp) };


    // clientIp Field Functions 
    bool hasClientIp() const { return this->clientIp_ != nullptr;};
    void deleteClientIp() { this->clientIp_ = nullptr;};
    inline string clientIp() const { DARABONBA_PTR_GET_DEFAULT(clientIp_, "") };
    inline DescribeDomainLogsResponseBodyDomainLogsDomainLog& setClientIp(string clientIp) { DARABONBA_PTR_SET_VALUE(clientIp_, clientIp) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeDomainLogsResponseBodyDomainLogsDomainLog& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeDomainLogsResponseBodyDomainLogsDomainLog& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeDomainLogsResponseBodyDomainLogsDomainLog& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The operation.
    std::shared_ptr<string> action_ = nullptr;
    // The time when the operation is performed. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ss format. The time is displayed in UTC.
    std::shared_ptr<string> actionTime_ = nullptr;
    // The time when the operation was performed. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> actionTimestamp_ = nullptr;
    // The IP address of the operator.
    std::shared_ptr<string> clientIp_ = nullptr;
    // The domain name.
    std::shared_ptr<string> domainName_ = nullptr;
    // The message for the operation.
    std::shared_ptr<string> message_ = nullptr;
    // The ID of the private zone.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
