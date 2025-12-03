// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERKEYSRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERKEYSRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListUserKeysResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserKeysResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
      DARABONBA_PTR_TO_JSON(expireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(fingerPrint, fingerPrint_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(keyScope, keyScope_);
      DARABONBA_PTR_TO_JSON(lastUsedTime, lastUsedTime_);
      DARABONBA_PTR_TO_JSON(publicKey, publicKey_);
      DARABONBA_PTR_TO_JSON(title, title_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserKeysResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(expireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(fingerPrint, fingerPrint_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(keyScope, keyScope_);
      DARABONBA_PTR_FROM_JSON(lastUsedTime, lastUsedTime_);
      DARABONBA_PTR_FROM_JSON(publicKey, publicKey_);
      DARABONBA_PTR_FROM_JSON(title, title_);
    };
    ListUserKeysResponseBodyResult() = default ;
    ListUserKeysResponseBodyResult(const ListUserKeysResponseBodyResult &) = default ;
    ListUserKeysResponseBodyResult(ListUserKeysResponseBodyResult &&) = default ;
    ListUserKeysResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserKeysResponseBodyResult() = default ;
    ListUserKeysResponseBodyResult& operator=(const ListUserKeysResponseBodyResult &) = default ;
    ListUserKeysResponseBodyResult& operator=(ListUserKeysResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createdAt_ == nullptr
        && return this->expireTime_ == nullptr && return this->fingerPrint_ == nullptr && return this->id_ == nullptr && return this->keyScope_ == nullptr && return this->lastUsedTime_ == nullptr
        && return this->publicKey_ == nullptr && return this->title_ == nullptr; };
    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline string createdAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
    inline ListUserKeysResponseBodyResult& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline ListUserKeysResponseBodyResult& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // fingerPrint Field Functions 
    bool hasFingerPrint() const { return this->fingerPrint_ != nullptr;};
    void deleteFingerPrint() { this->fingerPrint_ = nullptr;};
    inline string fingerPrint() const { DARABONBA_PTR_GET_DEFAULT(fingerPrint_, "") };
    inline ListUserKeysResponseBodyResult& setFingerPrint(string fingerPrint) { DARABONBA_PTR_SET_VALUE(fingerPrint_, fingerPrint) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListUserKeysResponseBodyResult& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // keyScope Field Functions 
    bool hasKeyScope() const { return this->keyScope_ != nullptr;};
    void deleteKeyScope() { this->keyScope_ = nullptr;};
    inline string keyScope() const { DARABONBA_PTR_GET_DEFAULT(keyScope_, "") };
    inline ListUserKeysResponseBodyResult& setKeyScope(string keyScope) { DARABONBA_PTR_SET_VALUE(keyScope_, keyScope) };


    // lastUsedTime Field Functions 
    bool hasLastUsedTime() const { return this->lastUsedTime_ != nullptr;};
    void deleteLastUsedTime() { this->lastUsedTime_ = nullptr;};
    inline string lastUsedTime() const { DARABONBA_PTR_GET_DEFAULT(lastUsedTime_, "") };
    inline ListUserKeysResponseBodyResult& setLastUsedTime(string lastUsedTime) { DARABONBA_PTR_SET_VALUE(lastUsedTime_, lastUsedTime) };


    // publicKey Field Functions 
    bool hasPublicKey() const { return this->publicKey_ != nullptr;};
    void deletePublicKey() { this->publicKey_ = nullptr;};
    inline string publicKey() const { DARABONBA_PTR_GET_DEFAULT(publicKey_, "") };
    inline ListUserKeysResponseBodyResult& setPublicKey(string publicKey) { DARABONBA_PTR_SET_VALUE(publicKey_, publicKey) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline ListUserKeysResponseBodyResult& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    std::shared_ptr<string> createdAt_ = nullptr;
    std::shared_ptr<string> expireTime_ = nullptr;
    std::shared_ptr<string> fingerPrint_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> keyScope_ = nullptr;
    std::shared_ptr<string> lastUsedTime_ = nullptr;
    std::shared_ptr<string> publicKey_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
