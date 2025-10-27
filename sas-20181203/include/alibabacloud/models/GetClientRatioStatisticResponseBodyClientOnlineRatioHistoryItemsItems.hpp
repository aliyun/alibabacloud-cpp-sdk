// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLIENTRATIOSTATISTICRESPONSEBODYCLIENTONLINERATIOHISTORYITEMSITEMS_HPP_
#define ALIBABACLOUD_MODELS_GETCLIENTRATIOSTATISTICRESPONSEBODYCLIENTONLINERATIOHISTORYITEMSITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetClientRatioStatisticResponseBodyClientOnlineRatioHistoryItemsItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetClientRatioStatisticResponseBodyClientOnlineRatioHistoryItemsItems& obj) { 
      DARABONBA_PTR_TO_JSON(AssetInstallCount, assetInstallCount_);
      DARABONBA_PTR_TO_JSON(CalculateTime, calculateTime_);
      DARABONBA_PTR_TO_JSON(OnlineAssetCount, onlineAssetCount_);
      DARABONBA_PTR_TO_JSON(OnlineRatio, onlineRatio_);
    };
    friend void from_json(const Darabonba::Json& j, GetClientRatioStatisticResponseBodyClientOnlineRatioHistoryItemsItems& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetInstallCount, assetInstallCount_);
      DARABONBA_PTR_FROM_JSON(CalculateTime, calculateTime_);
      DARABONBA_PTR_FROM_JSON(OnlineAssetCount, onlineAssetCount_);
      DARABONBA_PTR_FROM_JSON(OnlineRatio, onlineRatio_);
    };
    GetClientRatioStatisticResponseBodyClientOnlineRatioHistoryItemsItems() = default ;
    GetClientRatioStatisticResponseBodyClientOnlineRatioHistoryItemsItems(const GetClientRatioStatisticResponseBodyClientOnlineRatioHistoryItemsItems &) = default ;
    GetClientRatioStatisticResponseBodyClientOnlineRatioHistoryItemsItems(GetClientRatioStatisticResponseBodyClientOnlineRatioHistoryItemsItems &&) = default ;
    GetClientRatioStatisticResponseBodyClientOnlineRatioHistoryItemsItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetClientRatioStatisticResponseBodyClientOnlineRatioHistoryItemsItems() = default ;
    GetClientRatioStatisticResponseBodyClientOnlineRatioHistoryItemsItems& operator=(const GetClientRatioStatisticResponseBodyClientOnlineRatioHistoryItemsItems &) = default ;
    GetClientRatioStatisticResponseBodyClientOnlineRatioHistoryItemsItems& operator=(GetClientRatioStatisticResponseBodyClientOnlineRatioHistoryItemsItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assetInstallCount_ == nullptr
        && return this->calculateTime_ == nullptr && return this->onlineAssetCount_ == nullptr && return this->onlineRatio_ == nullptr; };
    // assetInstallCount Field Functions 
    bool hasAssetInstallCount() const { return this->assetInstallCount_ != nullptr;};
    void deleteAssetInstallCount() { this->assetInstallCount_ = nullptr;};
    inline int32_t assetInstallCount() const { DARABONBA_PTR_GET_DEFAULT(assetInstallCount_, 0) };
    inline GetClientRatioStatisticResponseBodyClientOnlineRatioHistoryItemsItems& setAssetInstallCount(int32_t assetInstallCount) { DARABONBA_PTR_SET_VALUE(assetInstallCount_, assetInstallCount) };


    // calculateTime Field Functions 
    bool hasCalculateTime() const { return this->calculateTime_ != nullptr;};
    void deleteCalculateTime() { this->calculateTime_ = nullptr;};
    inline int64_t calculateTime() const { DARABONBA_PTR_GET_DEFAULT(calculateTime_, 0L) };
    inline GetClientRatioStatisticResponseBodyClientOnlineRatioHistoryItemsItems& setCalculateTime(int64_t calculateTime) { DARABONBA_PTR_SET_VALUE(calculateTime_, calculateTime) };


    // onlineAssetCount Field Functions 
    bool hasOnlineAssetCount() const { return this->onlineAssetCount_ != nullptr;};
    void deleteOnlineAssetCount() { this->onlineAssetCount_ = nullptr;};
    inline int32_t onlineAssetCount() const { DARABONBA_PTR_GET_DEFAULT(onlineAssetCount_, 0) };
    inline GetClientRatioStatisticResponseBodyClientOnlineRatioHistoryItemsItems& setOnlineAssetCount(int32_t onlineAssetCount) { DARABONBA_PTR_SET_VALUE(onlineAssetCount_, onlineAssetCount) };


    // onlineRatio Field Functions 
    bool hasOnlineRatio() const { return this->onlineRatio_ != nullptr;};
    void deleteOnlineRatio() { this->onlineRatio_ = nullptr;};
    inline double onlineRatio() const { DARABONBA_PTR_GET_DEFAULT(onlineRatio_, 0.0) };
    inline GetClientRatioStatisticResponseBodyClientOnlineRatioHistoryItemsItems& setOnlineRatio(double onlineRatio) { DARABONBA_PTR_SET_VALUE(onlineRatio_, onlineRatio) };


  protected:
    // The number of assets on which the client is installed.
    std::shared_ptr<int32_t> assetInstallCount_ = nullptr;
    // The timestamp of the calculation. Unit: milliseconds.
    std::shared_ptr<int64_t> calculateTime_ = nullptr;
    // The number of online assets.
    std::shared_ptr<int32_t> onlineAssetCount_ = nullptr;
    // The online rate. Unit: %.
    std::shared_ptr<double> onlineRatio_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
