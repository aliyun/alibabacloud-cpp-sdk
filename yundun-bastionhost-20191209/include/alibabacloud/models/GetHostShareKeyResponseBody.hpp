// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHOSTSHAREKEYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETHOSTSHAREKEYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class GetHostShareKeyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHostShareKeyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(HostShareKey, hostShareKey_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetHostShareKeyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(HostShareKey, hostShareKey_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetHostShareKeyResponseBody() = default ;
    GetHostShareKeyResponseBody(const GetHostShareKeyResponseBody &) = default ;
    GetHostShareKeyResponseBody(GetHostShareKeyResponseBody &&) = default ;
    GetHostShareKeyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHostShareKeyResponseBody() = default ;
    GetHostShareKeyResponseBody& operator=(const GetHostShareKeyResponseBody &) = default ;
    GetHostShareKeyResponseBody& operator=(GetHostShareKeyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class HostShareKey : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const HostShareKey& obj) { 
        DARABONBA_PTR_TO_JSON(HostShareKeyId, hostShareKeyId_);
        DARABONBA_PTR_TO_JSON(HostShareKeyName, hostShareKeyName_);
        DARABONBA_PTR_TO_JSON(LastModifyKeyAt, lastModifyKeyAt_);
        DARABONBA_PTR_TO_JSON(PrivateKeyFingerPrint, privateKeyFingerPrint_);
      };
      friend void from_json(const Darabonba::Json& j, HostShareKey& obj) { 
        DARABONBA_PTR_FROM_JSON(HostShareKeyId, hostShareKeyId_);
        DARABONBA_PTR_FROM_JSON(HostShareKeyName, hostShareKeyName_);
        DARABONBA_PTR_FROM_JSON(LastModifyKeyAt, lastModifyKeyAt_);
        DARABONBA_PTR_FROM_JSON(PrivateKeyFingerPrint, privateKeyFingerPrint_);
      };
      HostShareKey() = default ;
      HostShareKey(const HostShareKey &) = default ;
      HostShareKey(HostShareKey &&) = default ;
      HostShareKey(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~HostShareKey() = default ;
      HostShareKey& operator=(const HostShareKey &) = default ;
      HostShareKey& operator=(HostShareKey &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->hostShareKeyId_ == nullptr
        && this->hostShareKeyName_ == nullptr && this->lastModifyKeyAt_ == nullptr && this->privateKeyFingerPrint_ == nullptr; };
      // hostShareKeyId Field Functions 
      bool hasHostShareKeyId() const { return this->hostShareKeyId_ != nullptr;};
      void deleteHostShareKeyId() { this->hostShareKeyId_ = nullptr;};
      inline string getHostShareKeyId() const { DARABONBA_PTR_GET_DEFAULT(hostShareKeyId_, "") };
      inline HostShareKey& setHostShareKeyId(string hostShareKeyId) { DARABONBA_PTR_SET_VALUE(hostShareKeyId_, hostShareKeyId) };


      // hostShareKeyName Field Functions 
      bool hasHostShareKeyName() const { return this->hostShareKeyName_ != nullptr;};
      void deleteHostShareKeyName() { this->hostShareKeyName_ = nullptr;};
      inline string getHostShareKeyName() const { DARABONBA_PTR_GET_DEFAULT(hostShareKeyName_, "") };
      inline HostShareKey& setHostShareKeyName(string hostShareKeyName) { DARABONBA_PTR_SET_VALUE(hostShareKeyName_, hostShareKeyName) };


      // lastModifyKeyAt Field Functions 
      bool hasLastModifyKeyAt() const { return this->lastModifyKeyAt_ != nullptr;};
      void deleteLastModifyKeyAt() { this->lastModifyKeyAt_ = nullptr;};
      inline int64_t getLastModifyKeyAt() const { DARABONBA_PTR_GET_DEFAULT(lastModifyKeyAt_, 0L) };
      inline HostShareKey& setLastModifyKeyAt(int64_t lastModifyKeyAt) { DARABONBA_PTR_SET_VALUE(lastModifyKeyAt_, lastModifyKeyAt) };


      // privateKeyFingerPrint Field Functions 
      bool hasPrivateKeyFingerPrint() const { return this->privateKeyFingerPrint_ != nullptr;};
      void deletePrivateKeyFingerPrint() { this->privateKeyFingerPrint_ = nullptr;};
      inline string getPrivateKeyFingerPrint() const { DARABONBA_PTR_GET_DEFAULT(privateKeyFingerPrint_, "") };
      inline HostShareKey& setPrivateKeyFingerPrint(string privateKeyFingerPrint) { DARABONBA_PTR_SET_VALUE(privateKeyFingerPrint_, privateKeyFingerPrint) };


    protected:
      // The ID of the shared key.
      shared_ptr<string> hostShareKeyId_ {};
      // The name of the shared key.
      shared_ptr<string> hostShareKeyName_ {};
      // The time when the information about the shared key was last modified. The value is a UNIX timestamp. Unit: seconds.
      shared_ptr<int64_t> lastModifyKeyAt_ {};
      // The fingerprint of the private key.
      shared_ptr<string> privateKeyFingerPrint_ {};
    };

    virtual bool empty() const override { return this->hostShareKey_ == nullptr
        && this->requestId_ == nullptr; };
    // hostShareKey Field Functions 
    bool hasHostShareKey() const { return this->hostShareKey_ != nullptr;};
    void deleteHostShareKey() { this->hostShareKey_ = nullptr;};
    inline const GetHostShareKeyResponseBody::HostShareKey & getHostShareKey() const { DARABONBA_PTR_GET_CONST(hostShareKey_, GetHostShareKeyResponseBody::HostShareKey) };
    inline GetHostShareKeyResponseBody::HostShareKey getHostShareKey() { DARABONBA_PTR_GET(hostShareKey_, GetHostShareKeyResponseBody::HostShareKey) };
    inline GetHostShareKeyResponseBody& setHostShareKey(const GetHostShareKeyResponseBody::HostShareKey & hostShareKey) { DARABONBA_PTR_SET_VALUE(hostShareKey_, hostShareKey) };
    inline GetHostShareKeyResponseBody& setHostShareKey(GetHostShareKeyResponseBody::HostShareKey && hostShareKey) { DARABONBA_PTR_SET_RVALUE(hostShareKey_, hostShareKey) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetHostShareKeyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned information about the shared key.
    shared_ptr<GetHostShareKeyResponseBody::HostShareKey> hostShareKey_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
