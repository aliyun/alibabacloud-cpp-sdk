// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WEBOSSCONFIG_HPP_
#define ALIBABACLOUD_MODELS_WEBOSSCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/WebOSSMountPoint.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class WebOSSConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WebOSSConfig& obj) { 
      DARABONBA_PTR_TO_JSON(MountPoints, mountPoints_);
    };
    friend void from_json(const Darabonba::Json& j, WebOSSConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(MountPoints, mountPoints_);
    };
    WebOSSConfig() = default ;
    WebOSSConfig(const WebOSSConfig &) = default ;
    WebOSSConfig(WebOSSConfig &&) = default ;
    WebOSSConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WebOSSConfig() = default ;
    WebOSSConfig& operator=(const WebOSSConfig &) = default ;
    WebOSSConfig& operator=(WebOSSConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->mountPoints_ != nullptr; };
    // mountPoints Field Functions 
    bool hasMountPoints() const { return this->mountPoints_ != nullptr;};
    void deleteMountPoints() { this->mountPoints_ = nullptr;};
    inline const vector<WebOSSMountPoint> & mountPoints() const { DARABONBA_PTR_GET_CONST(mountPoints_, vector<WebOSSMountPoint>) };
    inline vector<WebOSSMountPoint> mountPoints() { DARABONBA_PTR_GET(mountPoints_, vector<WebOSSMountPoint>) };
    inline WebOSSConfig& setMountPoints(const vector<WebOSSMountPoint> & mountPoints) { DARABONBA_PTR_SET_VALUE(mountPoints_, mountPoints) };
    inline WebOSSConfig& setMountPoints(vector<WebOSSMountPoint> && mountPoints) { DARABONBA_PTR_SET_RVALUE(mountPoints_, mountPoints) };


  protected:
    std::shared_ptr<vector<WebOSSMountPoint>> mountPoints_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
