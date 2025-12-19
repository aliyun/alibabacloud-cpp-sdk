// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPSERVICEAGGREGATE_HPP_
#define ALIBABACLOUD_MODELS_APPSERVICEAGGREGATE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AppOperationAddress.hpp>
#include <alibabacloud/models/AppServiceProfile.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class AppServiceAggregate : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AppServiceAggregate& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(Deleted, deleted_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(EspBizId, espBizId_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(InstanceBizId, instanceBizId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OperationAddress, operationAddress_);
      DARABONBA_PTR_TO_JSON(Profile, profile_);
      DARABONBA_PTR_TO_JSON(ServiceType, serviceType_);
      DARABONBA_PTR_TO_JSON(ServiceTypeText, serviceTypeText_);
      DARABONBA_PTR_TO_JSON(Slug, slug_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, AppServiceAggregate& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(Deleted, deleted_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(EspBizId, espBizId_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(InstanceBizId, instanceBizId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OperationAddress, operationAddress_);
      DARABONBA_PTR_FROM_JSON(Profile, profile_);
      DARABONBA_PTR_FROM_JSON(ServiceType, serviceType_);
      DARABONBA_PTR_FROM_JSON(ServiceTypeText, serviceTypeText_);
      DARABONBA_PTR_FROM_JSON(Slug, slug_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    AppServiceAggregate() = default ;
    AppServiceAggregate(const AppServiceAggregate &) = default ;
    AppServiceAggregate(AppServiceAggregate &&) = default ;
    AppServiceAggregate(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AppServiceAggregate() = default ;
    AppServiceAggregate& operator=(const AppServiceAggregate &) = default ;
    AppServiceAggregate& operator=(AppServiceAggregate &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr
        && return this->deleted_ == nullptr && return this->endTime_ == nullptr && return this->espBizId_ == nullptr && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr
        && return this->instanceBizId_ == nullptr && return this->name_ == nullptr && return this->operationAddress_ == nullptr && return this->profile_ == nullptr && return this->serviceType_ == nullptr
        && return this->serviceTypeText_ == nullptr && return this->slug_ == nullptr && return this->startTime_ == nullptr && return this->status_ == nullptr && return this->userId_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string bizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline AppServiceAggregate& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // deleted Field Functions 
    bool hasDeleted() const { return this->deleted_ != nullptr;};
    void deleteDeleted() { this->deleted_ = nullptr;};
    inline int32_t deleted() const { DARABONBA_PTR_GET_DEFAULT(deleted_, 0) };
    inline AppServiceAggregate& setDeleted(int32_t deleted) { DARABONBA_PTR_SET_VALUE(deleted_, deleted) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline AppServiceAggregate& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // espBizId Field Functions 
    bool hasEspBizId() const { return this->espBizId_ != nullptr;};
    void deleteEspBizId() { this->espBizId_ = nullptr;};
    inline string espBizId() const { DARABONBA_PTR_GET_DEFAULT(espBizId_, "") };
    inline AppServiceAggregate& setEspBizId(string espBizId) { DARABONBA_PTR_SET_VALUE(espBizId_, espBizId) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline AppServiceAggregate& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline AppServiceAggregate& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // instanceBizId Field Functions 
    bool hasInstanceBizId() const { return this->instanceBizId_ != nullptr;};
    void deleteInstanceBizId() { this->instanceBizId_ = nullptr;};
    inline string instanceBizId() const { DARABONBA_PTR_GET_DEFAULT(instanceBizId_, "") };
    inline AppServiceAggregate& setInstanceBizId(string instanceBizId) { DARABONBA_PTR_SET_VALUE(instanceBizId_, instanceBizId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline AppServiceAggregate& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // operationAddress Field Functions 
    bool hasOperationAddress() const { return this->operationAddress_ != nullptr;};
    void deleteOperationAddress() { this->operationAddress_ = nullptr;};
    inline const AppOperationAddress & operationAddress() const { DARABONBA_PTR_GET_CONST(operationAddress_, AppOperationAddress) };
    inline AppOperationAddress operationAddress() { DARABONBA_PTR_GET(operationAddress_, AppOperationAddress) };
    inline AppServiceAggregate& setOperationAddress(const AppOperationAddress & operationAddress) { DARABONBA_PTR_SET_VALUE(operationAddress_, operationAddress) };
    inline AppServiceAggregate& setOperationAddress(AppOperationAddress && operationAddress) { DARABONBA_PTR_SET_RVALUE(operationAddress_, operationAddress) };


    // profile Field Functions 
    bool hasProfile() const { return this->profile_ != nullptr;};
    void deleteProfile() { this->profile_ = nullptr;};
    inline const AppServiceProfile & profile() const { DARABONBA_PTR_GET_CONST(profile_, AppServiceProfile) };
    inline AppServiceProfile profile() { DARABONBA_PTR_GET(profile_, AppServiceProfile) };
    inline AppServiceAggregate& setProfile(const AppServiceProfile & profile) { DARABONBA_PTR_SET_VALUE(profile_, profile) };
    inline AppServiceAggregate& setProfile(AppServiceProfile && profile) { DARABONBA_PTR_SET_RVALUE(profile_, profile) };


    // serviceType Field Functions 
    bool hasServiceType() const { return this->serviceType_ != nullptr;};
    void deleteServiceType() { this->serviceType_ = nullptr;};
    inline string serviceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, "") };
    inline AppServiceAggregate& setServiceType(string serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


    // serviceTypeText Field Functions 
    bool hasServiceTypeText() const { return this->serviceTypeText_ != nullptr;};
    void deleteServiceTypeText() { this->serviceTypeText_ = nullptr;};
    inline string serviceTypeText() const { DARABONBA_PTR_GET_DEFAULT(serviceTypeText_, "") };
    inline AppServiceAggregate& setServiceTypeText(string serviceTypeText) { DARABONBA_PTR_SET_VALUE(serviceTypeText_, serviceTypeText) };


    // slug Field Functions 
    bool hasSlug() const { return this->slug_ != nullptr;};
    void deleteSlug() { this->slug_ = nullptr;};
    inline string slug() const { DARABONBA_PTR_GET_DEFAULT(slug_, "") };
    inline AppServiceAggregate& setSlug(string slug) { DARABONBA_PTR_SET_VALUE(slug_, slug) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline AppServiceAggregate& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline AppServiceAggregate& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline AppServiceAggregate& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<string> bizId_ = nullptr;
    std::shared_ptr<int32_t> deleted_ = nullptr;
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<string> espBizId_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<string> instanceBizId_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<AppOperationAddress> operationAddress_ = nullptr;
    std::shared_ptr<AppServiceProfile> profile_ = nullptr;
    std::shared_ptr<string> serviceType_ = nullptr;
    std::shared_ptr<string> serviceTypeText_ = nullptr;
    std::shared_ptr<string> slug_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
