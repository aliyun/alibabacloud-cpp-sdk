// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREGIONSTATUSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETREGIONSTATUSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class GetRegionStatusResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRegionStatusResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AccountStatus, accountStatus_);
      DARABONBA_PTR_TO_JSON(IsDependencyReady, isDependencyReady_);
      DARABONBA_PTR_TO_JSON(IsDlfServiceOpen, isDlfServiceOpen_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RegionStatus, regionStatus_);
    };
    friend void from_json(const Darabonba::Json& j, GetRegionStatusResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountStatus, accountStatus_);
      DARABONBA_PTR_FROM_JSON(IsDependencyReady, isDependencyReady_);
      DARABONBA_PTR_FROM_JSON(IsDlfServiceOpen, isDlfServiceOpen_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RegionStatus, regionStatus_);
    };
    GetRegionStatusResponseBodyData() = default ;
    GetRegionStatusResponseBodyData(const GetRegionStatusResponseBodyData &) = default ;
    GetRegionStatusResponseBodyData(GetRegionStatusResponseBodyData &&) = default ;
    GetRegionStatusResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRegionStatusResponseBodyData() = default ;
    GetRegionStatusResponseBodyData& operator=(const GetRegionStatusResponseBodyData &) = default ;
    GetRegionStatusResponseBodyData& operator=(GetRegionStatusResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountStatus_ == nullptr
        && return this->isDependencyReady_ == nullptr && return this->isDlfServiceOpen_ == nullptr && return this->regionId_ == nullptr && return this->regionStatus_ == nullptr; };
    // accountStatus Field Functions 
    bool hasAccountStatus() const { return this->accountStatus_ != nullptr;};
    void deleteAccountStatus() { this->accountStatus_ = nullptr;};
    inline string accountStatus() const { DARABONBA_PTR_GET_DEFAULT(accountStatus_, "") };
    inline GetRegionStatusResponseBodyData& setAccountStatus(string accountStatus) { DARABONBA_PTR_SET_VALUE(accountStatus_, accountStatus) };


    // isDependencyReady Field Functions 
    bool hasIsDependencyReady() const { return this->isDependencyReady_ != nullptr;};
    void deleteIsDependencyReady() { this->isDependencyReady_ = nullptr;};
    inline bool isDependencyReady() const { DARABONBA_PTR_GET_DEFAULT(isDependencyReady_, false) };
    inline GetRegionStatusResponseBodyData& setIsDependencyReady(bool isDependencyReady) { DARABONBA_PTR_SET_VALUE(isDependencyReady_, isDependencyReady) };


    // isDlfServiceOpen Field Functions 
    bool hasIsDlfServiceOpen() const { return this->isDlfServiceOpen_ != nullptr;};
    void deleteIsDlfServiceOpen() { this->isDlfServiceOpen_ = nullptr;};
    inline bool isDlfServiceOpen() const { DARABONBA_PTR_GET_DEFAULT(isDlfServiceOpen_, false) };
    inline GetRegionStatusResponseBodyData& setIsDlfServiceOpen(bool isDlfServiceOpen) { DARABONBA_PTR_SET_VALUE(isDlfServiceOpen_, isDlfServiceOpen) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetRegionStatusResponseBodyData& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // regionStatus Field Functions 
    bool hasRegionStatus() const { return this->regionStatus_ != nullptr;};
    void deleteRegionStatus() { this->regionStatus_ = nullptr;};
    inline string regionStatus() const { DARABONBA_PTR_GET_DEFAULT(regionStatus_, "") };
    inline GetRegionStatusResponseBodyData& setRegionStatus(string regionStatus) { DARABONBA_PTR_SET_VALUE(regionStatus_, regionStatus) };


  protected:
    // Account status enabled or disabled
    std::shared_ptr<string> accountStatus_ = nullptr;
    // Whether the dependency is ready
    std::shared_ptr<bool> isDependencyReady_ = nullptr;
    // Whether the DLF service is activated
    std::shared_ptr<bool> isDlfServiceOpen_ = nullptr;
    // region id
    std::shared_ptr<string> regionId_ = nullptr;
    // The status of the region. SERVICE_INVALID: The service is unavailable. UNITITIALIZED: Not initialized. READY: Normal.
    std::shared_ptr<string> regionStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
