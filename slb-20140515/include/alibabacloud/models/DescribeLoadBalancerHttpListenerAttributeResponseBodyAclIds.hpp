// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOADBALANCERHTTPLISTENERATTRIBUTERESPONSEBODYACLIDS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOADBALANCERHTTPLISTENERATTRIBUTERESPONSEBODYACLIDS_HPP_
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
  class DescribeLoadBalancerHTTPListenerAttributeResponseBodyAclIds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLoadBalancerHTTPListenerAttributeResponseBodyAclIds& obj) { 
      DARABONBA_PTR_TO_JSON(AclId, aclId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLoadBalancerHTTPListenerAttributeResponseBodyAclIds& obj) { 
      DARABONBA_PTR_FROM_JSON(AclId, aclId_);
    };
    DescribeLoadBalancerHTTPListenerAttributeResponseBodyAclIds() = default ;
    DescribeLoadBalancerHTTPListenerAttributeResponseBodyAclIds(const DescribeLoadBalancerHTTPListenerAttributeResponseBodyAclIds &) = default ;
    DescribeLoadBalancerHTTPListenerAttributeResponseBodyAclIds(DescribeLoadBalancerHTTPListenerAttributeResponseBodyAclIds &&) = default ;
    DescribeLoadBalancerHTTPListenerAttributeResponseBodyAclIds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLoadBalancerHTTPListenerAttributeResponseBodyAclIds() = default ;
    DescribeLoadBalancerHTTPListenerAttributeResponseBodyAclIds& operator=(const DescribeLoadBalancerHTTPListenerAttributeResponseBodyAclIds &) = default ;
    DescribeLoadBalancerHTTPListenerAttributeResponseBodyAclIds& operator=(DescribeLoadBalancerHTTPListenerAttributeResponseBodyAclIds &&) = default ;
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
    inline DescribeLoadBalancerHTTPListenerAttributeResponseBodyAclIds& setAclId(const vector<string> & aclId) { DARABONBA_PTR_SET_VALUE(aclId_, aclId) };
    inline DescribeLoadBalancerHTTPListenerAttributeResponseBodyAclIds& setAclId(vector<string> && aclId) { DARABONBA_PTR_SET_RVALUE(aclId_, aclId) };


  protected:
    std::shared_ptr<vector<string>> aclId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
