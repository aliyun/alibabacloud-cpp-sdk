// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNINSTALLPROMCLUSTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UNINSTALLPROMCLUSTERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class UninstallPromClusterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UninstallPromClusterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AliyunLang, aliyunLang_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, UninstallPromClusterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AliyunLang, aliyunLang_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    UninstallPromClusterRequest() = default ;
    UninstallPromClusterRequest(const UninstallPromClusterRequest &) = default ;
    UninstallPromClusterRequest(UninstallPromClusterRequest &&) = default ;
    UninstallPromClusterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UninstallPromClusterRequest() = default ;
    UninstallPromClusterRequest& operator=(const UninstallPromClusterRequest &) = default ;
    UninstallPromClusterRequest& operator=(UninstallPromClusterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aliyunLang_ != nullptr
        && this->clusterId_ != nullptr && this->regionId_ != nullptr; };
    // aliyunLang Field Functions 
    bool hasAliyunLang() const { return this->aliyunLang_ != nullptr;};
    void deleteAliyunLang() { this->aliyunLang_ = nullptr;};
    inline string aliyunLang() const { DARABONBA_PTR_GET_DEFAULT(aliyunLang_, "") };
    inline UninstallPromClusterRequest& setAliyunLang(string aliyunLang) { DARABONBA_PTR_SET_VALUE(aliyunLang_, aliyunLang) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline UninstallPromClusterRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UninstallPromClusterRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // Language environment(If left blank, defaults to zh):
    // - zh
    // - en
    std::shared_ptr<string> aliyunLang_ = nullptr;
    // The cluster ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The region ID. Default value: cn-hangzhou.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
