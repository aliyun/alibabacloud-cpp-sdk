// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPOLICYREQUESTSENSITIVECONFIGLIST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPOLICYREQUESTSENSITIVECONFIGLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RAI20240701
{
namespace Models
{
  class CreatePolicyRequestSensitiveConfigList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePolicyRequestSensitiveConfigList& obj) { 
      DARABONBA_PTR_TO_JSON(ActionType, actionType_);
      DARABONBA_PTR_TO_JSON(IsEnabled, isEnabled_);
      DARABONBA_PTR_TO_JSON(SensitiveConfigId, sensitiveConfigId_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePolicyRequestSensitiveConfigList& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionType, actionType_);
      DARABONBA_PTR_FROM_JSON(IsEnabled, isEnabled_);
      DARABONBA_PTR_FROM_JSON(SensitiveConfigId, sensitiveConfigId_);
    };
    CreatePolicyRequestSensitiveConfigList() = default ;
    CreatePolicyRequestSensitiveConfigList(const CreatePolicyRequestSensitiveConfigList &) = default ;
    CreatePolicyRequestSensitiveConfigList(CreatePolicyRequestSensitiveConfigList &&) = default ;
    CreatePolicyRequestSensitiveConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePolicyRequestSensitiveConfigList() = default ;
    CreatePolicyRequestSensitiveConfigList& operator=(const CreatePolicyRequestSensitiveConfigList &) = default ;
    CreatePolicyRequestSensitiveConfigList& operator=(CreatePolicyRequestSensitiveConfigList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actionType_ == nullptr
        && return this->isEnabled_ == nullptr && return this->sensitiveConfigId_ == nullptr; };
    // actionType Field Functions 
    bool hasActionType() const { return this->actionType_ != nullptr;};
    void deleteActionType() { this->actionType_ = nullptr;};
    inline int32_t actionType() const { DARABONBA_PTR_GET_DEFAULT(actionType_, 0) };
    inline CreatePolicyRequestSensitiveConfigList& setActionType(int32_t actionType) { DARABONBA_PTR_SET_VALUE(actionType_, actionType) };


    // isEnabled Field Functions 
    bool hasIsEnabled() const { return this->isEnabled_ != nullptr;};
    void deleteIsEnabled() { this->isEnabled_ = nullptr;};
    inline int32_t isEnabled() const { DARABONBA_PTR_GET_DEFAULT(isEnabled_, 0) };
    inline CreatePolicyRequestSensitiveConfigList& setIsEnabled(int32_t isEnabled) { DARABONBA_PTR_SET_VALUE(isEnabled_, isEnabled) };


    // sensitiveConfigId Field Functions 
    bool hasSensitiveConfigId() const { return this->sensitiveConfigId_ != nullptr;};
    void deleteSensitiveConfigId() { this->sensitiveConfigId_ = nullptr;};
    inline int64_t sensitiveConfigId() const { DARABONBA_PTR_GET_DEFAULT(sensitiveConfigId_, 0L) };
    inline CreatePolicyRequestSensitiveConfigList& setSensitiveConfigId(int64_t sensitiveConfigId) { DARABONBA_PTR_SET_VALUE(sensitiveConfigId_, sensitiveConfigId) };


  protected:
    std::shared_ptr<int32_t> actionType_ = nullptr;
    std::shared_ptr<int32_t> isEnabled_ = nullptr;
    std::shared_ptr<int64_t> sensitiveConfigId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RAI20240701
#endif
