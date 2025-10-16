// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERASSETIPTRAFFICINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERASSETIPTRAFFICINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeUserAssetIPTrafficInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserAssetIPTrafficInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AssetIP, assetIP_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(TrafficTime, trafficTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserAssetIPTrafficInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetIP, assetIP_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(TrafficTime, trafficTime_);
    };
    DescribeUserAssetIPTrafficInfoRequest() = default ;
    DescribeUserAssetIPTrafficInfoRequest(const DescribeUserAssetIPTrafficInfoRequest &) = default ;
    DescribeUserAssetIPTrafficInfoRequest(DescribeUserAssetIPTrafficInfoRequest &&) = default ;
    DescribeUserAssetIPTrafficInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserAssetIPTrafficInfoRequest() = default ;
    DescribeUserAssetIPTrafficInfoRequest& operator=(const DescribeUserAssetIPTrafficInfoRequest &) = default ;
    DescribeUserAssetIPTrafficInfoRequest& operator=(DescribeUserAssetIPTrafficInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assetIP_ == nullptr
        && return this->lang_ == nullptr && return this->trafficTime_ == nullptr; };
    // assetIP Field Functions 
    bool hasAssetIP() const { return this->assetIP_ != nullptr;};
    void deleteAssetIP() { this->assetIP_ = nullptr;};
    inline string assetIP() const { DARABONBA_PTR_GET_DEFAULT(assetIP_, "") };
    inline DescribeUserAssetIPTrafficInfoRequest& setAssetIP(string assetIP) { DARABONBA_PTR_SET_VALUE(assetIP_, assetIP) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeUserAssetIPTrafficInfoRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // trafficTime Field Functions 
    bool hasTrafficTime() const { return this->trafficTime_ != nullptr;};
    void deleteTrafficTime() { this->trafficTime_ = nullptr;};
    inline string trafficTime() const { DARABONBA_PTR_GET_DEFAULT(trafficTime_, "") };
    inline DescribeUserAssetIPTrafficInfoRequest& setTrafficTime(string trafficTime) { DARABONBA_PTR_SET_VALUE(trafficTime_, trafficTime) };


  protected:
    // The IP address of the asset.
    // 
    // This parameter is required.
    std::shared_ptr<string> assetIP_ = nullptr;
    // The language of the content within the response. Valid values:
    // 
    // *   **zh** (default): Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The time range to query. The value is a UNIX timestamp. Unit: seconds.
    // 
    // This parameter is required.
    std::shared_ptr<string> trafficTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
