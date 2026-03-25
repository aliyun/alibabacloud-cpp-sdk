// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIMPORTABLEKMSSECRETSFORHOSTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTIMPORTABLEKMSSECRETSFORHOSTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ListImportableKMSSecretsForHostResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListImportableKMSSecretsForHostResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Secrets, secrets_);
    };
    friend void from_json(const Darabonba::Json& j, ListImportableKMSSecretsForHostResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Secrets, secrets_);
    };
    ListImportableKMSSecretsForHostResponseBody() = default ;
    ListImportableKMSSecretsForHostResponseBody(const ListImportableKMSSecretsForHostResponseBody &) = default ;
    ListImportableKMSSecretsForHostResponseBody(ListImportableKMSSecretsForHostResponseBody &&) = default ;
    ListImportableKMSSecretsForHostResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListImportableKMSSecretsForHostResponseBody() = default ;
    ListImportableKMSSecretsForHostResponseBody& operator=(const ListImportableKMSSecretsForHostResponseBody &) = default ;
    ListImportableKMSSecretsForHostResponseBody& operator=(ListImportableKMSSecretsForHostResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Secrets : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Secrets& obj) { 
        DARABONBA_PTR_TO_JSON(SecretName, secretName_);
        DARABONBA_PTR_TO_JSON(SecretType, secretType_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
      };
      friend void from_json(const Darabonba::Json& j, Secrets& obj) { 
        DARABONBA_PTR_FROM_JSON(SecretName, secretName_);
        DARABONBA_PTR_FROM_JSON(SecretType, secretType_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
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
      virtual bool empty() const override { return this->secretName_ == nullptr
        && this->secretType_ == nullptr && this->tags_ == nullptr; };
      // secretName Field Functions 
      bool hasSecretName() const { return this->secretName_ != nullptr;};
      void deleteSecretName() { this->secretName_ = nullptr;};
      inline string getSecretName() const { DARABONBA_PTR_GET_DEFAULT(secretName_, "") };
      inline Secrets& setSecretName(string secretName) { DARABONBA_PTR_SET_VALUE(secretName_, secretName) };


      // secretType Field Functions 
      bool hasSecretType() const { return this->secretType_ != nullptr;};
      void deleteSecretType() { this->secretType_ = nullptr;};
      inline string getSecretType() const { DARABONBA_PTR_GET_DEFAULT(secretType_, "") };
      inline Secrets& setSecretType(string secretType) { DARABONBA_PTR_SET_VALUE(secretType_, secretType) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline string getTags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
      inline Secrets& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


    protected:
      shared_ptr<string> secretName_ {};
      shared_ptr<string> secretType_ {};
      shared_ptr<string> tags_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->secrets_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListImportableKMSSecretsForHostResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListImportableKMSSecretsForHostResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListImportableKMSSecretsForHostResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // secrets Field Functions 
    bool hasSecrets() const { return this->secrets_ != nullptr;};
    void deleteSecrets() { this->secrets_ = nullptr;};
    inline const vector<ListImportableKMSSecretsForHostResponseBody::Secrets> & getSecrets() const { DARABONBA_PTR_GET_CONST(secrets_, vector<ListImportableKMSSecretsForHostResponseBody::Secrets>) };
    inline vector<ListImportableKMSSecretsForHostResponseBody::Secrets> getSecrets() { DARABONBA_PTR_GET(secrets_, vector<ListImportableKMSSecretsForHostResponseBody::Secrets>) };
    inline ListImportableKMSSecretsForHostResponseBody& setSecrets(const vector<ListImportableKMSSecretsForHostResponseBody::Secrets> & secrets) { DARABONBA_PTR_SET_VALUE(secrets_, secrets) };
    inline ListImportableKMSSecretsForHostResponseBody& setSecrets(vector<ListImportableKMSSecretsForHostResponseBody::Secrets> && secrets) { DARABONBA_PTR_SET_RVALUE(secrets_, secrets) };


  protected:
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<ListImportableKMSSecretsForHostResponseBody::Secrets>> secrets_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
