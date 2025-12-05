// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERPUBLICKEYSRESPONSEBODYPUBLICKEYS_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERPUBLICKEYSRESPONSEBODYPUBLICKEYS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ListUserPublicKeysResponseBodyPublicKeys : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserPublicKeysResponseBodyPublicKeys& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(FingerPrint, fingerPrint_);
      DARABONBA_PTR_TO_JSON(PublicKeyId, publicKeyId_);
      DARABONBA_PTR_TO_JSON(PublicKeyName, publicKeyName_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserPublicKeysResponseBodyPublicKeys& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(FingerPrint, fingerPrint_);
      DARABONBA_PTR_FROM_JSON(PublicKeyId, publicKeyId_);
      DARABONBA_PTR_FROM_JSON(PublicKeyName, publicKeyName_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    ListUserPublicKeysResponseBodyPublicKeys() = default ;
    ListUserPublicKeysResponseBodyPublicKeys(const ListUserPublicKeysResponseBodyPublicKeys &) = default ;
    ListUserPublicKeysResponseBodyPublicKeys(ListUserPublicKeysResponseBodyPublicKeys &&) = default ;
    ListUserPublicKeysResponseBodyPublicKeys(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserPublicKeysResponseBodyPublicKeys() = default ;
    ListUserPublicKeysResponseBodyPublicKeys& operator=(const ListUserPublicKeysResponseBodyPublicKeys &) = default ;
    ListUserPublicKeysResponseBodyPublicKeys& operator=(ListUserPublicKeysResponseBodyPublicKeys &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->comment_ == nullptr
        && return this->fingerPrint_ == nullptr && return this->publicKeyId_ == nullptr && return this->publicKeyName_ == nullptr && return this->userId_ == nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline ListUserPublicKeysResponseBodyPublicKeys& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // fingerPrint Field Functions 
    bool hasFingerPrint() const { return this->fingerPrint_ != nullptr;};
    void deleteFingerPrint() { this->fingerPrint_ = nullptr;};
    inline string fingerPrint() const { DARABONBA_PTR_GET_DEFAULT(fingerPrint_, "") };
    inline ListUserPublicKeysResponseBodyPublicKeys& setFingerPrint(string fingerPrint) { DARABONBA_PTR_SET_VALUE(fingerPrint_, fingerPrint) };


    // publicKeyId Field Functions 
    bool hasPublicKeyId() const { return this->publicKeyId_ != nullptr;};
    void deletePublicKeyId() { this->publicKeyId_ = nullptr;};
    inline string publicKeyId() const { DARABONBA_PTR_GET_DEFAULT(publicKeyId_, "") };
    inline ListUserPublicKeysResponseBodyPublicKeys& setPublicKeyId(string publicKeyId) { DARABONBA_PTR_SET_VALUE(publicKeyId_, publicKeyId) };


    // publicKeyName Field Functions 
    bool hasPublicKeyName() const { return this->publicKeyName_ != nullptr;};
    void deletePublicKeyName() { this->publicKeyName_ = nullptr;};
    inline string publicKeyName() const { DARABONBA_PTR_GET_DEFAULT(publicKeyName_, "") };
    inline ListUserPublicKeysResponseBodyPublicKeys& setPublicKeyName(string publicKeyName) { DARABONBA_PTR_SET_VALUE(publicKeyName_, publicKeyName) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ListUserPublicKeysResponseBodyPublicKeys& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The description of the public key.
    std::shared_ptr<string> comment_ = nullptr;
    // The fingerprint of the public key.
    std::shared_ptr<string> fingerPrint_ = nullptr;
    // The ID of the public key.
    std::shared_ptr<string> publicKeyId_ = nullptr;
    // The name of the public key.
    std::shared_ptr<string> publicKeyName_ = nullptr;
    // The ID of the user to which the public key belongs.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
