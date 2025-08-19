// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNINSTALLCLUSTERADDONSREQUESTADDONS_HPP_
#define ALIBABACLOUD_MODELS_UNINSTALLCLUSTERADDONSREQUESTADDONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class UnInstallClusterAddonsRequestAddons : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UnInstallClusterAddonsRequestAddons& obj) { 
      DARABONBA_PTR_TO_JSON(cleanup_cloud_resources, cleanupCloudResources_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, UnInstallClusterAddonsRequestAddons& obj) { 
      DARABONBA_PTR_FROM_JSON(cleanup_cloud_resources, cleanupCloudResources_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    UnInstallClusterAddonsRequestAddons() = default ;
    UnInstallClusterAddonsRequestAddons(const UnInstallClusterAddonsRequestAddons &) = default ;
    UnInstallClusterAddonsRequestAddons(UnInstallClusterAddonsRequestAddons &&) = default ;
    UnInstallClusterAddonsRequestAddons(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UnInstallClusterAddonsRequestAddons() = default ;
    UnInstallClusterAddonsRequestAddons& operator=(const UnInstallClusterAddonsRequestAddons &) = default ;
    UnInstallClusterAddonsRequestAddons& operator=(UnInstallClusterAddonsRequestAddons &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cleanupCloudResources_ != nullptr
        && this->name_ != nullptr; };
    // cleanupCloudResources Field Functions 
    bool hasCleanupCloudResources() const { return this->cleanupCloudResources_ != nullptr;};
    void deleteCleanupCloudResources() { this->cleanupCloudResources_ = nullptr;};
    inline bool cleanupCloudResources() const { DARABONBA_PTR_GET_DEFAULT(cleanupCloudResources_, false) };
    inline UnInstallClusterAddonsRequestAddons& setCleanupCloudResources(bool cleanupCloudResources) { DARABONBA_PTR_SET_VALUE(cleanupCloudResources_, cleanupCloudResources) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UnInstallClusterAddonsRequestAddons& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // Specifies whether to clean up related cloud resources during uninstallation.
    // 
    // *   true: clean up
    // *   false: retain
    std::shared_ptr<bool> cleanupCloudResources_ = nullptr;
    // The name of the add-on to uninstall. You can call the [ListClusterAddonInstances](https://help.aliyun.com/document_detail/2667940.html) operation to query the installed add-ons.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
