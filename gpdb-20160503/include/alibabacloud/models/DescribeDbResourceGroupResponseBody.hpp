// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBRESOURCEGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBRESOURCEGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDBResourceGroupResponseBodyResourceGroupItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeDBResourceGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBResourceGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupItems, resourceGroupItems_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBResourceGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupItems, resourceGroupItems_);
    };
    DescribeDBResourceGroupResponseBody() = default ;
    DescribeDBResourceGroupResponseBody(const DescribeDBResourceGroupResponseBody &) = default ;
    DescribeDBResourceGroupResponseBody(DescribeDBResourceGroupResponseBody &&) = default ;
    DescribeDBResourceGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBResourceGroupResponseBody() = default ;
    DescribeDBResourceGroupResponseBody& operator=(const DescribeDBResourceGroupResponseBody &) = default ;
    DescribeDBResourceGroupResponseBody& operator=(DescribeDBResourceGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->resourceGroupItems_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBResourceGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupItems Field Functions 
    bool hasResourceGroupItems() const { return this->resourceGroupItems_ != nullptr;};
    void deleteResourceGroupItems() { this->resourceGroupItems_ = nullptr;};
    inline const DescribeDBResourceGroupResponseBodyResourceGroupItems & resourceGroupItems() const { DARABONBA_PTR_GET_CONST(resourceGroupItems_, DescribeDBResourceGroupResponseBodyResourceGroupItems) };
    inline DescribeDBResourceGroupResponseBodyResourceGroupItems resourceGroupItems() { DARABONBA_PTR_GET(resourceGroupItems_, DescribeDBResourceGroupResponseBodyResourceGroupItems) };
    inline DescribeDBResourceGroupResponseBody& setResourceGroupItems(const DescribeDBResourceGroupResponseBodyResourceGroupItems & resourceGroupItems) { DARABONBA_PTR_SET_VALUE(resourceGroupItems_, resourceGroupItems) };
    inline DescribeDBResourceGroupResponseBody& setResourceGroupItems(DescribeDBResourceGroupResponseBodyResourceGroupItems && resourceGroupItems) { DARABONBA_PTR_SET_RVALUE(resourceGroupItems_, resourceGroupItems) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The queried resource group information.
    std::shared_ptr<DescribeDBResourceGroupResponseBodyResourceGroupItems> resourceGroupItems_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
