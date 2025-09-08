// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WEBNASCONFIG_HPP_
#define ALIBABACLOUD_MODELS_WEBNASCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/WebNASMountPoint.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class WebNASConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WebNASConfig& obj) { 
      DARABONBA_PTR_TO_JSON(MountPoints, mountPoints_);
    };
    friend void from_json(const Darabonba::Json& j, WebNASConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(MountPoints, mountPoints_);
    };
    WebNASConfig() = default ;
    WebNASConfig(const WebNASConfig &) = default ;
    WebNASConfig(WebNASConfig &&) = default ;
    WebNASConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WebNASConfig() = default ;
    WebNASConfig& operator=(const WebNASConfig &) = default ;
    WebNASConfig& operator=(WebNASConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->mountPoints_ != nullptr; };
    // mountPoints Field Functions 
    bool hasMountPoints() const { return this->mountPoints_ != nullptr;};
    void deleteMountPoints() { this->mountPoints_ = nullptr;};
    inline const vector<WebNASMountPoint> & mountPoints() const { DARABONBA_PTR_GET_CONST(mountPoints_, vector<WebNASMountPoint>) };
    inline vector<WebNASMountPoint> mountPoints() { DARABONBA_PTR_GET(mountPoints_, vector<WebNASMountPoint>) };
    inline WebNASConfig& setMountPoints(const vector<WebNASMountPoint> & mountPoints) { DARABONBA_PTR_SET_VALUE(mountPoints_, mountPoints) };
    inline WebNASConfig& setMountPoints(vector<WebNASMountPoint> && mountPoints) { DARABONBA_PTR_SET_RVALUE(mountPoints_, mountPoints) };


  protected:
    std::shared_ptr<vector<WebNASMountPoint>> mountPoints_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
