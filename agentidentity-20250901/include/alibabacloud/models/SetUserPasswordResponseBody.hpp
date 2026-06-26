// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETUSERPASSWORDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SETUSERPASSWORDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentity20250901
{
namespace Models
{
  class SetUserPasswordResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetUserPasswordResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RandomPassword, randomPassword_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SetUserPasswordResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RandomPassword, randomPassword_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    SetUserPasswordResponseBody() = default ;
    SetUserPasswordResponseBody(const SetUserPasswordResponseBody &) = default ;
    SetUserPasswordResponseBody(SetUserPasswordResponseBody &&) = default ;
    SetUserPasswordResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetUserPasswordResponseBody() = default ;
    SetUserPasswordResponseBody& operator=(const SetUserPasswordResponseBody &) = default ;
    SetUserPasswordResponseBody& operator=(SetUserPasswordResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->randomPassword_ == nullptr
        && this->requestId_ == nullptr; };
    // randomPassword Field Functions 
    bool hasRandomPassword() const { return this->randomPassword_ != nullptr;};
    void deleteRandomPassword() { this->randomPassword_ = nullptr;};
    inline string getRandomPassword() const { DARABONBA_PTR_GET_DEFAULT(randomPassword_, "") };
    inline SetUserPasswordResponseBody& setRandomPassword(string randomPassword) { DARABONBA_PTR_SET_VALUE(randomPassword_, randomPassword) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SetUserPasswordResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> randomPassword_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentity20250901
#endif
