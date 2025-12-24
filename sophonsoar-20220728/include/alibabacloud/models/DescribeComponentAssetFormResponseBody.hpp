// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOMPONENTASSETFORMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOMPONENTASSETFORMRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class DescribeComponentAssetFormResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeComponentAssetFormResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ComponentAssetForm, componentAssetForm_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeComponentAssetFormResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ComponentAssetForm, componentAssetForm_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeComponentAssetFormResponseBody() = default ;
    DescribeComponentAssetFormResponseBody(const DescribeComponentAssetFormResponseBody &) = default ;
    DescribeComponentAssetFormResponseBody(DescribeComponentAssetFormResponseBody &&) = default ;
    DescribeComponentAssetFormResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeComponentAssetFormResponseBody() = default ;
    DescribeComponentAssetFormResponseBody& operator=(const DescribeComponentAssetFormResponseBody &) = default ;
    DescribeComponentAssetFormResponseBody& operator=(DescribeComponentAssetFormResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->componentAssetForm_ == nullptr
        && return this->requestId_ == nullptr; };
    // componentAssetForm Field Functions 
    bool hasComponentAssetForm() const { return this->componentAssetForm_ != nullptr;};
    void deleteComponentAssetForm() { this->componentAssetForm_ = nullptr;};
    inline string componentAssetForm() const { DARABONBA_PTR_GET_DEFAULT(componentAssetForm_, "") };
    inline DescribeComponentAssetFormResponseBody& setComponentAssetForm(string componentAssetForm) { DARABONBA_PTR_SET_VALUE(componentAssetForm_, componentAssetForm) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeComponentAssetFormResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The metadata of the asset in the component. The value is a JSON array and contains the following fields:
    // 
    // *   **name**: the parameter name.
    // *   **defaultValue**: the default parameter value.
    // *   **description**: the parameter description.
    // *   **required**: indicates whether the parameter is required. Valid values: **true** and **false**.
    std::shared_ptr<string> componentAssetForm_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
