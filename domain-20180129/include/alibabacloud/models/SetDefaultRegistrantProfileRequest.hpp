// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETDEFAULTREGISTRANTPROFILEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETDEFAULTREGISTRANTPROFILEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class SetDefaultRegistrantProfileRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetDefaultRegistrantProfileRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegistrantProfileId, registrantProfileId_);
      DARABONBA_PTR_TO_JSON(UserClientIp, userClientIp_);
    };
    friend void from_json(const Darabonba::Json& j, SetDefaultRegistrantProfileRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegistrantProfileId, registrantProfileId_);
      DARABONBA_PTR_FROM_JSON(UserClientIp, userClientIp_);
    };
    SetDefaultRegistrantProfileRequest() = default ;
    SetDefaultRegistrantProfileRequest(const SetDefaultRegistrantProfileRequest &) = default ;
    SetDefaultRegistrantProfileRequest(SetDefaultRegistrantProfileRequest &&) = default ;
    SetDefaultRegistrantProfileRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetDefaultRegistrantProfileRequest() = default ;
    SetDefaultRegistrantProfileRequest& operator=(const SetDefaultRegistrantProfileRequest &) = default ;
    SetDefaultRegistrantProfileRequest& operator=(SetDefaultRegistrantProfileRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->registrantProfileId_ == nullptr
        && return this->userClientIp_ == nullptr; };
    // registrantProfileId Field Functions 
    bool hasRegistrantProfileId() const { return this->registrantProfileId_ != nullptr;};
    void deleteRegistrantProfileId() { this->registrantProfileId_ = nullptr;};
    inline int64_t registrantProfileId() const { DARABONBA_PTR_GET_DEFAULT(registrantProfileId_, 0L) };
    inline SetDefaultRegistrantProfileRequest& setRegistrantProfileId(int64_t registrantProfileId) { DARABONBA_PTR_SET_VALUE(registrantProfileId_, registrantProfileId) };


    // userClientIp Field Functions 
    bool hasUserClientIp() const { return this->userClientIp_ != nullptr;};
    void deleteUserClientIp() { this->userClientIp_ = nullptr;};
    inline string userClientIp() const { DARABONBA_PTR_GET_DEFAULT(userClientIp_, "") };
    inline SetDefaultRegistrantProfileRequest& setUserClientIp(string userClientIp) { DARABONBA_PTR_SET_VALUE(userClientIp_, userClientIp) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> registrantProfileId_ = nullptr;
    std::shared_ptr<string> userClientIp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
