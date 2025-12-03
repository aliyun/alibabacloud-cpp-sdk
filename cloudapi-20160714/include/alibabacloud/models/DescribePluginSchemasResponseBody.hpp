// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPLUGINSCHEMASRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPLUGINSCHEMASRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribePluginSchemasResponseBodyPluginSchemas.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribePluginSchemasResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePluginSchemasResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PluginSchemas, pluginSchemas_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePluginSchemasResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PluginSchemas, pluginSchemas_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribePluginSchemasResponseBody() = default ;
    DescribePluginSchemasResponseBody(const DescribePluginSchemasResponseBody &) = default ;
    DescribePluginSchemasResponseBody(DescribePluginSchemasResponseBody &&) = default ;
    DescribePluginSchemasResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePluginSchemasResponseBody() = default ;
    DescribePluginSchemasResponseBody& operator=(const DescribePluginSchemasResponseBody &) = default ;
    DescribePluginSchemasResponseBody& operator=(DescribePluginSchemasResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pluginSchemas_ == nullptr
        && return this->requestId_ == nullptr; };
    // pluginSchemas Field Functions 
    bool hasPluginSchemas() const { return this->pluginSchemas_ != nullptr;};
    void deletePluginSchemas() { this->pluginSchemas_ = nullptr;};
    inline const DescribePluginSchemasResponseBodyPluginSchemas & pluginSchemas() const { DARABONBA_PTR_GET_CONST(pluginSchemas_, DescribePluginSchemasResponseBodyPluginSchemas) };
    inline DescribePluginSchemasResponseBodyPluginSchemas pluginSchemas() { DARABONBA_PTR_GET(pluginSchemas_, DescribePluginSchemasResponseBodyPluginSchemas) };
    inline DescribePluginSchemasResponseBody& setPluginSchemas(const DescribePluginSchemasResponseBodyPluginSchemas & pluginSchemas) { DARABONBA_PTR_SET_VALUE(pluginSchemas_, pluginSchemas) };
    inline DescribePluginSchemasResponseBody& setPluginSchemas(DescribePluginSchemasResponseBodyPluginSchemas && pluginSchemas) { DARABONBA_PTR_SET_RVALUE(pluginSchemas_, pluginSchemas) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePluginSchemasResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<DescribePluginSchemasResponseBodyPluginSchemas> pluginSchemas_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
