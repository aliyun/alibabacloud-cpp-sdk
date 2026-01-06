// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHOTKEYSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHOTKEYSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class DescribeHotKeysResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHotKeysResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHotKeysResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeHotKeysResponseBody() = default ;
    DescribeHotKeysResponseBody(const DescribeHotKeysResponseBody &) = default ;
    DescribeHotKeysResponseBody(DescribeHotKeysResponseBody &&) = default ;
    DescribeHotKeysResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHotKeysResponseBody() = default ;
    DescribeHotKeysResponseBody& operator=(const DescribeHotKeysResponseBody &) = default ;
    DescribeHotKeysResponseBody& operator=(DescribeHotKeysResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(HotKey, hotKey_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(HotKey, hotKey_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class HotKey : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HotKey& obj) { 
          DARABONBA_PTR_TO_JSON(Category, category_);
          DARABONBA_PTR_TO_JSON(Db, db_);
          DARABONBA_PTR_TO_JSON(Hot, hot_);
          DARABONBA_PTR_TO_JSON(InBytes, inBytes_);
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(KeyType, keyType_);
          DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
          DARABONBA_PTR_TO_JSON(OutBytes, outBytes_);
          DARABONBA_PTR_TO_JSON(Size, size_);
        };
        friend void from_json(const Darabonba::Json& j, HotKey& obj) { 
          DARABONBA_PTR_FROM_JSON(Category, category_);
          DARABONBA_PTR_FROM_JSON(Db, db_);
          DARABONBA_PTR_FROM_JSON(Hot, hot_);
          DARABONBA_PTR_FROM_JSON(InBytes, inBytes_);
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(KeyType, keyType_);
          DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
          DARABONBA_PTR_FROM_JSON(OutBytes, outBytes_);
          DARABONBA_PTR_FROM_JSON(Size, size_);
        };
        HotKey() = default ;
        HotKey(const HotKey &) = default ;
        HotKey(HotKey &&) = default ;
        HotKey(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HotKey() = default ;
        HotKey& operator=(const HotKey &) = default ;
        HotKey& operator=(HotKey &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->category_ == nullptr
        && this->db_ == nullptr && this->hot_ == nullptr && this->inBytes_ == nullptr && this->key_ == nullptr && this->keyType_ == nullptr
        && this->nodeId_ == nullptr && this->outBytes_ == nullptr && this->size_ == nullptr; };
        // category Field Functions 
        bool hasCategory() const { return this->category_ != nullptr;};
        void deleteCategory() { this->category_ = nullptr;};
        inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
        inline HotKey& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


        // db Field Functions 
        bool hasDb() const { return this->db_ != nullptr;};
        void deleteDb() { this->db_ = nullptr;};
        inline int32_t getDb() const { DARABONBA_PTR_GET_DEFAULT(db_, 0) };
        inline HotKey& setDb(int32_t db) { DARABONBA_PTR_SET_VALUE(db_, db) };


        // hot Field Functions 
        bool hasHot() const { return this->hot_ != nullptr;};
        void deleteHot() { this->hot_ = nullptr;};
        inline string getHot() const { DARABONBA_PTR_GET_DEFAULT(hot_, "") };
        inline HotKey& setHot(string hot) { DARABONBA_PTR_SET_VALUE(hot_, hot) };


        // inBytes Field Functions 
        bool hasInBytes() const { return this->inBytes_ != nullptr;};
        void deleteInBytes() { this->inBytes_ = nullptr;};
        inline int64_t getInBytes() const { DARABONBA_PTR_GET_DEFAULT(inBytes_, 0L) };
        inline HotKey& setInBytes(int64_t inBytes) { DARABONBA_PTR_SET_VALUE(inBytes_, inBytes) };


        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline HotKey& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // keyType Field Functions 
        bool hasKeyType() const { return this->keyType_ != nullptr;};
        void deleteKeyType() { this->keyType_ = nullptr;};
        inline string getKeyType() const { DARABONBA_PTR_GET_DEFAULT(keyType_, "") };
        inline HotKey& setKeyType(string keyType) { DARABONBA_PTR_SET_VALUE(keyType_, keyType) };


        // nodeId Field Functions 
        bool hasNodeId() const { return this->nodeId_ != nullptr;};
        void deleteNodeId() { this->nodeId_ = nullptr;};
        inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
        inline HotKey& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


        // outBytes Field Functions 
        bool hasOutBytes() const { return this->outBytes_ != nullptr;};
        void deleteOutBytes() { this->outBytes_ = nullptr;};
        inline int64_t getOutBytes() const { DARABONBA_PTR_GET_DEFAULT(outBytes_, 0L) };
        inline HotKey& setOutBytes(int64_t outBytes) { DARABONBA_PTR_SET_VALUE(outBytes_, outBytes) };


        // size Field Functions 
        bool hasSize() const { return this->size_ != nullptr;};
        void deleteSize() { this->size_ = nullptr;};
        inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
        inline HotKey& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


      protected:
        shared_ptr<string> category_ {};
        // The database in which the key is stored.
        shared_ptr<int32_t> db_ {};
        // The frequency at which the key is accessed, which indicates the queries per second (QPS) of the key.
        shared_ptr<string> hot_ {};
        shared_ptr<int64_t> inBytes_ {};
        // The name of the key.
        shared_ptr<string> key_ {};
        // The type of the key.
        shared_ptr<string> keyType_ {};
        shared_ptr<string> nodeId_ {};
        shared_ptr<int64_t> outBytes_ {};
        // The number of elements in the key.
        shared_ptr<int64_t> size_ {};
      };

      virtual bool empty() const override { return this->hotKey_ == nullptr; };
      // hotKey Field Functions 
      bool hasHotKey() const { return this->hotKey_ != nullptr;};
      void deleteHotKey() { this->hotKey_ = nullptr;};
      inline const vector<Data::HotKey> & getHotKey() const { DARABONBA_PTR_GET_CONST(hotKey_, vector<Data::HotKey>) };
      inline vector<Data::HotKey> getHotKey() { DARABONBA_PTR_GET(hotKey_, vector<Data::HotKey>) };
      inline Data& setHotKey(const vector<Data::HotKey> & hotKey) { DARABONBA_PTR_SET_VALUE(hotKey_, hotKey) };
      inline Data& setHotKey(vector<Data::HotKey> && hotKey) { DARABONBA_PTR_SET_RVALUE(hotKey_, hotKey) };


    protected:
      shared_ptr<vector<Data::HotKey>> hotKey_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeHotKeysResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeHotKeysResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeHotKeysResponseBody::Data) };
    inline DescribeHotKeysResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeHotKeysResponseBody::Data) };
    inline DescribeHotKeysResponseBody& setData(const DescribeHotKeysResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeHotKeysResponseBody& setData(DescribeHotKeysResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeHotKeysResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeHotKeysResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline DescribeHotKeysResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code returned.
    shared_ptr<string> code_ {};
    // The details of the hot keys.
    shared_ptr<DescribeHotKeysResponseBody::Data> data_ {};
    // The returned message.
    // 
    // >  If the request was successful, Successful is returned. If the request failed, an error message such as an error code is returned.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
