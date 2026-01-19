// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHPUTKVREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHPUTKVREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class BatchPutKvRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchPutKvRequest& obj) { 
      DARABONBA_PTR_TO_JSON(KvList, kvList_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
    };
    friend void from_json(const Darabonba::Json& j, BatchPutKvRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(KvList, kvList_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
    };
    BatchPutKvRequest() = default ;
    BatchPutKvRequest(const BatchPutKvRequest &) = default ;
    BatchPutKvRequest(BatchPutKvRequest &&) = default ;
    BatchPutKvRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchPutKvRequest() = default ;
    BatchPutKvRequest& operator=(const BatchPutKvRequest &) = default ;
    BatchPutKvRequest& operator=(BatchPutKvRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class KvList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const KvList& obj) { 
        DARABONBA_PTR_TO_JSON(Expiration, expiration_);
        DARABONBA_PTR_TO_JSON(ExpirationTtl, expirationTtl_);
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, KvList& obj) { 
        DARABONBA_PTR_FROM_JSON(Expiration, expiration_);
        DARABONBA_PTR_FROM_JSON(ExpirationTtl, expirationTtl_);
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      KvList() = default ;
      KvList(const KvList &) = default ;
      KvList(KvList &&) = default ;
      KvList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~KvList() = default ;
      KvList& operator=(const KvList &) = default ;
      KvList& operator=(KvList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->expiration_ == nullptr
        && this->expirationTtl_ == nullptr && this->key_ == nullptr && this->value_ == nullptr; };
      // expiration Field Functions 
      bool hasExpiration() const { return this->expiration_ != nullptr;};
      void deleteExpiration() { this->expiration_ = nullptr;};
      inline int64_t getExpiration() const { DARABONBA_PTR_GET_DEFAULT(expiration_, 0L) };
      inline KvList& setExpiration(int64_t expiration) { DARABONBA_PTR_SET_VALUE(expiration_, expiration) };


      // expirationTtl Field Functions 
      bool hasExpirationTtl() const { return this->expirationTtl_ != nullptr;};
      void deleteExpirationTtl() { this->expirationTtl_ = nullptr;};
      inline int64_t getExpirationTtl() const { DARABONBA_PTR_GET_DEFAULT(expirationTtl_, 0L) };
      inline KvList& setExpirationTtl(int64_t expirationTtl) { DARABONBA_PTR_SET_VALUE(expirationTtl_, expirationTtl) };


      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline KvList& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline KvList& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The time when the key-value pair expires, which cannot be earlier than the current time. The value is a timestamp in seconds. If you specify both Expiration and ExpirationTtl, only ExpirationTtl takes effect.
      shared_ptr<int64_t> expiration_ {};
      // The relative expiration time. Unit: seconds. If you specify both Expiration and ExpirationTtl, only ExpirationTtl takes effect.
      shared_ptr<int64_t> expirationTtl_ {};
      // The key name. The name can be up to 512 characters in length and cannot contain spaces or backslashes (\\\\).
      // 
      // This parameter is required.
      shared_ptr<string> key_ {};
      // The key content.
      // 
      // This parameter is required.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->kvList_ == nullptr
        && this->namespace_ == nullptr; };
    // kvList Field Functions 
    bool hasKvList() const { return this->kvList_ != nullptr;};
    void deleteKvList() { this->kvList_ = nullptr;};
    inline const vector<BatchPutKvRequest::KvList> & getKvList() const { DARABONBA_PTR_GET_CONST(kvList_, vector<BatchPutKvRequest::KvList>) };
    inline vector<BatchPutKvRequest::KvList> getKvList() { DARABONBA_PTR_GET(kvList_, vector<BatchPutKvRequest::KvList>) };
    inline BatchPutKvRequest& setKvList(const vector<BatchPutKvRequest::KvList> & kvList) { DARABONBA_PTR_SET_VALUE(kvList_, kvList) };
    inline BatchPutKvRequest& setKvList(vector<BatchPutKvRequest::KvList> && kvList) { DARABONBA_PTR_SET_RVALUE(kvList_, kvList) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline BatchPutKvRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


  protected:
    // The key-value pairs that you want to configure at a time. The total size can be up to 2 MB (2 × 1000 × 1000).
    // 
    // This parameter is required.
    shared_ptr<vector<BatchPutKvRequest::KvList>> kvList_ {};
    // The name of the namespace that you specify when you call the [CreateKvNamespace](https://help.aliyun.com/document_detail/2850317.html) operation.
    // 
    // This parameter is required.
    shared_ptr<string> namespace_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
