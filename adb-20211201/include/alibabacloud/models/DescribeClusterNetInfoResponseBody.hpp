// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERNETINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERNETINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeClusterNetInfoResponseBodyItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeClusterNetInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterNetInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterNetworkType, clusterNetworkType_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterNetInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterNetworkType, clusterNetworkType_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeClusterNetInfoResponseBody() = default ;
    DescribeClusterNetInfoResponseBody(const DescribeClusterNetInfoResponseBody &) = default ;
    DescribeClusterNetInfoResponseBody(DescribeClusterNetInfoResponseBody &&) = default ;
    DescribeClusterNetInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterNetInfoResponseBody() = default ;
    DescribeClusterNetInfoResponseBody& operator=(const DescribeClusterNetInfoResponseBody &) = default ;
    DescribeClusterNetInfoResponseBody& operator=(DescribeClusterNetInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterNetworkType_ != nullptr
        && this->items_ != nullptr && this->requestId_ != nullptr; };
    // clusterNetworkType Field Functions 
    bool hasClusterNetworkType() const { return this->clusterNetworkType_ != nullptr;};
    void deleteClusterNetworkType() { this->clusterNetworkType_ = nullptr;};
    inline string clusterNetworkType() const { DARABONBA_PTR_GET_DEFAULT(clusterNetworkType_, "") };
    inline DescribeClusterNetInfoResponseBody& setClusterNetworkType(string clusterNetworkType) { DARABONBA_PTR_SET_VALUE(clusterNetworkType_, clusterNetworkType) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const DescribeClusterNetInfoResponseBodyItems & items() const { DARABONBA_PTR_GET_CONST(items_, DescribeClusterNetInfoResponseBodyItems) };
    inline DescribeClusterNetInfoResponseBodyItems items() { DARABONBA_PTR_GET(items_, DescribeClusterNetInfoResponseBodyItems) };
    inline DescribeClusterNetInfoResponseBody& setItems(const DescribeClusterNetInfoResponseBodyItems & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeClusterNetInfoResponseBody& setItems(DescribeClusterNetInfoResponseBodyItems && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeClusterNetInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The network type of the cluster. Only the Virtual Private Cloud (VPC) network type is supported. **VPC** is returned.
    std::shared_ptr<string> clusterNetworkType_ = nullptr;
    // The queried network information about the cluster.
    std::shared_ptr<DescribeClusterNetInfoResponseBodyItems> items_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
