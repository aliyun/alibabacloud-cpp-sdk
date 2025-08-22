// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSTALLCMSEXPORTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INSTALLCMSEXPORTERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class InstallCmsExporterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InstallCmsExporterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(CmsArgs, cmsArgs_);
      DARABONBA_PTR_TO_JSON(DirectArgs, directArgs_);
      DARABONBA_PTR_TO_JSON(EnableTag, enableTag_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, InstallCmsExporterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(CmsArgs, cmsArgs_);
      DARABONBA_PTR_FROM_JSON(DirectArgs, directArgs_);
      DARABONBA_PTR_FROM_JSON(EnableTag, enableTag_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    InstallCmsExporterRequest() = default ;
    InstallCmsExporterRequest(const InstallCmsExporterRequest &) = default ;
    InstallCmsExporterRequest(InstallCmsExporterRequest &&) = default ;
    InstallCmsExporterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InstallCmsExporterRequest() = default ;
    InstallCmsExporterRequest& operator=(const InstallCmsExporterRequest &) = default ;
    InstallCmsExporterRequest& operator=(InstallCmsExporterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterId_ != nullptr
        && this->cmsArgs_ != nullptr && this->directArgs_ != nullptr && this->enableTag_ != nullptr && this->regionId_ != nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline InstallCmsExporterRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // cmsArgs Field Functions 
    bool hasCmsArgs() const { return this->cmsArgs_ != nullptr;};
    void deleteCmsArgs() { this->cmsArgs_ = nullptr;};
    inline string cmsArgs() const { DARABONBA_PTR_GET_DEFAULT(cmsArgs_, "") };
    inline InstallCmsExporterRequest& setCmsArgs(string cmsArgs) { DARABONBA_PTR_SET_VALUE(cmsArgs_, cmsArgs) };


    // directArgs Field Functions 
    bool hasDirectArgs() const { return this->directArgs_ != nullptr;};
    void deleteDirectArgs() { this->directArgs_ = nullptr;};
    inline string directArgs() const { DARABONBA_PTR_GET_DEFAULT(directArgs_, "") };
    inline InstallCmsExporterRequest& setDirectArgs(string directArgs) { DARABONBA_PTR_SET_VALUE(directArgs_, directArgs) };


    // enableTag Field Functions 
    bool hasEnableTag() const { return this->enableTag_ != nullptr;};
    void deleteEnableTag() { this->enableTag_ = nullptr;};
    inline bool enableTag() const { DARABONBA_PTR_GET_DEFAULT(enableTag_, false) };
    inline InstallCmsExporterRequest& setEnableTag(bool enableTag) { DARABONBA_PTR_SET_VALUE(enableTag_, enableTag) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline InstallCmsExporterRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The cloud services that you want to monitor. The CmsArgs parameter is the startup parameter of the cms-exporter collector. Separate multiple cloud services with number signs (`#`).
    std::shared_ptr<string> cmsArgs_ = nullptr;
    // The recently monitored cloud services. Separate multiple cloud services with number signs (`#`).
    std::shared_ptr<string> directArgs_ = nullptr;
    // Specifies whether to collect the aliyun tags attached to each cloud service. Default value: false.
    std::shared_ptr<bool> enableTag_ = nullptr;
    // The ID of the region.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
