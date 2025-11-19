// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LICENSEINSTANCEAPPDTO_HPP_
#define ALIBABACLOUD_MODELS_LICENSEINSTANCEAPPDTO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/LicenseInstanceAppDTOLicenseConfigs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class LicenseInstanceAppDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LicenseInstanceAppDTO& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(BeginOn, beginOn_);
      DARABONBA_PTR_TO_JSON(ContractNo, contractNo_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(ExpiredOn, expiredOn_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ItemId, itemId_);
      DARABONBA_PTR_TO_JSON(LicenseConfigs, licenseConfigs_);
      DARABONBA_PTR_TO_JSON(ModificationTime, modificationTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, LicenseInstanceAppDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(BeginOn, beginOn_);
      DARABONBA_PTR_FROM_JSON(ContractNo, contractNo_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(ExpiredOn, expiredOn_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ItemId, itemId_);
      DARABONBA_PTR_FROM_JSON(LicenseConfigs, licenseConfigs_);
      DARABONBA_PTR_FROM_JSON(ModificationTime, modificationTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    LicenseInstanceAppDTO() = default ;
    LicenseInstanceAppDTO(const LicenseInstanceAppDTO &) = default ;
    LicenseInstanceAppDTO(LicenseInstanceAppDTO &&) = default ;
    LicenseInstanceAppDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LicenseInstanceAppDTO() = default ;
    LicenseInstanceAppDTO& operator=(const LicenseInstanceAppDTO &) = default ;
    LicenseInstanceAppDTO& operator=(LicenseInstanceAppDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->beginOn_ == nullptr && return this->contractNo_ == nullptr && return this->creationTime_ == nullptr && return this->expiredOn_ == nullptr && return this->instanceId_ == nullptr
        && return this->itemId_ == nullptr && return this->licenseConfigs_ == nullptr && return this->modificationTime_ == nullptr && return this->status_ == nullptr && return this->userId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline LicenseInstanceAppDTO& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // beginOn Field Functions 
    bool hasBeginOn() const { return this->beginOn_ != nullptr;};
    void deleteBeginOn() { this->beginOn_ = nullptr;};
    inline string beginOn() const { DARABONBA_PTR_GET_DEFAULT(beginOn_, "") };
    inline LicenseInstanceAppDTO& setBeginOn(string beginOn) { DARABONBA_PTR_SET_VALUE(beginOn_, beginOn) };


    // contractNo Field Functions 
    bool hasContractNo() const { return this->contractNo_ != nullptr;};
    void deleteContractNo() { this->contractNo_ = nullptr;};
    inline string contractNo() const { DARABONBA_PTR_GET_DEFAULT(contractNo_, "") };
    inline LicenseInstanceAppDTO& setContractNo(string contractNo) { DARABONBA_PTR_SET_VALUE(contractNo_, contractNo) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline LicenseInstanceAppDTO& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // expiredOn Field Functions 
    bool hasExpiredOn() const { return this->expiredOn_ != nullptr;};
    void deleteExpiredOn() { this->expiredOn_ = nullptr;};
    inline string expiredOn() const { DARABONBA_PTR_GET_DEFAULT(expiredOn_, "") };
    inline LicenseInstanceAppDTO& setExpiredOn(string expiredOn) { DARABONBA_PTR_SET_VALUE(expiredOn_, expiredOn) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline LicenseInstanceAppDTO& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // itemId Field Functions 
    bool hasItemId() const { return this->itemId_ != nullptr;};
    void deleteItemId() { this->itemId_ = nullptr;};
    inline string itemId() const { DARABONBA_PTR_GET_DEFAULT(itemId_, "") };
    inline LicenseInstanceAppDTO& setItemId(string itemId) { DARABONBA_PTR_SET_VALUE(itemId_, itemId) };


    // licenseConfigs Field Functions 
    bool hasLicenseConfigs() const { return this->licenseConfigs_ != nullptr;};
    void deleteLicenseConfigs() { this->licenseConfigs_ = nullptr;};
    inline const vector<LicenseInstanceAppDTOLicenseConfigs> & licenseConfigs() const { DARABONBA_PTR_GET_CONST(licenseConfigs_, vector<LicenseInstanceAppDTOLicenseConfigs>) };
    inline vector<LicenseInstanceAppDTOLicenseConfigs> licenseConfigs() { DARABONBA_PTR_GET(licenseConfigs_, vector<LicenseInstanceAppDTOLicenseConfigs>) };
    inline LicenseInstanceAppDTO& setLicenseConfigs(const vector<LicenseInstanceAppDTOLicenseConfigs> & licenseConfigs) { DARABONBA_PTR_SET_VALUE(licenseConfigs_, licenseConfigs) };
    inline LicenseInstanceAppDTO& setLicenseConfigs(vector<LicenseInstanceAppDTOLicenseConfigs> && licenseConfigs) { DARABONBA_PTR_SET_RVALUE(licenseConfigs_, licenseConfigs) };


    // modificationTime Field Functions 
    bool hasModificationTime() const { return this->modificationTime_ != nullptr;};
    void deleteModificationTime() { this->modificationTime_ = nullptr;};
    inline string modificationTime() const { DARABONBA_PTR_GET_DEFAULT(modificationTime_, "") };
    inline LicenseInstanceAppDTO& setModificationTime(string modificationTime) { DARABONBA_PTR_SET_VALUE(modificationTime_, modificationTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline LicenseInstanceAppDTO& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline int64_t userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
    inline LicenseInstanceAppDTO& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> beginOn_ = nullptr;
    std::shared_ptr<string> contractNo_ = nullptr;
    std::shared_ptr<string> creationTime_ = nullptr;
    std::shared_ptr<string> expiredOn_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> itemId_ = nullptr;
    std::shared_ptr<vector<LicenseInstanceAppDTOLicenseConfigs>> licenseConfigs_ = nullptr;
    std::shared_ptr<string> modificationTime_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<int64_t> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
