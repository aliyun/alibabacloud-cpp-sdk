// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREGISTRATIONPOLICIESRESPONSEBODYPOLICIESLIMITDETAIL_HPP_
#define ALIBABACLOUD_MODELS_LISTREGISTRATIONPOLICIESRESPONSEBODYPOLICIESLIMITDETAIL_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListRegistrationPoliciesResponseBodyPoliciesLimitDetailLimitCount.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListRegistrationPoliciesResponseBodyPoliciesLimitDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRegistrationPoliciesResponseBodyPoliciesLimitDetail& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceBelong, deviceBelong_);
      DARABONBA_PTR_TO_JSON(LimitCount, limitCount_);
      DARABONBA_PTR_TO_JSON(LimitType, limitType_);
    };
    friend void from_json(const Darabonba::Json& j, ListRegistrationPoliciesResponseBodyPoliciesLimitDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceBelong, deviceBelong_);
      DARABONBA_PTR_FROM_JSON(LimitCount, limitCount_);
      DARABONBA_PTR_FROM_JSON(LimitType, limitType_);
    };
    ListRegistrationPoliciesResponseBodyPoliciesLimitDetail() = default ;
    ListRegistrationPoliciesResponseBodyPoliciesLimitDetail(const ListRegistrationPoliciesResponseBodyPoliciesLimitDetail &) = default ;
    ListRegistrationPoliciesResponseBodyPoliciesLimitDetail(ListRegistrationPoliciesResponseBodyPoliciesLimitDetail &&) = default ;
    ListRegistrationPoliciesResponseBodyPoliciesLimitDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRegistrationPoliciesResponseBodyPoliciesLimitDetail() = default ;
    ListRegistrationPoliciesResponseBodyPoliciesLimitDetail& operator=(const ListRegistrationPoliciesResponseBodyPoliciesLimitDetail &) = default ;
    ListRegistrationPoliciesResponseBodyPoliciesLimitDetail& operator=(ListRegistrationPoliciesResponseBodyPoliciesLimitDetail &&) = default ;
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
    inline ListRegistrationPoliciesResponseBodyPoliciesLimitDetail& setDeviceBelong(string deviceBelong) { DARABONBA_PTR_SET_VALUE(deviceBelong_, deviceBelong) };


    // limitCount Field Functions 
    bool hasLimitCount() const { return this->limitCount_ != nullptr;};
    void deleteLimitCount() { this->limitCount_ = nullptr;};
    inline const Models::ListRegistrationPoliciesResponseBodyPoliciesLimitDetailLimitCount & limitCount() const { DARABONBA_PTR_GET_CONST(limitCount_, Models::ListRegistrationPoliciesResponseBodyPoliciesLimitDetailLimitCount) };
    inline Models::ListRegistrationPoliciesResponseBodyPoliciesLimitDetailLimitCount limitCount() { DARABONBA_PTR_GET(limitCount_, Models::ListRegistrationPoliciesResponseBodyPoliciesLimitDetailLimitCount) };
    inline ListRegistrationPoliciesResponseBodyPoliciesLimitDetail& setLimitCount(const Models::ListRegistrationPoliciesResponseBodyPoliciesLimitDetailLimitCount & limitCount) { DARABONBA_PTR_SET_VALUE(limitCount_, limitCount) };
    inline ListRegistrationPoliciesResponseBodyPoliciesLimitDetail& setLimitCount(Models::ListRegistrationPoliciesResponseBodyPoliciesLimitDetailLimitCount && limitCount) { DARABONBA_PTR_SET_RVALUE(limitCount_, limitCount) };


    // limitType Field Functions 
    bool hasLimitType() const { return this->limitType_ != nullptr;};
    void deleteLimitType() { this->limitType_ = nullptr;};
    inline string limitType() const { DARABONBA_PTR_GET_DEFAULT(limitType_, "") };
    inline ListRegistrationPoliciesResponseBodyPoliciesLimitDetail& setLimitType(string limitType) { DARABONBA_PTR_SET_VALUE(limitType_, limitType) };


  protected:
    std::shared_ptr<string> deviceBelong_ = nullptr;
    std::shared_ptr<Models::ListRegistrationPoliciesResponseBodyPoliciesLimitDetailLimitCount> limitCount_ = nullptr;
    std::shared_ptr<string> limitType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
