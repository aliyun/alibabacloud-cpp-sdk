// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHOSTSHAREKEYSRESPONSEBODYHOSTSHAREKEYS_HPP_
#define ALIBABACLOUD_MODELS_LISTHOSTSHAREKEYSRESPONSEBODYHOSTSHAREKEYS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ListHostShareKeysResponseBodyHostShareKeys : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHostShareKeysResponseBodyHostShareKeys& obj) { 
      DARABONBA_PTR_TO_JSON(HostAccountCount, hostAccountCount_);
      DARABONBA_PTR_TO_JSON(HostShareKeyId, hostShareKeyId_);
      DARABONBA_PTR_TO_JSON(HostShareKeyName, hostShareKeyName_);
      DARABONBA_PTR_TO_JSON(LastModifyKeyAt, lastModifyKeyAt_);
      DARABONBA_PTR_TO_JSON(PrivateKeyFingerPrint, privateKeyFingerPrint_);
    };
    friend void from_json(const Darabonba::Json& j, ListHostShareKeysResponseBodyHostShareKeys& obj) { 
      DARABONBA_PTR_FROM_JSON(HostAccountCount, hostAccountCount_);
      DARABONBA_PTR_FROM_JSON(HostShareKeyId, hostShareKeyId_);
      DARABONBA_PTR_FROM_JSON(HostShareKeyName, hostShareKeyName_);
      DARABONBA_PTR_FROM_JSON(LastModifyKeyAt, lastModifyKeyAt_);
      DARABONBA_PTR_FROM_JSON(PrivateKeyFingerPrint, privateKeyFingerPrint_);
    };
    ListHostShareKeysResponseBodyHostShareKeys() = default ;
    ListHostShareKeysResponseBodyHostShareKeys(const ListHostShareKeysResponseBodyHostShareKeys &) = default ;
    ListHostShareKeysResponseBodyHostShareKeys(ListHostShareKeysResponseBodyHostShareKeys &&) = default ;
    ListHostShareKeysResponseBodyHostShareKeys(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHostShareKeysResponseBodyHostShareKeys() = default ;
    ListHostShareKeysResponseBodyHostShareKeys& operator=(const ListHostShareKeysResponseBodyHostShareKeys &) = default ;
    ListHostShareKeysResponseBodyHostShareKeys& operator=(ListHostShareKeysResponseBodyHostShareKeys &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hostAccountCount_ == nullptr
        && return this->hostShareKeyId_ == nullptr && return this->hostShareKeyName_ == nullptr && return this->lastModifyKeyAt_ == nullptr && return this->privateKeyFingerPrint_ == nullptr; };
    // hostAccountCount Field Functions 
    bool hasHostAccountCount() const { return this->hostAccountCount_ != nullptr;};
    void deleteHostAccountCount() { this->hostAccountCount_ = nullptr;};
    inline int64_t hostAccountCount() const { DARABONBA_PTR_GET_DEFAULT(hostAccountCount_, 0L) };
    inline ListHostShareKeysResponseBodyHostShareKeys& setHostAccountCount(int64_t hostAccountCount) { DARABONBA_PTR_SET_VALUE(hostAccountCount_, hostAccountCount) };


    // hostShareKeyId Field Functions 
    bool hasHostShareKeyId() const { return this->hostShareKeyId_ != nullptr;};
    void deleteHostShareKeyId() { this->hostShareKeyId_ = nullptr;};
    inline string hostShareKeyId() const { DARABONBA_PTR_GET_DEFAULT(hostShareKeyId_, "") };
    inline ListHostShareKeysResponseBodyHostShareKeys& setHostShareKeyId(string hostShareKeyId) { DARABONBA_PTR_SET_VALUE(hostShareKeyId_, hostShareKeyId) };


    // hostShareKeyName Field Functions 
    bool hasHostShareKeyName() const { return this->hostShareKeyName_ != nullptr;};
    void deleteHostShareKeyName() { this->hostShareKeyName_ = nullptr;};
    inline string hostShareKeyName() const { DARABONBA_PTR_GET_DEFAULT(hostShareKeyName_, "") };
    inline ListHostShareKeysResponseBodyHostShareKeys& setHostShareKeyName(string hostShareKeyName) { DARABONBA_PTR_SET_VALUE(hostShareKeyName_, hostShareKeyName) };


    // lastModifyKeyAt Field Functions 
    bool hasLastModifyKeyAt() const { return this->lastModifyKeyAt_ != nullptr;};
    void deleteLastModifyKeyAt() { this->lastModifyKeyAt_ = nullptr;};
    inline int64_t lastModifyKeyAt() const { DARABONBA_PTR_GET_DEFAULT(lastModifyKeyAt_, 0L) };
    inline ListHostShareKeysResponseBodyHostShareKeys& setLastModifyKeyAt(int64_t lastModifyKeyAt) { DARABONBA_PTR_SET_VALUE(lastModifyKeyAt_, lastModifyKeyAt) };


    // privateKeyFingerPrint Field Functions 
    bool hasPrivateKeyFingerPrint() const { return this->privateKeyFingerPrint_ != nullptr;};
    void deletePrivateKeyFingerPrint() { this->privateKeyFingerPrint_ = nullptr;};
    inline string privateKeyFingerPrint() const { DARABONBA_PTR_GET_DEFAULT(privateKeyFingerPrint_, "") };
    inline ListHostShareKeysResponseBodyHostShareKeys& setPrivateKeyFingerPrint(string privateKeyFingerPrint) { DARABONBA_PTR_SET_VALUE(privateKeyFingerPrint_, privateKeyFingerPrint) };


  protected:
    // The number of the associated host accounts.
    std::shared_ptr<int64_t> hostAccountCount_ = nullptr;
    // The shared key ID.
    std::shared_ptr<string> hostShareKeyId_ = nullptr;
    // The name of the shared key.
    std::shared_ptr<string> hostShareKeyName_ = nullptr;
    // The time when the shared key was last modified. The value is a UNIX timestamp. Unit: seconds.
    std::shared_ptr<int64_t> lastModifyKeyAt_ = nullptr;
    // The fingerprint of the private key.
    std::shared_ptr<string> privateKeyFingerPrint_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
