// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECURITYGROUPATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECURITYGROUPATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Permission.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeSecurityGroupAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecurityGroupAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EgressPermissions, egressPermissions_);
      DARABONBA_PTR_TO_JSON(IngressPermissions, ingressPermissions_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecurityGroupAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EgressPermissions, egressPermissions_);
      DARABONBA_PTR_FROM_JSON(IngressPermissions, ingressPermissions_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeSecurityGroupAttributeResponseBody() = default ;
    DescribeSecurityGroupAttributeResponseBody(const DescribeSecurityGroupAttributeResponseBody &) = default ;
    DescribeSecurityGroupAttributeResponseBody(DescribeSecurityGroupAttributeResponseBody &&) = default ;
    DescribeSecurityGroupAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecurityGroupAttributeResponseBody() = default ;
    DescribeSecurityGroupAttributeResponseBody& operator=(const DescribeSecurityGroupAttributeResponseBody &) = default ;
    DescribeSecurityGroupAttributeResponseBody& operator=(DescribeSecurityGroupAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->egressPermissions_ == nullptr
        && this->ingressPermissions_ == nullptr && this->requestId_ == nullptr; };
    // egressPermissions Field Functions 
    bool hasEgressPermissions() const { return this->egressPermissions_ != nullptr;};
    void deleteEgressPermissions() { this->egressPermissions_ = nullptr;};
    inline const vector<Permission> & getEgressPermissions() const { DARABONBA_PTR_GET_CONST(egressPermissions_, vector<Permission>) };
    inline vector<Permission> getEgressPermissions() { DARABONBA_PTR_GET(egressPermissions_, vector<Permission>) };
    inline DescribeSecurityGroupAttributeResponseBody& setEgressPermissions(const vector<Permission> & egressPermissions) { DARABONBA_PTR_SET_VALUE(egressPermissions_, egressPermissions) };
    inline DescribeSecurityGroupAttributeResponseBody& setEgressPermissions(vector<Permission> && egressPermissions) { DARABONBA_PTR_SET_RVALUE(egressPermissions_, egressPermissions) };


    // ingressPermissions Field Functions 
    bool hasIngressPermissions() const { return this->ingressPermissions_ != nullptr;};
    void deleteIngressPermissions() { this->ingressPermissions_ = nullptr;};
    inline const vector<Permission> & getIngressPermissions() const { DARABONBA_PTR_GET_CONST(ingressPermissions_, vector<Permission>) };
    inline vector<Permission> getIngressPermissions() { DARABONBA_PTR_GET(ingressPermissions_, vector<Permission>) };
    inline DescribeSecurityGroupAttributeResponseBody& setIngressPermissions(const vector<Permission> & ingressPermissions) { DARABONBA_PTR_SET_VALUE(ingressPermissions_, ingressPermissions) };
    inline DescribeSecurityGroupAttributeResponseBody& setIngressPermissions(vector<Permission> && ingressPermissions) { DARABONBA_PTR_SET_RVALUE(ingressPermissions_, ingressPermissions) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSecurityGroupAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<Permission>> egressPermissions_ {};
    shared_ptr<vector<Permission>> ingressPermissions_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
