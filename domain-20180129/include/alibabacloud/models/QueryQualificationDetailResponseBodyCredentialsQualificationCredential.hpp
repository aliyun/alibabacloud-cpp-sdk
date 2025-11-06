// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYQUALIFICATIONDETAILRESPONSEBODYCREDENTIALSQUALIFICATIONCREDENTIAL_HPP_
#define ALIBABACLOUD_MODELS_QUERYQUALIFICATIONDETAILRESPONSEBODYCREDENTIALSQUALIFICATIONCREDENTIAL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class QueryQualificationDetailResponseBodyCredentialsQualificationCredential : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryQualificationDetailResponseBodyCredentialsQualificationCredential& obj) { 
      DARABONBA_PTR_TO_JSON(CredentialNo, credentialNo_);
      DARABONBA_PTR_TO_JSON(CredentialType, credentialType_);
      DARABONBA_PTR_TO_JSON(CredentialUrl, credentialUrl_);
    };
    friend void from_json(const Darabonba::Json& j, QueryQualificationDetailResponseBodyCredentialsQualificationCredential& obj) { 
      DARABONBA_PTR_FROM_JSON(CredentialNo, credentialNo_);
      DARABONBA_PTR_FROM_JSON(CredentialType, credentialType_);
      DARABONBA_PTR_FROM_JSON(CredentialUrl, credentialUrl_);
    };
    QueryQualificationDetailResponseBodyCredentialsQualificationCredential() = default ;
    QueryQualificationDetailResponseBodyCredentialsQualificationCredential(const QueryQualificationDetailResponseBodyCredentialsQualificationCredential &) = default ;
    QueryQualificationDetailResponseBodyCredentialsQualificationCredential(QueryQualificationDetailResponseBodyCredentialsQualificationCredential &&) = default ;
    QueryQualificationDetailResponseBodyCredentialsQualificationCredential(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryQualificationDetailResponseBodyCredentialsQualificationCredential() = default ;
    QueryQualificationDetailResponseBodyCredentialsQualificationCredential& operator=(const QueryQualificationDetailResponseBodyCredentialsQualificationCredential &) = default ;
    QueryQualificationDetailResponseBodyCredentialsQualificationCredential& operator=(QueryQualificationDetailResponseBodyCredentialsQualificationCredential &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->credentialNo_ == nullptr
        && return this->credentialType_ == nullptr && return this->credentialUrl_ == nullptr; };
    // credentialNo Field Functions 
    bool hasCredentialNo() const { return this->credentialNo_ != nullptr;};
    void deleteCredentialNo() { this->credentialNo_ = nullptr;};
    inline string credentialNo() const { DARABONBA_PTR_GET_DEFAULT(credentialNo_, "") };
    inline QueryQualificationDetailResponseBodyCredentialsQualificationCredential& setCredentialNo(string credentialNo) { DARABONBA_PTR_SET_VALUE(credentialNo_, credentialNo) };


    // credentialType Field Functions 
    bool hasCredentialType() const { return this->credentialType_ != nullptr;};
    void deleteCredentialType() { this->credentialType_ = nullptr;};
    inline string credentialType() const { DARABONBA_PTR_GET_DEFAULT(credentialType_, "") };
    inline QueryQualificationDetailResponseBodyCredentialsQualificationCredential& setCredentialType(string credentialType) { DARABONBA_PTR_SET_VALUE(credentialType_, credentialType) };


    // credentialUrl Field Functions 
    bool hasCredentialUrl() const { return this->credentialUrl_ != nullptr;};
    void deleteCredentialUrl() { this->credentialUrl_ = nullptr;};
    inline string credentialUrl() const { DARABONBA_PTR_GET_DEFAULT(credentialUrl_, "") };
    inline QueryQualificationDetailResponseBodyCredentialsQualificationCredential& setCredentialUrl(string credentialUrl) { DARABONBA_PTR_SET_VALUE(credentialUrl_, credentialUrl) };


  protected:
    std::shared_ptr<string> credentialNo_ = nullptr;
    std::shared_ptr<string> credentialType_ = nullptr;
    std::shared_ptr<string> credentialUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
