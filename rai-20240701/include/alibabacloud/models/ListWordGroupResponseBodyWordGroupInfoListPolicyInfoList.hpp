// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWORDGROUPRESPONSEBODYWORDGROUPINFOLISTPOLICYINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTWORDGROUPRESPONSEBODYWORDGROUPINFOLISTPOLICYINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RAI20240701
{
namespace Models
{
  class ListWordGroupResponseBodyWordGroupInfoListPolicyInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWordGroupResponseBodyWordGroupInfoListPolicyInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
      DARABONBA_PTR_TO_JSON(PolicyIdentifier, policyIdentifier_);
      DARABONBA_PTR_TO_JSON(PolicyName, policyName_);
    };
    friend void from_json(const Darabonba::Json& j, ListWordGroupResponseBodyWordGroupInfoListPolicyInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
      DARABONBA_PTR_FROM_JSON(PolicyIdentifier, policyIdentifier_);
      DARABONBA_PTR_FROM_JSON(PolicyName, policyName_);
    };
    ListWordGroupResponseBodyWordGroupInfoListPolicyInfoList() = default ;
    ListWordGroupResponseBodyWordGroupInfoListPolicyInfoList(const ListWordGroupResponseBodyWordGroupInfoListPolicyInfoList &) = default ;
    ListWordGroupResponseBodyWordGroupInfoListPolicyInfoList(ListWordGroupResponseBodyWordGroupInfoListPolicyInfoList &&) = default ;
    ListWordGroupResponseBodyWordGroupInfoListPolicyInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWordGroupResponseBodyWordGroupInfoListPolicyInfoList() = default ;
    ListWordGroupResponseBodyWordGroupInfoListPolicyInfoList& operator=(const ListWordGroupResponseBodyWordGroupInfoListPolicyInfoList &) = default ;
    ListWordGroupResponseBodyWordGroupInfoListPolicyInfoList& operator=(ListWordGroupResponseBodyWordGroupInfoListPolicyInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->policyId_ == nullptr
        && return this->policyIdentifier_ == nullptr && return this->policyName_ == nullptr; };
    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline int64_t policyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, 0L) };
    inline ListWordGroupResponseBodyWordGroupInfoListPolicyInfoList& setPolicyId(int64_t policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // policyIdentifier Field Functions 
    bool hasPolicyIdentifier() const { return this->policyIdentifier_ != nullptr;};
    void deletePolicyIdentifier() { this->policyIdentifier_ = nullptr;};
    inline string policyIdentifier() const { DARABONBA_PTR_GET_DEFAULT(policyIdentifier_, "") };
    inline ListWordGroupResponseBodyWordGroupInfoListPolicyInfoList& setPolicyIdentifier(string policyIdentifier) { DARABONBA_PTR_SET_VALUE(policyIdentifier_, policyIdentifier) };


    // policyName Field Functions 
    bool hasPolicyName() const { return this->policyName_ != nullptr;};
    void deletePolicyName() { this->policyName_ = nullptr;};
    inline string policyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
    inline ListWordGroupResponseBodyWordGroupInfoListPolicyInfoList& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


  protected:
    // Detection policy ID.
    std::shared_ptr<int64_t> policyId_ = nullptr;
    // Policy identifier.
    std::shared_ptr<string> policyIdentifier_ = nullptr;
    // Detection policy name.
    std::shared_ptr<string> policyName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RAI20240701
#endif
