// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGROUPPRODUCTIONSRESPONSEBODYDATAPRODUCTIONSPOLICYLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGROUPPRODUCTIONSRESPONSEBODYDATAPRODUCTIONSPOLICYLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class DescribeGroupProductionsResponseBodyDataProductionsPolicyList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGroupProductionsResponseBodyDataProductionsPolicyList& obj) { 
      DARABONBA_PTR_TO_JSON(PolicyName, policyName_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGroupProductionsResponseBodyDataProductionsPolicyList& obj) { 
      DARABONBA_PTR_FROM_JSON(PolicyName, policyName_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeGroupProductionsResponseBodyDataProductionsPolicyList() = default ;
    DescribeGroupProductionsResponseBodyDataProductionsPolicyList(const DescribeGroupProductionsResponseBodyDataProductionsPolicyList &) = default ;
    DescribeGroupProductionsResponseBodyDataProductionsPolicyList(DescribeGroupProductionsResponseBodyDataProductionsPolicyList &&) = default ;
    DescribeGroupProductionsResponseBodyDataProductionsPolicyList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGroupProductionsResponseBodyDataProductionsPolicyList() = default ;
    DescribeGroupProductionsResponseBodyDataProductionsPolicyList& operator=(const DescribeGroupProductionsResponseBodyDataProductionsPolicyList &) = default ;
    DescribeGroupProductionsResponseBodyDataProductionsPolicyList& operator=(DescribeGroupProductionsResponseBodyDataProductionsPolicyList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->policyName_ == nullptr
        && return this->type_ == nullptr; };
    // policyName Field Functions 
    bool hasPolicyName() const { return this->policyName_ != nullptr;};
    void deletePolicyName() { this->policyName_ = nullptr;};
    inline string policyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
    inline DescribeGroupProductionsResponseBodyDataProductionsPolicyList& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeGroupProductionsResponseBodyDataProductionsPolicyList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The name of the RAM policy.
    std::shared_ptr<string> policyName_ = nullptr;
    // The type of the RAM policy. Valid values:
    // 
    // *   **All**: permissions.
    // *   **Read-only**: permissions.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
