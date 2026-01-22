// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACCESSKEYSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTACCESSKEYSRESPONSEBODY_HPP_
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
  class ListAccessKeysResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAccessKeysResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessKeys, accessKeys_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAccessKeysResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessKeys, accessKeys_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAccessKeysResponseBody() = default ;
    ListAccessKeysResponseBody(const ListAccessKeysResponseBody &) = default ;
    ListAccessKeysResponseBody(ListAccessKeysResponseBody &&) = default ;
    ListAccessKeysResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAccessKeysResponseBody() = default ;
    ListAccessKeysResponseBody& operator=(const ListAccessKeysResponseBody &) = default ;
    ListAccessKeysResponseBody& operator=(ListAccessKeysResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AccessKeys : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AccessKeys& obj) { 
        DARABONBA_PTR_TO_JSON(AccessKey, accessKey_);
      };
      friend void from_json(const Darabonba::Json& j, AccessKeys& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessKey, accessKey_);
      };
      AccessKeys() = default ;
      AccessKeys(const AccessKeys &) = default ;
      AccessKeys(AccessKeys &&) = default ;
      AccessKeys(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AccessKeys() = default ;
      AccessKeys& operator=(const AccessKeys &) = default ;
      AccessKeys& operator=(AccessKeys &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AccessKey : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AccessKey& obj) { 
          DARABONBA_PTR_TO_JSON(AccessKeyId, accessKeyId_);
          DARABONBA_PTR_TO_JSON(CreateDate, createDate_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(UpdateDate, updateDate_);
        };
        friend void from_json(const Darabonba::Json& j, AccessKey& obj) { 
          DARABONBA_PTR_FROM_JSON(AccessKeyId, accessKeyId_);
          DARABONBA_PTR_FROM_JSON(CreateDate, createDate_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(UpdateDate, updateDate_);
        };
        AccessKey() = default ;
        AccessKey(const AccessKey &) = default ;
        AccessKey(AccessKey &&) = default ;
        AccessKey(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AccessKey() = default ;
        AccessKey& operator=(const AccessKey &) = default ;
        AccessKey& operator=(AccessKey &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->accessKeyId_ == nullptr
        && this->createDate_ == nullptr && this->status_ == nullptr && this->updateDate_ == nullptr; };
        // accessKeyId Field Functions 
        bool hasAccessKeyId() const { return this->accessKeyId_ != nullptr;};
        void deleteAccessKeyId() { this->accessKeyId_ = nullptr;};
        inline string getAccessKeyId() const { DARABONBA_PTR_GET_DEFAULT(accessKeyId_, "") };
        inline AccessKey& setAccessKeyId(string accessKeyId) { DARABONBA_PTR_SET_VALUE(accessKeyId_, accessKeyId) };


        // createDate Field Functions 
        bool hasCreateDate() const { return this->createDate_ != nullptr;};
        void deleteCreateDate() { this->createDate_ = nullptr;};
        inline string getCreateDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
        inline AccessKey& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline AccessKey& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // updateDate Field Functions 
        bool hasUpdateDate() const { return this->updateDate_ != nullptr;};
        void deleteUpdateDate() { this->updateDate_ = nullptr;};
        inline string getUpdateDate() const { DARABONBA_PTR_GET_DEFAULT(updateDate_, "") };
        inline AccessKey& setUpdateDate(string updateDate) { DARABONBA_PTR_SET_VALUE(updateDate_, updateDate) };


      protected:
        // The AccessKey ID.
        shared_ptr<string> accessKeyId_ {};
        // The time when the AccessKey pair was created.
        shared_ptr<string> createDate_ {};
        // The status of the AccessKey pair. Valid values:
        // 
        // *   Active
        // *   Inactive
        shared_ptr<string> status_ {};
        // The time when the AccessKey pair was updated.
        shared_ptr<string> updateDate_ {};
      };

      virtual bool empty() const override { return this->accessKey_ == nullptr; };
      // accessKey Field Functions 
      bool hasAccessKey() const { return this->accessKey_ != nullptr;};
      void deleteAccessKey() { this->accessKey_ = nullptr;};
      inline const vector<AccessKeys::AccessKey> & getAccessKey() const { DARABONBA_PTR_GET_CONST(accessKey_, vector<AccessKeys::AccessKey>) };
      inline vector<AccessKeys::AccessKey> getAccessKey() { DARABONBA_PTR_GET(accessKey_, vector<AccessKeys::AccessKey>) };
      inline AccessKeys& setAccessKey(const vector<AccessKeys::AccessKey> & accessKey) { DARABONBA_PTR_SET_VALUE(accessKey_, accessKey) };
      inline AccessKeys& setAccessKey(vector<AccessKeys::AccessKey> && accessKey) { DARABONBA_PTR_SET_RVALUE(accessKey_, accessKey) };


    protected:
      shared_ptr<vector<AccessKeys::AccessKey>> accessKey_ {};
    };

    virtual bool empty() const override { return this->accessKeys_ == nullptr
        && this->requestId_ == nullptr; };
    // accessKeys Field Functions 
    bool hasAccessKeys() const { return this->accessKeys_ != nullptr;};
    void deleteAccessKeys() { this->accessKeys_ = nullptr;};
    inline const ListAccessKeysResponseBody::AccessKeys & getAccessKeys() const { DARABONBA_PTR_GET_CONST(accessKeys_, ListAccessKeysResponseBody::AccessKeys) };
    inline ListAccessKeysResponseBody::AccessKeys getAccessKeys() { DARABONBA_PTR_GET(accessKeys_, ListAccessKeysResponseBody::AccessKeys) };
    inline ListAccessKeysResponseBody& setAccessKeys(const ListAccessKeysResponseBody::AccessKeys & accessKeys) { DARABONBA_PTR_SET_VALUE(accessKeys_, accessKeys) };
    inline ListAccessKeysResponseBody& setAccessKeys(ListAccessKeysResponseBody::AccessKeys && accessKeys) { DARABONBA_PTR_SET_RVALUE(accessKeys_, accessKeys) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAccessKeysResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The AccessKey pairs.
    shared_ptr<ListAccessKeysResponseBody::AccessKeys> accessKeys_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
