// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESOURCEPACKAGESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESOURCEPACKAGESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeResourcePackagesResponseBodyResourcePackageList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeResourcePackagesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeResourcePackagesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourcePackageList, resourcePackageList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeResourcePackagesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourcePackageList, resourcePackageList_);
    };
    DescribeResourcePackagesResponseBody() = default ;
    DescribeResourcePackagesResponseBody(const DescribeResourcePackagesResponseBody &) = default ;
    DescribeResourcePackagesResponseBody(DescribeResourcePackagesResponseBody &&) = default ;
    DescribeResourcePackagesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeResourcePackagesResponseBody() = default ;
    DescribeResourcePackagesResponseBody& operator=(const DescribeResourcePackagesResponseBody &) = default ;
    DescribeResourcePackagesResponseBody& operator=(DescribeResourcePackagesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->resourcePackageList_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeResourcePackagesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourcePackageList Field Functions 
    bool hasResourcePackageList() const { return this->resourcePackageList_ != nullptr;};
    void deleteResourcePackageList() { this->resourcePackageList_ = nullptr;};
    inline const vector<DescribeResourcePackagesResponseBodyResourcePackageList> & resourcePackageList() const { DARABONBA_PTR_GET_CONST(resourcePackageList_, vector<DescribeResourcePackagesResponseBodyResourcePackageList>) };
    inline vector<DescribeResourcePackagesResponseBodyResourcePackageList> resourcePackageList() { DARABONBA_PTR_GET(resourcePackageList_, vector<DescribeResourcePackagesResponseBodyResourcePackageList>) };
    inline DescribeResourcePackagesResponseBody& setResourcePackageList(const vector<DescribeResourcePackagesResponseBodyResourcePackageList> & resourcePackageList) { DARABONBA_PTR_SET_VALUE(resourcePackageList_, resourcePackageList) };
    inline DescribeResourcePackagesResponseBody& setResourcePackageList(vector<DescribeResourcePackagesResponseBodyResourcePackageList> && resourcePackageList) { DARABONBA_PTR_SET_RVALUE(resourcePackageList_, resourcePackageList) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<DescribeResourcePackagesResponseBodyResourcePackageList>> resourcePackageList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
