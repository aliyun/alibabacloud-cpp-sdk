// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOADBALANCERHTTPSLISTENERATTRIBUTERESPONSEBODYACLIDS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOADBALANCERHTTPSLISTENERATTRIBUTERESPONSEBODYACLIDS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class DescribeLoadBalancerHTTPSListenerAttributeResponseBodyAclIds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLoadBalancerHTTPSListenerAttributeResponseBodyAclIds& obj) { 
      DARABONBA_PTR_TO_JSON(AclId, aclId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLoadBalancerHTTPSListenerAttributeResponseBodyAclIds& obj) { 
      DARABONBA_PTR_FROM_JSON(AclId, aclId_);
    };
    DescribeLoadBalancerHTTPSListenerAttributeResponseBodyAclIds() = default ;
    DescribeLoadBalancerHTTPSListenerAttributeResponseBodyAclIds(const DescribeLoadBalancerHTTPSListenerAttributeResponseBodyAclIds &) = default ;
    DescribeLoadBalancerHTTPSListenerAttributeResponseBodyAclIds(DescribeLoadBalancerHTTPSListenerAttributeResponseBodyAclIds &&) = default ;
    DescribeLoadBalancerHTTPSListenerAttributeResponseBodyAclIds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLoadBalancerHTTPSListenerAttributeResponseBodyAclIds() = default ;
    DescribeLoadBalancerHTTPSListenerAttributeResponseBodyAclIds& operator=(const DescribeLoadBalancerHTTPSListenerAttributeResponseBodyAclIds &) = default ;
    DescribeLoadBalancerHTTPSListenerAttributeResponseBodyAclIds& operator=(DescribeLoadBalancerHTTPSListenerAttributeResponseBodyAclIds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aclId_ == nullptr; };
    // aclId Field Functions 
    bool hasAclId() const { return this->aclId_ != nullptr;};
    void deleteAclId() { this->aclId_ = nullptr;};
    inline const vector<string> & aclId() const { DARABONBA_PTR_GET_CONST(aclId_, vector<string>) };
    inline vector<string> aclId() { DARABONBA_PTR_GET(aclId_, vector<string>) };
    inline DescribeLoadBalancerHTTPSListenerAttributeResponseBodyAclIds& setAclId(const vector<string> & aclId) { DARABONBA_PTR_SET_VALUE(aclId_, aclId) };
    inline DescribeLoadBalancerHTTPSListenerAttributeResponseBodyAclIds& setAclId(vector<string> && aclId) { DARABONBA_PTR_SET_RVALUE(aclId_, aclId) };


  protected:
    std::shared_ptr<vector<string>> aclId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
