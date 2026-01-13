// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTKYUUBITOKENRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTKYUUBITOKENRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class ListKyuubiTokenResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListKyuubiTokenResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListKyuubiTokenResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListKyuubiTokenResponseBody() = default ;
    ListKyuubiTokenResponseBody(const ListKyuubiTokenResponseBody &) = default ;
    ListKyuubiTokenResponseBody(ListKyuubiTokenResponseBody &&) = default ;
    ListKyuubiTokenResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListKyuubiTokenResponseBody() = default ;
    ListKyuubiTokenResponseBody& operator=(const ListKyuubiTokenResponseBody &) = default ;
    ListKyuubiTokenResponseBody& operator=(ListKyuubiTokenResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(tokens, tokens_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(tokens, tokens_);
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
      class Tokens : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tokens& obj) { 
          DARABONBA_PTR_TO_JSON(accountNames, accountNames_);
          DARABONBA_PTR_TO_JSON(createTime, createTime_);
          DARABONBA_PTR_TO_JSON(createdBy, createdBy_);
          DARABONBA_PTR_TO_JSON(expireTime, expireTime_);
          DARABONBA_PTR_TO_JSON(lastUsedTime, lastUsedTime_);
          DARABONBA_PTR_TO_JSON(memberArns, memberArns_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(token, token_);
          DARABONBA_PTR_TO_JSON(tokenId, tokenId_);
        };
        friend void from_json(const Darabonba::Json& j, Tokens& obj) { 
          DARABONBA_PTR_FROM_JSON(accountNames, accountNames_);
          DARABONBA_PTR_FROM_JSON(createTime, createTime_);
          DARABONBA_PTR_FROM_JSON(createdBy, createdBy_);
          DARABONBA_PTR_FROM_JSON(expireTime, expireTime_);
          DARABONBA_PTR_FROM_JSON(lastUsedTime, lastUsedTime_);
          DARABONBA_PTR_FROM_JSON(memberArns, memberArns_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(token, token_);
          DARABONBA_PTR_FROM_JSON(tokenId, tokenId_);
        };
        Tokens() = default ;
        Tokens(const Tokens &) = default ;
        Tokens(Tokens &&) = default ;
        Tokens(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tokens() = default ;
        Tokens& operator=(const Tokens &) = default ;
        Tokens& operator=(Tokens &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->accountNames_ == nullptr
        && this->createTime_ == nullptr && this->createdBy_ == nullptr && this->expireTime_ == nullptr && this->lastUsedTime_ == nullptr && this->memberArns_ == nullptr
        && this->name_ == nullptr && this->token_ == nullptr && this->tokenId_ == nullptr; };
        // accountNames Field Functions 
        bool hasAccountNames() const { return this->accountNames_ != nullptr;};
        void deleteAccountNames() { this->accountNames_ = nullptr;};
        inline const vector<string> & getAccountNames() const { DARABONBA_PTR_GET_CONST(accountNames_, vector<string>) };
        inline vector<string> getAccountNames() { DARABONBA_PTR_GET(accountNames_, vector<string>) };
        inline Tokens& setAccountNames(const vector<string> & accountNames) { DARABONBA_PTR_SET_VALUE(accountNames_, accountNames) };
        inline Tokens& setAccountNames(vector<string> && accountNames) { DARABONBA_PTR_SET_RVALUE(accountNames_, accountNames) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline Tokens& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // createdBy Field Functions 
        bool hasCreatedBy() const { return this->createdBy_ != nullptr;};
        void deleteCreatedBy() { this->createdBy_ = nullptr;};
        inline string getCreatedBy() const { DARABONBA_PTR_GET_DEFAULT(createdBy_, "") };
        inline Tokens& setCreatedBy(string createdBy) { DARABONBA_PTR_SET_VALUE(createdBy_, createdBy) };


        // expireTime Field Functions 
        bool hasExpireTime() const { return this->expireTime_ != nullptr;};
        void deleteExpireTime() { this->expireTime_ = nullptr;};
        inline int64_t getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0L) };
        inline Tokens& setExpireTime(int64_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


        // lastUsedTime Field Functions 
        bool hasLastUsedTime() const { return this->lastUsedTime_ != nullptr;};
        void deleteLastUsedTime() { this->lastUsedTime_ = nullptr;};
        inline int64_t getLastUsedTime() const { DARABONBA_PTR_GET_DEFAULT(lastUsedTime_, 0L) };
        inline Tokens& setLastUsedTime(int64_t lastUsedTime) { DARABONBA_PTR_SET_VALUE(lastUsedTime_, lastUsedTime) };


        // memberArns Field Functions 
        bool hasMemberArns() const { return this->memberArns_ != nullptr;};
        void deleteMemberArns() { this->memberArns_ = nullptr;};
        inline const vector<string> & getMemberArns() const { DARABONBA_PTR_GET_CONST(memberArns_, vector<string>) };
        inline vector<string> getMemberArns() { DARABONBA_PTR_GET(memberArns_, vector<string>) };
        inline Tokens& setMemberArns(const vector<string> & memberArns) { DARABONBA_PTR_SET_VALUE(memberArns_, memberArns) };
        inline Tokens& setMemberArns(vector<string> && memberArns) { DARABONBA_PTR_SET_RVALUE(memberArns_, memberArns) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Tokens& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // token Field Functions 
        bool hasToken() const { return this->token_ != nullptr;};
        void deleteToken() { this->token_ = nullptr;};
        inline string getToken() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
        inline Tokens& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


        // tokenId Field Functions 
        bool hasTokenId() const { return this->tokenId_ != nullptr;};
        void deleteTokenId() { this->tokenId_ = nullptr;};
        inline string getTokenId() const { DARABONBA_PTR_GET_DEFAULT(tokenId_, "") };
        inline Tokens& setTokenId(string tokenId) { DARABONBA_PTR_SET_VALUE(tokenId_, tokenId) };


      protected:
        shared_ptr<vector<string>> accountNames_ {};
        shared_ptr<int64_t> createTime_ {};
        shared_ptr<string> createdBy_ {};
        shared_ptr<int64_t> expireTime_ {};
        shared_ptr<int64_t> lastUsedTime_ {};
        shared_ptr<vector<string>> memberArns_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> token_ {};
        // Token ID。
        shared_ptr<string> tokenId_ {};
      };

      virtual bool empty() const override { return this->tokens_ == nullptr; };
      // tokens Field Functions 
      bool hasTokens() const { return this->tokens_ != nullptr;};
      void deleteTokens() { this->tokens_ = nullptr;};
      inline const vector<Data::Tokens> & getTokens() const { DARABONBA_PTR_GET_CONST(tokens_, vector<Data::Tokens>) };
      inline vector<Data::Tokens> getTokens() { DARABONBA_PTR_GET(tokens_, vector<Data::Tokens>) };
      inline Data& setTokens(const vector<Data::Tokens> & tokens) { DARABONBA_PTR_SET_VALUE(tokens_, tokens) };
      inline Data& setTokens(vector<Data::Tokens> && tokens) { DARABONBA_PTR_SET_RVALUE(tokens_, tokens) };


    protected:
      shared_ptr<vector<Data::Tokens>> tokens_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListKyuubiTokenResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListKyuubiTokenResponseBody::Data) };
    inline ListKyuubiTokenResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListKyuubiTokenResponseBody::Data) };
    inline ListKyuubiTokenResponseBody& setData(const ListKyuubiTokenResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListKyuubiTokenResponseBody& setData(ListKyuubiTokenResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListKyuubiTokenResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<ListKyuubiTokenResponseBody::Data> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
