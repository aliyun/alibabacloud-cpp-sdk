// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECONTAINERSCANTASKBYAPPNAMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECONTAINERSCANTASKBYAPPNAMEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class CreateContainerScanTaskByAppNameRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateContainerScanTaskByAppNameRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppNames, appNames_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
    };
    friend void from_json(const Darabonba::Json& j, CreateContainerScanTaskByAppNameRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppNames, appNames_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
    };
    CreateContainerScanTaskByAppNameRequest() = default ;
    CreateContainerScanTaskByAppNameRequest(const CreateContainerScanTaskByAppNameRequest &) = default ;
    CreateContainerScanTaskByAppNameRequest(CreateContainerScanTaskByAppNameRequest &&) = default ;
    CreateContainerScanTaskByAppNameRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateContainerScanTaskByAppNameRequest() = default ;
    CreateContainerScanTaskByAppNameRequest& operator=(const CreateContainerScanTaskByAppNameRequest &) = default ;
    CreateContainerScanTaskByAppNameRequest& operator=(CreateContainerScanTaskByAppNameRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appNames_ == nullptr
        && return this->clusterId_ == nullptr && return this->lang_ == nullptr; };
    // appNames Field Functions 
    bool hasAppNames() const { return this->appNames_ != nullptr;};
    void deleteAppNames() { this->appNames_ = nullptr;};
    inline string appNames() const { DARABONBA_PTR_GET_DEFAULT(appNames_, "") };
    inline CreateContainerScanTaskByAppNameRequest& setAppNames(string appNames) { DARABONBA_PTR_SET_VALUE(appNames_, appNames) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline CreateContainerScanTaskByAppNameRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline CreateContainerScanTaskByAppNameRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


  protected:
    // The name of the container application.
    std::shared_ptr<string> appNames_ = nullptr;
    // The cluster ID.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The language of the content within the request and response.
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
