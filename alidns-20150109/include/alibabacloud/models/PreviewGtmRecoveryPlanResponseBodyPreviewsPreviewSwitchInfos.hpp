// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PREVIEWGTMRECOVERYPLANRESPONSEBODYPREVIEWSPREVIEWSWITCHINFOS_HPP_
#define ALIBABACLOUD_MODELS_PREVIEWGTMRECOVERYPLANRESPONSEBODYPREVIEWSPREVIEWSWITCHINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/PreviewGtmRecoveryPlanResponseBodyPreviewsPreviewSwitchInfosSwitchInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class PreviewGtmRecoveryPlanResponseBodyPreviewsPreviewSwitchInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PreviewGtmRecoveryPlanResponseBodyPreviewsPreviewSwitchInfos& obj) { 
      DARABONBA_PTR_TO_JSON(SwitchInfo, switchInfo_);
    };
    friend void from_json(const Darabonba::Json& j, PreviewGtmRecoveryPlanResponseBodyPreviewsPreviewSwitchInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(SwitchInfo, switchInfo_);
    };
    PreviewGtmRecoveryPlanResponseBodyPreviewsPreviewSwitchInfos() = default ;
    PreviewGtmRecoveryPlanResponseBodyPreviewsPreviewSwitchInfos(const PreviewGtmRecoveryPlanResponseBodyPreviewsPreviewSwitchInfos &) = default ;
    PreviewGtmRecoveryPlanResponseBodyPreviewsPreviewSwitchInfos(PreviewGtmRecoveryPlanResponseBodyPreviewsPreviewSwitchInfos &&) = default ;
    PreviewGtmRecoveryPlanResponseBodyPreviewsPreviewSwitchInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PreviewGtmRecoveryPlanResponseBodyPreviewsPreviewSwitchInfos() = default ;
    PreviewGtmRecoveryPlanResponseBodyPreviewsPreviewSwitchInfos& operator=(const PreviewGtmRecoveryPlanResponseBodyPreviewsPreviewSwitchInfos &) = default ;
    PreviewGtmRecoveryPlanResponseBodyPreviewsPreviewSwitchInfos& operator=(PreviewGtmRecoveryPlanResponseBodyPreviewsPreviewSwitchInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->switchInfo_ != nullptr; };
    // switchInfo Field Functions 
    bool hasSwitchInfo() const { return this->switchInfo_ != nullptr;};
    void deleteSwitchInfo() { this->switchInfo_ = nullptr;};
    inline const vector<Models::PreviewGtmRecoveryPlanResponseBodyPreviewsPreviewSwitchInfosSwitchInfo> & switchInfo() const { DARABONBA_PTR_GET_CONST(switchInfo_, vector<Models::PreviewGtmRecoveryPlanResponseBodyPreviewsPreviewSwitchInfosSwitchInfo>) };
    inline vector<Models::PreviewGtmRecoveryPlanResponseBodyPreviewsPreviewSwitchInfosSwitchInfo> switchInfo() { DARABONBA_PTR_GET(switchInfo_, vector<Models::PreviewGtmRecoveryPlanResponseBodyPreviewsPreviewSwitchInfosSwitchInfo>) };
    inline PreviewGtmRecoveryPlanResponseBodyPreviewsPreviewSwitchInfos& setSwitchInfo(const vector<Models::PreviewGtmRecoveryPlanResponseBodyPreviewsPreviewSwitchInfosSwitchInfo> & switchInfo) { DARABONBA_PTR_SET_VALUE(switchInfo_, switchInfo) };
    inline PreviewGtmRecoveryPlanResponseBodyPreviewsPreviewSwitchInfos& setSwitchInfo(vector<Models::PreviewGtmRecoveryPlanResponseBodyPreviewsPreviewSwitchInfosSwitchInfo> && switchInfo) { DARABONBA_PTR_SET_RVALUE(switchInfo_, switchInfo) };


  protected:
    std::shared_ptr<vector<Models::PreviewGtmRecoveryPlanResponseBodyPreviewsPreviewSwitchInfosSwitchInfo>> switchInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
