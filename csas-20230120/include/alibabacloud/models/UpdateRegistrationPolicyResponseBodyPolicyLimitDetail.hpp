// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEREGISTRATIONPOLICYRESPONSEBODYPOLICYLIMITDETAIL_HPP_
#define ALIBABACLOUD_MODELS_UPDATEREGISTRATIONPOLICYRESPONSEBODYPOLICYLIMITDETAIL_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateRegistrationPolicyResponseBodyPolicyLimitDetailLimitCount.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class UpdateRegistrationPolicyResponseBodyPolicyLimitDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRegistrationPolicyResponseBodyPolicyLimitDetail& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceBelong, deviceBelong_);
      DARABONBA_PTR_TO_JSON(LimitCount, limitCount_);
      DARABONBA_PTR_TO_JSON(LimitType, limitType_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRegistrationPolicyResponseBodyPolicyLimitDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceBelong, deviceBelong_);
      DARABONBA_PTR_FROM_JSON(LimitCount, limitCount_);
      DARABONBA_PTR_FROM_JSON(LimitType, limitType_);
    };
    UpdateRegistrationPolicyResponseBodyPolicyLimitDetail() = default ;
    UpdateRegistrationPolicyResponseBodyPolicyLimitDetail(const UpdateRegistrationPolicyResponseBodyPolicyLimitDetail &) = default ;
    UpdateRegistrationPolicyResponseBodyPolicyLimitDetail(UpdateRegistrationPolicyResponseBodyPolicyLimitDetail &&) = default ;
    UpdateRegistrationPolicyResponseBodyPolicyLimitDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRegistrationPolicyResponseBodyPolicyLimitDetail() = default ;
    UpdateRegistrationPolicyResponseBodyPolicyLimitDetail& operator=(const UpdateRegistrationPolicyResponseBodyPolicyLimitDetail &) = default ;
    UpdateRegistrationPolicyResponseBodyPolicyLimitDetail& operator=(UpdateRegistrationPolicyResponseBodyPolicyLimitDetail &&) = default ;
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
    inline UpdateRegistrationPolicyResponseBodyPolicyLimitDetail& setDeviceBelong(string deviceBelong) { DARABONBA_PTR_SET_VALUE(deviceBelong_, deviceBelong) };


    // limitCount Field Functions 
    bool hasLimitCount() const { return this->limitCount_ != nullptr;};
    void deleteLimitCount() { this->limitCount_ = nullptr;};
    inline const Models::UpdateRegistrationPolicyResponseBodyPolicyLimitDetailLimitCount & limitCount() const { DARABONBA_PTR_GET_CONST(limitCount_, Models::UpdateRegistrationPolicyResponseBodyPolicyLimitDetailLimitCount) };
    inline Models::UpdateRegistrationPolicyResponseBodyPolicyLimitDetailLimitCount limitCount() { DARABONBA_PTR_GET(limitCount_, Models::UpdateRegistrationPolicyResponseBodyPolicyLimitDetailLimitCount) };
    inline UpdateRegistrationPolicyResponseBodyPolicyLimitDetail& setLimitCount(const Models::UpdateRegistrationPolicyResponseBodyPolicyLimitDetailLimitCount & limitCount) { DARABONBA_PTR_SET_VALUE(limitCount_, limitCount) };
    inline UpdateRegistrationPolicyResponseBodyPolicyLimitDetail& setLimitCount(Models::UpdateRegistrationPolicyResponseBodyPolicyLimitDetailLimitCount && limitCount) { DARABONBA_PTR_SET_RVALUE(limitCount_, limitCount) };


    // limitType Field Functions 
    bool hasLimitType() const { return this->limitType_ != nullptr;};
    void deleteLimitType() { this->limitType_ = nullptr;};
    inline string limitType() const { DARABONBA_PTR_GET_DEFAULT(limitType_, "") };
    inline UpdateRegistrationPolicyResponseBodyPolicyLimitDetail& setLimitType(string limitType) { DARABONBA_PTR_SET_VALUE(limitType_, limitType) };


  protected:
    std::shared_ptr<string> deviceBelong_ = nullptr;
    std::shared_ptr<Models::UpdateRegistrationPolicyResponseBodyPolicyLimitDetailLimitCount> limitCount_ = nullptr;
    std::shared_ptr<string> limitType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
