// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYQUALIFICATIONDETAILRESPONSEBODYCREDENTIALS_HPP_
#define ALIBABACLOUD_MODELS_QUERYQUALIFICATIONDETAILRESPONSEBODYCREDENTIALS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryQualificationDetailResponseBodyCredentialsQualificationCredential.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class QueryQualificationDetailResponseBodyCredentials : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryQualificationDetailResponseBodyCredentials& obj) { 
      DARABONBA_PTR_TO_JSON(QualificationCredential, qualificationCredential_);
    };
    friend void from_json(const Darabonba::Json& j, QueryQualificationDetailResponseBodyCredentials& obj) { 
      DARABONBA_PTR_FROM_JSON(QualificationCredential, qualificationCredential_);
    };
    QueryQualificationDetailResponseBodyCredentials() = default ;
    QueryQualificationDetailResponseBodyCredentials(const QueryQualificationDetailResponseBodyCredentials &) = default ;
    QueryQualificationDetailResponseBodyCredentials(QueryQualificationDetailResponseBodyCredentials &&) = default ;
    QueryQualificationDetailResponseBodyCredentials(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryQualificationDetailResponseBodyCredentials() = default ;
    QueryQualificationDetailResponseBodyCredentials& operator=(const QueryQualificationDetailResponseBodyCredentials &) = default ;
    QueryQualificationDetailResponseBodyCredentials& operator=(QueryQualificationDetailResponseBodyCredentials &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->qualificationCredential_ == nullptr; };
    // qualificationCredential Field Functions 
    bool hasQualificationCredential() const { return this->qualificationCredential_ != nullptr;};
    void deleteQualificationCredential() { this->qualificationCredential_ = nullptr;};
    inline const vector<Models::QueryQualificationDetailResponseBodyCredentialsQualificationCredential> & qualificationCredential() const { DARABONBA_PTR_GET_CONST(qualificationCredential_, vector<Models::QueryQualificationDetailResponseBodyCredentialsQualificationCredential>) };
    inline vector<Models::QueryQualificationDetailResponseBodyCredentialsQualificationCredential> qualificationCredential() { DARABONBA_PTR_GET(qualificationCredential_, vector<Models::QueryQualificationDetailResponseBodyCredentialsQualificationCredential>) };
    inline QueryQualificationDetailResponseBodyCredentials& setQualificationCredential(const vector<Models::QueryQualificationDetailResponseBodyCredentialsQualificationCredential> & qualificationCredential) { DARABONBA_PTR_SET_VALUE(qualificationCredential_, qualificationCredential) };
    inline QueryQualificationDetailResponseBodyCredentials& setQualificationCredential(vector<Models::QueryQualificationDetailResponseBodyCredentialsQualificationCredential> && qualificationCredential) { DARABONBA_PTR_SET_RVALUE(qualificationCredential_, qualificationCredential) };


  protected:
    std::shared_ptr<vector<Models::QueryQualificationDetailResponseBodyCredentialsQualificationCredential>> qualificationCredential_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
