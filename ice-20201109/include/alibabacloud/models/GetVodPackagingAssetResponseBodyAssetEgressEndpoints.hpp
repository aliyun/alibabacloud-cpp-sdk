// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVODPACKAGINGASSETRESPONSEBODYASSETEGRESSENDPOINTS_HPP_
#define ALIBABACLOUD_MODELS_GETVODPACKAGINGASSETRESPONSEBODYASSETEGRESSENDPOINTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetVodPackagingAssetResponseBodyAssetEgressEndpoints : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVodPackagingAssetResponseBodyAssetEgressEndpoints& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigurationName, configurationName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, GetVodPackagingAssetResponseBodyAssetEgressEndpoints& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigurationName, configurationName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    GetVodPackagingAssetResponseBodyAssetEgressEndpoints() = default ;
    GetVodPackagingAssetResponseBodyAssetEgressEndpoints(const GetVodPackagingAssetResponseBodyAssetEgressEndpoints &) = default ;
    GetVodPackagingAssetResponseBodyAssetEgressEndpoints(GetVodPackagingAssetResponseBodyAssetEgressEndpoints &&) = default ;
    GetVodPackagingAssetResponseBodyAssetEgressEndpoints(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVodPackagingAssetResponseBodyAssetEgressEndpoints() = default ;
    GetVodPackagingAssetResponseBodyAssetEgressEndpoints& operator=(const GetVodPackagingAssetResponseBodyAssetEgressEndpoints &) = default ;
    GetVodPackagingAssetResponseBodyAssetEgressEndpoints& operator=(GetVodPackagingAssetResponseBodyAssetEgressEndpoints &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->configurationName_ != nullptr
        && this->status_ != nullptr && this->url_ != nullptr; };
    // configurationName Field Functions 
    bool hasConfigurationName() const { return this->configurationName_ != nullptr;};
    void deleteConfigurationName() { this->configurationName_ = nullptr;};
    inline string configurationName() const { DARABONBA_PTR_GET_DEFAULT(configurationName_, "") };
    inline GetVodPackagingAssetResponseBodyAssetEgressEndpoints& setConfigurationName(string configurationName) { DARABONBA_PTR_SET_VALUE(configurationName_, configurationName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetVodPackagingAssetResponseBodyAssetEgressEndpoints& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline GetVodPackagingAssetResponseBodyAssetEgressEndpoints& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    // The name of the packaging configuration.
    std::shared_ptr<string> configurationName_ = nullptr;
    // The asset status. Valid values:
    // 
    // *   Queuing: The asset is waiting for packaging.
    // *   Playable: The asset is packaged and playable.
    // *   Failed: The asset fails to be packaged.
    std::shared_ptr<string> status_ = nullptr;
    // The playback URL. If the asset fails to be packaged, no playback URL is returned.
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
