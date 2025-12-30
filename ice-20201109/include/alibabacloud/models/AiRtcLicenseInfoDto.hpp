// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AIRTCLICENSEINFODTO_HPP_
#define ALIBABACLOUD_MODELS_AIRTCLICENSEINFODTO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class AiRtcLicenseInfoDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AiRtcLicenseInfoDTO& obj) { 
      DARABONBA_PTR_TO_JSON(AvailableCapacity, availableCapacity_);
      DARABONBA_PTR_TO_JSON(BeginOn, beginOn_);
      DARABONBA_PTR_TO_JSON(ContractNo, contractNo_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(ExpiredOn, expiredOn_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(LicenseCount, licenseCount_);
      DARABONBA_PTR_TO_JSON(LicenseItemId, licenseItemId_);
      DARABONBA_PTR_TO_JSON(ModificationTime, modificationTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(ValidDays, validDays_);
    };
    friend void from_json(const Darabonba::Json& j, AiRtcLicenseInfoDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(AvailableCapacity, availableCapacity_);
      DARABONBA_PTR_FROM_JSON(BeginOn, beginOn_);
      DARABONBA_PTR_FROM_JSON(ContractNo, contractNo_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(ExpiredOn, expiredOn_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(LicenseCount, licenseCount_);
      DARABONBA_PTR_FROM_JSON(LicenseItemId, licenseItemId_);
      DARABONBA_PTR_FROM_JSON(ModificationTime, modificationTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(ValidDays, validDays_);
    };
    AiRtcLicenseInfoDTO() = default ;
    AiRtcLicenseInfoDTO(const AiRtcLicenseInfoDTO &) = default ;
    AiRtcLicenseInfoDTO(AiRtcLicenseInfoDTO &&) = default ;
    AiRtcLicenseInfoDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AiRtcLicenseInfoDTO() = default ;
    AiRtcLicenseInfoDTO& operator=(const AiRtcLicenseInfoDTO &) = default ;
    AiRtcLicenseInfoDTO& operator=(AiRtcLicenseInfoDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->availableCapacity_ == nullptr
        && this->beginOn_ == nullptr && this->contractNo_ == nullptr && this->creationTime_ == nullptr && this->expiredOn_ == nullptr && this->instanceId_ == nullptr
        && this->licenseCount_ == nullptr && this->licenseItemId_ == nullptr && this->modificationTime_ == nullptr && this->status_ == nullptr && this->type_ == nullptr
        && this->validDays_ == nullptr; };
    // availableCapacity Field Functions 
    bool hasAvailableCapacity() const { return this->availableCapacity_ != nullptr;};
    void deleteAvailableCapacity() { this->availableCapacity_ = nullptr;};
    inline int64_t getAvailableCapacity() const { DARABONBA_PTR_GET_DEFAULT(availableCapacity_, 0L) };
    inline AiRtcLicenseInfoDTO& setAvailableCapacity(int64_t availableCapacity) { DARABONBA_PTR_SET_VALUE(availableCapacity_, availableCapacity) };


    // beginOn Field Functions 
    bool hasBeginOn() const { return this->beginOn_ != nullptr;};
    void deleteBeginOn() { this->beginOn_ = nullptr;};
    inline string getBeginOn() const { DARABONBA_PTR_GET_DEFAULT(beginOn_, "") };
    inline AiRtcLicenseInfoDTO& setBeginOn(string beginOn) { DARABONBA_PTR_SET_VALUE(beginOn_, beginOn) };


    // contractNo Field Functions 
    bool hasContractNo() const { return this->contractNo_ != nullptr;};
    void deleteContractNo() { this->contractNo_ = nullptr;};
    inline string getContractNo() const { DARABONBA_PTR_GET_DEFAULT(contractNo_, "") };
    inline AiRtcLicenseInfoDTO& setContractNo(string contractNo) { DARABONBA_PTR_SET_VALUE(contractNo_, contractNo) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline AiRtcLicenseInfoDTO& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // expiredOn Field Functions 
    bool hasExpiredOn() const { return this->expiredOn_ != nullptr;};
    void deleteExpiredOn() { this->expiredOn_ = nullptr;};
    inline string getExpiredOn() const { DARABONBA_PTR_GET_DEFAULT(expiredOn_, "") };
    inline AiRtcLicenseInfoDTO& setExpiredOn(string expiredOn) { DARABONBA_PTR_SET_VALUE(expiredOn_, expiredOn) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AiRtcLicenseInfoDTO& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // licenseCount Field Functions 
    bool hasLicenseCount() const { return this->licenseCount_ != nullptr;};
    void deleteLicenseCount() { this->licenseCount_ = nullptr;};
    inline int64_t getLicenseCount() const { DARABONBA_PTR_GET_DEFAULT(licenseCount_, 0L) };
    inline AiRtcLicenseInfoDTO& setLicenseCount(int64_t licenseCount) { DARABONBA_PTR_SET_VALUE(licenseCount_, licenseCount) };


    // licenseItemId Field Functions 
    bool hasLicenseItemId() const { return this->licenseItemId_ != nullptr;};
    void deleteLicenseItemId() { this->licenseItemId_ = nullptr;};
    inline string getLicenseItemId() const { DARABONBA_PTR_GET_DEFAULT(licenseItemId_, "") };
    inline AiRtcLicenseInfoDTO& setLicenseItemId(string licenseItemId) { DARABONBA_PTR_SET_VALUE(licenseItemId_, licenseItemId) };


    // modificationTime Field Functions 
    bool hasModificationTime() const { return this->modificationTime_ != nullptr;};
    void deleteModificationTime() { this->modificationTime_ = nullptr;};
    inline string getModificationTime() const { DARABONBA_PTR_GET_DEFAULT(modificationTime_, "") };
    inline AiRtcLicenseInfoDTO& setModificationTime(string modificationTime) { DARABONBA_PTR_SET_VALUE(modificationTime_, modificationTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline AiRtcLicenseInfoDTO& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline AiRtcLicenseInfoDTO& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // validDays Field Functions 
    bool hasValidDays() const { return this->validDays_ != nullptr;};
    void deleteValidDays() { this->validDays_ = nullptr;};
    inline int64_t getValidDays() const { DARABONBA_PTR_GET_DEFAULT(validDays_, 0L) };
    inline AiRtcLicenseInfoDTO& setValidDays(int64_t validDays) { DARABONBA_PTR_SET_VALUE(validDays_, validDays) };


  protected:
    shared_ptr<int64_t> availableCapacity_ {};
    shared_ptr<string> beginOn_ {};
    shared_ptr<string> contractNo_ {};
    shared_ptr<string> creationTime_ {};
    shared_ptr<string> expiredOn_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<int64_t> licenseCount_ {};
    shared_ptr<string> licenseItemId_ {};
    shared_ptr<string> modificationTime_ {};
    shared_ptr<int32_t> status_ {};
    shared_ptr<int32_t> type_ {};
    shared_ptr<int64_t> validDays_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
