// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERASSETRESPONSEBODYASSETS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERASSETRESPONSEBODYASSETS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeUserAssetResponseBodyAssets : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserAssetResponseBodyAssets& obj) { 
      DARABONBA_PTR_TO_JSON(AssetNum, assetNum_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserAssetResponseBodyAssets& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetNum, assetNum_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
    };
    DescribeUserAssetResponseBodyAssets() = default ;
    DescribeUserAssetResponseBodyAssets(const DescribeUserAssetResponseBodyAssets &) = default ;
    DescribeUserAssetResponseBodyAssets(DescribeUserAssetResponseBodyAssets &&) = default ;
    DescribeUserAssetResponseBodyAssets(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserAssetResponseBodyAssets() = default ;
    DescribeUserAssetResponseBodyAssets& operator=(const DescribeUserAssetResponseBodyAssets &) = default ;
    DescribeUserAssetResponseBodyAssets& operator=(DescribeUserAssetResponseBodyAssets &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->assetNum_ != nullptr
        && this->timeStamp_ != nullptr; };
    // assetNum Field Functions 
    bool hasAssetNum() const { return this->assetNum_ != nullptr;};
    void deleteAssetNum() { this->assetNum_ = nullptr;};
    inline int64_t assetNum() const { DARABONBA_PTR_GET_DEFAULT(assetNum_, 0L) };
    inline DescribeUserAssetResponseBodyAssets& setAssetNum(int64_t assetNum) { DARABONBA_PTR_SET_VALUE(assetNum_, assetNum) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline int64_t timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, 0L) };
    inline DescribeUserAssetResponseBodyAssets& setTimeStamp(int64_t timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


  protected:
    // The number of APIs returned.
    std::shared_ptr<int64_t> assetNum_ = nullptr;
    // The time at which the API was called. The value is a UNIX timestamp displayed in UTC. Unit: seconds.
    std::shared_ptr<int64_t> timeStamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
