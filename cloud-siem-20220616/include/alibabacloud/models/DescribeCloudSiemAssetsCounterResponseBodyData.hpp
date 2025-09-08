// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDSIEMASSETSCOUNTERRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDSIEMASSETSCOUNTERRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class DescribeCloudSiemAssetsCounterResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudSiemAssetsCounterResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AssetNum, assetNum_);
      DARABONBA_PTR_TO_JSON(AssetType, assetType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudSiemAssetsCounterResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetNum, assetNum_);
      DARABONBA_PTR_FROM_JSON(AssetType, assetType_);
    };
    DescribeCloudSiemAssetsCounterResponseBodyData() = default ;
    DescribeCloudSiemAssetsCounterResponseBodyData(const DescribeCloudSiemAssetsCounterResponseBodyData &) = default ;
    DescribeCloudSiemAssetsCounterResponseBodyData(DescribeCloudSiemAssetsCounterResponseBodyData &&) = default ;
    DescribeCloudSiemAssetsCounterResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudSiemAssetsCounterResponseBodyData() = default ;
    DescribeCloudSiemAssetsCounterResponseBodyData& operator=(const DescribeCloudSiemAssetsCounterResponseBodyData &) = default ;
    DescribeCloudSiemAssetsCounterResponseBodyData& operator=(DescribeCloudSiemAssetsCounterResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->assetNum_ != nullptr
        && this->assetType_ != nullptr; };
    // assetNum Field Functions 
    bool hasAssetNum() const { return this->assetNum_ != nullptr;};
    void deleteAssetNum() { this->assetNum_ = nullptr;};
    inline int32_t assetNum() const { DARABONBA_PTR_GET_DEFAULT(assetNum_, 0) };
    inline DescribeCloudSiemAssetsCounterResponseBodyData& setAssetNum(int32_t assetNum) { DARABONBA_PTR_SET_VALUE(assetNum_, assetNum) };


    // assetType Field Functions 
    bool hasAssetType() const { return this->assetType_ != nullptr;};
    void deleteAssetType() { this->assetType_ = nullptr;};
    inline string assetType() const { DARABONBA_PTR_GET_DEFAULT(assetType_, "") };
    inline DescribeCloudSiemAssetsCounterResponseBodyData& setAssetType(string assetType) { DARABONBA_PTR_SET_VALUE(assetType_, assetType) };


  protected:
    // The number of assets.
    std::shared_ptr<int32_t> assetNum_ = nullptr;
    // The type of the asset. Valid values:
    // 
    // *   ip
    // *   domain
    // *   url
    // *   process
    // *   file
    // *   host
    std::shared_ptr<string> assetType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
