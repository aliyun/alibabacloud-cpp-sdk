// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGROUPSRESPONSEBODYGROUPSATTACHEDLOGINPOLICY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGROUPSRESPONSEBODYGROUPSATTACHEDLOGINPOLICY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class DescribeGroupsResponseBodyGroupsAttachedLoginPolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGroupsResponseBodyGroupsAttachedLoginPolicy& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGroupsResponseBodyGroupsAttachedLoginPolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
    };
    DescribeGroupsResponseBodyGroupsAttachedLoginPolicy() = default ;
    DescribeGroupsResponseBodyGroupsAttachedLoginPolicy(const DescribeGroupsResponseBodyGroupsAttachedLoginPolicy &) = default ;
    DescribeGroupsResponseBodyGroupsAttachedLoginPolicy(DescribeGroupsResponseBodyGroupsAttachedLoginPolicy &&) = default ;
    DescribeGroupsResponseBodyGroupsAttachedLoginPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGroupsResponseBodyGroupsAttachedLoginPolicy() = default ;
    DescribeGroupsResponseBodyGroupsAttachedLoginPolicy& operator=(const DescribeGroupsResponseBodyGroupsAttachedLoginPolicy &) = default ;
    DescribeGroupsResponseBodyGroupsAttachedLoginPolicy& operator=(DescribeGroupsResponseBodyGroupsAttachedLoginPolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->policyId_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeGroupsResponseBodyGroupsAttachedLoginPolicy& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string policyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline DescribeGroupsResponseBodyGroupsAttachedLoginPolicy& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


  protected:
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> policyId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
