// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DYNAMICMOUNT_HPP_
#define ALIBABACLOUD_MODELS_DYNAMICMOUNT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DynamicMountPoint.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDsw20220101
{
namespace Models
{
  class DynamicMount : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DynamicMount& obj) { 
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(MountPoints, mountPoints_);
    };
    friend void from_json(const Darabonba::Json& j, DynamicMount& obj) { 
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(MountPoints, mountPoints_);
    };
    DynamicMount() = default ;
    DynamicMount(const DynamicMount &) = default ;
    DynamicMount(DynamicMount &&) = default ;
    DynamicMount(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DynamicMount() = default ;
    DynamicMount& operator=(const DynamicMount &) = default ;
    DynamicMount& operator=(DynamicMount &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->enable_ != nullptr
        && this->mountPoints_ != nullptr; };
    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline DynamicMount& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // mountPoints Field Functions 
    bool hasMountPoints() const { return this->mountPoints_ != nullptr;};
    void deleteMountPoints() { this->mountPoints_ = nullptr;};
    inline const vector<DynamicMountPoint> & mountPoints() const { DARABONBA_PTR_GET_CONST(mountPoints_, vector<DynamicMountPoint>) };
    inline vector<DynamicMountPoint> mountPoints() { DARABONBA_PTR_GET(mountPoints_, vector<DynamicMountPoint>) };
    inline DynamicMount& setMountPoints(const vector<DynamicMountPoint> & mountPoints) { DARABONBA_PTR_SET_VALUE(mountPoints_, mountPoints) };
    inline DynamicMount& setMountPoints(vector<DynamicMountPoint> && mountPoints) { DARABONBA_PTR_SET_RVALUE(mountPoints_, mountPoints) };


  protected:
    std::shared_ptr<bool> enable_ = nullptr;
    std::shared_ptr<vector<DynamicMountPoint>> mountPoints_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDsw20220101
#endif
