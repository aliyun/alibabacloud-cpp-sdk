// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOSSFLOWSTATISREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETOSSFLOWSTATISREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetOSSFlowStatisRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOSSFlowStatisRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Division, division_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(EndTimeUTC, endTimeUTC_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(StartTimeUTC, startTimeUTC_);
    };
    friend void from_json(const Darabonba::Json& j, GetOSSFlowStatisRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Division, division_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(EndTimeUTC, endTimeUTC_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(StartTimeUTC, startTimeUTC_);
    };
    GetOSSFlowStatisRequest() = default ;
    GetOSSFlowStatisRequest(const GetOSSFlowStatisRequest &) = default ;
    GetOSSFlowStatisRequest(GetOSSFlowStatisRequest &&) = default ;
    GetOSSFlowStatisRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOSSFlowStatisRequest() = default ;
    GetOSSFlowStatisRequest& operator=(const GetOSSFlowStatisRequest &) = default ;
    GetOSSFlowStatisRequest& operator=(GetOSSFlowStatisRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->division_ != nullptr
        && this->endTime_ != nullptr && this->endTimeUTC_ != nullptr && this->level_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr
        && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr && this->startTime_ != nullptr && this->startTimeUTC_ != nullptr; };
    // division Field Functions 
    bool hasDivision() const { return this->division_ != nullptr;};
    void deleteDivision() { this->division_ = nullptr;};
    inline string division() const { DARABONBA_PTR_GET_DEFAULT(division_, "") };
    inline GetOSSFlowStatisRequest& setDivision(string division) { DARABONBA_PTR_SET_VALUE(division_, division) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline GetOSSFlowStatisRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // endTimeUTC Field Functions 
    bool hasEndTimeUTC() const { return this->endTimeUTC_ != nullptr;};
    void deleteEndTimeUTC() { this->endTimeUTC_ = nullptr;};
    inline string endTimeUTC() const { DARABONBA_PTR_GET_DEFAULT(endTimeUTC_, "") };
    inline GetOSSFlowStatisRequest& setEndTimeUTC(string endTimeUTC) { DARABONBA_PTR_SET_VALUE(endTimeUTC_, endTimeUTC) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline GetOSSFlowStatisRequest& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline GetOSSFlowStatisRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline GetOSSFlowStatisRequest& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline GetOSSFlowStatisRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline string resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, "") };
    inline GetOSSFlowStatisRequest& setResourceOwnerId(string resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline GetOSSFlowStatisRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // startTimeUTC Field Functions 
    bool hasStartTimeUTC() const { return this->startTimeUTC_ != nullptr;};
    void deleteStartTimeUTC() { this->startTimeUTC_ = nullptr;};
    inline string startTimeUTC() const { DARABONBA_PTR_GET_DEFAULT(startTimeUTC_, "") };
    inline GetOSSFlowStatisRequest& setStartTimeUTC(string startTimeUTC) { DARABONBA_PTR_SET_VALUE(startTimeUTC_, startTimeUTC) };


  protected:
    std::shared_ptr<string> division_ = nullptr;
    std::shared_ptr<int64_t> endTime_ = nullptr;
    std::shared_ptr<string> endTimeUTC_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> level_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<string> ownerId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<string> resourceOwnerId_ = nullptr;
    std::shared_ptr<int64_t> startTime_ = nullptr;
    std::shared_ptr<string> startTimeUTC_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
