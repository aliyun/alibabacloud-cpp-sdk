// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHOSTSHAREKEYSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTHOSTSHAREKEYSRESPONSEBODY_HPP_
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
  class ListHostShareKeysResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHostShareKeysResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(HostShareKeys, hostShareKeys_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListHostShareKeysResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(HostShareKeys, hostShareKeys_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListHostShareKeysResponseBody() = default ;
    ListHostShareKeysResponseBody(const ListHostShareKeysResponseBody &) = default ;
    ListHostShareKeysResponseBody(ListHostShareKeysResponseBody &&) = default ;
    ListHostShareKeysResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHostShareKeysResponseBody() = default ;
    ListHostShareKeysResponseBody& operator=(const ListHostShareKeysResponseBody &) = default ;
    ListHostShareKeysResponseBody& operator=(ListHostShareKeysResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class HostShareKeys : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const HostShareKeys& obj) { 
        DARABONBA_PTR_TO_JSON(HostAccountCount, hostAccountCount_);
        DARABONBA_PTR_TO_JSON(HostShareKeyId, hostShareKeyId_);
        DARABONBA_PTR_TO_JSON(HostShareKeyName, hostShareKeyName_);
        DARABONBA_PTR_TO_JSON(LastModifyKeyAt, lastModifyKeyAt_);
        DARABONBA_PTR_TO_JSON(PrivateKeyFingerPrint, privateKeyFingerPrint_);
      };
      friend void from_json(const Darabonba::Json& j, HostShareKeys& obj) { 
        DARABONBA_PTR_FROM_JSON(HostAccountCount, hostAccountCount_);
        DARABONBA_PTR_FROM_JSON(HostShareKeyId, hostShareKeyId_);
        DARABONBA_PTR_FROM_JSON(HostShareKeyName, hostShareKeyName_);
        DARABONBA_PTR_FROM_JSON(LastModifyKeyAt, lastModifyKeyAt_);
        DARABONBA_PTR_FROM_JSON(PrivateKeyFingerPrint, privateKeyFingerPrint_);
      };
      HostShareKeys() = default ;
      HostShareKeys(const HostShareKeys &) = default ;
      HostShareKeys(HostShareKeys &&) = default ;
      HostShareKeys(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~HostShareKeys() = default ;
      HostShareKeys& operator=(const HostShareKeys &) = default ;
      HostShareKeys& operator=(HostShareKeys &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->hostAccountCount_ == nullptr
        && this->hostShareKeyId_ == nullptr && this->hostShareKeyName_ == nullptr && this->lastModifyKeyAt_ == nullptr && this->privateKeyFingerPrint_ == nullptr; };
      // hostAccountCount Field Functions 
      bool hasHostAccountCount() const { return this->hostAccountCount_ != nullptr;};
      void deleteHostAccountCount() { this->hostAccountCount_ = nullptr;};
      inline int64_t getHostAccountCount() const { DARABONBA_PTR_GET_DEFAULT(hostAccountCount_, 0L) };
      inline HostShareKeys& setHostAccountCount(int64_t hostAccountCount) { DARABONBA_PTR_SET_VALUE(hostAccountCount_, hostAccountCount) };


      // hostShareKeyId Field Functions 
      bool hasHostShareKeyId() const { return this->hostShareKeyId_ != nullptr;};
      void deleteHostShareKeyId() { this->hostShareKeyId_ = nullptr;};
      inline string getHostShareKeyId() const { DARABONBA_PTR_GET_DEFAULT(hostShareKeyId_, "") };
      inline HostShareKeys& setHostShareKeyId(string hostShareKeyId) { DARABONBA_PTR_SET_VALUE(hostShareKeyId_, hostShareKeyId) };


      // hostShareKeyName Field Functions 
      bool hasHostShareKeyName() const { return this->hostShareKeyName_ != nullptr;};
      void deleteHostShareKeyName() { this->hostShareKeyName_ = nullptr;};
      inline string getHostShareKeyName() const { DARABONBA_PTR_GET_DEFAULT(hostShareKeyName_, "") };
      inline HostShareKeys& setHostShareKeyName(string hostShareKeyName) { DARABONBA_PTR_SET_VALUE(hostShareKeyName_, hostShareKeyName) };


      // lastModifyKeyAt Field Functions 
      bool hasLastModifyKeyAt() const { return this->lastModifyKeyAt_ != nullptr;};
      void deleteLastModifyKeyAt() { this->lastModifyKeyAt_ = nullptr;};
      inline int64_t getLastModifyKeyAt() const { DARABONBA_PTR_GET_DEFAULT(lastModifyKeyAt_, 0L) };
      inline HostShareKeys& setLastModifyKeyAt(int64_t lastModifyKeyAt) { DARABONBA_PTR_SET_VALUE(lastModifyKeyAt_, lastModifyKeyAt) };


      // privateKeyFingerPrint Field Functions 
      bool hasPrivateKeyFingerPrint() const { return this->privateKeyFingerPrint_ != nullptr;};
      void deletePrivateKeyFingerPrint() { this->privateKeyFingerPrint_ = nullptr;};
      inline string getPrivateKeyFingerPrint() const { DARABONBA_PTR_GET_DEFAULT(privateKeyFingerPrint_, "") };
      inline HostShareKeys& setPrivateKeyFingerPrint(string privateKeyFingerPrint) { DARABONBA_PTR_SET_VALUE(privateKeyFingerPrint_, privateKeyFingerPrint) };


    protected:
      // The number of the associated host accounts.
      shared_ptr<int64_t> hostAccountCount_ {};
      // The shared key ID.
      shared_ptr<string> hostShareKeyId_ {};
      // The name of the shared key.
      shared_ptr<string> hostShareKeyName_ {};
      // The time when the shared key was last modified. The value is a UNIX timestamp. Unit: seconds.
      shared_ptr<int64_t> lastModifyKeyAt_ {};
      // The fingerprint of the private key.
      shared_ptr<string> privateKeyFingerPrint_ {};
    };

    virtual bool empty() const override { return this->hostShareKeys_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // hostShareKeys Field Functions 
    bool hasHostShareKeys() const { return this->hostShareKeys_ != nullptr;};
    void deleteHostShareKeys() { this->hostShareKeys_ = nullptr;};
    inline const vector<ListHostShareKeysResponseBody::HostShareKeys> & getHostShareKeys() const { DARABONBA_PTR_GET_CONST(hostShareKeys_, vector<ListHostShareKeysResponseBody::HostShareKeys>) };
    inline vector<ListHostShareKeysResponseBody::HostShareKeys> getHostShareKeys() { DARABONBA_PTR_GET(hostShareKeys_, vector<ListHostShareKeysResponseBody::HostShareKeys>) };
    inline ListHostShareKeysResponseBody& setHostShareKeys(const vector<ListHostShareKeysResponseBody::HostShareKeys> & hostShareKeys) { DARABONBA_PTR_SET_VALUE(hostShareKeys_, hostShareKeys) };
    inline ListHostShareKeysResponseBody& setHostShareKeys(vector<ListHostShareKeysResponseBody::HostShareKeys> && hostShareKeys) { DARABONBA_PTR_SET_RVALUE(hostShareKeys_, hostShareKeys) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListHostShareKeysResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListHostShareKeysResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // An array that consists of the shared keys.
    shared_ptr<vector<ListHostShareKeysResponseBody::HostShareKeys>> hostShareKeys_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The total number of the shared keys.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
