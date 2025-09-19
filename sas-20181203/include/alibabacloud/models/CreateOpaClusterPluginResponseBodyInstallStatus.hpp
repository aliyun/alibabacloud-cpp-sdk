// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEOPACLUSTERPLUGINRESPONSEBODYINSTALLSTATUS_HPP_
#define ALIBABACLOUD_MODELS_CREATEOPACLUSTERPLUGINRESPONSEBODYINSTALLSTATUS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class CreateOpaClusterPluginResponseBodyInstallStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOpaClusterPluginResponseBodyInstallStatus& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(InstallStatus, installStatus_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOpaClusterPluginResponseBodyInstallStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(InstallStatus, installStatus_);
    };
    CreateOpaClusterPluginResponseBodyInstallStatus() = default ;
    CreateOpaClusterPluginResponseBodyInstallStatus(const CreateOpaClusterPluginResponseBodyInstallStatus &) = default ;
    CreateOpaClusterPluginResponseBodyInstallStatus(CreateOpaClusterPluginResponseBodyInstallStatus &&) = default ;
    CreateOpaClusterPluginResponseBodyInstallStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOpaClusterPluginResponseBodyInstallStatus() = default ;
    CreateOpaClusterPluginResponseBodyInstallStatus& operator=(const CreateOpaClusterPluginResponseBodyInstallStatus &) = default ;
    CreateOpaClusterPluginResponseBodyInstallStatus& operator=(CreateOpaClusterPluginResponseBodyInstallStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterId_ != nullptr
        && this->installStatus_ != nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline CreateOpaClusterPluginResponseBodyInstallStatus& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // installStatus Field Functions 
    bool hasInstallStatus() const { return this->installStatus_ != nullptr;};
    void deleteInstallStatus() { this->installStatus_ = nullptr;};
    inline bool installStatus() const { DARABONBA_PTR_GET_DEFAULT(installStatus_, false) };
    inline CreateOpaClusterPluginResponseBodyInstallStatus& setInstallStatus(bool installStatus) { DARABONBA_PTR_SET_VALUE(installStatus_, installStatus) };


  protected:
    // The cluster ID.
    std::shared_ptr<string> clusterId_ = nullptr;
    // Indicates whether the component is installed. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> installStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
