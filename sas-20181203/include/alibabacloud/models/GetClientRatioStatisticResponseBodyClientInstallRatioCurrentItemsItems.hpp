// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLIENTRATIOSTATISTICRESPONSEBODYCLIENTINSTALLRATIOCURRENTITEMSITEMS_HPP_
#define ALIBABACLOUD_MODELS_GETCLIENTRATIOSTATISTICRESPONSEBODYCLIENTINSTALLRATIOCURRENTITEMSITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetClientRatioStatisticResponseBodyClientInstallRatioCurrentItemsItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetClientRatioStatisticResponseBodyClientInstallRatioCurrentItemsItems& obj) { 
      DARABONBA_PTR_TO_JSON(AssetTotalCount, assetTotalCount_);
      DARABONBA_PTR_TO_JSON(CalculateTime, calculateTime_);
      DARABONBA_PTR_TO_JSON(InstallRatio, installRatio_);
      DARABONBA_PTR_TO_JSON(InstalledAssetCount, installedAssetCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetClientRatioStatisticResponseBodyClientInstallRatioCurrentItemsItems& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetTotalCount, assetTotalCount_);
      DARABONBA_PTR_FROM_JSON(CalculateTime, calculateTime_);
      DARABONBA_PTR_FROM_JSON(InstallRatio, installRatio_);
      DARABONBA_PTR_FROM_JSON(InstalledAssetCount, installedAssetCount_);
    };
    GetClientRatioStatisticResponseBodyClientInstallRatioCurrentItemsItems() = default ;
    GetClientRatioStatisticResponseBodyClientInstallRatioCurrentItemsItems(const GetClientRatioStatisticResponseBodyClientInstallRatioCurrentItemsItems &) = default ;
    GetClientRatioStatisticResponseBodyClientInstallRatioCurrentItemsItems(GetClientRatioStatisticResponseBodyClientInstallRatioCurrentItemsItems &&) = default ;
    GetClientRatioStatisticResponseBodyClientInstallRatioCurrentItemsItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetClientRatioStatisticResponseBodyClientInstallRatioCurrentItemsItems() = default ;
    GetClientRatioStatisticResponseBodyClientInstallRatioCurrentItemsItems& operator=(const GetClientRatioStatisticResponseBodyClientInstallRatioCurrentItemsItems &) = default ;
    GetClientRatioStatisticResponseBodyClientInstallRatioCurrentItemsItems& operator=(GetClientRatioStatisticResponseBodyClientInstallRatioCurrentItemsItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->assetTotalCount_ != nullptr
        && this->calculateTime_ != nullptr && this->installRatio_ != nullptr && this->installedAssetCount_ != nullptr; };
    // assetTotalCount Field Functions 
    bool hasAssetTotalCount() const { return this->assetTotalCount_ != nullptr;};
    void deleteAssetTotalCount() { this->assetTotalCount_ = nullptr;};
    inline int32_t assetTotalCount() const { DARABONBA_PTR_GET_DEFAULT(assetTotalCount_, 0) };
    inline GetClientRatioStatisticResponseBodyClientInstallRatioCurrentItemsItems& setAssetTotalCount(int32_t assetTotalCount) { DARABONBA_PTR_SET_VALUE(assetTotalCount_, assetTotalCount) };


    // calculateTime Field Functions 
    bool hasCalculateTime() const { return this->calculateTime_ != nullptr;};
    void deleteCalculateTime() { this->calculateTime_ = nullptr;};
    inline int64_t calculateTime() const { DARABONBA_PTR_GET_DEFAULT(calculateTime_, 0L) };
    inline GetClientRatioStatisticResponseBodyClientInstallRatioCurrentItemsItems& setCalculateTime(int64_t calculateTime) { DARABONBA_PTR_SET_VALUE(calculateTime_, calculateTime) };


    // installRatio Field Functions 
    bool hasInstallRatio() const { return this->installRatio_ != nullptr;};
    void deleteInstallRatio() { this->installRatio_ = nullptr;};
    inline double installRatio() const { DARABONBA_PTR_GET_DEFAULT(installRatio_, 0.0) };
    inline GetClientRatioStatisticResponseBodyClientInstallRatioCurrentItemsItems& setInstallRatio(double installRatio) { DARABONBA_PTR_SET_VALUE(installRatio_, installRatio) };


    // installedAssetCount Field Functions 
    bool hasInstalledAssetCount() const { return this->installedAssetCount_ != nullptr;};
    void deleteInstalledAssetCount() { this->installedAssetCount_ = nullptr;};
    inline int32_t installedAssetCount() const { DARABONBA_PTR_GET_DEFAULT(installedAssetCount_, 0) };
    inline GetClientRatioStatisticResponseBodyClientInstallRatioCurrentItemsItems& setInstalledAssetCount(int32_t installedAssetCount) { DARABONBA_PTR_SET_VALUE(installedAssetCount_, installedAssetCount) };


  protected:
    // The total number of assets.
    std::shared_ptr<int32_t> assetTotalCount_ = nullptr;
    // The timestamp of the calculation. Unit: milliseconds.
    std::shared_ptr<int64_t> calculateTime_ = nullptr;
    // The installation rate. Unit: %.
    std::shared_ptr<double> installRatio_ = nullptr;
    // The number of assets on which the client is installed.
    std::shared_ptr<int32_t> installedAssetCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
