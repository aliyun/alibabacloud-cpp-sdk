// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEREGISTRATIONPOLICYRESPONSEBODYPOLICYLIMITDETAIL_HPP_
#define ALIBABACLOUD_MODELS_CREATEREGISTRATIONPOLICYRESPONSEBODYPOLICYLIMITDETAIL_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateRegistrationPolicyResponseBodyPolicyLimitDetailLimitCount.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class CreateRegistrationPolicyResponseBodyPolicyLimitDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRegistrationPolicyResponseBodyPolicyLimitDetail& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceBelong, deviceBelong_);
      DARABONBA_PTR_TO_JSON(LimitCount, limitCount_);
      DARABONBA_PTR_TO_JSON(LimitType, limitType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRegistrationPolicyResponseBodyPolicyLimitDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceBelong, deviceBelong_);
      DARABONBA_PTR_FROM_JSON(LimitCount, limitCount_);
      DARABONBA_PTR_FROM_JSON(LimitType, limitType_);
    };
    CreateRegistrationPolicyResponseBodyPolicyLimitDetail() = default ;
    CreateRegistrationPolicyResponseBodyPolicyLimitDetail(const CreateRegistrationPolicyResponseBodyPolicyLimitDetail &) = default ;
    CreateRegistrationPolicyResponseBodyPolicyLimitDetail(CreateRegistrationPolicyResponseBodyPolicyLimitDetail &&) = default ;
    CreateRegistrationPolicyResponseBodyPolicyLimitDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRegistrationPolicyResponseBodyPolicyLimitDetail() = default ;
    CreateRegistrationPolicyResponseBodyPolicyLimitDetail& operator=(const CreateRegistrationPolicyResponseBodyPolicyLimitDetail &) = default ;
    CreateRegistrationPolicyResponseBodyPolicyLimitDetail& operator=(CreateRegistrationPolicyResponseBodyPolicyLimitDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deviceBelong_ != nullptr
        && this->limitCount_ != nullptr && this->limitType_ != nullptr; };
    // deviceBelong Field Functions 
    bool hasDeviceBelong() const { return this->deviceBelong_ != nullptr;};
    void deleteDeviceBelong() { this->deviceBelong_ = nullptr;};
    inline string deviceBelong() const { DARABONBA_PTR_GET_DEFAULT(deviceBelong_, "") };
    inline CreateRegistrationPolicyResponseBodyPolicyLimitDetail& setDeviceBelong(string deviceBelong) { DARABONBA_PTR_SET_VALUE(deviceBelong_, deviceBelong) };


    // limitCount Field Functions 
    bool hasLimitCount() const { return this->limitCount_ != nullptr;};
    void deleteLimitCount() { this->limitCount_ = nullptr;};
    inline const Models::CreateRegistrationPolicyResponseBodyPolicyLimitDetailLimitCount & limitCount() const { DARABONBA_PTR_GET_CONST(limitCount_, Models::CreateRegistrationPolicyResponseBodyPolicyLimitDetailLimitCount) };
    inline Models::CreateRegistrationPolicyResponseBodyPolicyLimitDetailLimitCount limitCount() { DARABONBA_PTR_GET(limitCount_, Models::CreateRegistrationPolicyResponseBodyPolicyLimitDetailLimitCount) };
    inline CreateRegistrationPolicyResponseBodyPolicyLimitDetail& setLimitCount(const Models::CreateRegistrationPolicyResponseBodyPolicyLimitDetailLimitCount & limitCount) { DARABONBA_PTR_SET_VALUE(limitCount_, limitCount) };
    inline CreateRegistrationPolicyResponseBodyPolicyLimitDetail& setLimitCount(Models::CreateRegistrationPolicyResponseBodyPolicyLimitDetailLimitCount && limitCount) { DARABONBA_PTR_SET_RVALUE(limitCount_, limitCount) };


    // limitType Field Functions 
    bool hasLimitType() const { return this->limitType_ != nullptr;};
    void deleteLimitType() { this->limitType_ = nullptr;};
    inline string limitType() const { DARABONBA_PTR_GET_DEFAULT(limitType_, "") };
    inline CreateRegistrationPolicyResponseBodyPolicyLimitDetail& setLimitType(string limitType) { DARABONBA_PTR_SET_VALUE(limitType_, limitType) };


  protected:
    std::shared_ptr<string> deviceBelong_ = nullptr;
    std::shared_ptr<Models::CreateRegistrationPolicyResponseBodyPolicyLimitDetailLimitCount> limitCount_ = nullptr;
    std::shared_ptr<string> limitType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
