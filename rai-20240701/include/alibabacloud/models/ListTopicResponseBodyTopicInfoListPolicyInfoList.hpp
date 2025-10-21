// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTOPICRESPONSEBODYTOPICINFOLISTPOLICYINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTTOPICRESPONSEBODYTOPICINFOLISTPOLICYINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RAI20240701
{
namespace Models
{
  class ListTopicResponseBodyTopicInfoListPolicyInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTopicResponseBodyTopicInfoListPolicyInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
      DARABONBA_PTR_TO_JSON(PolicyIdentifier, policyIdentifier_);
      DARABONBA_PTR_TO_JSON(PolicyName, policyName_);
    };
    friend void from_json(const Darabonba::Json& j, ListTopicResponseBodyTopicInfoListPolicyInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
      DARABONBA_PTR_FROM_JSON(PolicyIdentifier, policyIdentifier_);
      DARABONBA_PTR_FROM_JSON(PolicyName, policyName_);
    };
    ListTopicResponseBodyTopicInfoListPolicyInfoList() = default ;
    ListTopicResponseBodyTopicInfoListPolicyInfoList(const ListTopicResponseBodyTopicInfoListPolicyInfoList &) = default ;
    ListTopicResponseBodyTopicInfoListPolicyInfoList(ListTopicResponseBodyTopicInfoListPolicyInfoList &&) = default ;
    ListTopicResponseBodyTopicInfoListPolicyInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTopicResponseBodyTopicInfoListPolicyInfoList() = default ;
    ListTopicResponseBodyTopicInfoListPolicyInfoList& operator=(const ListTopicResponseBodyTopicInfoListPolicyInfoList &) = default ;
    ListTopicResponseBodyTopicInfoListPolicyInfoList& operator=(ListTopicResponseBodyTopicInfoListPolicyInfoList &&) = default ;
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
    inline ListTopicResponseBodyTopicInfoListPolicyInfoList& setPolicyId(int64_t policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // policyIdentifier Field Functions 
    bool hasPolicyIdentifier() const { return this->policyIdentifier_ != nullptr;};
    void deletePolicyIdentifier() { this->policyIdentifier_ = nullptr;};
    inline string policyIdentifier() const { DARABONBA_PTR_GET_DEFAULT(policyIdentifier_, "") };
    inline ListTopicResponseBodyTopicInfoListPolicyInfoList& setPolicyIdentifier(string policyIdentifier) { DARABONBA_PTR_SET_VALUE(policyIdentifier_, policyIdentifier) };


    // policyName Field Functions 
    bool hasPolicyName() const { return this->policyName_ != nullptr;};
    void deletePolicyName() { this->policyName_ = nullptr;};
    inline string policyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
    inline ListTopicResponseBodyTopicInfoListPolicyInfoList& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


  protected:
    std::shared_ptr<int64_t> policyId_ = nullptr;
    std::shared_ptr<string> policyIdentifier_ = nullptr;
    std::shared_ptr<string> policyName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RAI20240701
#endif
