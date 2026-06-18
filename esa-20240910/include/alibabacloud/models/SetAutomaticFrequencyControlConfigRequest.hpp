// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETAUTOMATICFREQUENCYCONTROLCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETAUTOMATICFREQUENCYCONTROLCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class SetAutomaticFrequencyControlConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetAutomaticFrequencyControlConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ActionType, actionType_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(SiteVersion, siteVersion_);
    };
    friend void from_json(const Darabonba::Json& j, SetAutomaticFrequencyControlConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionType, actionType_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(SiteVersion, siteVersion_);
    };
    SetAutomaticFrequencyControlConfigRequest() = default ;
    SetAutomaticFrequencyControlConfigRequest(const SetAutomaticFrequencyControlConfigRequest &) = default ;
    SetAutomaticFrequencyControlConfigRequest(SetAutomaticFrequencyControlConfigRequest &&) = default ;
    SetAutomaticFrequencyControlConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetAutomaticFrequencyControlConfigRequest() = default ;
    SetAutomaticFrequencyControlConfigRequest& operator=(const SetAutomaticFrequencyControlConfigRequest &) = default ;
    SetAutomaticFrequencyControlConfigRequest& operator=(SetAutomaticFrequencyControlConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actionType_ == nullptr
        && this->enable_ == nullptr && this->level_ == nullptr && this->siteId_ == nullptr && this->siteVersion_ == nullptr; };
    // actionType Field Functions 
    bool hasActionType() const { return this->actionType_ != nullptr;};
    void deleteActionType() { this->actionType_ = nullptr;};
    inline string getActionType() const { DARABONBA_PTR_GET_DEFAULT(actionType_, "") };
    inline SetAutomaticFrequencyControlConfigRequest& setActionType(string actionType) { DARABONBA_PTR_SET_VALUE(actionType_, actionType) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline string getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, "") };
    inline SetAutomaticFrequencyControlConfigRequest& setEnable(string enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline SetAutomaticFrequencyControlConfigRequest& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline SetAutomaticFrequencyControlConfigRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // siteVersion Field Functions 
    bool hasSiteVersion() const { return this->siteVersion_ != nullptr;};
    void deleteSiteVersion() { this->siteVersion_ = nullptr;};
    inline int32_t getSiteVersion() const { DARABONBA_PTR_GET_DEFAULT(siteVersion_, 0) };
    inline SetAutomaticFrequencyControlConfigRequest& setSiteVersion(int32_t siteVersion) { DARABONBA_PTR_SET_VALUE(siteVersion_, siteVersion) };


  protected:
    // The action to take on requests that trigger the control. Valid values:
    // 
    // - **observe**: Monitors the requests.
    // 
    // - **deny**: Blocks the requests.
    // 
    // - **js**: Issues a JS challenge.
    // 
    // This parameter is required.
    shared_ptr<string> actionType_ {};
    // Specifies whether to enable automatic frequency control. Valid values:
    // 
    // - **on**: Enables automatic frequency control.
    // 
    // - **off**: Disables automatic frequency control.
    // 
    // This parameter is required.
    shared_ptr<string> enable_ {};
    // The protection level. Valid values:
    // 
    // - **loose**: Loose protection.
    // 
    // - **normal**: Normal protection.
    // 
    // - **strict**: Strict protection.
    // 
    // This parameter is required.
    shared_ptr<string> level_ {};
    // The ID of the site. Call the [ListSites](https://help.aliyun.com/document_detail/2850189.html) operation to obtain this ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> siteId_ {};
    // The version of the site. For a site with version management enabled, this parameter specifies the version to which the configuration applies. The default value is 0.
    shared_ptr<int32_t> siteVersion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
