// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMCUBEUPGRADEPACKAGEINFORESPONSEBODYGETPACKAGERESULTPACKAGEINFO_HPP_
#define ALIBABACLOUD_MODELS_GETMCUBEUPGRADEPACKAGEINFORESPONSEBODYGETPACKAGERESULTPACKAGEINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoMobileTestFlightConfigDO.hpp>
#include <alibabacloud/models/GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoUpgradeBaseInfoDO.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfo& obj) { 
      DARABONBA_PTR_TO_JSON(MobileTestFlightConfigDO, mobileTestFlightConfigDO_);
      DARABONBA_PTR_TO_JSON(UpgradeBaseInfoDO, upgradeBaseInfoDO_);
    };
    friend void from_json(const Darabonba::Json& j, GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(MobileTestFlightConfigDO, mobileTestFlightConfigDO_);
      DARABONBA_PTR_FROM_JSON(UpgradeBaseInfoDO, upgradeBaseInfoDO_);
    };
    GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfo() = default ;
    GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfo(const GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfo &) = default ;
    GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfo(GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfo &&) = default ;
    GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfo() = default ;
    GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfo& operator=(const GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfo &) = default ;
    GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfo& operator=(GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mobileTestFlightConfigDO_ == nullptr
        && return this->upgradeBaseInfoDO_ == nullptr; };
    // mobileTestFlightConfigDO Field Functions 
    bool hasMobileTestFlightConfigDO() const { return this->mobileTestFlightConfigDO_ != nullptr;};
    void deleteMobileTestFlightConfigDO() { this->mobileTestFlightConfigDO_ = nullptr;};
    inline const Models::GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoMobileTestFlightConfigDO & mobileTestFlightConfigDO() const { DARABONBA_PTR_GET_CONST(mobileTestFlightConfigDO_, Models::GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoMobileTestFlightConfigDO) };
    inline Models::GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoMobileTestFlightConfigDO mobileTestFlightConfigDO() { DARABONBA_PTR_GET(mobileTestFlightConfigDO_, Models::GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoMobileTestFlightConfigDO) };
    inline GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfo& setMobileTestFlightConfigDO(const Models::GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoMobileTestFlightConfigDO & mobileTestFlightConfigDO) { DARABONBA_PTR_SET_VALUE(mobileTestFlightConfigDO_, mobileTestFlightConfigDO) };
    inline GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfo& setMobileTestFlightConfigDO(Models::GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoMobileTestFlightConfigDO && mobileTestFlightConfigDO) { DARABONBA_PTR_SET_RVALUE(mobileTestFlightConfigDO_, mobileTestFlightConfigDO) };


    // upgradeBaseInfoDO Field Functions 
    bool hasUpgradeBaseInfoDO() const { return this->upgradeBaseInfoDO_ != nullptr;};
    void deleteUpgradeBaseInfoDO() { this->upgradeBaseInfoDO_ = nullptr;};
    inline const Models::GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoUpgradeBaseInfoDO & upgradeBaseInfoDO() const { DARABONBA_PTR_GET_CONST(upgradeBaseInfoDO_, Models::GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoUpgradeBaseInfoDO) };
    inline Models::GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoUpgradeBaseInfoDO upgradeBaseInfoDO() { DARABONBA_PTR_GET(upgradeBaseInfoDO_, Models::GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoUpgradeBaseInfoDO) };
    inline GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfo& setUpgradeBaseInfoDO(const Models::GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoUpgradeBaseInfoDO & upgradeBaseInfoDO) { DARABONBA_PTR_SET_VALUE(upgradeBaseInfoDO_, upgradeBaseInfoDO) };
    inline GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfo& setUpgradeBaseInfoDO(Models::GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoUpgradeBaseInfoDO && upgradeBaseInfoDO) { DARABONBA_PTR_SET_RVALUE(upgradeBaseInfoDO_, upgradeBaseInfoDO) };


  protected:
    std::shared_ptr<Models::GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoMobileTestFlightConfigDO> mobileTestFlightConfigDO_ = nullptr;
    std::shared_ptr<Models::GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoUpgradeBaseInfoDO> upgradeBaseInfoDO_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
