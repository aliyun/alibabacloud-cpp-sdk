// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NASCONFIG_HPP_
#define ALIBABACLOUD_MODELS_NASCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/NASMountConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class NASConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NASConfig& obj) { 
      DARABONBA_PTR_TO_JSON(mountPoints, mountPoints_);
    };
    friend void from_json(const Darabonba::Json& j, NASConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(mountPoints, mountPoints_);
    };
    NASConfig() = default ;
    NASConfig(const NASConfig &) = default ;
    NASConfig(NASConfig &&) = default ;
    NASConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NASConfig() = default ;
    NASConfig& operator=(const NASConfig &) = default ;
    NASConfig& operator=(NASConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mountPoints_ == nullptr; };
    // mountPoints Field Functions 
    bool hasMountPoints() const { return this->mountPoints_ != nullptr;};
    void deleteMountPoints() { this->mountPoints_ = nullptr;};
    inline const vector<NASMountConfig> & mountPoints() const { DARABONBA_PTR_GET_CONST(mountPoints_, vector<NASMountConfig>) };
    inline vector<NASMountConfig> mountPoints() { DARABONBA_PTR_GET(mountPoints_, vector<NASMountConfig>) };
    inline NASConfig& setMountPoints(const vector<NASMountConfig> & mountPoints) { DARABONBA_PTR_SET_VALUE(mountPoints_, mountPoints) };
    inline NASConfig& setMountPoints(vector<NASMountConfig> && mountPoints) { DARABONBA_PTR_SET_RVALUE(mountPoints_, mountPoints) };


  protected:
    std::shared_ptr<vector<NASMountConfig>> mountPoints_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
