// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECURITYGROUPATTRIBUTERESPONSEBODYSNAPSHOTPOLICYIDS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECURITYGROUPATTRIBUTERESPONSEBODYSNAPSHOTPOLICYIDS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeSecurityGroupAttributeResponseBodySnapshotPolicyIds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecurityGroupAttributeResponseBodySnapshotPolicyIds& obj) { 
      DARABONBA_PTR_TO_JSON(SnapshotPolicyId, snapshotPolicyId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecurityGroupAttributeResponseBodySnapshotPolicyIds& obj) { 
      DARABONBA_PTR_FROM_JSON(SnapshotPolicyId, snapshotPolicyId_);
    };
    DescribeSecurityGroupAttributeResponseBodySnapshotPolicyIds() = default ;
    DescribeSecurityGroupAttributeResponseBodySnapshotPolicyIds(const DescribeSecurityGroupAttributeResponseBodySnapshotPolicyIds &) = default ;
    DescribeSecurityGroupAttributeResponseBodySnapshotPolicyIds(DescribeSecurityGroupAttributeResponseBodySnapshotPolicyIds &&) = default ;
    DescribeSecurityGroupAttributeResponseBodySnapshotPolicyIds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecurityGroupAttributeResponseBodySnapshotPolicyIds() = default ;
    DescribeSecurityGroupAttributeResponseBodySnapshotPolicyIds& operator=(const DescribeSecurityGroupAttributeResponseBodySnapshotPolicyIds &) = default ;
    DescribeSecurityGroupAttributeResponseBodySnapshotPolicyIds& operator=(DescribeSecurityGroupAttributeResponseBodySnapshotPolicyIds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->snapshotPolicyId_ == nullptr; };
    // snapshotPolicyId Field Functions 
    bool hasSnapshotPolicyId() const { return this->snapshotPolicyId_ != nullptr;};
    void deleteSnapshotPolicyId() { this->snapshotPolicyId_ = nullptr;};
    inline const vector<string> & snapshotPolicyId() const { DARABONBA_PTR_GET_CONST(snapshotPolicyId_, vector<string>) };
    inline vector<string> snapshotPolicyId() { DARABONBA_PTR_GET(snapshotPolicyId_, vector<string>) };
    inline DescribeSecurityGroupAttributeResponseBodySnapshotPolicyIds& setSnapshotPolicyId(const vector<string> & snapshotPolicyId) { DARABONBA_PTR_SET_VALUE(snapshotPolicyId_, snapshotPolicyId) };
    inline DescribeSecurityGroupAttributeResponseBodySnapshotPolicyIds& setSnapshotPolicyId(vector<string> && snapshotPolicyId) { DARABONBA_PTR_SET_RVALUE(snapshotPolicyId_, snapshotPolicyId) };


  protected:
    std::shared_ptr<vector<string>> snapshotPolicyId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
