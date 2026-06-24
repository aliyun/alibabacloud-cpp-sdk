// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOPENSOURCEACCOUNTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTOPENSOURCEACCOUNTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AmqpOpen20191212
{
namespace Models
{
  class ListOpenSourceAccountsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOpenSourceAccountsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListOpenSourceAccountsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListOpenSourceAccountsResponseBody() = default ;
    ListOpenSourceAccountsResponseBody(const ListOpenSourceAccountsResponseBody &) = default ;
    ListOpenSourceAccountsResponseBody(ListOpenSourceAccountsResponseBody &&) = default ;
    ListOpenSourceAccountsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOpenSourceAccountsResponseBody() = default ;
    ListOpenSourceAccountsResponseBody& operator=(const ListOpenSourceAccountsResponseBody &) = default ;
    ListOpenSourceAccountsResponseBody& operator=(ListOpenSourceAccountsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AliyunUserId, aliyunUserId_);
        DARABONBA_PTR_TO_JSON(CInstanceId, CInstanceId_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(ExtraJson, extraJson_);
        DARABONBA_PTR_TO_JSON(HashingAlgorithm, hashingAlgorithm_);
        DARABONBA_PTR_TO_JSON(Limits, limits_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(PasswordHash, passwordHash_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(WeakPassword, weakPassword_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AliyunUserId, aliyunUserId_);
        DARABONBA_PTR_FROM_JSON(CInstanceId, CInstanceId_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(ExtraJson, extraJson_);
        DARABONBA_PTR_FROM_JSON(HashingAlgorithm, hashingAlgorithm_);
        DARABONBA_PTR_FROM_JSON(Limits, limits_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(PasswordHash, passwordHash_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(WeakPassword, weakPassword_);
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
      virtual bool empty() const override { return this->aliyunUserId_ == nullptr
        && this->CInstanceId_ == nullptr && this->createTime_ == nullptr && this->extraJson_ == nullptr && this->hashingAlgorithm_ == nullptr && this->limits_ == nullptr
        && this->name_ == nullptr && this->passwordHash_ == nullptr && this->tags_ == nullptr && this->weakPassword_ == nullptr; };
      // aliyunUserId Field Functions 
      bool hasAliyunUserId() const { return this->aliyunUserId_ != nullptr;};
      void deleteAliyunUserId() { this->aliyunUserId_ = nullptr;};
      inline int64_t getAliyunUserId() const { DARABONBA_PTR_GET_DEFAULT(aliyunUserId_, 0L) };
      inline Data& setAliyunUserId(int64_t aliyunUserId) { DARABONBA_PTR_SET_VALUE(aliyunUserId_, aliyunUserId) };


      // CInstanceId Field Functions 
      bool hasCInstanceId() const { return this->CInstanceId_ != nullptr;};
      void deleteCInstanceId() { this->CInstanceId_ = nullptr;};
      inline string getCInstanceId() const { DARABONBA_PTR_GET_DEFAULT(CInstanceId_, "") };
      inline Data& setCInstanceId(string CInstanceId) { DARABONBA_PTR_SET_VALUE(CInstanceId_, CInstanceId) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Data& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // extraJson Field Functions 
      bool hasExtraJson() const { return this->extraJson_ != nullptr;};
      void deleteExtraJson() { this->extraJson_ = nullptr;};
      inline string getExtraJson() const { DARABONBA_PTR_GET_DEFAULT(extraJson_, "") };
      inline Data& setExtraJson(string extraJson) { DARABONBA_PTR_SET_VALUE(extraJson_, extraJson) };


      // hashingAlgorithm Field Functions 
      bool hasHashingAlgorithm() const { return this->hashingAlgorithm_ != nullptr;};
      void deleteHashingAlgorithm() { this->hashingAlgorithm_ = nullptr;};
      inline string getHashingAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(hashingAlgorithm_, "") };
      inline Data& setHashingAlgorithm(string hashingAlgorithm) { DARABONBA_PTR_SET_VALUE(hashingAlgorithm_, hashingAlgorithm) };


      // limits Field Functions 
      bool hasLimits() const { return this->limits_ != nullptr;};
      void deleteLimits() { this->limits_ = nullptr;};
      inline string getLimits() const { DARABONBA_PTR_GET_DEFAULT(limits_, "") };
      inline Data& setLimits(string limits) { DARABONBA_PTR_SET_VALUE(limits_, limits) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // passwordHash Field Functions 
      bool hasPasswordHash() const { return this->passwordHash_ != nullptr;};
      void deletePasswordHash() { this->passwordHash_ = nullptr;};
      inline string getPasswordHash() const { DARABONBA_PTR_GET_DEFAULT(passwordHash_, "") };
      inline Data& setPasswordHash(string passwordHash) { DARABONBA_PTR_SET_VALUE(passwordHash_, passwordHash) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline string getTags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
      inline Data& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


      // weakPassword Field Functions 
      bool hasWeakPassword() const { return this->weakPassword_ != nullptr;};
      void deleteWeakPassword() { this->weakPassword_ = nullptr;};
      inline bool getWeakPassword() const { DARABONBA_PTR_GET_DEFAULT(weakPassword_, false) };
      inline Data& setWeakPassword(bool weakPassword) { DARABONBA_PTR_SET_VALUE(weakPassword_, weakPassword) };


    protected:
      // The Alibaba Cloud UID.
      shared_ptr<int64_t> aliyunUserId_ {};
      // The instance ID.
      shared_ptr<string> CInstanceId_ {};
      // The time when the user was created.
      shared_ptr<string> createTime_ {};
      // The description.
      shared_ptr<string> extraJson_ {};
      // The hash algorithm.
      shared_ptr<string> hashingAlgorithm_ {};
      // The quota configuration.
      shared_ptr<string> limits_ {};
      // The username.
      shared_ptr<string> name_ {};
      // The password hash.
      shared_ptr<string> passwordHash_ {};
      // The tags.
      shared_ptr<string> tags_ {};
      // Indicates whether the password is a weak password. Valid values:
      // - 0: No.
      // - 1: Yes.
      shared_ptr<bool> weakPassword_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->maxResults_ == nullptr && this->message_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListOpenSourceAccountsResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListOpenSourceAccountsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListOpenSourceAccountsResponseBody::Data>) };
    inline vector<ListOpenSourceAccountsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListOpenSourceAccountsResponseBody::Data>) };
    inline ListOpenSourceAccountsResponseBody& setData(const vector<ListOpenSourceAccountsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListOpenSourceAccountsResponseBody& setData(vector<ListOpenSourceAccountsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListOpenSourceAccountsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListOpenSourceAccountsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListOpenSourceAccountsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListOpenSourceAccountsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListOpenSourceAccountsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code.
    shared_ptr<int32_t> code_ {};
    // The returned data.
    shared_ptr<vector<ListOpenSourceAccountsResponseBody::Data>> data_ {};
    // The maximum number of entries to return.
    shared_ptr<int32_t> maxResults_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The token that marks the end of the current query. This token is passed as a parameter in the next call to continue pagination. Set this parameter to an empty string for the first call or when the last page is returned.
    shared_ptr<string> nextToken_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // Indicates whether the call was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AmqpOpen20191212
#endif
