// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEPLOYVLLMMODELINPUTOSSMOUNTCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DEPLOYVLLMMODELINPUTOSSMOUNTCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DeployVllmModelInputOssMountConfigMountPoints.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class DeployVllmModelInputOssMountConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeployVllmModelInputOssMountConfig& obj) { 
      DARABONBA_PTR_TO_JSON(mountPoints, mountPoints_);
    };
    friend void from_json(const Darabonba::Json& j, DeployVllmModelInputOssMountConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(mountPoints, mountPoints_);
    };
    DeployVllmModelInputOssMountConfig() = default ;
    DeployVllmModelInputOssMountConfig(const DeployVllmModelInputOssMountConfig &) = default ;
    DeployVllmModelInputOssMountConfig(DeployVllmModelInputOssMountConfig &&) = default ;
    DeployVllmModelInputOssMountConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeployVllmModelInputOssMountConfig() = default ;
    DeployVllmModelInputOssMountConfig& operator=(const DeployVllmModelInputOssMountConfig &) = default ;
    DeployVllmModelInputOssMountConfig& operator=(DeployVllmModelInputOssMountConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->mountPoints_ != nullptr; };
    // mountPoints Field Functions 
    bool hasMountPoints() const { return this->mountPoints_ != nullptr;};
    void deleteMountPoints() { this->mountPoints_ = nullptr;};
    inline const vector<Models::DeployVllmModelInputOssMountConfigMountPoints> & mountPoints() const { DARABONBA_PTR_GET_CONST(mountPoints_, vector<Models::DeployVllmModelInputOssMountConfigMountPoints>) };
    inline vector<Models::DeployVllmModelInputOssMountConfigMountPoints> mountPoints() { DARABONBA_PTR_GET(mountPoints_, vector<Models::DeployVllmModelInputOssMountConfigMountPoints>) };
    inline DeployVllmModelInputOssMountConfig& setMountPoints(const vector<Models::DeployVllmModelInputOssMountConfigMountPoints> & mountPoints) { DARABONBA_PTR_SET_VALUE(mountPoints_, mountPoints) };
    inline DeployVllmModelInputOssMountConfig& setMountPoints(vector<Models::DeployVllmModelInputOssMountConfigMountPoints> && mountPoints) { DARABONBA_PTR_SET_RVALUE(mountPoints_, mountPoints) };


  protected:
    std::shared_ptr<vector<Models::DeployVllmModelInputOssMountConfigMountPoints>> mountPoints_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
