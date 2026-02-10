// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHYBRIDPROXYPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHYBRIDPROXYPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeHybridProxyPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHybridProxyPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHybridProxyPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
    };
    DescribeHybridProxyPolicyRequest() = default ;
    DescribeHybridProxyPolicyRequest(const DescribeHybridProxyPolicyRequest &) = default ;
    DescribeHybridProxyPolicyRequest(DescribeHybridProxyPolicyRequest &&) = default ;
    DescribeHybridProxyPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHybridProxyPolicyRequest() = default ;
    DescribeHybridProxyPolicyRequest& operator=(const DescribeHybridProxyPolicyRequest &) = default ;
    DescribeHybridProxyPolicyRequest& operator=(DescribeHybridProxyPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterName_ == nullptr; };
    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline DescribeHybridProxyPolicyRequest& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


  protected:
    // The name of the proxy cluster. You can query the name of the proxy cluster in the Security Center console.
    // 
    // This parameter is required.
    shared_ptr<string> clusterName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
