// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYNAMESPACERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYNAMESPACERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class QueryNamespaceResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryNamespaceResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(Region, region_);
    };
    friend void from_json(const Darabonba::Json& j, QueryNamespaceResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
    };
    QueryNamespaceResponseBodyData() = default ;
    QueryNamespaceResponseBodyData(const QueryNamespaceResponseBodyData &) = default ;
    QueryNamespaceResponseBodyData(QueryNamespaceResponseBodyData &&) = default ;
    QueryNamespaceResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryNamespaceResponseBodyData() = default ;
    QueryNamespaceResponseBodyData& operator=(const QueryNamespaceResponseBodyData &) = default ;
    QueryNamespaceResponseBodyData& operator=(QueryNamespaceResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->namespace_ != nullptr
        && this->region_ != nullptr; };
    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline QueryNamespaceResponseBodyData& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline QueryNamespaceResponseBodyData& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


  protected:
    // The name of the namespace.
    std::shared_ptr<string> namespace_ = nullptr;
    // The region to which the namespace belongs.
    std::shared_ptr<string> region_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
