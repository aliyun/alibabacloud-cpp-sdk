// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIPCONTROLPOLICYITEMSRESPONSEBODYIPCONTROLPOLICYITEMSIPCONTROLPOLICYITEM_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIPCONTROLPOLICYITEMSRESPONSEBODYIPCONTROLPOLICYITEMSIPCONTROLPOLICYITEM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeIpControlPolicyItemsResponseBodyIpControlPolicyItemsIpControlPolicyItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIpControlPolicyItemsResponseBodyIpControlPolicyItemsIpControlPolicyItem& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(CidrIp, cidrIp_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_TO_JSON(PolicyItemId, policyItemId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIpControlPolicyItemsResponseBodyIpControlPolicyItemsIpControlPolicyItem& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(CidrIp, cidrIp_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_FROM_JSON(PolicyItemId, policyItemId_);
    };
    DescribeIpControlPolicyItemsResponseBodyIpControlPolicyItemsIpControlPolicyItem() = default ;
    DescribeIpControlPolicyItemsResponseBodyIpControlPolicyItemsIpControlPolicyItem(const DescribeIpControlPolicyItemsResponseBodyIpControlPolicyItemsIpControlPolicyItem &) = default ;
    DescribeIpControlPolicyItemsResponseBodyIpControlPolicyItemsIpControlPolicyItem(DescribeIpControlPolicyItemsResponseBodyIpControlPolicyItemsIpControlPolicyItem &&) = default ;
    DescribeIpControlPolicyItemsResponseBodyIpControlPolicyItemsIpControlPolicyItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIpControlPolicyItemsResponseBodyIpControlPolicyItemsIpControlPolicyItem() = default ;
    DescribeIpControlPolicyItemsResponseBodyIpControlPolicyItemsIpControlPolicyItem& operator=(const DescribeIpControlPolicyItemsResponseBodyIpControlPolicyItemsIpControlPolicyItem &) = default ;
    DescribeIpControlPolicyItemsResponseBodyIpControlPolicyItemsIpControlPolicyItem& operator=(DescribeIpControlPolicyItemsResponseBodyIpControlPolicyItemsIpControlPolicyItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->cidrIp_ == nullptr && return this->createTime_ == nullptr && return this->modifiedTime_ == nullptr && return this->policyItemId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DescribeIpControlPolicyItemsResponseBodyIpControlPolicyItemsIpControlPolicyItem& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // cidrIp Field Functions 
    bool hasCidrIp() const { return this->cidrIp_ != nullptr;};
    void deleteCidrIp() { this->cidrIp_ = nullptr;};
    inline string cidrIp() const { DARABONBA_PTR_GET_DEFAULT(cidrIp_, "") };
    inline DescribeIpControlPolicyItemsResponseBodyIpControlPolicyItemsIpControlPolicyItem& setCidrIp(string cidrIp) { DARABONBA_PTR_SET_VALUE(cidrIp_, cidrIp) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeIpControlPolicyItemsResponseBodyIpControlPolicyItemsIpControlPolicyItem& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline string modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
    inline DescribeIpControlPolicyItemsResponseBodyIpControlPolicyItemsIpControlPolicyItem& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // policyItemId Field Functions 
    bool hasPolicyItemId() const { return this->policyItemId_ != nullptr;};
    void deletePolicyItemId() { this->policyItemId_ = nullptr;};
    inline string policyItemId() const { DARABONBA_PTR_GET_DEFAULT(policyItemId_, "") };
    inline DescribeIpControlPolicyItemsResponseBodyIpControlPolicyItemsIpControlPolicyItem& setPolicyItemId(string policyItemId) { DARABONBA_PTR_SET_VALUE(policyItemId_, policyItemId) };


  protected:
    // The ID of the application.
    std::shared_ptr<string> appId_ = nullptr;
    // The IP addresses or CIDR blocks.
    std::shared_ptr<string> cidrIp_ = nullptr;
    // The time when the policy was created. The time is displayed in UTC.
    std::shared_ptr<string> createTime_ = nullptr;
    // The time when the policy was modified. The time is displayed in UTC.
    std::shared_ptr<string> modifiedTime_ = nullptr;
    // The ID of the policy.
    std::shared_ptr<string> policyItemId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
