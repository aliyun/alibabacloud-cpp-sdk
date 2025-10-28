// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELOCALITYSETTINGRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_UPDATELOCALITYSETTINGRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class UpdateLocalitySettingResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateLocalitySettingResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(Threshold, threshold_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateLocalitySettingResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
    };
    UpdateLocalitySettingResponseBodyData() = default ;
    UpdateLocalitySettingResponseBodyData(const UpdateLocalitySettingResponseBodyData &) = default ;
    UpdateLocalitySettingResponseBodyData(UpdateLocalitySettingResponseBodyData &&) = default ;
    UpdateLocalitySettingResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateLocalitySettingResponseBodyData() = default ;
    UpdateLocalitySettingResponseBodyData& operator=(const UpdateLocalitySettingResponseBodyData &) = default ;
    UpdateLocalitySettingResponseBodyData& operator=(UpdateLocalitySettingResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enabled_ == nullptr
        && return this->threshold_ == nullptr; };
    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline UpdateLocalitySettingResponseBodyData& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // threshold Field Functions 
    bool hasThreshold() const { return this->threshold_ != nullptr;};
    void deleteThreshold() { this->threshold_ = nullptr;};
    inline float threshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0.0) };
    inline UpdateLocalitySettingResponseBodyData& setThreshold(float threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


  protected:
    std::shared_ptr<bool> enabled_ = nullptr;
    std::shared_ptr<float> threshold_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
