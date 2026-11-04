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
        && this->notAfter_ == nullptr && this->notBefore_ == nullptr && this->password_ == nullptr; };
    // aapName Field Functions 
    bool hasAapName() const { return this->aapName_ != nullptr;};
    void deleteAapName() { this->aapName_ = nullptr;};
    inline string getAapName() const { DARABONBA_PTR_GET_DEFAULT(aapName_, "") };
    inline CreateClientKeyRequest& setAapName(string aapName) { DARABONBA_PTR_SET_VALUE(aapName_, aapName) };


    // notAfter Field Functions 
    bool hasNotAfter() const { return this->notAfter_ != nullptr;};
    void deleteNotAfter() { this->notAfter_ = nullptr;};
    inline string getNotAfter() const { DARABONBA_PTR_GET_DEFAULT(notAfter_, "") };
    inline CreateClientKeyRequest& setNotAfter(string notAfter) { DARABONBA_PTR_SET_VALUE(notAfter_, notAfter) };


    // notBefore Field Functions 
    bool hasNotBefore() const { return this->notBefore_ != nullptr;};
    void deleteNotBefore() { this->notBefore_ = nullptr;};
    inline string getNotBefore() const { DARABONBA_PTR_GET_DEFAULT(notBefore_, "") };
    inline CreateClientKeyRequest& setNotBefore(string notBefore) { DARABONBA_PTR_SET_VALUE(notBefore_, notBefore) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline CreateClientKeyRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


  protected:
    // The name of the attached application access point (AAP).
    // 
    // This parameter is required.
    shared_ptr<string> aapName_ {};
    // The end time of the validity period of the ClientKey.
    // 
    // The time is specified in the ISO 8601 standard in the YYYY-MM-DDThh:mm:ssZ format. The time must be in UTC.
    //  >
    //  >- If you do not specify NotAfter, the default value is the creation time of the ClientKey plus 5 years.
    //  >- If you specify NotAfter, you must also specify NotBefore.
    shared_ptr<string> notAfter_ {};
    // The start time of the validity period of the ClientKey.
    // 
    // The time is specified in the ISO 8601 standard in the YYYY-MM-DDThh:mm:ssZ format. The time must be in UTC.
    //  >
    //  >- If you do not specify NotBefore, the default value is the creation time of the ClientKey.
    //  >- If you specify NotBefore, you must also specify NotAfter.
    shared_ptr<string> notBefore_ {};
    // The passphrase of the ClientKey.
    // 
    // The passphrase must be 8 to 64 characters in length and can contain digits, uppercase and lowercase letters, and special characters such as `~!@#$%^&*?_-`. It must contain at least two of these character types.
    // 
    // This parameter is required.
    shared_ptr<string> password_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
