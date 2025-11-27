// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYBROWSERINSTANCEGROUPREQUESTPOLICYWATERMARKPOLICY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYBROWSERINSTANCEGROUPREQUESTPOLICYWATERMARKPOLICY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ModifyBrowserInstanceGroupRequestPolicyWatermarkPolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyBrowserInstanceGroupRequestPolicyWatermarkPolicy& obj) { 
      DARABONBA_PTR_TO_JSON(WatermarkSwitch, watermarkSwitch_);
      DARABONBA_PTR_TO_JSON(WatermarkTypes, watermarkTypes_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyBrowserInstanceGroupRequestPolicyWatermarkPolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(WatermarkSwitch, watermarkSwitch_);
      DARABONBA_PTR_FROM_JSON(WatermarkTypes, watermarkTypes_);
    };
    ModifyBrowserInstanceGroupRequestPolicyWatermarkPolicy() = default ;
    ModifyBrowserInstanceGroupRequestPolicyWatermarkPolicy(const ModifyBrowserInstanceGroupRequestPolicyWatermarkPolicy &) = default ;
    ModifyBrowserInstanceGroupRequestPolicyWatermarkPolicy(ModifyBrowserInstanceGroupRequestPolicyWatermarkPolicy &&) = default ;
    ModifyBrowserInstanceGroupRequestPolicyWatermarkPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyBrowserInstanceGroupRequestPolicyWatermarkPolicy() = default ;
    ModifyBrowserInstanceGroupRequestPolicyWatermarkPolicy& operator=(const ModifyBrowserInstanceGroupRequestPolicyWatermarkPolicy &) = default ;
    ModifyBrowserInstanceGroupRequestPolicyWatermarkPolicy& operator=(ModifyBrowserInstanceGroupRequestPolicyWatermarkPolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->watermarkSwitch_ == nullptr
        && return this->watermarkTypes_ == nullptr; };
    // watermarkSwitch Field Functions 
    bool hasWatermarkSwitch() const { return this->watermarkSwitch_ != nullptr;};
    void deleteWatermarkSwitch() { this->watermarkSwitch_ = nullptr;};
    inline string watermarkSwitch() const { DARABONBA_PTR_GET_DEFAULT(watermarkSwitch_, "") };
    inline ModifyBrowserInstanceGroupRequestPolicyWatermarkPolicy& setWatermarkSwitch(string watermarkSwitch) { DARABONBA_PTR_SET_VALUE(watermarkSwitch_, watermarkSwitch) };


    // watermarkTypes Field Functions 
    bool hasWatermarkTypes() const { return this->watermarkTypes_ != nullptr;};
    void deleteWatermarkTypes() { this->watermarkTypes_ = nullptr;};
    inline const vector<string> & watermarkTypes() const { DARABONBA_PTR_GET_CONST(watermarkTypes_, vector<string>) };
    inline vector<string> watermarkTypes() { DARABONBA_PTR_GET(watermarkTypes_, vector<string>) };
    inline ModifyBrowserInstanceGroupRequestPolicyWatermarkPolicy& setWatermarkTypes(const vector<string> & watermarkTypes) { DARABONBA_PTR_SET_VALUE(watermarkTypes_, watermarkTypes) };
    inline ModifyBrowserInstanceGroupRequestPolicyWatermarkPolicy& setWatermarkTypes(vector<string> && watermarkTypes) { DARABONBA_PTR_SET_RVALUE(watermarkTypes_, watermarkTypes) };


  protected:
    // Specifies whether to enable the watermark.
    // 
    // Valid values:
    // 
    // *   off
    // *   on
    std::shared_ptr<string> watermarkSwitch_ = nullptr;
    // The watermark types.
    std::shared_ptr<vector<string>> watermarkTypes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
