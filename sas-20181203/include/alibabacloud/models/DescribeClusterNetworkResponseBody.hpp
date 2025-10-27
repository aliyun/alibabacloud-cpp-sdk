// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERNETWORKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERNETWORKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeClusterNetworkResponseBodyClusterNetwork.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeClusterNetworkResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterNetworkResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterNetwork, clusterNetwork_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterNetworkResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterNetwork, clusterNetwork_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeClusterNetworkResponseBody() = default ;
    DescribeClusterNetworkResponseBody(const DescribeClusterNetworkResponseBody &) = default ;
    DescribeClusterNetworkResponseBody(DescribeClusterNetworkResponseBody &&) = default ;
    DescribeClusterNetworkResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterNetworkResponseBody() = default ;
    DescribeClusterNetworkResponseBody& operator=(const DescribeClusterNetworkResponseBody &) = default ;
    DescribeClusterNetworkResponseBody& operator=(DescribeClusterNetworkResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterNetwork_ == nullptr
        && return this->requestId_ == nullptr; };
    // clusterNetwork Field Functions 
    bool hasClusterNetwork() const { return this->clusterNetwork_ != nullptr;};
    void deleteClusterNetwork() { this->clusterNetwork_ = nullptr;};
    inline const DescribeClusterNetworkResponseBodyClusterNetwork & clusterNetwork() const { DARABONBA_PTR_GET_CONST(clusterNetwork_, DescribeClusterNetworkResponseBodyClusterNetwork) };
    inline DescribeClusterNetworkResponseBodyClusterNetwork clusterNetwork() { DARABONBA_PTR_GET(clusterNetwork_, DescribeClusterNetworkResponseBodyClusterNetwork) };
    inline DescribeClusterNetworkResponseBody& setClusterNetwork(const DescribeClusterNetworkResponseBodyClusterNetwork & clusterNetwork) { DARABONBA_PTR_SET_VALUE(clusterNetwork_, clusterNetwork) };
    inline DescribeClusterNetworkResponseBody& setClusterNetwork(DescribeClusterNetworkResponseBodyClusterNetwork && clusterNetwork) { DARABONBA_PTR_SET_RVALUE(clusterNetwork_, clusterNetwork) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeClusterNetworkResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Information about the network topology edge in the cluster.
    std::shared_ptr<DescribeClusterNetworkResponseBodyClusterNetwork> clusterNetwork_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
