// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETWAITINGROOMCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETWAITINGROOMCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class SetWaitingRoomConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetWaitingRoomConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AllowPct, allowPct_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(GapTime, gapTime_);
      DARABONBA_PTR_TO_JSON(MaxTimeWait, maxTimeWait_);
      DARABONBA_PTR_TO_JSON(WaitUri, waitUri_);
      DARABONBA_PTR_TO_JSON(WaitUrl, waitUrl_);
    };
    friend void from_json(const Darabonba::Json& j, SetWaitingRoomConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowPct, allowPct_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(GapTime, gapTime_);
      DARABONBA_PTR_FROM_JSON(MaxTimeWait, maxTimeWait_);
      DARABONBA_PTR_FROM_JSON(WaitUri, waitUri_);
      DARABONBA_PTR_FROM_JSON(WaitUrl, waitUrl_);
    };
    SetWaitingRoomConfigRequest() = default ;
    SetWaitingRoomConfigRequest(const SetWaitingRoomConfigRequest &) = default ;
    SetWaitingRoomConfigRequest(SetWaitingRoomConfigRequest &&) = default ;
    SetWaitingRoomConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetWaitingRoomConfigRequest() = default ;
    SetWaitingRoomConfigRequest& operator=(const SetWaitingRoomConfigRequest &) = default ;
    SetWaitingRoomConfigRequest& operator=(SetWaitingRoomConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allowPct_ == nullptr
        && return this->domainName_ == nullptr && return this->gapTime_ == nullptr && return this->maxTimeWait_ == nullptr && return this->waitUri_ == nullptr && return this->waitUrl_ == nullptr; };
    // allowPct Field Functions 
    bool hasAllowPct() const { return this->allowPct_ != nullptr;};
    void deleteAllowPct() { this->allowPct_ = nullptr;};
    inline int32_t allowPct() const { DARABONBA_PTR_GET_DEFAULT(allowPct_, 0) };
    inline SetWaitingRoomConfigRequest& setAllowPct(int32_t allowPct) { DARABONBA_PTR_SET_VALUE(allowPct_, allowPct) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline SetWaitingRoomConfigRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // gapTime Field Functions 
    bool hasGapTime() const { return this->gapTime_ != nullptr;};
    void deleteGapTime() { this->gapTime_ = nullptr;};
    inline int32_t gapTime() const { DARABONBA_PTR_GET_DEFAULT(gapTime_, 0) };
    inline SetWaitingRoomConfigRequest& setGapTime(int32_t gapTime) { DARABONBA_PTR_SET_VALUE(gapTime_, gapTime) };


    // maxTimeWait Field Functions 
    bool hasMaxTimeWait() const { return this->maxTimeWait_ != nullptr;};
    void deleteMaxTimeWait() { this->maxTimeWait_ = nullptr;};
    inline int32_t maxTimeWait() const { DARABONBA_PTR_GET_DEFAULT(maxTimeWait_, 0) };
    inline SetWaitingRoomConfigRequest& setMaxTimeWait(int32_t maxTimeWait) { DARABONBA_PTR_SET_VALUE(maxTimeWait_, maxTimeWait) };


    // waitUri Field Functions 
    bool hasWaitUri() const { return this->waitUri_ != nullptr;};
    void deleteWaitUri() { this->waitUri_ = nullptr;};
    inline string waitUri() const { DARABONBA_PTR_GET_DEFAULT(waitUri_, "") };
    inline SetWaitingRoomConfigRequest& setWaitUri(string waitUri) { DARABONBA_PTR_SET_VALUE(waitUri_, waitUri) };


    // waitUrl Field Functions 
    bool hasWaitUrl() const { return this->waitUrl_ != nullptr;};
    void deleteWaitUrl() { this->waitUrl_ = nullptr;};
    inline string waitUrl() const { DARABONBA_PTR_GET_DEFAULT(waitUrl_, "") };
    inline SetWaitingRoomConfigRequest& setWaitUrl(string waitUrl) { DARABONBA_PTR_SET_VALUE(waitUrl_, waitUrl) };


  protected:
    // The percentage of requests that are allowed to be redirected to the origin server. Valid values: **0** to **100**.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> allowPct_ = nullptr;
    // The accelerated domain name. You can specify only one domain name.
    // 
    // This parameter is required.
    std::shared_ptr<string> domainName_ = nullptr;
    // The length of waiting time to skip after an exit from the queue. Unit: seconds.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> gapTime_ = nullptr;
    // The maximum length of waiting time in the queue. Unit: seconds.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> maxTimeWait_ = nullptr;
    // The regular expression that is used to match URI strings for which the virtual waiting room feature is enabled.
    // 
    // This parameter is required.
    std::shared_ptr<string> waitUri_ = nullptr;
    // The URL of the waiting page.
    // 
    // This parameter is required.
    std::shared_ptr<string> waitUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
