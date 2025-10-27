// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHYBRIDPROXYPOLICYRESPONSEBODYPOLICYLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHYBRIDPROXYPOLICYRESPONSEBODYPOLICYLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeHybridProxyPolicyResponseBodyPolicyListInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeHybridProxyPolicyResponseBodyPolicyList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHybridProxyPolicyResponseBodyPolicyList& obj) { 
      DARABONBA_PTR_TO_JSON(Info, info_);
      DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHybridProxyPolicyResponseBodyPolicyList& obj) { 
      DARABONBA_PTR_FROM_JSON(Info, info_);
      DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
    };
    DescribeHybridProxyPolicyResponseBodyPolicyList() = default ;
    DescribeHybridProxyPolicyResponseBodyPolicyList(const DescribeHybridProxyPolicyResponseBodyPolicyList &) = default ;
    DescribeHybridProxyPolicyResponseBodyPolicyList(DescribeHybridProxyPolicyResponseBodyPolicyList &&) = default ;
    DescribeHybridProxyPolicyResponseBodyPolicyList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHybridProxyPolicyResponseBodyPolicyList() = default ;
    DescribeHybridProxyPolicyResponseBodyPolicyList& operator=(const DescribeHybridProxyPolicyResponseBodyPolicyList &) = default ;
    DescribeHybridProxyPolicyResponseBodyPolicyList& operator=(DescribeHybridProxyPolicyResponseBodyPolicyList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->info_ == nullptr
        && return this->policyType_ == nullptr; };
    // info Field Functions 
    bool hasInfo() const { return this->info_ != nullptr;};
    void deleteInfo() { this->info_ = nullptr;};
    inline const vector<Models::DescribeHybridProxyPolicyResponseBodyPolicyListInfo> & info() const { DARABONBA_PTR_GET_CONST(info_, vector<Models::DescribeHybridProxyPolicyResponseBodyPolicyListInfo>) };
    inline vector<Models::DescribeHybridProxyPolicyResponseBodyPolicyListInfo> info() { DARABONBA_PTR_GET(info_, vector<Models::DescribeHybridProxyPolicyResponseBodyPolicyListInfo>) };
    inline DescribeHybridProxyPolicyResponseBodyPolicyList& setInfo(const vector<Models::DescribeHybridProxyPolicyResponseBodyPolicyListInfo> & info) { DARABONBA_PTR_SET_VALUE(info_, info) };
    inline DescribeHybridProxyPolicyResponseBodyPolicyList& setInfo(vector<Models::DescribeHybridProxyPolicyResponseBodyPolicyListInfo> && info) { DARABONBA_PTR_SET_RVALUE(info_, info) };


    // policyType Field Functions 
    bool hasPolicyType() const { return this->policyType_ != nullptr;};
    void deletePolicyType() { this->policyType_ = nullptr;};
    inline string policyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
    inline DescribeHybridProxyPolicyResponseBodyPolicyList& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


  protected:
    // The information about the policy.
    std::shared_ptr<vector<Models::DescribeHybridProxyPolicyResponseBodyPolicyListInfo>> info_ = nullptr;
    // The type of the policy. Valid values:
    // 
    // *   **limitFrequency**
    // *   **limitBandWidth**
    std::shared_ptr<string> policyType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
