// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPOLICYVERSIONSRESPONSEBODYPOLICYVERSIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTPOLICYVERSIONSRESPONSEBODYPOLICYVERSIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListPolicyVersionsResponseBodyPolicyVersionsPolicyVersion.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class ListPolicyVersionsResponseBodyPolicyVersions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPolicyVersionsResponseBodyPolicyVersions& obj) { 
      DARABONBA_PTR_TO_JSON(PolicyVersion, policyVersion_);
    };
    friend void from_json(const Darabonba::Json& j, ListPolicyVersionsResponseBodyPolicyVersions& obj) { 
      DARABONBA_PTR_FROM_JSON(PolicyVersion, policyVersion_);
    };
    ListPolicyVersionsResponseBodyPolicyVersions() = default ;
    ListPolicyVersionsResponseBodyPolicyVersions(const ListPolicyVersionsResponseBodyPolicyVersions &) = default ;
    ListPolicyVersionsResponseBodyPolicyVersions(ListPolicyVersionsResponseBodyPolicyVersions &&) = default ;
    ListPolicyVersionsResponseBodyPolicyVersions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPolicyVersionsResponseBodyPolicyVersions() = default ;
    ListPolicyVersionsResponseBodyPolicyVersions& operator=(const ListPolicyVersionsResponseBodyPolicyVersions &) = default ;
    ListPolicyVersionsResponseBodyPolicyVersions& operator=(ListPolicyVersionsResponseBodyPolicyVersions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->policyVersion_ == nullptr; };
    // policyVersion Field Functions 
    bool hasPolicyVersion() const { return this->policyVersion_ != nullptr;};
    void deletePolicyVersion() { this->policyVersion_ = nullptr;};
    inline const vector<Models::ListPolicyVersionsResponseBodyPolicyVersionsPolicyVersion> & policyVersion() const { DARABONBA_PTR_GET_CONST(policyVersion_, vector<Models::ListPolicyVersionsResponseBodyPolicyVersionsPolicyVersion>) };
    inline vector<Models::ListPolicyVersionsResponseBodyPolicyVersionsPolicyVersion> policyVersion() { DARABONBA_PTR_GET(policyVersion_, vector<Models::ListPolicyVersionsResponseBodyPolicyVersionsPolicyVersion>) };
    inline ListPolicyVersionsResponseBodyPolicyVersions& setPolicyVersion(const vector<Models::ListPolicyVersionsResponseBodyPolicyVersionsPolicyVersion> & policyVersion) { DARABONBA_PTR_SET_VALUE(policyVersion_, policyVersion) };
    inline ListPolicyVersionsResponseBodyPolicyVersions& setPolicyVersion(vector<Models::ListPolicyVersionsResponseBodyPolicyVersionsPolicyVersion> && policyVersion) { DARABONBA_PTR_SET_RVALUE(policyVersion_, policyVersion) };


  protected:
    std::shared_ptr<vector<Models::ListPolicyVersionsResponseBodyPolicyVersionsPolicyVersion>> policyVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
