// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PREVIEWGTMRECOVERYPLANRESPONSEBODYPREVIEWSPREVIEW_HPP_
#define ALIBABACLOUD_MODELS_PREVIEWGTMRECOVERYPLANRESPONSEBODYPREVIEWSPREVIEW_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PreviewGtmRecoveryPlanResponseBodyPreviewsPreviewSwitchInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class PreviewGtmRecoveryPlanResponseBodyPreviewsPreview : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PreviewGtmRecoveryPlanResponseBodyPreviewsPreview& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(SwitchInfos, switchInfos_);
      DARABONBA_PTR_TO_JSON(UserDomainName, userDomainName_);
    };
    friend void from_json(const Darabonba::Json& j, PreviewGtmRecoveryPlanResponseBodyPreviewsPreview& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(SwitchInfos, switchInfos_);
      DARABONBA_PTR_FROM_JSON(UserDomainName, userDomainName_);
    };
    PreviewGtmRecoveryPlanResponseBodyPreviewsPreview() = default ;
    PreviewGtmRecoveryPlanResponseBodyPreviewsPreview(const PreviewGtmRecoveryPlanResponseBodyPreviewsPreview &) = default ;
    PreviewGtmRecoveryPlanResponseBodyPreviewsPreview(PreviewGtmRecoveryPlanResponseBodyPreviewsPreview &&) = default ;
    PreviewGtmRecoveryPlanResponseBodyPreviewsPreview(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PreviewGtmRecoveryPlanResponseBodyPreviewsPreview() = default ;
    PreviewGtmRecoveryPlanResponseBodyPreviewsPreview& operator=(const PreviewGtmRecoveryPlanResponseBodyPreviewsPreview &) = default ;
    PreviewGtmRecoveryPlanResponseBodyPreviewsPreview& operator=(PreviewGtmRecoveryPlanResponseBodyPreviewsPreview &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr
        && this->name_ != nullptr && this->switchInfos_ != nullptr && this->userDomainName_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline PreviewGtmRecoveryPlanResponseBodyPreviewsPreview& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline PreviewGtmRecoveryPlanResponseBodyPreviewsPreview& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // switchInfos Field Functions 
    bool hasSwitchInfos() const { return this->switchInfos_ != nullptr;};
    void deleteSwitchInfos() { this->switchInfos_ = nullptr;};
    inline const Models::PreviewGtmRecoveryPlanResponseBodyPreviewsPreviewSwitchInfos & switchInfos() const { DARABONBA_PTR_GET_CONST(switchInfos_, Models::PreviewGtmRecoveryPlanResponseBodyPreviewsPreviewSwitchInfos) };
    inline Models::PreviewGtmRecoveryPlanResponseBodyPreviewsPreviewSwitchInfos switchInfos() { DARABONBA_PTR_GET(switchInfos_, Models::PreviewGtmRecoveryPlanResponseBodyPreviewsPreviewSwitchInfos) };
    inline PreviewGtmRecoveryPlanResponseBodyPreviewsPreview& setSwitchInfos(const Models::PreviewGtmRecoveryPlanResponseBodyPreviewsPreviewSwitchInfos & switchInfos) { DARABONBA_PTR_SET_VALUE(switchInfos_, switchInfos) };
    inline PreviewGtmRecoveryPlanResponseBodyPreviewsPreview& setSwitchInfos(Models::PreviewGtmRecoveryPlanResponseBodyPreviewsPreviewSwitchInfos && switchInfos) { DARABONBA_PTR_SET_RVALUE(switchInfos_, switchInfos) };


    // userDomainName Field Functions 
    bool hasUserDomainName() const { return this->userDomainName_ != nullptr;};
    void deleteUserDomainName() { this->userDomainName_ = nullptr;};
    inline string userDomainName() const { DARABONBA_PTR_GET_DEFAULT(userDomainName_, "") };
    inline PreviewGtmRecoveryPlanResponseBodyPreviewsPreview& setUserDomainName(string userDomainName) { DARABONBA_PTR_SET_VALUE(userDomainName_, userDomainName) };


  protected:
    // The ID of the GTM instance to which the previewed disaster recovery plan belongs.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The name of the GTM instance to which the previewed disaster recovery plan belongs.
    std::shared_ptr<string> name_ = nullptr;
    // The returned information of the switching policies for address pools.
    std::shared_ptr<Models::PreviewGtmRecoveryPlanResponseBodyPreviewsPreviewSwitchInfos> switchInfos_ = nullptr;
    // The user\\"s domain name or domain name list.
    std::shared_ptr<string> userDomainName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
