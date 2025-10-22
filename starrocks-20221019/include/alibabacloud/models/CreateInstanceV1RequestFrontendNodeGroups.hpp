// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINSTANCEV1REQUESTFRONTENDNODEGROUPS_HPP_
#define ALIBABACLOUD_MODELS_CREATEINSTANCEV1REQUESTFRONTENDNODEGROUPS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Starrocks20221019
{
namespace Models
{
  class CreateInstanceV1RequestFrontendNodeGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateInstanceV1RequestFrontendNodeGroups& obj) { 
      DARABONBA_PTR_TO_JSON(cu, cu_);
      DARABONBA_PTR_TO_JSON(diskNumber, diskNumber_);
      DARABONBA_PTR_TO_JSON(localStorageInstanceType, localStorageInstanceType_);
      DARABONBA_PTR_TO_JSON(residentNodeNumber, residentNodeNumber_);
      DARABONBA_PTR_TO_JSON(specType, specType_);
      DARABONBA_PTR_TO_JSON(storagePerformanceLevel, storagePerformanceLevel_);
      DARABONBA_PTR_TO_JSON(storageSize, storageSize_);
      DARABONBA_PTR_TO_JSON(zoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateInstanceV1RequestFrontendNodeGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(cu, cu_);
      DARABONBA_PTR_FROM_JSON(diskNumber, diskNumber_);
      DARABONBA_PTR_FROM_JSON(localStorageInstanceType, localStorageInstanceType_);
      DARABONBA_PTR_FROM_JSON(residentNodeNumber, residentNodeNumber_);
      DARABONBA_PTR_FROM_JSON(specType, specType_);
      DARABONBA_PTR_FROM_JSON(storagePerformanceLevel, storagePerformanceLevel_);
      DARABONBA_PTR_FROM_JSON(storageSize, storageSize_);
      DARABONBA_PTR_FROM_JSON(zoneId, zoneId_);
    };
    CreateInstanceV1RequestFrontendNodeGroups() = default ;
    CreateInstanceV1RequestFrontendNodeGroups(const CreateInstanceV1RequestFrontendNodeGroups &) = default ;
    CreateInstanceV1RequestFrontendNodeGroups(CreateInstanceV1RequestFrontendNodeGroups &&) = default ;
    CreateInstanceV1RequestFrontendNodeGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateInstanceV1RequestFrontendNodeGroups() = default ;
    CreateInstanceV1RequestFrontendNodeGroups& operator=(const CreateInstanceV1RequestFrontendNodeGroups &) = default ;
    CreateInstanceV1RequestFrontendNodeGroups& operator=(CreateInstanceV1RequestFrontendNodeGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cu_ == nullptr
        && return this->diskNumber_ == nullptr && return this->localStorageInstanceType_ == nullptr && return this->residentNodeNumber_ == nullptr && return this->specType_ == nullptr && return this->storagePerformanceLevel_ == nullptr
        && return this->storageSize_ == nullptr && return this->zoneId_ == nullptr; };
    // cu Field Functions 
    bool hasCu() const { return this->cu_ != nullptr;};
    void deleteCu() { this->cu_ = nullptr;};
    inline int32_t cu() const { DARABONBA_PTR_GET_DEFAULT(cu_, 0) };
    inline CreateInstanceV1RequestFrontendNodeGroups& setCu(int32_t cu) { DARABONBA_PTR_SET_VALUE(cu_, cu) };


    // diskNumber Field Functions 
    bool hasDiskNumber() const { return this->diskNumber_ != nullptr;};
    void deleteDiskNumber() { this->diskNumber_ = nullptr;};
    inline int32_t diskNumber() const { DARABONBA_PTR_GET_DEFAULT(diskNumber_, 0) };
    inline CreateInstanceV1RequestFrontendNodeGroups& setDiskNumber(int32_t diskNumber) { DARABONBA_PTR_SET_VALUE(diskNumber_, diskNumber) };


    // localStorageInstanceType Field Functions 
    bool hasLocalStorageInstanceType() const { return this->localStorageInstanceType_ != nullptr;};
    void deleteLocalStorageInstanceType() { this->localStorageInstanceType_ = nullptr;};
    inline string localStorageInstanceType() const { DARABONBA_PTR_GET_DEFAULT(localStorageInstanceType_, "") };
    inline CreateInstanceV1RequestFrontendNodeGroups& setLocalStorageInstanceType(string localStorageInstanceType) { DARABONBA_PTR_SET_VALUE(localStorageInstanceType_, localStorageInstanceType) };


    // residentNodeNumber Field Functions 
    bool hasResidentNodeNumber() const { return this->residentNodeNumber_ != nullptr;};
    void deleteResidentNodeNumber() { this->residentNodeNumber_ = nullptr;};
    inline int32_t residentNodeNumber() const { DARABONBA_PTR_GET_DEFAULT(residentNodeNumber_, 0) };
    inline CreateInstanceV1RequestFrontendNodeGroups& setResidentNodeNumber(int32_t residentNodeNumber) { DARABONBA_PTR_SET_VALUE(residentNodeNumber_, residentNodeNumber) };


    // specType Field Functions 
    bool hasSpecType() const { return this->specType_ != nullptr;};
    void deleteSpecType() { this->specType_ = nullptr;};
    inline string specType() const { DARABONBA_PTR_GET_DEFAULT(specType_, "") };
    inline CreateInstanceV1RequestFrontendNodeGroups& setSpecType(string specType) { DARABONBA_PTR_SET_VALUE(specType_, specType) };


    // storagePerformanceLevel Field Functions 
    bool hasStoragePerformanceLevel() const { return this->storagePerformanceLevel_ != nullptr;};
    void deleteStoragePerformanceLevel() { this->storagePerformanceLevel_ = nullptr;};
    inline string storagePerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(storagePerformanceLevel_, "") };
    inline CreateInstanceV1RequestFrontendNodeGroups& setStoragePerformanceLevel(string storagePerformanceLevel) { DARABONBA_PTR_SET_VALUE(storagePerformanceLevel_, storagePerformanceLevel) };


    // storageSize Field Functions 
    bool hasStorageSize() const { return this->storageSize_ != nullptr;};
    void deleteStorageSize() { this->storageSize_ = nullptr;};
    inline int32_t storageSize() const { DARABONBA_PTR_GET_DEFAULT(storageSize_, 0) };
    inline CreateInstanceV1RequestFrontendNodeGroups& setStorageSize(int32_t storageSize) { DARABONBA_PTR_SET_VALUE(storageSize_, storageSize) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline CreateInstanceV1RequestFrontendNodeGroups& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    std::shared_ptr<int32_t> cu_ = nullptr;
    std::shared_ptr<int32_t> diskNumber_ = nullptr;
    std::shared_ptr<string> localStorageInstanceType_ = nullptr;
    std::shared_ptr<int32_t> residentNodeNumber_ = nullptr;
    std::shared_ptr<string> specType_ = nullptr;
    std::shared_ptr<string> storagePerformanceLevel_ = nullptr;
    std::shared_ptr<int32_t> storageSize_ = nullptr;
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Starrocks20221019
#endif
