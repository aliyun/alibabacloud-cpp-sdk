// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROMETHEUSVIRTUALINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPROMETHEUSVIRTUALINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListPrometheusVirtualInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPrometheusVirtualInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(namespace, namespace_);
    };
    friend void from_json(const Darabonba::Json& j, ListPrometheusVirtualInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(namespace, namespace_);
    };
    ListPrometheusVirtualInstancesRequest() = default ;
    ListPrometheusVirtualInstancesRequest(const ListPrometheusVirtualInstancesRequest &) = default ;
    ListPrometheusVirtualInstancesRequest(ListPrometheusVirtualInstancesRequest &&) = default ;
    ListPrometheusVirtualInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPrometheusVirtualInstancesRequest() = default ;
    ListPrometheusVirtualInstancesRequest& operator=(const ListPrometheusVirtualInstancesRequest &) = default ;
    ListPrometheusVirtualInstancesRequest& operator=(ListPrometheusVirtualInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->namespace_ != nullptr; };
    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline ListPrometheusVirtualInstancesRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


  protected:
    std::shared_ptr<string> namespace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
