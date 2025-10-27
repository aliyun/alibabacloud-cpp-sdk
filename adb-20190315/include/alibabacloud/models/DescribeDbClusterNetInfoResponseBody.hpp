// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERNETINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERNETINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDBClusterNetInfoResponseBodyItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeDBClusterNetInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterNetInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterNetworkType, clusterNetworkType_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterNetInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterNetworkType, clusterNetworkType_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDBClusterNetInfoResponseBody() = default ;
    DescribeDBClusterNetInfoResponseBody(const DescribeDBClusterNetInfoResponseBody &) = default ;
    DescribeDBClusterNetInfoResponseBody(DescribeDBClusterNetInfoResponseBody &&) = default ;
    DescribeDBClusterNetInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterNetInfoResponseBody() = default ;
    DescribeDBClusterNetInfoResponseBody& operator=(const DescribeDBClusterNetInfoResponseBody &) = default ;
    DescribeDBClusterNetInfoResponseBody& operator=(DescribeDBClusterNetInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterNetworkType_ == nullptr
        && return this->items_ == nullptr && return this->requestId_ == nullptr; };
    // clusterNetworkType Field Functions 
    bool hasClusterNetworkType() const { return this->clusterNetworkType_ != nullptr;};
    void deleteClusterNetworkType() { this->clusterNetworkType_ = nullptr;};
    inline string clusterNetworkType() const { DARABONBA_PTR_GET_DEFAULT(clusterNetworkType_, "") };
    inline DescribeDBClusterNetInfoResponseBody& setClusterNetworkType(string clusterNetworkType) { DARABONBA_PTR_SET_VALUE(clusterNetworkType_, clusterNetworkType) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const DescribeDBClusterNetInfoResponseBodyItems & items() const { DARABONBA_PTR_GET_CONST(items_, DescribeDBClusterNetInfoResponseBodyItems) };
    inline DescribeDBClusterNetInfoResponseBodyItems items() { DARABONBA_PTR_GET(items_, DescribeDBClusterNetInfoResponseBodyItems) };
    inline DescribeDBClusterNetInfoResponseBody& setItems(const DescribeDBClusterNetInfoResponseBodyItems & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeDBClusterNetInfoResponseBody& setItems(DescribeDBClusterNetInfoResponseBodyItems && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBClusterNetInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The network type of the cluster.
    std::shared_ptr<string> clusterNetworkType_ = nullptr;
    // The queried network information about the cluster.
    std::shared_ptr<DescribeDBClusterNetInfoResponseBodyItems> items_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
