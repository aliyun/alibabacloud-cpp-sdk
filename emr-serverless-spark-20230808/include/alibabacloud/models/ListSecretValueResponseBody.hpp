// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSECRETVALUERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSECRETVALUERESPONSEBODY_HPP_
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
  class ListSecretValueResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSecretValueResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(secrets, secrets_);
    };
    friend void from_json(const Darabonba::Json& j, ListSecretValueResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(secrets, secrets_);
    };
    ListSecretValueResponseBody() = default ;
    ListSecretValueResponseBody(const ListSecretValueResponseBody &) = default ;
    ListSecretValueResponseBody(ListSecretValueResponseBody &&) = default ;
    ListSecretValueResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSecretValueResponseBody() = default ;
    ListSecretValueResponseBody& operator=(const ListSecretValueResponseBody &) = default ;
    ListSecretValueResponseBody& operator=(ListSecretValueResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Secrets : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Secrets& obj) { 
        DARABONBA_PTR_TO_JSON(comment, comment_);
        DARABONBA_PTR_TO_JSON(content, content_);
        DARABONBA_PTR_TO_JSON(createTime, createTime_);
        DARABONBA_PTR_TO_JSON(creator, creator_);
        DARABONBA_PTR_TO_JSON(creatorName, creatorName_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(secretId, secretId_);
        DARABONBA_PTR_TO_JSON(secretType, secretType_);
      };
      friend void from_json(const Darabonba::Json& j, Secrets& obj) { 
        DARABONBA_PTR_FROM_JSON(comment, comment_);
        DARABONBA_PTR_FROM_JSON(content, content_);
        DARABONBA_PTR_FROM_JSON(createTime, createTime_);
        DARABONBA_PTR_FROM_JSON(creator, creator_);
        DARABONBA_PTR_FROM_JSON(creatorName, creatorName_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(secretId, secretId_);
        DARABONBA_PTR_FROM_JSON(secretType, secretType_);
      };
      Secrets() = default ;
      Secrets(const Secrets &) = default ;
      Secrets(Secrets &&) = default ;
      Secrets(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Secrets() = default ;
      Secrets& operator=(const Secrets &) = default ;
      Secrets& operator=(Secrets &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->comment_ == nullptr
        && this->content_ == nullptr && this->createTime_ == nullptr && this->creator_ == nullptr && this->creatorName_ == nullptr && this->name_ == nullptr
        && this->secretId_ == nullptr && this->secretType_ == nullptr; };
      // comment Field Functions 
      bool hasComment() const { return this->comment_ != nullptr;};
      void deleteComment() { this->comment_ = nullptr;};
      inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
      inline Secrets& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline Secrets& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline Secrets& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // creator Field Functions 
      bool hasCreator() const { return this->creator_ != nullptr;};
      void deleteCreator() { this->creator_ = nullptr;};
      inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
      inline Secrets& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


      // creatorName Field Functions 
      bool hasCreatorName() const { return this->creatorName_ != nullptr;};
      void deleteCreatorName() { this->creatorName_ = nullptr;};
      inline string getCreatorName() const { DARABONBA_PTR_GET_DEFAULT(creatorName_, "") };
      inline Secrets& setCreatorName(string creatorName) { DARABONBA_PTR_SET_VALUE(creatorName_, creatorName) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Secrets& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // secretId Field Functions 
      bool hasSecretId() const { return this->secretId_ != nullptr;};
      void deleteSecretId() { this->secretId_ = nullptr;};
      inline string getSecretId() const { DARABONBA_PTR_GET_DEFAULT(secretId_, "") };
      inline Secrets& setSecretId(string secretId) { DARABONBA_PTR_SET_VALUE(secretId_, secretId) };


      // secretType Field Functions 
      bool hasSecretType() const { return this->secretType_ != nullptr;};
      void deleteSecretType() { this->secretType_ = nullptr;};
      inline string getSecretType() const { DARABONBA_PTR_GET_DEFAULT(secretType_, "") };
      inline Secrets& setSecretType(string secretType) { DARABONBA_PTR_SET_VALUE(secretType_, secretType) };


    protected:
      // The comment.
      shared_ptr<string> comment_ {};
      // The secret content.
      shared_ptr<string> content_ {};
      // The creation time. The value is a UNIX timestamp in milliseconds.
      shared_ptr<int64_t> createTime_ {};
      // The UID of the creator.
      shared_ptr<string> creator_ {};
      // The nickname of the creator.
      shared_ptr<string> creatorName_ {};
      // The secret name.
      shared_ptr<string> name_ {};
      // The secret ID.
      shared_ptr<string> secretId_ {};
      // The secret type. The value is fixed to secret.
      shared_ptr<string> secretType_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->secrets_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSecretValueResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // secrets Field Functions 
    bool hasSecrets() const { return this->secrets_ != nullptr;};
    void deleteSecrets() { this->secrets_ = nullptr;};
    inline const vector<ListSecretValueResponseBody::Secrets> & getSecrets() const { DARABONBA_PTR_GET_CONST(secrets_, vector<ListSecretValueResponseBody::Secrets>) };
    inline vector<ListSecretValueResponseBody::Secrets> getSecrets() { DARABONBA_PTR_GET(secrets_, vector<ListSecretValueResponseBody::Secrets>) };
    inline ListSecretValueResponseBody& setSecrets(const vector<ListSecretValueResponseBody::Secrets> & secrets) { DARABONBA_PTR_SET_VALUE(secrets_, secrets) };
    inline ListSecretValueResponseBody& setSecrets(vector<ListSecretValueResponseBody::Secrets> && secrets) { DARABONBA_PTR_SET_RVALUE(secrets_, secrets) };


  protected:
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The list of secrets.
    shared_ptr<vector<ListSecretValueResponseBody::Secrets>> secrets_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
