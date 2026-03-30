// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPASSKEYSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPASSKEYSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class ListPasskeysResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPasskeysResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Passkeys, passkeys_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListPasskeysResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Passkeys, passkeys_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListPasskeysResponseBody() = default ;
    ListPasskeysResponseBody(const ListPasskeysResponseBody &) = default ;
    ListPasskeysResponseBody(ListPasskeysResponseBody &&) = default ;
    ListPasskeysResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPasskeysResponseBody() = default ;
    ListPasskeysResponseBody& operator=(const ListPasskeysResponseBody &) = default ;
    ListPasskeysResponseBody& operator=(ListPasskeysResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Passkeys : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Passkeys& obj) { 
        DARABONBA_PTR_TO_JSON(CreateDate, createDate_);
        DARABONBA_PTR_TO_JSON(LastUseDate, lastUseDate_);
        DARABONBA_PTR_TO_JSON(PasskeyId, passkeyId_);
        DARABONBA_PTR_TO_JSON(PasskeyName, passkeyName_);
      };
      friend void from_json(const Darabonba::Json& j, Passkeys& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateDate, createDate_);
        DARABONBA_PTR_FROM_JSON(LastUseDate, lastUseDate_);
        DARABONBA_PTR_FROM_JSON(PasskeyId, passkeyId_);
        DARABONBA_PTR_FROM_JSON(PasskeyName, passkeyName_);
      };
      Passkeys() = default ;
      Passkeys(const Passkeys &) = default ;
      Passkeys(Passkeys &&) = default ;
      Passkeys(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Passkeys() = default ;
      Passkeys& operator=(const Passkeys &) = default ;
      Passkeys& operator=(Passkeys &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createDate_ == nullptr
        && this->lastUseDate_ == nullptr && this->passkeyId_ == nullptr && this->passkeyName_ == nullptr; };
      // createDate Field Functions 
      bool hasCreateDate() const { return this->createDate_ != nullptr;};
      void deleteCreateDate() { this->createDate_ = nullptr;};
      inline string getCreateDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
      inline Passkeys& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


      // lastUseDate Field Functions 
      bool hasLastUseDate() const { return this->lastUseDate_ != nullptr;};
      void deleteLastUseDate() { this->lastUseDate_ = nullptr;};
      inline string getLastUseDate() const { DARABONBA_PTR_GET_DEFAULT(lastUseDate_, "") };
      inline Passkeys& setLastUseDate(string lastUseDate) { DARABONBA_PTR_SET_VALUE(lastUseDate_, lastUseDate) };


      // passkeyId Field Functions 
      bool hasPasskeyId() const { return this->passkeyId_ != nullptr;};
      void deletePasskeyId() { this->passkeyId_ = nullptr;};
      inline string getPasskeyId() const { DARABONBA_PTR_GET_DEFAULT(passkeyId_, "") };
      inline Passkeys& setPasskeyId(string passkeyId) { DARABONBA_PTR_SET_VALUE(passkeyId_, passkeyId) };


      // passkeyName Field Functions 
      bool hasPasskeyName() const { return this->passkeyName_ != nullptr;};
      void deletePasskeyName() { this->passkeyName_ = nullptr;};
      inline string getPasskeyName() const { DARABONBA_PTR_GET_DEFAULT(passkeyName_, "") };
      inline Passkeys& setPasskeyName(string passkeyName) { DARABONBA_PTR_SET_VALUE(passkeyName_, passkeyName) };


    protected:
      // The time when the passkey was created. The value is a timestamp.
      shared_ptr<string> createDate_ {};
      // The time when the passkey was last used. The value is a timestamp.
      shared_ptr<string> lastUseDate_ {};
      // The ID of the passkey.
      shared_ptr<string> passkeyId_ {};
      // The name of the passkey.
      shared_ptr<string> passkeyName_ {};
    };

    virtual bool empty() const override { return this->passkeys_ == nullptr
        && this->requestId_ == nullptr; };
    // passkeys Field Functions 
    bool hasPasskeys() const { return this->passkeys_ != nullptr;};
    void deletePasskeys() { this->passkeys_ = nullptr;};
    inline const vector<ListPasskeysResponseBody::Passkeys> & getPasskeys() const { DARABONBA_PTR_GET_CONST(passkeys_, vector<ListPasskeysResponseBody::Passkeys>) };
    inline vector<ListPasskeysResponseBody::Passkeys> getPasskeys() { DARABONBA_PTR_GET(passkeys_, vector<ListPasskeysResponseBody::Passkeys>) };
    inline ListPasskeysResponseBody& setPasskeys(const vector<ListPasskeysResponseBody::Passkeys> & passkeys) { DARABONBA_PTR_SET_VALUE(passkeys_, passkeys) };
    inline ListPasskeysResponseBody& setPasskeys(vector<ListPasskeysResponseBody::Passkeys> && passkeys) { DARABONBA_PTR_SET_RVALUE(passkeys_, passkeys) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPasskeysResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the passkeys.
    shared_ptr<vector<ListPasskeysResponseBody::Passkeys>> passkeys_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
