// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPOLICESFORPRIVATEACCESSAPPLICATIONRESPONSEBODYAPPLICATIONSPOLICIES_HPP_
#define ALIBABACLOUD_MODELS_LISTPOLICESFORPRIVATEACCESSAPPLICATIONRESPONSEBODYAPPLICATIONSPOLICIES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListPolicesForPrivateAccessApplicationResponseBodyApplicationsPoliciesCustomUserAttributes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListPolicesForPrivateAccessApplicationResponseBodyApplicationsPolicies : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPolicesForPrivateAccessApplicationResponseBodyApplicationsPolicies& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationType, applicationType_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CustomUserAttributes, customUserAttributes_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PolicyAction, policyAction_);
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UserGroupType, userGroupType_);
    };
    friend void from_json(const Darabonba::Json& j, ListPolicesForPrivateAccessApplicationResponseBodyApplicationsPolicies& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationType, applicationType_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CustomUserAttributes, customUserAttributes_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PolicyAction, policyAction_);
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UserGroupType, userGroupType_);
    };
    ListPolicesForPrivateAccessApplicationResponseBodyApplicationsPolicies() = default ;
    ListPolicesForPrivateAccessApplicationResponseBodyApplicationsPolicies(const ListPolicesForPrivateAccessApplicationResponseBodyApplicationsPolicies &) = default ;
    ListPolicesForPrivateAccessApplicationResponseBodyApplicationsPolicies(ListPolicesForPrivateAccessApplicationResponseBodyApplicationsPolicies &&) = default ;
    ListPolicesForPrivateAccessApplicationResponseBodyApplicationsPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPolicesForPrivateAccessApplicationResponseBodyApplicationsPolicies() = default ;
    ListPolicesForPrivateAccessApplicationResponseBodyApplicationsPolicies& operator=(const ListPolicesForPrivateAccessApplicationResponseBodyApplicationsPolicies &) = default ;
    ListPolicesForPrivateAccessApplicationResponseBodyApplicationsPolicies& operator=(ListPolicesForPrivateAccessApplicationResponseBodyApplicationsPolicies &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationType_ == nullptr
        && return this->createTime_ == nullptr && return this->customUserAttributes_ == nullptr && return this->description_ == nullptr && return this->name_ == nullptr && return this->policyAction_ == nullptr
        && return this->policyId_ == nullptr && return this->priority_ == nullptr && return this->status_ == nullptr && return this->userGroupType_ == nullptr; };
    // applicationType Field Functions 
    bool hasApplicationType() const { return this->applicationType_ != nullptr;};
    void deleteApplicationType() { this->applicationType_ = nullptr;};
    inline string applicationType() const { DARABONBA_PTR_GET_DEFAULT(applicationType_, "") };
    inline ListPolicesForPrivateAccessApplicationResponseBodyApplicationsPolicies& setApplicationType(string applicationType) { DARABONBA_PTR_SET_VALUE(applicationType_, applicationType) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListPolicesForPrivateAccessApplicationResponseBodyApplicationsPolicies& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // customUserAttributes Field Functions 
    bool hasCustomUserAttributes() const { return this->customUserAttributes_ != nullptr;};
    void deleteCustomUserAttributes() { this->customUserAttributes_ = nullptr;};
    inline const vector<Models::ListPolicesForPrivateAccessApplicationResponseBodyApplicationsPoliciesCustomUserAttributes> & customUserAttributes() const { DARABONBA_PTR_GET_CONST(customUserAttributes_, vector<Models::ListPolicesForPrivateAccessApplicationResponseBodyApplicationsPoliciesCustomUserAttributes>) };
    inline vector<Models::ListPolicesForPrivateAccessApplicationResponseBodyApplicationsPoliciesCustomUserAttributes> customUserAttributes() { DARABONBA_PTR_GET(customUserAttributes_, vector<Models::ListPolicesForPrivateAccessApplicationResponseBodyApplicationsPoliciesCustomUserAttributes>) };
    inline ListPolicesForPrivateAccessApplicationResponseBodyApplicationsPolicies& setCustomUserAttributes(const vector<Models::ListPolicesForPrivateAccessApplicationResponseBodyApplicationsPoliciesCustomUserAttributes> & customUserAttributes) { DARABONBA_PTR_SET_VALUE(customUserAttributes_, customUserAttributes) };
    inline ListPolicesForPrivateAccessApplicationResponseBodyApplicationsPolicies& setCustomUserAttributes(vector<Models::ListPolicesForPrivateAccessApplicationResponseBodyApplicationsPoliciesCustomUserAttributes> && customUserAttributes) { DARABONBA_PTR_SET_RVALUE(customUserAttributes_, customUserAttributes) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListPolicesForPrivateAccessApplicationResponseBodyApplicationsPolicies& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListPolicesForPrivateAccessApplicationResponseBodyApplicationsPolicies& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // policyAction Field Functions 
    bool hasPolicyAction() const { return this->policyAction_ != nullptr;};
    void deletePolicyAction() { this->policyAction_ = nullptr;};
    inline string policyAction() const { DARABONBA_PTR_GET_DEFAULT(policyAction_, "") };
    inline ListPolicesForPrivateAccessApplicationResponseBodyApplicationsPolicies& setPolicyAction(string policyAction) { DARABONBA_PTR_SET_VALUE(policyAction_, policyAction) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string policyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline ListPolicesForPrivateAccessApplicationResponseBodyApplicationsPolicies& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline ListPolicesForPrivateAccessApplicationResponseBodyApplicationsPolicies& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListPolicesForPrivateAccessApplicationResponseBodyApplicationsPolicies& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // userGroupType Field Functions 
    bool hasUserGroupType() const { return this->userGroupType_ != nullptr;};
    void deleteUserGroupType() { this->userGroupType_ = nullptr;};
    inline string userGroupType() const { DARABONBA_PTR_GET_DEFAULT(userGroupType_, "") };
    inline ListPolicesForPrivateAccessApplicationResponseBodyApplicationsPolicies& setUserGroupType(string userGroupType) { DARABONBA_PTR_SET_VALUE(userGroupType_, userGroupType) };


  protected:
    std::shared_ptr<string> applicationType_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<vector<Models::ListPolicesForPrivateAccessApplicationResponseBodyApplicationsPoliciesCustomUserAttributes>> customUserAttributes_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> policyAction_ = nullptr;
    std::shared_ptr<string> policyId_ = nullptr;
    std::shared_ptr<int32_t> priority_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> userGroupType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
