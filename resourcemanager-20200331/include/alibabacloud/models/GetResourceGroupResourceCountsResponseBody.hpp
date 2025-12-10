// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCEGROUPRESOURCECOUNTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCEGROUPRESOURCECOUNTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetResourceGroupResourceCountsResponseBodyResourceCounts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class GetResourceGroupResourceCountsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceGroupResourceCountsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceCounts, resourceCounts_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceGroupResourceCountsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceCounts, resourceCounts_);
    };
    GetResourceGroupResourceCountsResponseBody() = default ;
    GetResourceGroupResourceCountsResponseBody(const GetResourceGroupResourceCountsResponseBody &) = default ;
    GetResourceGroupResourceCountsResponseBody(GetResourceGroupResourceCountsResponseBody &&) = default ;
    GetResourceGroupResourceCountsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceGroupResourceCountsResponseBody() = default ;
    GetResourceGroupResourceCountsResponseBody& operator=(const GetResourceGroupResourceCountsResponseBody &) = default ;
    GetResourceGroupResourceCountsResponseBody& operator=(GetResourceGroupResourceCountsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->resourceCounts_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetResourceGroupResourceCountsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceCounts Field Functions 
    bool hasResourceCounts() const { return this->resourceCounts_ != nullptr;};
    void deleteResourceCounts() { this->resourceCounts_ = nullptr;};
    inline const vector<GetResourceGroupResourceCountsResponseBodyResourceCounts> & resourceCounts() const { DARABONBA_PTR_GET_CONST(resourceCounts_, vector<GetResourceGroupResourceCountsResponseBodyResourceCounts>) };
    inline vector<GetResourceGroupResourceCountsResponseBodyResourceCounts> resourceCounts() { DARABONBA_PTR_GET(resourceCounts_, vector<GetResourceGroupResourceCountsResponseBodyResourceCounts>) };
    inline GetResourceGroupResourceCountsResponseBody& setResourceCounts(const vector<GetResourceGroupResourceCountsResponseBodyResourceCounts> & resourceCounts) { DARABONBA_PTR_SET_VALUE(resourceCounts_, resourceCounts) };
    inline GetResourceGroupResourceCountsResponseBody& setResourceCounts(vector<GetResourceGroupResourceCountsResponseBodyResourceCounts> && resourceCounts) { DARABONBA_PTR_SET_RVALUE(resourceCounts_, resourceCounts) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The numbers of the resources.
    std::shared_ptr<vector<GetResourceGroupResourceCountsResponseBodyResourceCounts>> resourceCounts_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
