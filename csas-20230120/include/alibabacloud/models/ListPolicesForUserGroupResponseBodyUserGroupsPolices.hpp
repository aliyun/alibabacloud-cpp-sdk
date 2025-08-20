// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPOLICESFORUSERGROUPRESPONSEBODYUSERGROUPSPOLICES_HPP_
#define ALIBABACLOUD_MODELS_LISTPOLICESFORUSERGROUPRESPONSEBODYUSERGROUPSPOLICES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListPolicesForUserGroupResponseBodyUserGroupsPolices : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPolicesForUserGroupResponseBodyUserGroupsPolices& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
      DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
    };
    friend void from_json(const Darabonba::Json& j, ListPolicesForUserGroupResponseBodyUserGroupsPolices& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
      DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
    };
    ListPolicesForUserGroupResponseBodyUserGroupsPolices() = default ;
    ListPolicesForUserGroupResponseBodyUserGroupsPolices(const ListPolicesForUserGroupResponseBodyUserGroupsPolices &) = default ;
    ListPolicesForUserGroupResponseBodyUserGroupsPolices(ListPolicesForUserGroupResponseBodyUserGroupsPolices &&) = default ;
    ListPolicesForUserGroupResponseBodyUserGroupsPolices(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPolicesForUserGroupResponseBodyUserGroupsPolices() = default ;
    ListPolicesForUserGroupResponseBodyUserGroupsPolices& operator=(const ListPolicesForUserGroupResponseBodyUserGroupsPolices &) = default ;
    ListPolicesForUserGroupResponseBodyUserGroupsPolices& operator=(ListPolicesForUserGroupResponseBodyUserGroupsPolices &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->policyId_ != nullptr && this->policyType_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListPolicesForUserGroupResponseBodyUserGroupsPolices& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string policyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline ListPolicesForUserGroupResponseBodyUserGroupsPolices& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // policyType Field Functions 
    bool hasPolicyType() const { return this->policyType_ != nullptr;};
    void deletePolicyType() { this->policyType_ = nullptr;};
    inline string policyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
    inline ListPolicesForUserGroupResponseBodyUserGroupsPolices& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


  protected:
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> policyId_ = nullptr;
    std::shared_ptr<string> policyType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
