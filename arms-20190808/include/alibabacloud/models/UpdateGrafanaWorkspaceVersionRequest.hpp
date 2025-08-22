// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEGRAFANAWORKSPACEVERSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEGRAFANAWORKSPACEVERSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class UpdateGrafanaWorkspaceVersionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateGrafanaWorkspaceVersionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AliyunLang, aliyunLang_);
      DARABONBA_PTR_TO_JSON(GrafanaVersion, grafanaVersion_);
      DARABONBA_PTR_TO_JSON(GrafanaWorkspaceId, grafanaWorkspaceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateGrafanaWorkspaceVersionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AliyunLang, aliyunLang_);
      DARABONBA_PTR_FROM_JSON(GrafanaVersion, grafanaVersion_);
      DARABONBA_PTR_FROM_JSON(GrafanaWorkspaceId, grafanaWorkspaceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    UpdateGrafanaWorkspaceVersionRequest() = default ;
    UpdateGrafanaWorkspaceVersionRequest(const UpdateGrafanaWorkspaceVersionRequest &) = default ;
    UpdateGrafanaWorkspaceVersionRequest(UpdateGrafanaWorkspaceVersionRequest &&) = default ;
    UpdateGrafanaWorkspaceVersionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateGrafanaWorkspaceVersionRequest() = default ;
    UpdateGrafanaWorkspaceVersionRequest& operator=(const UpdateGrafanaWorkspaceVersionRequest &) = default ;
    UpdateGrafanaWorkspaceVersionRequest& operator=(UpdateGrafanaWorkspaceVersionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aliyunLang_ != nullptr
        && this->grafanaVersion_ != nullptr && this->grafanaWorkspaceId_ != nullptr && this->regionId_ != nullptr; };
    // aliyunLang Field Functions 
    bool hasAliyunLang() const { return this->aliyunLang_ != nullptr;};
    void deleteAliyunLang() { this->aliyunLang_ = nullptr;};
    inline string aliyunLang() const { DARABONBA_PTR_GET_DEFAULT(aliyunLang_, "") };
    inline UpdateGrafanaWorkspaceVersionRequest& setAliyunLang(string aliyunLang) { DARABONBA_PTR_SET_VALUE(aliyunLang_, aliyunLang) };


    // grafanaVersion Field Functions 
    bool hasGrafanaVersion() const { return this->grafanaVersion_ != nullptr;};
    void deleteGrafanaVersion() { this->grafanaVersion_ = nullptr;};
    inline string grafanaVersion() const { DARABONBA_PTR_GET_DEFAULT(grafanaVersion_, "") };
    inline UpdateGrafanaWorkspaceVersionRequest& setGrafanaVersion(string grafanaVersion) { DARABONBA_PTR_SET_VALUE(grafanaVersion_, grafanaVersion) };


    // grafanaWorkspaceId Field Functions 
    bool hasGrafanaWorkspaceId() const { return this->grafanaWorkspaceId_ != nullptr;};
    void deleteGrafanaWorkspaceId() { this->grafanaWorkspaceId_ = nullptr;};
    inline string grafanaWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(grafanaWorkspaceId_, "") };
    inline UpdateGrafanaWorkspaceVersionRequest& setGrafanaWorkspaceId(string grafanaWorkspaceId) { DARABONBA_PTR_SET_VALUE(grafanaWorkspaceId_, grafanaWorkspaceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateGrafanaWorkspaceVersionRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The language. Valid values: zh and en. Default value: zh.
    std::shared_ptr<string> aliyunLang_ = nullptr;
    // The Grafana version.
    // 
    // This parameter is required.
    std::shared_ptr<string> grafanaVersion_ = nullptr;
    // The ID of the workspace.
    // 
    // This parameter is required.
    std::shared_ptr<string> grafanaWorkspaceId_ = nullptr;
    // The region ID. Default value: cn-hangzhou.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
