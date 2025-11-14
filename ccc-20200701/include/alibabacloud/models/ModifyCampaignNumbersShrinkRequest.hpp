// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCAMPAIGNNUMBERSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCAMPAIGNNUMBERSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ModifyCampaignNumbersShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCampaignNumbersShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CampaignId, campaignId_);
      DARABONBA_PTR_TO_JSON(InstGroupId, instGroupId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NumberList, numberListShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCampaignNumbersShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CampaignId, campaignId_);
      DARABONBA_PTR_FROM_JSON(InstGroupId, instGroupId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NumberList, numberListShrink_);
    };
    ModifyCampaignNumbersShrinkRequest() = default ;
    ModifyCampaignNumbersShrinkRequest(const ModifyCampaignNumbersShrinkRequest &) = default ;
    ModifyCampaignNumbersShrinkRequest(ModifyCampaignNumbersShrinkRequest &&) = default ;
    ModifyCampaignNumbersShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCampaignNumbersShrinkRequest() = default ;
    ModifyCampaignNumbersShrinkRequest& operator=(const ModifyCampaignNumbersShrinkRequest &) = default ;
    ModifyCampaignNumbersShrinkRequest& operator=(ModifyCampaignNumbersShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->campaignId_ == nullptr
        && return this->instGroupId_ == nullptr && return this->instanceId_ == nullptr && return this->numberListShrink_ == nullptr; };
    // campaignId Field Functions 
    bool hasCampaignId() const { return this->campaignId_ != nullptr;};
    void deleteCampaignId() { this->campaignId_ = nullptr;};
    inline string campaignId() const { DARABONBA_PTR_GET_DEFAULT(campaignId_, "") };
    inline ModifyCampaignNumbersShrinkRequest& setCampaignId(string campaignId) { DARABONBA_PTR_SET_VALUE(campaignId_, campaignId) };


    // instGroupId Field Functions 
    bool hasInstGroupId() const { return this->instGroupId_ != nullptr;};
    void deleteInstGroupId() { this->instGroupId_ = nullptr;};
    inline string instGroupId() const { DARABONBA_PTR_GET_DEFAULT(instGroupId_, "") };
    inline ModifyCampaignNumbersShrinkRequest& setInstGroupId(string instGroupId) { DARABONBA_PTR_SET_VALUE(instGroupId_, instGroupId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyCampaignNumbersShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // numberListShrink Field Functions 
    bool hasNumberListShrink() const { return this->numberListShrink_ != nullptr;};
    void deleteNumberListShrink() { this->numberListShrink_ = nullptr;};
    inline string numberListShrink() const { DARABONBA_PTR_GET_DEFAULT(numberListShrink_, "") };
    inline ModifyCampaignNumbersShrinkRequest& setNumberListShrink(string numberListShrink) { DARABONBA_PTR_SET_VALUE(numberListShrink_, numberListShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> campaignId_ = nullptr;
    std::shared_ptr<string> instGroupId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> numberListShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
