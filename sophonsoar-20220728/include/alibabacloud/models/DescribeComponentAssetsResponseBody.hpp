// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOMPONENTASSETSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOMPONENTASSETSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeComponentAssetsResponseBodyComponentAssets.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class DescribeComponentAssetsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeComponentAssetsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ComponentAssets, componentAssets_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeComponentAssetsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ComponentAssets, componentAssets_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeComponentAssetsResponseBody() = default ;
    DescribeComponentAssetsResponseBody(const DescribeComponentAssetsResponseBody &) = default ;
    DescribeComponentAssetsResponseBody(DescribeComponentAssetsResponseBody &&) = default ;
    DescribeComponentAssetsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeComponentAssetsResponseBody() = default ;
    DescribeComponentAssetsResponseBody& operator=(const DescribeComponentAssetsResponseBody &) = default ;
    DescribeComponentAssetsResponseBody& operator=(DescribeComponentAssetsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->componentAssets_ == nullptr
        && return this->requestId_ == nullptr; };
    // componentAssets Field Functions 
    bool hasComponentAssets() const { return this->componentAssets_ != nullptr;};
    void deleteComponentAssets() { this->componentAssets_ = nullptr;};
    inline const vector<DescribeComponentAssetsResponseBodyComponentAssets> & componentAssets() const { DARABONBA_PTR_GET_CONST(componentAssets_, vector<DescribeComponentAssetsResponseBodyComponentAssets>) };
    inline vector<DescribeComponentAssetsResponseBodyComponentAssets> componentAssets() { DARABONBA_PTR_GET(componentAssets_, vector<DescribeComponentAssetsResponseBodyComponentAssets>) };
    inline DescribeComponentAssetsResponseBody& setComponentAssets(const vector<DescribeComponentAssetsResponseBodyComponentAssets> & componentAssets) { DARABONBA_PTR_SET_VALUE(componentAssets_, componentAssets) };
    inline DescribeComponentAssetsResponseBody& setComponentAssets(vector<DescribeComponentAssetsResponseBodyComponentAssets> && componentAssets) { DARABONBA_PTR_SET_RVALUE(componentAssets_, componentAssets) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeComponentAssetsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the assets.
    std::shared_ptr<vector<DescribeComponentAssetsResponseBodyComponentAssets>> componentAssets_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
