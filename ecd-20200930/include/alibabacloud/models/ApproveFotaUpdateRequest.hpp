// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPROVEFOTAUPDATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_APPROVEFOTAUPDATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ApproveFotaUpdateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApproveFotaUpdateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppVersion, appVersion_);
      DARABONBA_PTR_TO_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ApproveFotaUpdateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppVersion, appVersion_);
      DARABONBA_PTR_FROM_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ApproveFotaUpdateRequest() = default ;
    ApproveFotaUpdateRequest(const ApproveFotaUpdateRequest &) = default ;
    ApproveFotaUpdateRequest(ApproveFotaUpdateRequest &&) = default ;
    ApproveFotaUpdateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApproveFotaUpdateRequest() = default ;
    ApproveFotaUpdateRequest& operator=(const ApproveFotaUpdateRequest &) = default ;
    ApproveFotaUpdateRequest& operator=(ApproveFotaUpdateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appVersion_ == nullptr
        && return this->desktopId_ == nullptr && return this->regionId_ == nullptr; };
    // appVersion Field Functions 
    bool hasAppVersion() const { return this->appVersion_ != nullptr;};
    void deleteAppVersion() { this->appVersion_ = nullptr;};
    inline string appVersion() const { DARABONBA_PTR_GET_DEFAULT(appVersion_, "") };
    inline ApproveFotaUpdateRequest& setAppVersion(string appVersion) { DARABONBA_PTR_SET_VALUE(appVersion_, appVersion) };


    // desktopId Field Functions 
    bool hasDesktopId() const { return this->desktopId_ != nullptr;};
    void deleteDesktopId() { this->desktopId_ = nullptr;};
    inline string desktopId() const { DARABONBA_PTR_GET_DEFAULT(desktopId_, "") };
    inline ApproveFotaUpdateRequest& setDesktopId(string desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ApproveFotaUpdateRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // Mirror version.
    // 
    // This parameter is required.
    std::shared_ptr<string> appVersion_ = nullptr;
    // The ID of the cloud computer.
    // 
    // This parameter is required.
    std::shared_ptr<string> desktopId_ = nullptr;
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) operation to query the regions supported by Elastic Desktop Service.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
