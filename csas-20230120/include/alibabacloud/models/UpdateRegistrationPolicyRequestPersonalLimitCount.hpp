// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEREGISTRATIONPOLICYREQUESTPERSONALLIMITCOUNT_HPP_
#define ALIBABACLOUD_MODELS_UPDATEREGISTRATIONPOLICYREQUESTPERSONALLIMITCOUNT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class UpdateRegistrationPolicyRequestPersonalLimitCount : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRegistrationPolicyRequestPersonalLimitCount& obj) { 
      DARABONBA_PTR_TO_JSON(All, all_);
      DARABONBA_PTR_TO_JSON(Mobile, mobile_);
      DARABONBA_PTR_TO_JSON(PC, PC_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRegistrationPolicyRequestPersonalLimitCount& obj) { 
      DARABONBA_PTR_FROM_JSON(All, all_);
      DARABONBA_PTR_FROM_JSON(Mobile, mobile_);
      DARABONBA_PTR_FROM_JSON(PC, PC_);
    };
    UpdateRegistrationPolicyRequestPersonalLimitCount() = default ;
    UpdateRegistrationPolicyRequestPersonalLimitCount(const UpdateRegistrationPolicyRequestPersonalLimitCount &) = default ;
    UpdateRegistrationPolicyRequestPersonalLimitCount(UpdateRegistrationPolicyRequestPersonalLimitCount &&) = default ;
    UpdateRegistrationPolicyRequestPersonalLimitCount(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRegistrationPolicyRequestPersonalLimitCount() = default ;
    UpdateRegistrationPolicyRequestPersonalLimitCount& operator=(const UpdateRegistrationPolicyRequestPersonalLimitCount &) = default ;
    UpdateRegistrationPolicyRequestPersonalLimitCount& operator=(UpdateRegistrationPolicyRequestPersonalLimitCount &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->all_ != nullptr
        && this->mobile_ != nullptr && this->PC_ != nullptr; };
    // all Field Functions 
    bool hasAll() const { return this->all_ != nullptr;};
    void deleteAll() { this->all_ = nullptr;};
    inline int32_t all() const { DARABONBA_PTR_GET_DEFAULT(all_, 0) };
    inline UpdateRegistrationPolicyRequestPersonalLimitCount& setAll(int32_t all) { DARABONBA_PTR_SET_VALUE(all_, all) };


    // mobile Field Functions 
    bool hasMobile() const { return this->mobile_ != nullptr;};
    void deleteMobile() { this->mobile_ = nullptr;};
    inline int32_t mobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, 0) };
    inline UpdateRegistrationPolicyRequestPersonalLimitCount& setMobile(int32_t mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


    // PC Field Functions 
    bool hasPC() const { return this->PC_ != nullptr;};
    void deletePC() { this->PC_ = nullptr;};
    inline int32_t PC() const { DARABONBA_PTR_GET_DEFAULT(PC_, 0) };
    inline UpdateRegistrationPolicyRequestPersonalLimitCount& setPC(int32_t PC) { DARABONBA_PTR_SET_VALUE(PC_, PC) };


  protected:
    std::shared_ptr<int32_t> all_ = nullptr;
    std::shared_ptr<int32_t> mobile_ = nullptr;
    std::shared_ptr<int32_t> PC_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
