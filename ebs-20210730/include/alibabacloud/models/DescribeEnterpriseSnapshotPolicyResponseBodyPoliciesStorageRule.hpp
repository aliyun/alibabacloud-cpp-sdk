// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENTERPRISESNAPSHOTPOLICYRESPONSEBODYPOLICIESSTORAGERULE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENTERPRISESNAPSHOTPOLICYRESPONSEBODYPOLICIESSTORAGERULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesStorageRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesStorageRule& obj) { 
      DARABONBA_PTR_TO_JSON(EnableImmediateAccess, enableImmediateAccess_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesStorageRule& obj) { 
      DARABONBA_PTR_FROM_JSON(EnableImmediateAccess, enableImmediateAccess_);
    };
    DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesStorageRule() = default ;
    DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesStorageRule(const DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesStorageRule &) = default ;
    DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesStorageRule(DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesStorageRule &&) = default ;
    DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesStorageRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesStorageRule() = default ;
    DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesStorageRule& operator=(const DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesStorageRule &) = default ;
    DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesStorageRule& operator=(DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesStorageRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enableImmediateAccess_ == nullptr; };
    // enableImmediateAccess Field Functions 
    bool hasEnableImmediateAccess() const { return this->enableImmediateAccess_ != nullptr;};
    void deleteEnableImmediateAccess() { this->enableImmediateAccess_ = nullptr;};
    inline bool enableImmediateAccess() const { DARABONBA_PTR_GET_DEFAULT(enableImmediateAccess_, false) };
    inline DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesStorageRule& setEnableImmediateAccess(bool enableImmediateAccess) { DARABONBA_PTR_SET_VALUE(enableImmediateAccess_, enableImmediateAccess) };


  protected:
    // Indicates whether the instant access feature is enabled.
    std::shared_ptr<bool> enableImmediateAccess_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
