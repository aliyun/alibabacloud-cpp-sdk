// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSAFETYCOVERRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETSAFETYCOVERRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetSafetyCoverResponseBodyDataCfwProtection.hpp>
#include <alibabacloud/models/GetSafetyCoverResponseBodyDataEcsProtection.hpp>
#include <alibabacloud/models/GetSafetyCoverResponseBodyDataWafProtection.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mssp20161228
{
namespace Models
{
  class GetSafetyCoverResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSafetyCoverResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CfwProtection, cfwProtection_);
      DARABONBA_PTR_TO_JSON(EcsProtection, ecsProtection_);
      DARABONBA_PTR_TO_JSON(WafProtection, wafProtection_);
    };
    friend void from_json(const Darabonba::Json& j, GetSafetyCoverResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CfwProtection, cfwProtection_);
      DARABONBA_PTR_FROM_JSON(EcsProtection, ecsProtection_);
      DARABONBA_PTR_FROM_JSON(WafProtection, wafProtection_);
    };
    GetSafetyCoverResponseBodyData() = default ;
    GetSafetyCoverResponseBodyData(const GetSafetyCoverResponseBodyData &) = default ;
    GetSafetyCoverResponseBodyData(GetSafetyCoverResponseBodyData &&) = default ;
    GetSafetyCoverResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSafetyCoverResponseBodyData() = default ;
    GetSafetyCoverResponseBodyData& operator=(const GetSafetyCoverResponseBodyData &) = default ;
    GetSafetyCoverResponseBodyData& operator=(GetSafetyCoverResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cfwProtection_ == nullptr
        && return this->ecsProtection_ == nullptr && return this->wafProtection_ == nullptr; };
    // cfwProtection Field Functions 
    bool hasCfwProtection() const { return this->cfwProtection_ != nullptr;};
    void deleteCfwProtection() { this->cfwProtection_ = nullptr;};
    inline const Models::GetSafetyCoverResponseBodyDataCfwProtection & cfwProtection() const { DARABONBA_PTR_GET_CONST(cfwProtection_, Models::GetSafetyCoverResponseBodyDataCfwProtection) };
    inline Models::GetSafetyCoverResponseBodyDataCfwProtection cfwProtection() { DARABONBA_PTR_GET(cfwProtection_, Models::GetSafetyCoverResponseBodyDataCfwProtection) };
    inline GetSafetyCoverResponseBodyData& setCfwProtection(const Models::GetSafetyCoverResponseBodyDataCfwProtection & cfwProtection) { DARABONBA_PTR_SET_VALUE(cfwProtection_, cfwProtection) };
    inline GetSafetyCoverResponseBodyData& setCfwProtection(Models::GetSafetyCoverResponseBodyDataCfwProtection && cfwProtection) { DARABONBA_PTR_SET_RVALUE(cfwProtection_, cfwProtection) };


    // ecsProtection Field Functions 
    bool hasEcsProtection() const { return this->ecsProtection_ != nullptr;};
    void deleteEcsProtection() { this->ecsProtection_ = nullptr;};
    inline const Models::GetSafetyCoverResponseBodyDataEcsProtection & ecsProtection() const { DARABONBA_PTR_GET_CONST(ecsProtection_, Models::GetSafetyCoverResponseBodyDataEcsProtection) };
    inline Models::GetSafetyCoverResponseBodyDataEcsProtection ecsProtection() { DARABONBA_PTR_GET(ecsProtection_, Models::GetSafetyCoverResponseBodyDataEcsProtection) };
    inline GetSafetyCoverResponseBodyData& setEcsProtection(const Models::GetSafetyCoverResponseBodyDataEcsProtection & ecsProtection) { DARABONBA_PTR_SET_VALUE(ecsProtection_, ecsProtection) };
    inline GetSafetyCoverResponseBodyData& setEcsProtection(Models::GetSafetyCoverResponseBodyDataEcsProtection && ecsProtection) { DARABONBA_PTR_SET_RVALUE(ecsProtection_, ecsProtection) };


    // wafProtection Field Functions 
    bool hasWafProtection() const { return this->wafProtection_ != nullptr;};
    void deleteWafProtection() { this->wafProtection_ = nullptr;};
    inline const Models::GetSafetyCoverResponseBodyDataWafProtection & wafProtection() const { DARABONBA_PTR_GET_CONST(wafProtection_, Models::GetSafetyCoverResponseBodyDataWafProtection) };
    inline Models::GetSafetyCoverResponseBodyDataWafProtection wafProtection() { DARABONBA_PTR_GET(wafProtection_, Models::GetSafetyCoverResponseBodyDataWafProtection) };
    inline GetSafetyCoverResponseBodyData& setWafProtection(const Models::GetSafetyCoverResponseBodyDataWafProtection & wafProtection) { DARABONBA_PTR_SET_VALUE(wafProtection_, wafProtection) };
    inline GetSafetyCoverResponseBodyData& setWafProtection(Models::GetSafetyCoverResponseBodyDataWafProtection && wafProtection) { DARABONBA_PTR_SET_RVALUE(wafProtection_, wafProtection) };


  protected:
    // CFW protection coverage.
    std::shared_ptr<Models::GetSafetyCoverResponseBodyDataCfwProtection> cfwProtection_ = nullptr;
    // ECS protection coverage.
    std::shared_ptr<Models::GetSafetyCoverResponseBodyDataEcsProtection> ecsProtection_ = nullptr;
    // WAF protection coverage.
    std::shared_ptr<Models::GetSafetyCoverResponseBodyDataWafProtection> wafProtection_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mssp20161228
#endif
