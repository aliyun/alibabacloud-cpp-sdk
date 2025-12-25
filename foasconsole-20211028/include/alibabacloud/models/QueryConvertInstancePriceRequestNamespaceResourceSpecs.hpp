// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCONVERTINSTANCEPRICEREQUESTNAMESPACERESOURCESPECS_HPP_
#define ALIBABACLOUD_MODELS_QUERYCONVERTINSTANCEPRICEREQUESTNAMESPACERESOURCESPECS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryConvertInstancePriceRequestNamespaceResourceSpecsResourceSpec.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Foasconsole20211028
{
namespace Models
{
  class QueryConvertInstancePriceRequestNamespaceResourceSpecs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryConvertInstancePriceRequestNamespaceResourceSpecs& obj) { 
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(ResourceSpec, resourceSpec_);
    };
    friend void from_json(const Darabonba::Json& j, QueryConvertInstancePriceRequestNamespaceResourceSpecs& obj) { 
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(ResourceSpec, resourceSpec_);
    };
    QueryConvertInstancePriceRequestNamespaceResourceSpecs() = default ;
    QueryConvertInstancePriceRequestNamespaceResourceSpecs(const QueryConvertInstancePriceRequestNamespaceResourceSpecs &) = default ;
    QueryConvertInstancePriceRequestNamespaceResourceSpecs(QueryConvertInstancePriceRequestNamespaceResourceSpecs &&) = default ;
    QueryConvertInstancePriceRequestNamespaceResourceSpecs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryConvertInstancePriceRequestNamespaceResourceSpecs() = default ;
    QueryConvertInstancePriceRequestNamespaceResourceSpecs& operator=(const QueryConvertInstancePriceRequestNamespaceResourceSpecs &) = default ;
    QueryConvertInstancePriceRequestNamespaceResourceSpecs& operator=(QueryConvertInstancePriceRequestNamespaceResourceSpecs &&) = default ;
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
    inline QueryConvertInstancePriceRequestNamespaceResourceSpecs& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // resourceSpec Field Functions 
    bool hasResourceSpec() const { return this->resourceSpec_ != nullptr;};
    void deleteResourceSpec() { this->resourceSpec_ = nullptr;};
    inline const Models::QueryConvertInstancePriceRequestNamespaceResourceSpecsResourceSpec & resourceSpec() const { DARABONBA_PTR_GET_CONST(resourceSpec_, Models::QueryConvertInstancePriceRequestNamespaceResourceSpecsResourceSpec) };
    inline Models::QueryConvertInstancePriceRequestNamespaceResourceSpecsResourceSpec resourceSpec() { DARABONBA_PTR_GET(resourceSpec_, Models::QueryConvertInstancePriceRequestNamespaceResourceSpecsResourceSpec) };
    inline QueryConvertInstancePriceRequestNamespaceResourceSpecs& setResourceSpec(const Models::QueryConvertInstancePriceRequestNamespaceResourceSpecsResourceSpec & resourceSpec) { DARABONBA_PTR_SET_VALUE(resourceSpec_, resourceSpec) };
    inline QueryConvertInstancePriceRequestNamespaceResourceSpecs& setResourceSpec(Models::QueryConvertInstancePriceRequestNamespaceResourceSpecsResourceSpec && resourceSpec) { DARABONBA_PTR_SET_RVALUE(resourceSpec_, resourceSpec) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> namespace_ = nullptr;
    // This parameter is required.
    std::shared_ptr<Models::QueryConvertInstancePriceRequestNamespaceResourceSpecsResourceSpec> resourceSpec_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Foasconsole20211028
#endif
