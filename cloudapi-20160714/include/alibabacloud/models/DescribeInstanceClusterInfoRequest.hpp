// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCECLUSTERINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCECLUSTERINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeInstanceClusterInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceClusterInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceClusterName, instanceClusterName_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceClusterInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceClusterName, instanceClusterName_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
    };
    DescribeInstanceClusterInfoRequest() = default ;
    DescribeInstanceClusterInfoRequest(const DescribeInstanceClusterInfoRequest &) = default ;
    DescribeInstanceClusterInfoRequest(DescribeInstanceClusterInfoRequest &&) = default ;
    DescribeInstanceClusterInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceClusterInfoRequest() = default ;
    DescribeInstanceClusterInfoRequest& operator=(const DescribeInstanceClusterInfoRequest &) = default ;
    DescribeInstanceClusterInfoRequest& operator=(DescribeInstanceClusterInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceClusterName_ == nullptr
        && this->securityToken_ == nullptr; };
    // instanceClusterName Field Functions 
    bool hasInstanceClusterName() const { return this->instanceClusterName_ != nullptr;};
    void deleteInstanceClusterName() { this->instanceClusterName_ = nullptr;};
    inline string getInstanceClusterName() const { DARABONBA_PTR_GET_DEFAULT(instanceClusterName_, "") };
    inline DescribeInstanceClusterInfoRequest& setInstanceClusterName(string instanceClusterName) { DARABONBA_PTR_SET_VALUE(instanceClusterName_, instanceClusterName) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline DescribeInstanceClusterInfoRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


  protected:
    // The name of the dedicated instance cluster.
    shared_ptr<string> instanceClusterName_ {};
    shared_ptr<string> securityToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
