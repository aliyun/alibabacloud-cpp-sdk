// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCONVERTINSTANCEPRICEREQUESTCONVERTPOSTPAYINSTANCEREQUESTNAMESPACERESOURCESPECS_HPP_
#define ALIBABACLOUD_MODELS_QUERYCONVERTINSTANCEPRICEREQUESTCONVERTPOSTPAYINSTANCEREQUESTNAMESPACERESOURCESPECS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryConvertInstancePriceRequestConvertPostpayInstanceRequestNamespaceResourceSpecsResourceSpec.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Foasconsole20190601
{
namespace Models
{
  class QueryConvertInstancePriceRequestConvertPostpayInstanceRequestNamespaceResourceSpecs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryConvertInstancePriceRequestConvertPostpayInstanceRequestNamespaceResourceSpecs& obj) { 
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(ResourceSpec, resourceSpec_);
    };
    friend void from_json(const Darabonba::Json& j, QueryConvertInstancePriceRequestConvertPostpayInstanceRequestNamespaceResourceSpecs& obj) { 
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(ResourceSpec, resourceSpec_);
    };
    QueryConvertInstancePriceRequestConvertPostpayInstanceRequestNamespaceResourceSpecs() = default ;
    QueryConvertInstancePriceRequestConvertPostpayInstanceRequestNamespaceResourceSpecs(const QueryConvertInstancePriceRequestConvertPostpayInstanceRequestNamespaceResourceSpecs &) = default ;
    QueryConvertInstancePriceRequestConvertPostpayInstanceRequestNamespaceResourceSpecs(QueryConvertInstancePriceRequestConvertPostpayInstanceRequestNamespaceResourceSpecs &&) = default ;
    QueryConvertInstancePriceRequestConvertPostpayInstanceRequestNamespaceResourceSpecs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryConvertInstancePriceRequestConvertPostpayInstanceRequestNamespaceResourceSpecs() = default ;
    QueryConvertInstancePriceRequestConvertPostpayInstanceRequestNamespaceResourceSpecs& operator=(const QueryConvertInstancePriceRequestConvertPostpayInstanceRequestNamespaceResourceSpecs &) = default ;
    QueryConvertInstancePriceRequestConvertPostpayInstanceRequestNamespaceResourceSpecs& operator=(QueryConvertInstancePriceRequestConvertPostpayInstanceRequestNamespaceResourceSpecs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->namespace_ == nullptr
        && return this->resourceSpec_ == nullptr; };
    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline QueryConvertInstancePriceRequestConvertPostpayInstanceRequestNamespaceResourceSpecs& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // resourceSpec Field Functions 
    bool hasResourceSpec() const { return this->resourceSpec_ != nullptr;};
    void deleteResourceSpec() { this->resourceSpec_ = nullptr;};
    inline const Models::QueryConvertInstancePriceRequestConvertPostpayInstanceRequestNamespaceResourceSpecsResourceSpec & resourceSpec() const { DARABONBA_PTR_GET_CONST(resourceSpec_, Models::QueryConvertInstancePriceRequestConvertPostpayInstanceRequestNamespaceResourceSpecsResourceSpec) };
    inline Models::QueryConvertInstancePriceRequestConvertPostpayInstanceRequestNamespaceResourceSpecsResourceSpec resourceSpec() { DARABONBA_PTR_GET(resourceSpec_, Models::QueryConvertInstancePriceRequestConvertPostpayInstanceRequestNamespaceResourceSpecsResourceSpec) };
    inline QueryConvertInstancePriceRequestConvertPostpayInstanceRequestNamespaceResourceSpecs& setResourceSpec(const Models::QueryConvertInstancePriceRequestConvertPostpayInstanceRequestNamespaceResourceSpecsResourceSpec & resourceSpec) { DARABONBA_PTR_SET_VALUE(resourceSpec_, resourceSpec) };
    inline QueryConvertInstancePriceRequestConvertPostpayInstanceRequestNamespaceResourceSpecs& setResourceSpec(Models::QueryConvertInstancePriceRequestConvertPostpayInstanceRequestNamespaceResourceSpecsResourceSpec && resourceSpec) { DARABONBA_PTR_SET_RVALUE(resourceSpec_, resourceSpec) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> namespace_ = nullptr;
    // This parameter is required.
    std::shared_ptr<Models::QueryConvertInstancePriceRequestConvertPostpayInstanceRequestNamespaceResourceSpecsResourceSpec> resourceSpec_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Foasconsole20190601
#endif
