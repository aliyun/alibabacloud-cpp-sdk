// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCERESPONSEBODYNODEERRORRECOVERY_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCERESPONSEBODYNODEERRORRECOVERY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDsw20220101
{
namespace Models
{
  class GetInstanceResponseBodyNodeErrorRecovery : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceResponseBodyNodeErrorRecovery& obj) { 
      DARABONBA_PTR_TO_JSON(autoSwitchCountdownSeconds, autoSwitchCountdownSeconds_);
      DARABONBA_PTR_TO_JSON(enableAutoSwitchOnNodeError, enableAutoSwitchOnNodeError_);
      DARABONBA_PTR_TO_JSON(hasNodeError, hasNodeError_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceResponseBodyNodeErrorRecovery& obj) { 
      DARABONBA_PTR_FROM_JSON(autoSwitchCountdownSeconds, autoSwitchCountdownSeconds_);
      DARABONBA_PTR_FROM_JSON(enableAutoSwitchOnNodeError, enableAutoSwitchOnNodeError_);
      DARABONBA_PTR_FROM_JSON(hasNodeError, hasNodeError_);
    };
    GetInstanceResponseBodyNodeErrorRecovery() = default ;
    GetInstanceResponseBodyNodeErrorRecovery(const GetInstanceResponseBodyNodeErrorRecovery &) = default ;
    GetInstanceResponseBodyNodeErrorRecovery(GetInstanceResponseBodyNodeErrorRecovery &&) = default ;
    GetInstanceResponseBodyNodeErrorRecovery(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceResponseBodyNodeErrorRecovery() = default ;
    GetInstanceResponseBodyNodeErrorRecovery& operator=(const GetInstanceResponseBodyNodeErrorRecovery &) = default ;
    GetInstanceResponseBodyNodeErrorRecovery& operator=(GetInstanceResponseBodyNodeErrorRecovery &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoSwitchCountdownSeconds_ != nullptr
        && this->enableAutoSwitchOnNodeError_ != nullptr && this->hasNodeError_ != nullptr; };
    // autoSwitchCountdownSeconds Field Functions 
    bool hasAutoSwitchCountdownSeconds() const { return this->autoSwitchCountdownSeconds_ != nullptr;};
    void deleteAutoSwitchCountdownSeconds() { this->autoSwitchCountdownSeconds_ = nullptr;};
    inline int64_t autoSwitchCountdownSeconds() const { DARABONBA_PTR_GET_DEFAULT(autoSwitchCountdownSeconds_, 0L) };
    inline GetInstanceResponseBodyNodeErrorRecovery& setAutoSwitchCountdownSeconds(int64_t autoSwitchCountdownSeconds) { DARABONBA_PTR_SET_VALUE(autoSwitchCountdownSeconds_, autoSwitchCountdownSeconds) };


    // enableAutoSwitchOnNodeError Field Functions 
    bool hasEnableAutoSwitchOnNodeError() const { return this->enableAutoSwitchOnNodeError_ != nullptr;};
    void deleteEnableAutoSwitchOnNodeError() { this->enableAutoSwitchOnNodeError_ = nullptr;};
    inline bool enableAutoSwitchOnNodeError() const { DARABONBA_PTR_GET_DEFAULT(enableAutoSwitchOnNodeError_, false) };
    inline GetInstanceResponseBodyNodeErrorRecovery& setEnableAutoSwitchOnNodeError(bool enableAutoSwitchOnNodeError) { DARABONBA_PTR_SET_VALUE(enableAutoSwitchOnNodeError_, enableAutoSwitchOnNodeError) };


    // hasNodeError Field Functions 
    bool hasHasNodeError() const { return this->hasNodeError_ != nullptr;};
    void deleteHasNodeError() { this->hasNodeError_ = nullptr;};
    inline bool hasNodeError() const { DARABONBA_PTR_GET_DEFAULT(hasNodeError_, false) };
    inline GetInstanceResponseBodyNodeErrorRecovery& setHasNodeError(bool hasNodeError) { DARABONBA_PTR_SET_VALUE(hasNodeError_, hasNodeError) };


  protected:
    // The number of seconds to wait before automatic switchover.
    std::shared_ptr<int64_t> autoSwitchCountdownSeconds_ = nullptr;
    // Indicates whether to enable automatic switchover when a node error occurs.
    std::shared_ptr<bool> enableAutoSwitchOnNodeError_ = nullptr;
    // Indicates whether the node has an error.
    std::shared_ptr<bool> hasNodeError_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDsw20220101
#endif
