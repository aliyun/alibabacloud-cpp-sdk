// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTAGKEYSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTAGKEYSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tag20180828
{
namespace Models
{
  class ListTagKeysResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTagKeysResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Keys, keys_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListTagKeysResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Keys, keys_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListTagKeysResponseBody() = default ;
    ListTagKeysResponseBody(const ListTagKeysResponseBody &) = default ;
    ListTagKeysResponseBody(ListTagKeysResponseBody &&) = default ;
    ListTagKeysResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTagKeysResponseBody() = default ;
    ListTagKeysResponseBody& operator=(const ListTagKeysResponseBody &) = default ;
    ListTagKeysResponseBody& operator=(ListTagKeysResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(Category, category_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Key, key_);
        };
        friend void from_json(const Darabonba::Json& j, Key& obj) { 
          DARABONBA_PTR_FROM_JSON(Category, category_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Key, key_);
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
        virtual bool empty() const override { return this->category_ == nullptr
        && this->description_ == nullptr && this->key_ == nullptr; };
        // category Field Functions 
        bool hasCategory() const { return this->category_ != nullptr;};
        void deleteCategory() { this->category_ = nullptr;};
        inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
        inline Key& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Key& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Key& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      protected:
        shared_ptr<string> category_ {};
        shared_ptr<string> description_ {};
        shared_ptr<string> key_ {};
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
        && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // keys Field Functions 
    bool hasKeys() const { return this->keys_ != nullptr;};
    void deleteKeys() { this->keys_ = nullptr;};
    inline const ListTagKeysResponseBody::Keys & getKeys() const { DARABONBA_PTR_GET_CONST(keys_, ListTagKeysResponseBody::Keys) };
    inline ListTagKeysResponseBody::Keys getKeys() { DARABONBA_PTR_GET(keys_, ListTagKeysResponseBody::Keys) };
    inline ListTagKeysResponseBody& setKeys(const ListTagKeysResponseBody::Keys & keys) { DARABONBA_PTR_SET_VALUE(keys_, keys) };
    inline ListTagKeysResponseBody& setKeys(ListTagKeysResponseBody::Keys && keys) { DARABONBA_PTR_SET_RVALUE(keys_, keys) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListTagKeysResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTagKeysResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<ListTagKeysResponseBody::Keys> keys_ {};
    // Indicates whether the next query is required. The value of this parameter may be empty.
    // 
    // - If the value of this parameter is empty (`"NextToken": ""`), all results are returned, and the next query is not required.
    // 
    // - If the value of this parameter is not empty, the next query is required, and the value is the token used to start the next query.
    shared_ptr<string> nextToken_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tag20180828
#endif
