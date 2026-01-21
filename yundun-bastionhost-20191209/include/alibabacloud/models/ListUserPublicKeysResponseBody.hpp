// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERPUBLICKEYSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERPUBLICKEYSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ListUserPublicKeysResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserPublicKeysResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PublicKeys, publicKeys_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserPublicKeysResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PublicKeys, publicKeys_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListUserPublicKeysResponseBody() = default ;
    ListUserPublicKeysResponseBody(const ListUserPublicKeysResponseBody &) = default ;
    ListUserPublicKeysResponseBody(ListUserPublicKeysResponseBody &&) = default ;
    ListUserPublicKeysResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserPublicKeysResponseBody() = default ;
    ListUserPublicKeysResponseBody& operator=(const ListUserPublicKeysResponseBody &) = default ;
    ListUserPublicKeysResponseBody& operator=(ListUserPublicKeysResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PublicKeys : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PublicKeys& obj) { 
        DARABONBA_PTR_TO_JSON(Comment, comment_);
        DARABONBA_PTR_TO_JSON(FingerPrint, fingerPrint_);
        DARABONBA_PTR_TO_JSON(PublicKeyId, publicKeyId_);
        DARABONBA_PTR_TO_JSON(PublicKeyName, publicKeyName_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, PublicKeys& obj) { 
        DARABONBA_PTR_FROM_JSON(Comment, comment_);
        DARABONBA_PTR_FROM_JSON(FingerPrint, fingerPrint_);
        DARABONBA_PTR_FROM_JSON(PublicKeyId, publicKeyId_);
        DARABONBA_PTR_FROM_JSON(PublicKeyName, publicKeyName_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
      };
      PublicKeys() = default ;
      PublicKeys(const PublicKeys &) = default ;
      PublicKeys(PublicKeys &&) = default ;
      PublicKeys(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PublicKeys() = default ;
      PublicKeys& operator=(const PublicKeys &) = default ;
      PublicKeys& operator=(PublicKeys &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->comment_ == nullptr
        && this->fingerPrint_ == nullptr && this->publicKeyId_ == nullptr && this->publicKeyName_ == nullptr && this->userId_ == nullptr; };
      // comment Field Functions 
      bool hasComment() const { return this->comment_ != nullptr;};
      void deleteComment() { this->comment_ = nullptr;};
      inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
      inline PublicKeys& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


      // fingerPrint Field Functions 
      bool hasFingerPrint() const { return this->fingerPrint_ != nullptr;};
      void deleteFingerPrint() { this->fingerPrint_ = nullptr;};
      inline string getFingerPrint() const { DARABONBA_PTR_GET_DEFAULT(fingerPrint_, "") };
      inline PublicKeys& setFingerPrint(string fingerPrint) { DARABONBA_PTR_SET_VALUE(fingerPrint_, fingerPrint) };


      // publicKeyId Field Functions 
      bool hasPublicKeyId() const { return this->publicKeyId_ != nullptr;};
      void deletePublicKeyId() { this->publicKeyId_ = nullptr;};
      inline string getPublicKeyId() const { DARABONBA_PTR_GET_DEFAULT(publicKeyId_, "") };
      inline PublicKeys& setPublicKeyId(string publicKeyId) { DARABONBA_PTR_SET_VALUE(publicKeyId_, publicKeyId) };


      // publicKeyName Field Functions 
      bool hasPublicKeyName() const { return this->publicKeyName_ != nullptr;};
      void deletePublicKeyName() { this->publicKeyName_ = nullptr;};
      inline string getPublicKeyName() const { DARABONBA_PTR_GET_DEFAULT(publicKeyName_, "") };
      inline PublicKeys& setPublicKeyName(string publicKeyName) { DARABONBA_PTR_SET_VALUE(publicKeyName_, publicKeyName) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline PublicKeys& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      // The description of the public key.
      shared_ptr<string> comment_ {};
      // The fingerprint of the public key.
      shared_ptr<string> fingerPrint_ {};
      // The ID of the public key.
      shared_ptr<string> publicKeyId_ {};
      // The name of the public key.
      shared_ptr<string> publicKeyName_ {};
      // The ID of the user to which the public key belongs.
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->publicKeys_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // publicKeys Field Functions 
    bool hasPublicKeys() const { return this->publicKeys_ != nullptr;};
    void deletePublicKeys() { this->publicKeys_ = nullptr;};
    inline const vector<ListUserPublicKeysResponseBody::PublicKeys> & getPublicKeys() const { DARABONBA_PTR_GET_CONST(publicKeys_, vector<ListUserPublicKeysResponseBody::PublicKeys>) };
    inline vector<ListUserPublicKeysResponseBody::PublicKeys> getPublicKeys() { DARABONBA_PTR_GET(publicKeys_, vector<ListUserPublicKeysResponseBody::PublicKeys>) };
    inline ListUserPublicKeysResponseBody& setPublicKeys(const vector<ListUserPublicKeysResponseBody::PublicKeys> & publicKeys) { DARABONBA_PTR_SET_VALUE(publicKeys_, publicKeys) };
    inline ListUserPublicKeysResponseBody& setPublicKeys(vector<ListUserPublicKeysResponseBody::PublicKeys> && publicKeys) { DARABONBA_PTR_SET_RVALUE(publicKeys_, publicKeys) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListUserPublicKeysResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListUserPublicKeysResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // An array that consists of the public keys of the user.
    shared_ptr<vector<ListUserPublicKeysResponseBody::PublicKeys>> publicKeys_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The total number of public keys.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
