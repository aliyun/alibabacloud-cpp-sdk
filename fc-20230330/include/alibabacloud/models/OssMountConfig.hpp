// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OSSMOUNTCONFIG_HPP_
#define ALIBABACLOUD_MODELS_OSSMOUNTCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/OSSMountPoint.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class OSSMountConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OSSMountConfig& obj) { 
      DARABONBA_PTR_TO_JSON(mountPoints, mountPoints_);
    };
    friend void from_json(const Darabonba::Json& j, OSSMountConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(mountPoints, mountPoints_);
    };
    OSSMountConfig() = default ;
    OSSMountConfig(const OSSMountConfig &) = default ;
    OSSMountConfig(OSSMountConfig &&) = default ;
    OSSMountConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OSSMountConfig() = default ;
    OSSMountConfig& operator=(const OSSMountConfig &) = default ;
    OSSMountConfig& operator=(OSSMountConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mountPoints_ == nullptr; };
    // mountPoints Field Functions 
    bool hasMountPoints() const { return this->mountPoints_ != nullptr;};
    void deleteMountPoints() { this->mountPoints_ = nullptr;};
    inline const vector<OSSMountPoint> & mountPoints() const { DARABONBA_PTR_GET_CONST(mountPoints_, vector<OSSMountPoint>) };
    inline vector<OSSMountPoint> mountPoints() { DARABONBA_PTR_GET(mountPoints_, vector<OSSMountPoint>) };
    inline OSSMountConfig& setMountPoints(const vector<OSSMountPoint> & mountPoints) { DARABONBA_PTR_SET_VALUE(mountPoints_, mountPoints) };
    inline OSSMountConfig& setMountPoints(vector<OSSMountPoint> && mountPoints) { DARABONBA_PTR_SET_RVALUE(mountPoints_, mountPoints) };


  protected:
    std::shared_ptr<vector<OSSMountPoint>> mountPoints_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
