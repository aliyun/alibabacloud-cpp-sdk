// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREGISTRATIONPOLICYRESPONSEBODYLIMITDETAIL_HPP_
#define ALIBABACLOUD_MODELS_GETREGISTRATIONPOLICYRESPONSEBODYLIMITDETAIL_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetRegistrationPolicyResponseBodyLimitDetailLimitCount.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class GetRegistrationPolicyResponseBodyLimitDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRegistrationPolicyResponseBodyLimitDetail& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceBelong, deviceBelong_);
      DARABONBA_PTR_TO_JSON(LimitCount, limitCount_);
      DARABONBA_PTR_TO_JSON(LimitType, limitType_);
    };
    friend void from_json(const Darabonba::Json& j, GetRegistrationPolicyResponseBodyLimitDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceBelong, deviceBelong_);
      DARABONBA_PTR_FROM_JSON(LimitCount, limitCount_);
      DARABONBA_PTR_FROM_JSON(LimitType, limitType_);
    };
    GetRegistrationPolicyResponseBodyLimitDetail() = default ;
    GetRegistrationPolicyResponseBodyLimitDetail(const GetRegistrationPolicyResponseBodyLimitDetail &) = default ;
    GetRegistrationPolicyResponseBodyLimitDetail(GetRegistrationPolicyResponseBodyLimitDetail &&) = default ;
    GetRegistrationPolicyResponseBodyLimitDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRegistrationPolicyResponseBodyLimitDetail() = default ;
    GetRegistrationPolicyResponseBodyLimitDetail& operator=(const GetRegistrationPolicyResponseBodyLimitDetail &) = default ;
    GetRegistrationPolicyResponseBodyLimitDetail& operator=(GetRegistrationPolicyResponseBodyLimitDetail &&) = default ;
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
    inline GetRegistrationPolicyResponseBodyLimitDetail& setDeviceBelong(string deviceBelong) { DARABONBA_PTR_SET_VALUE(deviceBelong_, deviceBelong) };


    // limitCount Field Functions 
    bool hasLimitCount() const { return this->limitCount_ != nullptr;};
    void deleteLimitCount() { this->limitCount_ = nullptr;};
    inline const Models::GetRegistrationPolicyResponseBodyLimitDetailLimitCount & limitCount() const { DARABONBA_PTR_GET_CONST(limitCount_, Models::GetRegistrationPolicyResponseBodyLimitDetailLimitCount) };
    inline Models::GetRegistrationPolicyResponseBodyLimitDetailLimitCount limitCount() { DARABONBA_PTR_GET(limitCount_, Models::GetRegistrationPolicyResponseBodyLimitDetailLimitCount) };
    inline GetRegistrationPolicyResponseBodyLimitDetail& setLimitCount(const Models::GetRegistrationPolicyResponseBodyLimitDetailLimitCount & limitCount) { DARABONBA_PTR_SET_VALUE(limitCount_, limitCount) };
    inline GetRegistrationPolicyResponseBodyLimitDetail& setLimitCount(Models::GetRegistrationPolicyResponseBodyLimitDetailLimitCount && limitCount) { DARABONBA_PTR_SET_RVALUE(limitCount_, limitCount) };


    // limitType Field Functions 
    bool hasLimitType() const { return this->limitType_ != nullptr;};
    void deleteLimitType() { this->limitType_ = nullptr;};
    inline string limitType() const { DARABONBA_PTR_GET_DEFAULT(limitType_, "") };
    inline GetRegistrationPolicyResponseBodyLimitDetail& setLimitType(string limitType) { DARABONBA_PTR_SET_VALUE(limitType_, limitType) };


  protected:
    std::shared_ptr<string> deviceBelong_ = nullptr;
    std::shared_ptr<Models::GetRegistrationPolicyResponseBodyLimitDetailLimitCount> limitCount_ = nullptr;
    std::shared_ptr<string> limitType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
