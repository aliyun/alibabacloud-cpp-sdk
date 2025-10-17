// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENCRYPTPASSWORDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ENCRYPTPASSWORDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20201002
{
namespace Models
{
  class EncryptPasswordResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EncryptPasswordResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EncryptedPassword, encryptedPassword_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, EncryptPasswordResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EncryptedPassword, encryptedPassword_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    EncryptPasswordResponseBody() = default ;
    EncryptPasswordResponseBody(const EncryptPasswordResponseBody &) = default ;
    EncryptPasswordResponseBody(EncryptPasswordResponseBody &&) = default ;
    EncryptPasswordResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EncryptPasswordResponseBody() = default ;
    EncryptPasswordResponseBody& operator=(const EncryptPasswordResponseBody &) = default ;
    EncryptPasswordResponseBody& operator=(EncryptPasswordResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->encryptedPassword_ == nullptr
        && return this->requestId_ == nullptr; };
    // encryptedPassword Field Functions 
    bool hasEncryptedPassword() const { return this->encryptedPassword_ != nullptr;};
    void deleteEncryptedPassword() { this->encryptedPassword_ = nullptr;};
    inline string encryptedPassword() const { DARABONBA_PTR_GET_DEFAULT(encryptedPassword_, "") };
    inline EncryptPasswordResponseBody& setEncryptedPassword(string encryptedPassword) { DARABONBA_PTR_SET_VALUE(encryptedPassword_, encryptedPassword) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline EncryptPasswordResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The encrypted password.
    std::shared_ptr<string> encryptedPassword_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20201002
#endif
