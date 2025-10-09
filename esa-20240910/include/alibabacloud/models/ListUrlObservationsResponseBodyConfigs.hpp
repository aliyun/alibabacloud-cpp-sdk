// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTURLOBSERVATIONSRESPONSEBODYCONFIGS_HPP_
#define ALIBABACLOUD_MODELS_LISTURLOBSERVATIONSRESPONSEBODYCONFIGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListUrlObservationsResponseBodyConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUrlObservationsResponseBodyConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigId, configId_);
      DARABONBA_PTR_TO_JSON(SdkType, sdkType_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, ListUrlObservationsResponseBodyConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
      DARABONBA_PTR_FROM_JSON(SdkType, sdkType_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    ListUrlObservationsResponseBodyConfigs() = default ;
    ListUrlObservationsResponseBodyConfigs(const ListUrlObservationsResponseBodyConfigs &) = default ;
    ListUrlObservationsResponseBodyConfigs(ListUrlObservationsResponseBodyConfigs &&) = default ;
    ListUrlObservationsResponseBodyConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUrlObservationsResponseBodyConfigs() = default ;
    ListUrlObservationsResponseBodyConfigs& operator=(const ListUrlObservationsResponseBodyConfigs &) = default ;
    ListUrlObservationsResponseBodyConfigs& operator=(ListUrlObservationsResponseBodyConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->configId_ != nullptr
        && this->sdkType_ != nullptr && this->url_ != nullptr; };
    // configId Field Functions 
    bool hasConfigId() const { return this->configId_ != nullptr;};
    void deleteConfigId() { this->configId_ = nullptr;};
    inline int64_t configId() const { DARABONBA_PTR_GET_DEFAULT(configId_, 0L) };
    inline ListUrlObservationsResponseBodyConfigs& setConfigId(int64_t configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


    // sdkType Field Functions 
    bool hasSdkType() const { return this->sdkType_ != nullptr;};
    void deleteSdkType() { this->sdkType_ = nullptr;};
    inline string sdkType() const { DARABONBA_PTR_GET_DEFAULT(sdkType_, "") };
    inline ListUrlObservationsResponseBodyConfigs& setSdkType(string sdkType) { DARABONBA_PTR_SET_VALUE(sdkType_, sdkType) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline ListUrlObservationsResponseBodyConfigs& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    // The configuration ID.
    std::shared_ptr<int64_t> configId_ = nullptr;
    // SDK integration. Valid values:
    // 
    // *   **automatic**
    // *   **manual**
    std::shared_ptr<string> sdkType_ = nullptr;
    // The URL of the web page to monitor.
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
