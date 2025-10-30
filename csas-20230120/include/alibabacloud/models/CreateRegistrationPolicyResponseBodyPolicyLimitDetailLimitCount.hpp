// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEREGISTRATIONPOLICYRESPONSEBODYPOLICYLIMITDETAILLIMITCOUNT_HPP_
#define ALIBABACLOUD_MODELS_CREATEREGISTRATIONPOLICYRESPONSEBODYPOLICYLIMITDETAILLIMITCOUNT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class CreateRegistrationPolicyResponseBodyPolicyLimitDetailLimitCount : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRegistrationPolicyResponseBodyPolicyLimitDetailLimitCount& obj) { 
      DARABONBA_PTR_TO_JSON(All, all_);
      DARABONBA_PTR_TO_JSON(Mobile, mobile_);
      DARABONBA_PTR_TO_JSON(PC, PC_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRegistrationPolicyResponseBodyPolicyLimitDetailLimitCount& obj) { 
      DARABONBA_PTR_FROM_JSON(All, all_);
      DARABONBA_PTR_FROM_JSON(Mobile, mobile_);
      DARABONBA_PTR_FROM_JSON(PC, PC_);
    };
    CreateRegistrationPolicyResponseBodyPolicyLimitDetailLimitCount() = default ;
    CreateRegistrationPolicyResponseBodyPolicyLimitDetailLimitCount(const CreateRegistrationPolicyResponseBodyPolicyLimitDetailLimitCount &) = default ;
    CreateRegistrationPolicyResponseBodyPolicyLimitDetailLimitCount(CreateRegistrationPolicyResponseBodyPolicyLimitDetailLimitCount &&) = default ;
    CreateRegistrationPolicyResponseBodyPolicyLimitDetailLimitCount(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRegistrationPolicyResponseBodyPolicyLimitDetailLimitCount() = default ;
    CreateRegistrationPolicyResponseBodyPolicyLimitDetailLimitCount& operator=(const CreateRegistrationPolicyResponseBodyPolicyLimitDetailLimitCount &) = default ;
    CreateRegistrationPolicyResponseBodyPolicyLimitDetailLimitCount& operator=(CreateRegistrationPolicyResponseBodyPolicyLimitDetailLimitCount &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->all_ == nullptr
        && return this->mobile_ == nullptr && return this->PC_ == nullptr; };
    // all Field Functions 
    bool hasAll() const { return this->all_ != nullptr;};
    void deleteAll() { this->all_ = nullptr;};
    inline int32_t all() const { DARABONBA_PTR_GET_DEFAULT(all_, 0) };
    inline CreateRegistrationPolicyResponseBodyPolicyLimitDetailLimitCount& setAll(int32_t all) { DARABONBA_PTR_SET_VALUE(all_, all) };


    // mobile Field Functions 
    bool hasMobile() const { return this->mobile_ != nullptr;};
    void deleteMobile() { this->mobile_ = nullptr;};
    inline int32_t mobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, 0) };
    inline CreateRegistrationPolicyResponseBodyPolicyLimitDetailLimitCount& setMobile(int32_t mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


    // PC Field Functions 
    bool hasPC() const { return this->PC_ != nullptr;};
    void deletePC() { this->PC_ = nullptr;};
    inline int32_t PC() const { DARABONBA_PTR_GET_DEFAULT(PC_, 0) };
    inline CreateRegistrationPolicyResponseBodyPolicyLimitDetailLimitCount& setPC(int32_t PC) { DARABONBA_PTR_SET_VALUE(PC_, PC) };


  protected:
    std::shared_ptr<int32_t> all_ = nullptr;
    std::shared_ptr<int32_t> mobile_ = nullptr;
    std::shared_ptr<int32_t> PC_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
