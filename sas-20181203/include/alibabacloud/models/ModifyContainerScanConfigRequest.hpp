// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCONTAINERSCANCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCONTAINERSCANCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ModifyContainerScanConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyContainerScanConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppNames, appNames_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyContainerScanConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppNames, appNames_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
    };
    ModifyContainerScanConfigRequest() = default ;
    ModifyContainerScanConfigRequest(const ModifyContainerScanConfigRequest &) = default ;
    ModifyContainerScanConfigRequest(ModifyContainerScanConfigRequest &&) = default ;
    ModifyContainerScanConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyContainerScanConfigRequest() = default ;
    ModifyContainerScanConfigRequest& operator=(const ModifyContainerScanConfigRequest &) = default ;
    ModifyContainerScanConfigRequest& operator=(ModifyContainerScanConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appNames_ == nullptr
        && this->clusterId_ == nullptr && this->lang_ == nullptr; };
    // appNames Field Functions 
    bool hasAppNames() const { return this->appNames_ != nullptr;};
    void deleteAppNames() { this->appNames_ = nullptr;};
    inline string getAppNames() const { DARABONBA_PTR_GET_DEFAULT(appNames_, "") };
    inline ModifyContainerScanConfigRequest& setAppNames(string appNames) { DARABONBA_PTR_SET_VALUE(appNames_, appNames) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ModifyContainerScanConfigRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ModifyContainerScanConfigRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


  protected:
    // The name of the container application.
    shared_ptr<string> appNames_ {};
    // The cluster ID.
    // 
    // >  You can call the [DescribeGroupedContainerInstances](~~DescribeGroupedContainerInstances~~) operation to query the IDs of clusters.
    shared_ptr<string> clusterId_ {};
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    shared_ptr<string> lang_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
