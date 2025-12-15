// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNINSTALLADDONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UNINSTALLADDONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class UnInstallAddonRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UnInstallAddonRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddonId, addonId_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
    };
    friend void from_json(const Darabonba::Json& j, UnInstallAddonRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddonId, addonId_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
    };
    UnInstallAddonRequest() = default ;
    UnInstallAddonRequest(const UnInstallAddonRequest &) = default ;
    UnInstallAddonRequest(UnInstallAddonRequest &&) = default ;
    UnInstallAddonRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UnInstallAddonRequest() = default ;
    UnInstallAddonRequest& operator=(const UnInstallAddonRequest &) = default ;
    UnInstallAddonRequest& operator=(UnInstallAddonRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addonId_ == nullptr
        && return this->clusterId_ == nullptr; };
    // addonId Field Functions 
    bool hasAddonId() const { return this->addonId_ != nullptr;};
    void deleteAddonId() { this->addonId_ = nullptr;};
    inline string addonId() const { DARABONBA_PTR_GET_DEFAULT(addonId_, "") };
    inline UnInstallAddonRequest& setAddonId(string addonId) { DARABONBA_PTR_SET_VALUE(addonId_, addonId) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline UnInstallAddonRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


  protected:
    // The addon ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> addonId_ = nullptr;
    // The cluster ID.
    // 
    // You can call the [ListClusters](https://help.aliyun.com/document_detail/87116.html) operation to query the cluster ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
