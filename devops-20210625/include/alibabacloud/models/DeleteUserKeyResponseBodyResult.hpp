// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEUSERKEYRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_DELETEUSERKEYRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class DeleteUserKeyResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteUserKeyResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(context, context_);
      DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
      DARABONBA_PTR_TO_JSON(expireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(fingerPrint, fingerPrint_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(keyScope, keyScope_);
      DARABONBA_PTR_TO_JSON(lastUsedTime, lastUsedTime_);
      DARABONBA_PTR_TO_JSON(publicKey, publicKey_);
      DARABONBA_PTR_TO_JSON(shaContext, shaContext_);
      DARABONBA_PTR_TO_JSON(title, title_);
      DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteUserKeyResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(context, context_);
      DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(expireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(fingerPrint, fingerPrint_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(keyScope, keyScope_);
      DARABONBA_PTR_FROM_JSON(lastUsedTime, lastUsedTime_);
      DARABONBA_PTR_FROM_JSON(publicKey, publicKey_);
      DARABONBA_PTR_FROM_JSON(shaContext, shaContext_);
      DARABONBA_PTR_FROM_JSON(title, title_);
      DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
    };
    DeleteUserKeyResponseBodyResult() = default ;
    DeleteUserKeyResponseBodyResult(const DeleteUserKeyResponseBodyResult &) = default ;
    DeleteUserKeyResponseBodyResult(DeleteUserKeyResponseBodyResult &&) = default ;
    DeleteUserKeyResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteUserKeyResponseBodyResult() = default ;
    DeleteUserKeyResponseBodyResult& operator=(const DeleteUserKeyResponseBodyResult &) = default ;
    DeleteUserKeyResponseBodyResult& operator=(DeleteUserKeyResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->context_ == nullptr
        && return this->createdAt_ == nullptr && return this->expireTime_ == nullptr && return this->fingerPrint_ == nullptr && return this->id_ == nullptr && return this->keyScope_ == nullptr
        && return this->lastUsedTime_ == nullptr && return this->publicKey_ == nullptr && return this->shaContext_ == nullptr && return this->title_ == nullptr && return this->updatedAt_ == nullptr; };
    // context Field Functions 
    bool hasContext() const { return this->context_ != nullptr;};
    void deleteContext() { this->context_ = nullptr;};
    inline string context() const { DARABONBA_PTR_GET_DEFAULT(context_, "") };
    inline DeleteUserKeyResponseBodyResult& setContext(string context) { DARABONBA_PTR_SET_VALUE(context_, context) };


    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline string createdAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
    inline DeleteUserKeyResponseBodyResult& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline DeleteUserKeyResponseBodyResult& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // fingerPrint Field Functions 
    bool hasFingerPrint() const { return this->fingerPrint_ != nullptr;};
    void deleteFingerPrint() { this->fingerPrint_ = nullptr;};
    inline string fingerPrint() const { DARABONBA_PTR_GET_DEFAULT(fingerPrint_, "") };
    inline DeleteUserKeyResponseBodyResult& setFingerPrint(string fingerPrint) { DARABONBA_PTR_SET_VALUE(fingerPrint_, fingerPrint) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DeleteUserKeyResponseBodyResult& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // keyScope Field Functions 
    bool hasKeyScope() const { return this->keyScope_ != nullptr;};
    void deleteKeyScope() { this->keyScope_ = nullptr;};
    inline string keyScope() const { DARABONBA_PTR_GET_DEFAULT(keyScope_, "") };
    inline DeleteUserKeyResponseBodyResult& setKeyScope(string keyScope) { DARABONBA_PTR_SET_VALUE(keyScope_, keyScope) };


    // lastUsedTime Field Functions 
    bool hasLastUsedTime() const { return this->lastUsedTime_ != nullptr;};
    void deleteLastUsedTime() { this->lastUsedTime_ = nullptr;};
    inline string lastUsedTime() const { DARABONBA_PTR_GET_DEFAULT(lastUsedTime_, "") };
    inline DeleteUserKeyResponseBodyResult& setLastUsedTime(string lastUsedTime) { DARABONBA_PTR_SET_VALUE(lastUsedTime_, lastUsedTime) };


    // publicKey Field Functions 
    bool hasPublicKey() const { return this->publicKey_ != nullptr;};
    void deletePublicKey() { this->publicKey_ = nullptr;};
    inline string publicKey() const { DARABONBA_PTR_GET_DEFAULT(publicKey_, "") };
    inline DeleteUserKeyResponseBodyResult& setPublicKey(string publicKey) { DARABONBA_PTR_SET_VALUE(publicKey_, publicKey) };


    // shaContext Field Functions 
    bool hasShaContext() const { return this->shaContext_ != nullptr;};
    void deleteShaContext() { this->shaContext_ = nullptr;};
    inline string shaContext() const { DARABONBA_PTR_GET_DEFAULT(shaContext_, "") };
    inline DeleteUserKeyResponseBodyResult& setShaContext(string shaContext) { DARABONBA_PTR_SET_VALUE(shaContext_, shaContext) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline DeleteUserKeyResponseBodyResult& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // updatedAt Field Functions 
    bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
    void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
    inline string updatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
    inline DeleteUserKeyResponseBodyResult& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


  protected:
    std::shared_ptr<string> context_ = nullptr;
    std::shared_ptr<string> createdAt_ = nullptr;
    std::shared_ptr<string> expireTime_ = nullptr;
    std::shared_ptr<string> fingerPrint_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> keyScope_ = nullptr;
    std::shared_ptr<string> lastUsedTime_ = nullptr;
    std::shared_ptr<string> publicKey_ = nullptr;
    std::shared_ptr<string> shaContext_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
    std::shared_ptr<string> updatedAt_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
