// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHPUTDCDNKVREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHPUTDCDNKVREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class BatchPutDcdnKvRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchPutDcdnKvRequest& obj) { 
      DARABONBA_PTR_TO_JSON(KvList, kvList_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
    };
    friend void from_json(const Darabonba::Json& j, BatchPutDcdnKvRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(KvList, kvList_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
    };
    BatchPutDcdnKvRequest() = default ;
    BatchPutDcdnKvRequest(const BatchPutDcdnKvRequest &) = default ;
    BatchPutDcdnKvRequest(BatchPutDcdnKvRequest &&) = default ;
    BatchPutDcdnKvRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchPutDcdnKvRequest() = default ;
    BatchPutDcdnKvRequest& operator=(const BatchPutDcdnKvRequest &) = default ;
    BatchPutDcdnKvRequest& operator=(BatchPutDcdnKvRequest &&) = default ;
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
      shared_ptr<int64_t> expiration_ {};
      shared_ptr<int64_t> expirationTtl_ {};
      // This parameter is required.
      shared_ptr<string> key_ {};
      // This parameter is required.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->kvList_ == nullptr
        && this->namespace_ == nullptr; };
    // kvList Field Functions 
    bool hasKvList() const { return this->kvList_ != nullptr;};
    void deleteKvList() { this->kvList_ = nullptr;};
    inline const vector<BatchPutDcdnKvRequest::KvList> & getKvList() const { DARABONBA_PTR_GET_CONST(kvList_, vector<BatchPutDcdnKvRequest::KvList>) };
    inline vector<BatchPutDcdnKvRequest::KvList> getKvList() { DARABONBA_PTR_GET(kvList_, vector<BatchPutDcdnKvRequest::KvList>) };
    inline BatchPutDcdnKvRequest& setKvList(const vector<BatchPutDcdnKvRequest::KvList> & kvList) { DARABONBA_PTR_SET_VALUE(kvList_, kvList) };
    inline BatchPutDcdnKvRequest& setKvList(vector<BatchPutDcdnKvRequest::KvList> && kvList) { DARABONBA_PTR_SET_RVALUE(kvList_, kvList) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline BatchPutDcdnKvRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


  protected:
    // This parameter is required.
    shared_ptr<vector<BatchPutDcdnKvRequest::KvList>> kvList_ {};
    // The name of the namespace.
    // 
    // This parameter is required.
    shared_ptr<string> namespace_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
