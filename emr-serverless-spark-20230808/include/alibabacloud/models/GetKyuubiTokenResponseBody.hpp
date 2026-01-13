// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETKYUUBITOKENRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETKYUUBITOKENRESPONSEBODY_HPP_
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
  class GetKyuubiTokenResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetKyuubiTokenResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetKyuubiTokenResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetKyuubiTokenResponseBody() = default ;
    GetKyuubiTokenResponseBody(const GetKyuubiTokenResponseBody &) = default ;
    GetKyuubiTokenResponseBody(GetKyuubiTokenResponseBody &&) = default ;
    GetKyuubiTokenResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetKyuubiTokenResponseBody() = default ;
    GetKyuubiTokenResponseBody& operator=(const GetKyuubiTokenResponseBody &) = default ;
    GetKyuubiTokenResponseBody& operator=(GetKyuubiTokenResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(autoExpireConfiguration, autoExpireConfiguration_);
        DARABONBA_PTR_TO_JSON(createTime, createTime_);
        DARABONBA_PTR_TO_JSON(createdBy, createdBy_);
        DARABONBA_PTR_TO_JSON(expireTime, expireTime_);
        DARABONBA_PTR_TO_JSON(lastUsedTime, lastUsedTime_);
        DARABONBA_PTR_TO_JSON(memberArns, memberArns_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(token, token_);
        DARABONBA_PTR_TO_JSON(tokenId, tokenId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(autoExpireConfiguration, autoExpireConfiguration_);
        DARABONBA_PTR_FROM_JSON(createTime, createTime_);
        DARABONBA_PTR_FROM_JSON(createdBy, createdBy_);
        DARABONBA_PTR_FROM_JSON(expireTime, expireTime_);
        DARABONBA_PTR_FROM_JSON(lastUsedTime, lastUsedTime_);
        DARABONBA_PTR_FROM_JSON(memberArns, memberArns_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(token, token_);
        DARABONBA_PTR_FROM_JSON(tokenId, tokenId_);
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
      class AutoExpireConfiguration : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AutoExpireConfiguration& obj) { 
          DARABONBA_PTR_TO_JSON(enable, enable_);
          DARABONBA_PTR_TO_JSON(expireDays, expireDays_);
        };
        friend void from_json(const Darabonba::Json& j, AutoExpireConfiguration& obj) { 
          DARABONBA_PTR_FROM_JSON(enable, enable_);
          DARABONBA_PTR_FROM_JSON(expireDays, expireDays_);
        };
        AutoExpireConfiguration() = default ;
        AutoExpireConfiguration(const AutoExpireConfiguration &) = default ;
        AutoExpireConfiguration(AutoExpireConfiguration &&) = default ;
        AutoExpireConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AutoExpireConfiguration() = default ;
        AutoExpireConfiguration& operator=(const AutoExpireConfiguration &) = default ;
        AutoExpireConfiguration& operator=(AutoExpireConfiguration &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->enable_ == nullptr
        && this->expireDays_ == nullptr; };
        // enable Field Functions 
        bool hasEnable() const { return this->enable_ != nullptr;};
        void deleteEnable() { this->enable_ = nullptr;};
        inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
        inline AutoExpireConfiguration& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


        // expireDays Field Functions 
        bool hasExpireDays() const { return this->expireDays_ != nullptr;};
        void deleteExpireDays() { this->expireDays_ = nullptr;};
        inline int32_t getExpireDays() const { DARABONBA_PTR_GET_DEFAULT(expireDays_, 0) };
        inline AutoExpireConfiguration& setExpireDays(int32_t expireDays) { DARABONBA_PTR_SET_VALUE(expireDays_, expireDays) };


      protected:
        shared_ptr<bool> enable_ {};
        shared_ptr<int32_t> expireDays_ {};
      };

      virtual bool empty() const override { return this->autoExpireConfiguration_ == nullptr
        && this->createTime_ == nullptr && this->createdBy_ == nullptr && this->expireTime_ == nullptr && this->lastUsedTime_ == nullptr && this->memberArns_ == nullptr
        && this->name_ == nullptr && this->token_ == nullptr && this->tokenId_ == nullptr; };
      // autoExpireConfiguration Field Functions 
      bool hasAutoExpireConfiguration() const { return this->autoExpireConfiguration_ != nullptr;};
      void deleteAutoExpireConfiguration() { this->autoExpireConfiguration_ = nullptr;};
      inline const Data::AutoExpireConfiguration & getAutoExpireConfiguration() const { DARABONBA_PTR_GET_CONST(autoExpireConfiguration_, Data::AutoExpireConfiguration) };
      inline Data::AutoExpireConfiguration getAutoExpireConfiguration() { DARABONBA_PTR_GET(autoExpireConfiguration_, Data::AutoExpireConfiguration) };
      inline Data& setAutoExpireConfiguration(const Data::AutoExpireConfiguration & autoExpireConfiguration) { DARABONBA_PTR_SET_VALUE(autoExpireConfiguration_, autoExpireConfiguration) };
      inline Data& setAutoExpireConfiguration(Data::AutoExpireConfiguration && autoExpireConfiguration) { DARABONBA_PTR_SET_RVALUE(autoExpireConfiguration_, autoExpireConfiguration) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline Data& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // createdBy Field Functions 
      bool hasCreatedBy() const { return this->createdBy_ != nullptr;};
      void deleteCreatedBy() { this->createdBy_ = nullptr;};
      inline string getCreatedBy() const { DARABONBA_PTR_GET_DEFAULT(createdBy_, "") };
      inline Data& setCreatedBy(string createdBy) { DARABONBA_PTR_SET_VALUE(createdBy_, createdBy) };


      // expireTime Field Functions 
      bool hasExpireTime() const { return this->expireTime_ != nullptr;};
      void deleteExpireTime() { this->expireTime_ = nullptr;};
      inline int64_t getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0L) };
      inline Data& setExpireTime(int64_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


      // lastUsedTime Field Functions 
      bool hasLastUsedTime() const { return this->lastUsedTime_ != nullptr;};
      void deleteLastUsedTime() { this->lastUsedTime_ = nullptr;};
      inline int64_t getLastUsedTime() const { DARABONBA_PTR_GET_DEFAULT(lastUsedTime_, 0L) };
      inline Data& setLastUsedTime(int64_t lastUsedTime) { DARABONBA_PTR_SET_VALUE(lastUsedTime_, lastUsedTime) };


      // memberArns Field Functions 
      bool hasMemberArns() const { return this->memberArns_ != nullptr;};
      void deleteMemberArns() { this->memberArns_ = nullptr;};
      inline const vector<string> & getMemberArns() const { DARABONBA_PTR_GET_CONST(memberArns_, vector<string>) };
      inline vector<string> getMemberArns() { DARABONBA_PTR_GET(memberArns_, vector<string>) };
      inline Data& setMemberArns(const vector<string> & memberArns) { DARABONBA_PTR_SET_VALUE(memberArns_, memberArns) };
      inline Data& setMemberArns(vector<string> && memberArns) { DARABONBA_PTR_SET_RVALUE(memberArns_, memberArns) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // token Field Functions 
      bool hasToken() const { return this->token_ != nullptr;};
      void deleteToken() { this->token_ = nullptr;};
      inline string getToken() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
      inline Data& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


      // tokenId Field Functions 
      bool hasTokenId() const { return this->tokenId_ != nullptr;};
      void deleteTokenId() { this->tokenId_ = nullptr;};
      inline string getTokenId() const { DARABONBA_PTR_GET_DEFAULT(tokenId_, "") };
      inline Data& setTokenId(string tokenId) { DARABONBA_PTR_SET_VALUE(tokenId_, tokenId) };


    protected:
      shared_ptr<Data::AutoExpireConfiguration> autoExpireConfiguration_ {};
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

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetKyuubiTokenResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetKyuubiTokenResponseBody::Data) };
    inline GetKyuubiTokenResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetKyuubiTokenResponseBody::Data) };
    inline GetKyuubiTokenResponseBody& setData(const GetKyuubiTokenResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetKyuubiTokenResponseBody& setData(GetKyuubiTokenResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetKyuubiTokenResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetKyuubiTokenResponseBody::Data> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
