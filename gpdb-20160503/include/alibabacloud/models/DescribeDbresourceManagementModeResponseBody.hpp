// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBRESOURCEMANAGEMENTMODERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBRESOURCEMANAGEMENTMODERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeDBResourceManagementModeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBResourceManagementModeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceManagementMode, resourceManagementMode_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBResourceManagementModeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceManagementMode, resourceManagementMode_);
    };
    DescribeDBResourceManagementModeResponseBody() = default ;
    DescribeDBResourceManagementModeResponseBody(const DescribeDBResourceManagementModeResponseBody &) = default ;
    DescribeDBResourceManagementModeResponseBody(DescribeDBResourceManagementModeResponseBody &&) = default ;
    DescribeDBResourceManagementModeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBResourceManagementModeResponseBody() = default ;
    DescribeDBResourceManagementModeResponseBody& operator=(const DescribeDBResourceManagementModeResponseBody &) = default ;
    DescribeDBResourceManagementModeResponseBody& operator=(DescribeDBResourceManagementModeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->resourceManagementMode_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBResourceManagementModeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceManagementMode Field Functions 
    bool hasResourceManagementMode() const { return this->resourceManagementMode_ != nullptr;};
    void deleteResourceManagementMode() { this->resourceManagementMode_ = nullptr;};
    inline string resourceManagementMode() const { DARABONBA_PTR_GET_DEFAULT(resourceManagementMode_, "") };
    inline DescribeDBResourceManagementModeResponseBody& setResourceManagementMode(string resourceManagementMode) { DARABONBA_PTR_SET_VALUE(resourceManagementMode_, resourceManagementMode) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The resource management mode. Valid values:
    // 
    // *   resourceGroup: resource group management.
    // *   resourceQueue: resource queue management.
    std::shared_ptr<string> resourceManagementMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
