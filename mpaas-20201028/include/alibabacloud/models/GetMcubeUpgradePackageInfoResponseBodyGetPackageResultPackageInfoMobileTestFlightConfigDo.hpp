// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMCUBEUPGRADEPACKAGEINFORESPONSEBODYGETPACKAGERESULTPACKAGEINFOMOBILETESTFLIGHTCONFIGDO_HPP_
#define ALIBABACLOUD_MODELS_GETMCUBEUPGRADEPACKAGEINFORESPONSEBODYGETPACKAGERESULTPACKAGEINFOMOBILETESTFLIGHTCONFIGDO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoMobileTestFlightConfigDO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoMobileTestFlightConfigDO& obj) { 
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(InstallAmount, installAmount_);
      DARABONBA_PTR_TO_JSON(InvalidTime, invalidTime_);
      DARABONBA_PTR_TO_JSON(UpgradeId, upgradeId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoMobileTestFlightConfigDO& obj) { 
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(InstallAmount, installAmount_);
      DARABONBA_PTR_FROM_JSON(InvalidTime, invalidTime_);
      DARABONBA_PTR_FROM_JSON(UpgradeId, upgradeId_);
    };
    GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoMobileTestFlightConfigDO() = default ;
    GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoMobileTestFlightConfigDO(const GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoMobileTestFlightConfigDO &) = default ;
    GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoMobileTestFlightConfigDO(GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoMobileTestFlightConfigDO &&) = default ;
    GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoMobileTestFlightConfigDO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoMobileTestFlightConfigDO() = default ;
    GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoMobileTestFlightConfigDO& operator=(const GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoMobileTestFlightConfigDO &) = default ;
    GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoMobileTestFlightConfigDO& operator=(GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoMobileTestFlightConfigDO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->gmtCreate_ == nullptr
        && return this->gmtModified_ == nullptr && return this->id_ == nullptr && return this->installAmount_ == nullptr && return this->invalidTime_ == nullptr && return this->upgradeId_ == nullptr; };
    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoMobileTestFlightConfigDO& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoMobileTestFlightConfigDO& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoMobileTestFlightConfigDO& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // installAmount Field Functions 
    bool hasInstallAmount() const { return this->installAmount_ != nullptr;};
    void deleteInstallAmount() { this->installAmount_ = nullptr;};
    inline int32_t installAmount() const { DARABONBA_PTR_GET_DEFAULT(installAmount_, 0) };
    inline GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoMobileTestFlightConfigDO& setInstallAmount(int32_t installAmount) { DARABONBA_PTR_SET_VALUE(installAmount_, installAmount) };


    // invalidTime Field Functions 
    bool hasInvalidTime() const { return this->invalidTime_ != nullptr;};
    void deleteInvalidTime() { this->invalidTime_ = nullptr;};
    inline string invalidTime() const { DARABONBA_PTR_GET_DEFAULT(invalidTime_, "") };
    inline GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoMobileTestFlightConfigDO& setInvalidTime(string invalidTime) { DARABONBA_PTR_SET_VALUE(invalidTime_, invalidTime) };


    // upgradeId Field Functions 
    bool hasUpgradeId() const { return this->upgradeId_ != nullptr;};
    void deleteUpgradeId() { this->upgradeId_ = nullptr;};
    inline int64_t upgradeId() const { DARABONBA_PTR_GET_DEFAULT(upgradeId_, 0L) };
    inline GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoMobileTestFlightConfigDO& setUpgradeId(int64_t upgradeId) { DARABONBA_PTR_SET_VALUE(upgradeId_, upgradeId) };


  protected:
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<int32_t> installAmount_ = nullptr;
    std::shared_ptr<string> invalidTime_ = nullptr;
    std::shared_ptr<int64_t> upgradeId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
