// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPISECASSETTRENDRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPISECASSETTRENDRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeApisecAssetTrendResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApisecAssetTrendResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AssetActive, assetActive_);
      DARABONBA_PTR_TO_JSON(AssetCount, assetCount_);
      DARABONBA_PTR_TO_JSON(AssetOffline, assetOffline_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApisecAssetTrendResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetActive, assetActive_);
      DARABONBA_PTR_FROM_JSON(AssetCount, assetCount_);
      DARABONBA_PTR_FROM_JSON(AssetOffline, assetOffline_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
    };
    DescribeApisecAssetTrendResponseBodyData() = default ;
    DescribeApisecAssetTrendResponseBodyData(const DescribeApisecAssetTrendResponseBodyData &) = default ;
    DescribeApisecAssetTrendResponseBodyData(DescribeApisecAssetTrendResponseBodyData &&) = default ;
    DescribeApisecAssetTrendResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApisecAssetTrendResponseBodyData() = default ;
    DescribeApisecAssetTrendResponseBodyData& operator=(const DescribeApisecAssetTrendResponseBodyData &) = default ;
    DescribeApisecAssetTrendResponseBodyData& operator=(DescribeApisecAssetTrendResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->assetActive_ != nullptr
        && this->assetCount_ != nullptr && this->assetOffline_ != nullptr && this->timestamp_ != nullptr; };
    // assetActive Field Functions 
    bool hasAssetActive() const { return this->assetActive_ != nullptr;};
    void deleteAssetActive() { this->assetActive_ = nullptr;};
    inline int64_t assetActive() const { DARABONBA_PTR_GET_DEFAULT(assetActive_, 0L) };
    inline DescribeApisecAssetTrendResponseBodyData& setAssetActive(int64_t assetActive) { DARABONBA_PTR_SET_VALUE(assetActive_, assetActive) };


    // assetCount Field Functions 
    bool hasAssetCount() const { return this->assetCount_ != nullptr;};
    void deleteAssetCount() { this->assetCount_ = nullptr;};
    inline int64_t assetCount() const { DARABONBA_PTR_GET_DEFAULT(assetCount_, 0L) };
    inline DescribeApisecAssetTrendResponseBodyData& setAssetCount(int64_t assetCount) { DARABONBA_PTR_SET_VALUE(assetCount_, assetCount) };


    // assetOffline Field Functions 
    bool hasAssetOffline() const { return this->assetOffline_ != nullptr;};
    void deleteAssetOffline() { this->assetOffline_ = nullptr;};
    inline int64_t assetOffline() const { DARABONBA_PTR_GET_DEFAULT(assetOffline_, 0L) };
    inline DescribeApisecAssetTrendResponseBodyData& setAssetOffline(int64_t assetOffline) { DARABONBA_PTR_SET_VALUE(assetOffline_, assetOffline) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int64_t timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
    inline DescribeApisecAssetTrendResponseBodyData& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


  protected:
    // The number of active assets.
    std::shared_ptr<int64_t> assetActive_ = nullptr;
    // The total number of assets.
    std::shared_ptr<int64_t> assetCount_ = nullptr;
    // The number of deactivated assets.
    std::shared_ptr<int64_t> assetOffline_ = nullptr;
    // The time for statistics. Specify a UNIX timestamp in UTC. Unit: seconds.
    std::shared_ptr<int64_t> timestamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
