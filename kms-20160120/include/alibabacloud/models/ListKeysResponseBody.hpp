// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTKEYSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTKEYSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class ListKeysResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListKeysResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Keys, keys_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListKeysResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Keys, keys_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListKeysResponseBody() = default ;
    ListKeysResponseBody(const ListKeysResponseBody &) = default ;
    ListKeysResponseBody(ListKeysResponseBody &&) = default ;
    ListKeysResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListKeysResponseBody() = default ;
    ListKeysResponseBody& operator=(const ListKeysResponseBody &) = default ;
    ListKeysResponseBody& operator=(ListKeysResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Keys : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Keys& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
      };
      friend void from_json(const Darabonba::Json& j, Keys& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
      };
      Keys() = default ;
      Keys(const Keys &) = default ;
      Keys(Keys &&) = default ;
      Keys(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Keys() = default ;
      Keys& operator=(const Keys &) = default ;
      Keys& operator=(Keys &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Key : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Key& obj) { 
          DARABONBA_PTR_TO_JSON(KeyArn, keyArn_);
          DARABONBA_PTR_TO_JSON(KeyId, keyId_);
        };
        friend void from_json(const Darabonba::Json& j, Key& obj) { 
          DARABONBA_PTR_FROM_JSON(KeyArn, keyArn_);
          DARABONBA_PTR_FROM_JSON(KeyId, keyId_);
        };
        Key() = default ;
        Key(const Key &) = default ;
        Key(Key &&) = default ;
        Key(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Key() = default ;
        Key& operator=(const Key &) = default ;
        Key& operator=(Key &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->keyArn_ == nullptr
        && this->keyId_ == nullptr; };
        // keyArn Field Functions 
        bool hasKeyArn() const { return this->keyArn_ != nullptr;};
        void deleteKeyArn() { this->keyArn_ = nullptr;};
        inline string getKeyArn() const { DARABONBA_PTR_GET_DEFAULT(keyArn_, "") };
        inline Key& setKeyArn(string keyArn) { DARABONBA_PTR_SET_VALUE(keyArn_, keyArn) };


        // keyId Field Functions 
        bool hasKeyId() const { return this->keyId_ != nullptr;};
        void deleteKeyId() { this->keyId_ = nullptr;};
        inline string getKeyId() const { DARABONBA_PTR_GET_DEFAULT(keyId_, "") };
        inline Key& setKeyId(string keyId) { DARABONBA_PTR_SET_VALUE(keyId_, keyId) };


      protected:
        shared_ptr<string> keyArn_ {};
        shared_ptr<string> keyId_ {};
      };

      virtual bool empty() const override { return this->key_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline const vector<Keys::Key> & getKey() const { DARABONBA_PTR_GET_CONST(key_, vector<Keys::Key>) };
      inline vector<Keys::Key> getKey() { DARABONBA_PTR_GET(key_, vector<Keys::Key>) };
      inline Keys& setKey(const vector<Keys::Key> & key) { DARABONBA_PTR_SET_VALUE(key_, key) };
      inline Keys& setKey(vector<Keys::Key> && key) { DARABONBA_PTR_SET_RVALUE(key_, key) };


    protected:
      shared_ptr<vector<Keys::Key>> key_ {};
    };

    virtual bool empty() const override { return this->keys_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // keys Field Functions 
    bool hasKeys() const { return this->keys_ != nullptr;};
    void deleteKeys() { this->keys_ = nullptr;};
    inline const ListKeysResponseBody::Keys & getKeys() const { DARABONBA_PTR_GET_CONST(keys_, ListKeysResponseBody::Keys) };
    inline ListKeysResponseBody::Keys getKeys() { DARABONBA_PTR_GET(keys_, ListKeysResponseBody::Keys) };
    inline ListKeysResponseBody& setKeys(const ListKeysResponseBody::Keys & keys) { DARABONBA_PTR_SET_VALUE(keys_, keys) };
    inline ListKeysResponseBody& setKeys(ListKeysResponseBody::Keys && keys) { DARABONBA_PTR_SET_RVALUE(keys_, keys) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListKeysResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListKeysResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListKeysResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListKeysResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<ListKeysResponseBody::Keys> keys_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request. It is a globally unique identifier (GUID) generated by Alibaba Cloud. You can use the request ID to troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The total number of master keys.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
