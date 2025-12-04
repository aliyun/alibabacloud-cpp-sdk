// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERNETINFOITEMSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERNETINFOITEMSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDBClusterNetInfoItemsResponseBodyNetInfoItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20191111
{
namespace Models
{
  class DescribeDBClusterNetInfoItemsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterNetInfoItemsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterNetworkType, clusterNetworkType_);
      DARABONBA_PTR_TO_JSON(EnableSLB, enableSLB_);
      DARABONBA_PTR_TO_JSON(NetInfoItems, netInfoItems_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterNetInfoItemsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterNetworkType, clusterNetworkType_);
      DARABONBA_PTR_FROM_JSON(EnableSLB, enableSLB_);
      DARABONBA_PTR_FROM_JSON(NetInfoItems, netInfoItems_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDBClusterNetInfoItemsResponseBody() = default ;
    DescribeDBClusterNetInfoItemsResponseBody(const DescribeDBClusterNetInfoItemsResponseBody &) = default ;
    DescribeDBClusterNetInfoItemsResponseBody(DescribeDBClusterNetInfoItemsResponseBody &&) = default ;
    DescribeDBClusterNetInfoItemsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterNetInfoItemsResponseBody() = default ;
    DescribeDBClusterNetInfoItemsResponseBody& operator=(const DescribeDBClusterNetInfoItemsResponseBody &) = default ;
    DescribeDBClusterNetInfoItemsResponseBody& operator=(DescribeDBClusterNetInfoItemsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterNetworkType_ == nullptr
        && return this->enableSLB_ == nullptr && return this->netInfoItems_ == nullptr && return this->requestId_ == nullptr; };
    // clusterNetworkType Field Functions 
    bool hasClusterNetworkType() const { return this->clusterNetworkType_ != nullptr;};
    void deleteClusterNetworkType() { this->clusterNetworkType_ = nullptr;};
    inline string clusterNetworkType() const { DARABONBA_PTR_GET_DEFAULT(clusterNetworkType_, "") };
    inline DescribeDBClusterNetInfoItemsResponseBody& setClusterNetworkType(string clusterNetworkType) { DARABONBA_PTR_SET_VALUE(clusterNetworkType_, clusterNetworkType) };


    // enableSLB Field Functions 
    bool hasEnableSLB() const { return this->enableSLB_ != nullptr;};
    void deleteEnableSLB() { this->enableSLB_ = nullptr;};
    inline bool enableSLB() const { DARABONBA_PTR_GET_DEFAULT(enableSLB_, false) };
    inline DescribeDBClusterNetInfoItemsResponseBody& setEnableSLB(bool enableSLB) { DARABONBA_PTR_SET_VALUE(enableSLB_, enableSLB) };


    // netInfoItems Field Functions 
    bool hasNetInfoItems() const { return this->netInfoItems_ != nullptr;};
    void deleteNetInfoItems() { this->netInfoItems_ = nullptr;};
    inline const DescribeDBClusterNetInfoItemsResponseBodyNetInfoItems & netInfoItems() const { DARABONBA_PTR_GET_CONST(netInfoItems_, DescribeDBClusterNetInfoItemsResponseBodyNetInfoItems) };
    inline DescribeDBClusterNetInfoItemsResponseBodyNetInfoItems netInfoItems() { DARABONBA_PTR_GET(netInfoItems_, DescribeDBClusterNetInfoItemsResponseBodyNetInfoItems) };
    inline DescribeDBClusterNetInfoItemsResponseBody& setNetInfoItems(const DescribeDBClusterNetInfoItemsResponseBodyNetInfoItems & netInfoItems) { DARABONBA_PTR_SET_VALUE(netInfoItems_, netInfoItems) };
    inline DescribeDBClusterNetInfoItemsResponseBody& setNetInfoItems(DescribeDBClusterNetInfoItemsResponseBodyNetInfoItems && netInfoItems) { DARABONBA_PTR_SET_RVALUE(netInfoItems_, netInfoItems) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBClusterNetInfoItemsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The network type of the cluster. Only VPC is supported.
    std::shared_ptr<string> clusterNetworkType_ = nullptr;
    // Indicates whether Server Load Balancer (SLB) is activated in the VPC. Valid values:
    // 
    // *   true
    // *   false
    // 
    // This parameter is required.
    std::shared_ptr<bool> enableSLB_ = nullptr;
    // The network information about the cluster.
    std::shared_ptr<DescribeDBClusterNetInfoItemsResponseBodyNetInfoItems> netInfoItems_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20191111
#endif
