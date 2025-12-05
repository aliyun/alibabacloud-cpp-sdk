// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLIENTKEYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECLIENTKEYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class CreateClientKeyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateClientKeyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AapName, aapName_);
      DARABONBA_PTR_TO_JSON(NotAfter, notAfter_);
      DARABONBA_PTR_TO_JSON(NotBefore, notBefore_);
      DARABONBA_PTR_TO_JSON(Password, password_);
    };
    friend void from_json(const Darabonba::Json& j, CreateClientKeyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AapName, aapName_);
      DARABONBA_PTR_FROM_JSON(NotAfter, notAfter_);
      DARABONBA_PTR_FROM_JSON(NotBefore, notBefore_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
    };
    CreateClientKeyRequest() = default ;
    CreateClientKeyRequest(const CreateClientKeyRequest &) = default ;
    CreateClientKeyRequest(CreateClientKeyRequest &&) = default ;
    CreateClientKeyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateClientKeyRequest() = default ;
    CreateClientKeyRequest& operator=(const CreateClientKeyRequest &) = default ;
    CreateClientKeyRequest& operator=(CreateClientKeyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aapName_ == nullptr
        && return this->notAfter_ == nullptr && return this->notBefore_ == nullptr && return this->password_ == nullptr; };
    // aapName Field Functions 
    bool hasAapName() const { return this->aapName_ != nullptr;};
    void deleteAapName() { this->aapName_ = nullptr;};
    inline string aapName() const { DARABONBA_PTR_GET_DEFAULT(aapName_, "") };
    inline CreateClientKeyRequest& setAapName(string aapName) { DARABONBA_PTR_SET_VALUE(aapName_, aapName) };


    // notAfter Field Functions 
    bool hasNotAfter() const { return this->notAfter_ != nullptr;};
    void deleteNotAfter() { this->notAfter_ = nullptr;};
    inline string notAfter() const { DARABONBA_PTR_GET_DEFAULT(notAfter_, "") };
    inline CreateClientKeyRequest& setNotAfter(string notAfter) { DARABONBA_PTR_SET_VALUE(notAfter_, notAfter) };


    // notBefore Field Functions 
    bool hasNotBefore() const { return this->notBefore_ != nullptr;};
    void deleteNotBefore() { this->notBefore_ = nullptr;};
    inline string notBefore() const { DARABONBA_PTR_GET_DEFAULT(notBefore_, "") };
    inline CreateClientKeyRequest& setNotBefore(string notBefore) { DARABONBA_PTR_SET_VALUE(notBefore_, notBefore) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline CreateClientKeyRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


  protected:
    // The operation that you want to perform. Set the value to **CreateClientKey**.
    // 
    // This parameter is required.
    std::shared_ptr<string> aapName_ = nullptr;
    // The encryption password of the client key.
    // 
    // The password must be 8 to 64 characters in length and must contain at least two of the following types: digits, letters, and special characters. Special characters include `~ ! @ # $ % ^ & * ? _ -`.
    std::shared_ptr<string> notAfter_ = nullptr;
    // The end of the validity period of the client key.
    // 
    // Specify the time in the ISO 8601 standard. The time must be in UTC. The time must be in the yyyy-MM-ddTHH:mm:ssZ format.
    // 
    // > 
    // 
    // *   If you do not configure NotAfter, the default value is the time when the client key was created plus five years.
    // *   If you configure NotAfter, you must configure NotBefore.
    std::shared_ptr<string> notBefore_ = nullptr;
    // The name of the AAP.
    // 
    // This parameter is required.
    std::shared_ptr<string> password_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
