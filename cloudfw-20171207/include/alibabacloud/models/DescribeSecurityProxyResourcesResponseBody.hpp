// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECURITYPROXYRESOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECURITYPROXYRESOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSecurityProxyResourcesResponseBodyResourceList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeSecurityProxyResourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecurityProxyResourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceList, resourceList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecurityProxyResourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceList, resourceList_);
    };
    DescribeSecurityProxyResourcesResponseBody() = default ;
    DescribeSecurityProxyResourcesResponseBody(const DescribeSecurityProxyResourcesResponseBody &) = default ;
    DescribeSecurityProxyResourcesResponseBody(DescribeSecurityProxyResourcesResponseBody &&) = default ;
    DescribeSecurityProxyResourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecurityProxyResourcesResponseBody() = default ;
    DescribeSecurityProxyResourcesResponseBody& operator=(const DescribeSecurityProxyResourcesResponseBody &) = default ;
    DescribeSecurityProxyResourcesResponseBody& operator=(DescribeSecurityProxyResourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->resourceList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSecurityProxyResourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceList Field Functions 
    bool hasResourceList() const { return this->resourceList_ != nullptr;};
    void deleteResourceList() { this->resourceList_ = nullptr;};
    inline const vector<DescribeSecurityProxyResourcesResponseBodyResourceList> & resourceList() const { DARABONBA_PTR_GET_CONST(resourceList_, vector<DescribeSecurityProxyResourcesResponseBodyResourceList>) };
    inline vector<DescribeSecurityProxyResourcesResponseBodyResourceList> resourceList() { DARABONBA_PTR_GET(resourceList_, vector<DescribeSecurityProxyResourcesResponseBodyResourceList>) };
    inline DescribeSecurityProxyResourcesResponseBody& setResourceList(const vector<DescribeSecurityProxyResourcesResponseBodyResourceList> & resourceList) { DARABONBA_PTR_SET_VALUE(resourceList_, resourceList) };
    inline DescribeSecurityProxyResourcesResponseBody& setResourceList(vector<DescribeSecurityProxyResourcesResponseBodyResourceList> && resourceList) { DARABONBA_PTR_SET_RVALUE(resourceList_, resourceList) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<DescribeSecurityProxyResourcesResponseBodyResourceList>> resourceList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
