// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAPPINSTANCEGROUPATTRIBUTEREQUESTSECURITYPOLICY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAPPINSTANCEGROUPATTRIBUTEREQUESTSECURITYPOLICY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ModifyAppInstanceGroupAttributeRequestSecurityPolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAppInstanceGroupAttributeRequestSecurityPolicy& obj) { 
      DARABONBA_PTR_TO_JSON(ResetAfterUnbind, resetAfterUnbind_);
      DARABONBA_PTR_TO_JSON(SkipUserAuthCheck, skipUserAuthCheck_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAppInstanceGroupAttributeRequestSecurityPolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(ResetAfterUnbind, resetAfterUnbind_);
      DARABONBA_PTR_FROM_JSON(SkipUserAuthCheck, skipUserAuthCheck_);
    };
    ModifyAppInstanceGroupAttributeRequestSecurityPolicy() = default ;
    ModifyAppInstanceGroupAttributeRequestSecurityPolicy(const ModifyAppInstanceGroupAttributeRequestSecurityPolicy &) = default ;
    ModifyAppInstanceGroupAttributeRequestSecurityPolicy(ModifyAppInstanceGroupAttributeRequestSecurityPolicy &&) = default ;
    ModifyAppInstanceGroupAttributeRequestSecurityPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAppInstanceGroupAttributeRequestSecurityPolicy() = default ;
    ModifyAppInstanceGroupAttributeRequestSecurityPolicy& operator=(const ModifyAppInstanceGroupAttributeRequestSecurityPolicy &) = default ;
    ModifyAppInstanceGroupAttributeRequestSecurityPolicy& operator=(ModifyAppInstanceGroupAttributeRequestSecurityPolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resetAfterUnbind_ == nullptr
        && return this->skipUserAuthCheck_ == nullptr; };
    // resetAfterUnbind Field Functions 
    bool hasResetAfterUnbind() const { return this->resetAfterUnbind_ != nullptr;};
    void deleteResetAfterUnbind() { this->resetAfterUnbind_ = nullptr;};
    inline bool resetAfterUnbind() const { DARABONBA_PTR_GET_DEFAULT(resetAfterUnbind_, false) };
    inline ModifyAppInstanceGroupAttributeRequestSecurityPolicy& setResetAfterUnbind(bool resetAfterUnbind) { DARABONBA_PTR_SET_VALUE(resetAfterUnbind_, resetAfterUnbind) };


    // skipUserAuthCheck Field Functions 
    bool hasSkipUserAuthCheck() const { return this->skipUserAuthCheck_ != nullptr;};
    void deleteSkipUserAuthCheck() { this->skipUserAuthCheck_ = nullptr;};
    inline bool skipUserAuthCheck() const { DARABONBA_PTR_GET_DEFAULT(skipUserAuthCheck_, false) };
    inline ModifyAppInstanceGroupAttributeRequestSecurityPolicy& setSkipUserAuthCheck(bool skipUserAuthCheck) { DARABONBA_PTR_SET_VALUE(skipUserAuthCheck_, skipUserAuthCheck) };


  protected:
    // Specifies whether to reset after unbinding from a delivery group.
    // 
    // Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> resetAfterUnbind_ = nullptr;
    // Specifies whether to skip user permission verification.
    // 
    // Valid values:
    // 
    // *   true
    // *   false: This is the default value.
    std::shared_ptr<bool> skipUserAuthCheck_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
