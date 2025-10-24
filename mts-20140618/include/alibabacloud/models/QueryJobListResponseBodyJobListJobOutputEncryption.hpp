// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYJOBLISTRESPONSEBODYJOBLISTJOBOUTPUTENCRYPTION_HPP_
#define ALIBABACLOUD_MODELS_QUERYJOBLISTRESPONSEBODYJOBLISTJOBOUTPUTENCRYPTION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryJobListResponseBodyJobListJobOutputEncryption : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryJobListResponseBodyJobListJobOutputEncryption& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(KeyType, keyType_);
      DARABONBA_PTR_TO_JSON(KeyUri, keyUri_);
      DARABONBA_PTR_TO_JSON(SkipCnt, skipCnt_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, QueryJobListResponseBodyJobListJobOutputEncryption& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(KeyType, keyType_);
      DARABONBA_PTR_FROM_JSON(KeyUri, keyUri_);
      DARABONBA_PTR_FROM_JSON(SkipCnt, skipCnt_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    QueryJobListResponseBodyJobListJobOutputEncryption() = default ;
    QueryJobListResponseBodyJobListJobOutputEncryption(const QueryJobListResponseBodyJobListJobOutputEncryption &) = default ;
    QueryJobListResponseBodyJobListJobOutputEncryption(QueryJobListResponseBodyJobListJobOutputEncryption &&) = default ;
    QueryJobListResponseBodyJobListJobOutputEncryption(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryJobListResponseBodyJobListJobOutputEncryption() = default ;
    QueryJobListResponseBodyJobListJobOutputEncryption& operator=(const QueryJobListResponseBodyJobListJobOutputEncryption &) = default ;
    QueryJobListResponseBodyJobListJobOutputEncryption& operator=(QueryJobListResponseBodyJobListJobOutputEncryption &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->key_ == nullptr && return this->keyType_ == nullptr && return this->keyUri_ == nullptr && return this->skipCnt_ == nullptr && return this->type_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline QueryJobListResponseBodyJobListJobOutputEncryption& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline QueryJobListResponseBodyJobListJobOutputEncryption& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // keyType Field Functions 
    bool hasKeyType() const { return this->keyType_ != nullptr;};
    void deleteKeyType() { this->keyType_ = nullptr;};
    inline string keyType() const { DARABONBA_PTR_GET_DEFAULT(keyType_, "") };
    inline QueryJobListResponseBodyJobListJobOutputEncryption& setKeyType(string keyType) { DARABONBA_PTR_SET_VALUE(keyType_, keyType) };


    // keyUri Field Functions 
    bool hasKeyUri() const { return this->keyUri_ != nullptr;};
    void deleteKeyUri() { this->keyUri_ = nullptr;};
    inline string keyUri() const { DARABONBA_PTR_GET_DEFAULT(keyUri_, "") };
    inline QueryJobListResponseBodyJobListJobOutputEncryption& setKeyUri(string keyUri) { DARABONBA_PTR_SET_VALUE(keyUri_, keyUri) };


    // skipCnt Field Functions 
    bool hasSkipCnt() const { return this->skipCnt_ != nullptr;};
    void deleteSkipCnt() { this->skipCnt_ = nullptr;};
    inline string skipCnt() const { DARABONBA_PTR_GET_DEFAULT(skipCnt_, "") };
    inline QueryJobListResponseBodyJobListJobOutputEncryption& setSkipCnt(string skipCnt) { DARABONBA_PTR_SET_VALUE(skipCnt_, skipCnt) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline QueryJobListResponseBodyJobListJobOutputEncryption& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The encryption ID.
    std::shared_ptr<string> id_ = nullptr;
    // The key that is used to encrypt the video.
    std::shared_ptr<string> key_ = nullptr;
    // The key encryption method. Valid values: Base64 and KMS.
    // 
    // >  For example, if the key is `encryptionkey128`, the key can be encrypted as `Base64("encryptionkey128")` or `KMS(Base64("encryptionkey128")` depending on the encryption method used.
    std::shared_ptr<string> keyType_ = nullptr;
    // The URL that is used to request the key. The URL is Base64-encoded.
    std::shared_ptr<string> keyUri_ = nullptr;
    // The number of unencrypted frames at the beginning of the video. Leaving these frames unencrypted enables video playback to quickly start.
    std::shared_ptr<string> skipCnt_ = nullptr;
    // The encryption type. Only **hls-aes-128** may be returned.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
