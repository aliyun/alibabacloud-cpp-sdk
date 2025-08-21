// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ECOLOGYOPENNESSSENDVERIFICATIONCODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ECOLOGYOPENNESSSENDVERIFICATIONCODEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class EcologyOpennessSendVerificationCodeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EcologyOpennessSendVerificationCodeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PhoneNumber, phoneNumber_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
    };
    friend void from_json(const Darabonba::Json& j, EcologyOpennessSendVerificationCodeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PhoneNumber, phoneNumber_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
    };
    EcologyOpennessSendVerificationCodeRequest() = default ;
    EcologyOpennessSendVerificationCodeRequest(const EcologyOpennessSendVerificationCodeRequest &) = default ;
    EcologyOpennessSendVerificationCodeRequest(EcologyOpennessSendVerificationCodeRequest &&) = default ;
    EcologyOpennessSendVerificationCodeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EcologyOpennessSendVerificationCodeRequest() = default ;
    EcologyOpennessSendVerificationCodeRequest& operator=(const EcologyOpennessSendVerificationCodeRequest &) = default ;
    EcologyOpennessSendVerificationCodeRequest& operator=(EcologyOpennessSendVerificationCodeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->phoneNumber_ != nullptr
        && this->region_ != nullptr && this->sessionId_ != nullptr; };
    // phoneNumber Field Functions 
    bool hasPhoneNumber() const { return this->phoneNumber_ != nullptr;};
    void deletePhoneNumber() { this->phoneNumber_ = nullptr;};
    inline string phoneNumber() const { DARABONBA_PTR_GET_DEFAULT(phoneNumber_, "") };
    inline EcologyOpennessSendVerificationCodeRequest& setPhoneNumber(string phoneNumber) { DARABONBA_PTR_SET_VALUE(phoneNumber_, phoneNumber) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline EcologyOpennessSendVerificationCodeRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline EcologyOpennessSendVerificationCodeRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> phoneNumber_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> region_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> sessionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
