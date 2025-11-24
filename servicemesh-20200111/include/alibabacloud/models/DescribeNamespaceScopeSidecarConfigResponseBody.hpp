// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENAMESPACESCOPESIDECARCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENAMESPACESCOPESIDECARCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatches.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeNamespaceScopeSidecarConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNamespaceScopeSidecarConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigPatches, configPatches_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNamespaceScopeSidecarConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigPatches, configPatches_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeNamespaceScopeSidecarConfigResponseBody() = default ;
    DescribeNamespaceScopeSidecarConfigResponseBody(const DescribeNamespaceScopeSidecarConfigResponseBody &) = default ;
    DescribeNamespaceScopeSidecarConfigResponseBody(DescribeNamespaceScopeSidecarConfigResponseBody &&) = default ;
    DescribeNamespaceScopeSidecarConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNamespaceScopeSidecarConfigResponseBody() = default ;
    DescribeNamespaceScopeSidecarConfigResponseBody& operator=(const DescribeNamespaceScopeSidecarConfigResponseBody &) = default ;
    DescribeNamespaceScopeSidecarConfigResponseBody& operator=(DescribeNamespaceScopeSidecarConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configPatches_ == nullptr
        && return this->requestId_ == nullptr; };
    // configPatches Field Functions 
    bool hasConfigPatches() const { return this->configPatches_ != nullptr;};
    void deleteConfigPatches() { this->configPatches_ = nullptr;};
    inline const DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatches & configPatches() const { DARABONBA_PTR_GET_CONST(configPatches_, DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatches) };
    inline DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatches configPatches() { DARABONBA_PTR_GET(configPatches_, DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatches) };
    inline DescribeNamespaceScopeSidecarConfigResponseBody& setConfigPatches(const DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatches & configPatches) { DARABONBA_PTR_SET_VALUE(configPatches_, configPatches) };
    inline DescribeNamespaceScopeSidecarConfigResponseBody& setConfigPatches(DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatches && configPatches) { DARABONBA_PTR_SET_RVALUE(configPatches_, configPatches) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeNamespaceScopeSidecarConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The namespace-level sidecar configurations.
    std::shared_ptr<DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatches> configPatches_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
