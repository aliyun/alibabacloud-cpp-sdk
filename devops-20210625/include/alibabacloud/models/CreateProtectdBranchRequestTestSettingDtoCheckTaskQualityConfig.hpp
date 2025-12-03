// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPROTECTDBRANCHREQUESTTESTSETTINGDTOCHECKTASKQUALITYCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATEPROTECTDBRANCHREQUESTTESTSETTINGDTOCHECKTASKQUALITYCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class CreateProtectdBranchRequestTestSettingDTOCheckTaskQualityConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateProtectdBranchRequestTestSettingDTOCheckTaskQualityConfig& obj) { 
      DARABONBA_PTR_TO_JSON(bizNo, bizNo_);
      DARABONBA_PTR_TO_JSON(enabled, enabled_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(taskName, taskName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateProtectdBranchRequestTestSettingDTOCheckTaskQualityConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(bizNo, bizNo_);
      DARABONBA_PTR_FROM_JSON(enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(taskName, taskName_);
    };
    CreateProtectdBranchRequestTestSettingDTOCheckTaskQualityConfig() = default ;
    CreateProtectdBranchRequestTestSettingDTOCheckTaskQualityConfig(const CreateProtectdBranchRequestTestSettingDTOCheckTaskQualityConfig &) = default ;
    CreateProtectdBranchRequestTestSettingDTOCheckTaskQualityConfig(CreateProtectdBranchRequestTestSettingDTOCheckTaskQualityConfig &&) = default ;
    CreateProtectdBranchRequestTestSettingDTOCheckTaskQualityConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateProtectdBranchRequestTestSettingDTOCheckTaskQualityConfig() = default ;
    CreateProtectdBranchRequestTestSettingDTOCheckTaskQualityConfig& operator=(const CreateProtectdBranchRequestTestSettingDTOCheckTaskQualityConfig &) = default ;
    CreateProtectdBranchRequestTestSettingDTOCheckTaskQualityConfig& operator=(CreateProtectdBranchRequestTestSettingDTOCheckTaskQualityConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizNo_ == nullptr
        && return this->enabled_ == nullptr && return this->message_ == nullptr && return this->taskName_ == nullptr; };
    // bizNo Field Functions 
    bool hasBizNo() const { return this->bizNo_ != nullptr;};
    void deleteBizNo() { this->bizNo_ = nullptr;};
    inline string bizNo() const { DARABONBA_PTR_GET_DEFAULT(bizNo_, "") };
    inline CreateProtectdBranchRequestTestSettingDTOCheckTaskQualityConfig& setBizNo(string bizNo) { DARABONBA_PTR_SET_VALUE(bizNo_, bizNo) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline CreateProtectdBranchRequestTestSettingDTOCheckTaskQualityConfig& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateProtectdBranchRequestTestSettingDTOCheckTaskQualityConfig& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline CreateProtectdBranchRequestTestSettingDTOCheckTaskQualityConfig& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


  protected:
    std::shared_ptr<string> bizNo_ = nullptr;
    std::shared_ptr<bool> enabled_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> taskName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
