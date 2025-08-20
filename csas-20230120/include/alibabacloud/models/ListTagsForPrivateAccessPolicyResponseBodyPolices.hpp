// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTAGSFORPRIVATEACCESSPOLICYRESPONSEBODYPOLICES_HPP_
#define ALIBABACLOUD_MODELS_LISTTAGSFORPRIVATEACCESSPOLICYRESPONSEBODYPOLICES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTagsForPrivateAccessPolicyResponseBodyPolicesTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListTagsForPrivateAccessPolicyResponseBodyPolices : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTagsForPrivateAccessPolicyResponseBodyPolices& obj) { 
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, ListTagsForPrivateAccessPolicyResponseBodyPolices& obj) { 
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    ListTagsForPrivateAccessPolicyResponseBodyPolices() = default ;
    ListTagsForPrivateAccessPolicyResponseBodyPolices(const ListTagsForPrivateAccessPolicyResponseBodyPolices &) = default ;
    ListTagsForPrivateAccessPolicyResponseBodyPolices(ListTagsForPrivateAccessPolicyResponseBodyPolices &&) = default ;
    ListTagsForPrivateAccessPolicyResponseBodyPolices(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTagsForPrivateAccessPolicyResponseBodyPolices() = default ;
    ListTagsForPrivateAccessPolicyResponseBodyPolices& operator=(const ListTagsForPrivateAccessPolicyResponseBodyPolices &) = default ;
    ListTagsForPrivateAccessPolicyResponseBodyPolices& operator=(ListTagsForPrivateAccessPolicyResponseBodyPolices &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->policyId_ != nullptr
        && this->tags_ != nullptr; };
    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string policyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline ListTagsForPrivateAccessPolicyResponseBodyPolices& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::ListTagsForPrivateAccessPolicyResponseBodyPolicesTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::ListTagsForPrivateAccessPolicyResponseBodyPolicesTags>) };
    inline vector<Models::ListTagsForPrivateAccessPolicyResponseBodyPolicesTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::ListTagsForPrivateAccessPolicyResponseBodyPolicesTags>) };
    inline ListTagsForPrivateAccessPolicyResponseBodyPolices& setTags(const vector<Models::ListTagsForPrivateAccessPolicyResponseBodyPolicesTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListTagsForPrivateAccessPolicyResponseBodyPolices& setTags(vector<Models::ListTagsForPrivateAccessPolicyResponseBodyPolicesTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    std::shared_ptr<string> policyId_ = nullptr;
    std::shared_ptr<vector<Models::ListTagsForPrivateAccessPolicyResponseBodyPolicesTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
