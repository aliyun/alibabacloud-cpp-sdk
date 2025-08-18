// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPINSTANCEGROUPREQUESTSECURITYPOLICY_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPINSTANCEGROUPREQUESTSECURITYPOLICY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class CreateAppInstanceGroupRequestSecurityPolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAppInstanceGroupRequestSecurityPolicy& obj) { 
      DARABONBA_PTR_TO_JSON(ResetAfterUnbind, resetAfterUnbind_);
      DARABONBA_PTR_TO_JSON(SkipUserAuthCheck, skipUserAuthCheck_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAppInstanceGroupRequestSecurityPolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(ResetAfterUnbind, resetAfterUnbind_);
      DARABONBA_PTR_FROM_JSON(SkipUserAuthCheck, skipUserAuthCheck_);
    };
    CreateAppInstanceGroupRequestSecurityPolicy() = default ;
    CreateAppInstanceGroupRequestSecurityPolicy(const CreateAppInstanceGroupRequestSecurityPolicy &) = default ;
    CreateAppInstanceGroupRequestSecurityPolicy(CreateAppInstanceGroupRequestSecurityPolicy &&) = default ;
    CreateAppInstanceGroupRequestSecurityPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAppInstanceGroupRequestSecurityPolicy() = default ;
    CreateAppInstanceGroupRequestSecurityPolicy& operator=(const CreateAppInstanceGroupRequestSecurityPolicy &) = default ;
    CreateAppInstanceGroupRequestSecurityPolicy& operator=(CreateAppInstanceGroupRequestSecurityPolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->resetAfterUnbind_ != nullptr
        && this->skipUserAuthCheck_ != nullptr; };
    // resetAfterUnbind Field Functions 
    bool hasResetAfterUnbind() const { return this->resetAfterUnbind_ != nullptr;};
    void deleteResetAfterUnbind() { this->resetAfterUnbind_ = nullptr;};
    inline bool resetAfterUnbind() const { DARABONBA_PTR_GET_DEFAULT(resetAfterUnbind_, false) };
    inline CreateAppInstanceGroupRequestSecurityPolicy& setResetAfterUnbind(bool resetAfterUnbind) { DARABONBA_PTR_SET_VALUE(resetAfterUnbind_, resetAfterUnbind) };


    // skipUserAuthCheck Field Functions 
    bool hasSkipUserAuthCheck() const { return this->skipUserAuthCheck_ != nullptr;};
    void deleteSkipUserAuthCheck() { this->skipUserAuthCheck_ = nullptr;};
    inline bool skipUserAuthCheck() const { DARABONBA_PTR_GET_DEFAULT(skipUserAuthCheck_, false) };
    inline CreateAppInstanceGroupRequestSecurityPolicy& setSkipUserAuthCheck(bool skipUserAuthCheck) { DARABONBA_PTR_SET_VALUE(skipUserAuthCheck_, skipUserAuthCheck) };


  protected:
    std::shared_ptr<bool> resetAfterUnbind_ = nullptr;
    std::shared_ptr<bool> skipUserAuthCheck_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
