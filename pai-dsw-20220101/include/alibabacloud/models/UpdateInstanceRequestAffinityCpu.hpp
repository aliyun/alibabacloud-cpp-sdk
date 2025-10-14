// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEINSTANCEREQUESTAFFINITYCPU_HPP_
#define ALIBABACLOUD_MODELS_UPDATEINSTANCEREQUESTAFFINITYCPU_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDsw20220101
{
namespace Models
{
  class UpdateInstanceRequestAffinityCPU : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateInstanceRequestAffinityCPU& obj) { 
      DARABONBA_PTR_TO_JSON(Enable, enable_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateInstanceRequestAffinityCPU& obj) { 
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
    };
    UpdateInstanceRequestAffinityCPU() = default ;
    UpdateInstanceRequestAffinityCPU(const UpdateInstanceRequestAffinityCPU &) = default ;
    UpdateInstanceRequestAffinityCPU(UpdateInstanceRequestAffinityCPU &&) = default ;
    UpdateInstanceRequestAffinityCPU(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateInstanceRequestAffinityCPU() = default ;
    UpdateInstanceRequestAffinityCPU& operator=(const UpdateInstanceRequestAffinityCPU &) = default ;
    UpdateInstanceRequestAffinityCPU& operator=(UpdateInstanceRequestAffinityCPU &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enable_ == nullptr; };
    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline UpdateInstanceRequestAffinityCPU& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


  protected:
    // Specifies whether CPU affinity is enabled.
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> enable_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDsw20220101
#endif
