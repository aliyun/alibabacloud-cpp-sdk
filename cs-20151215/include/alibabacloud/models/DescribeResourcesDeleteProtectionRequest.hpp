// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESOURCESDELETEPROTECTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESOURCESDELETEPROTECTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeResourcesDeleteProtectionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeResourcesDeleteProtectionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(namespace, namespace_);
      DARABONBA_PTR_TO_JSON(resources, resources_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeResourcesDeleteProtectionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(resources, resources_);
    };
    DescribeResourcesDeleteProtectionRequest() = default ;
    DescribeResourcesDeleteProtectionRequest(const DescribeResourcesDeleteProtectionRequest &) = default ;
    DescribeResourcesDeleteProtectionRequest(DescribeResourcesDeleteProtectionRequest &&) = default ;
    DescribeResourcesDeleteProtectionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeResourcesDeleteProtectionRequest() = default ;
    DescribeResourcesDeleteProtectionRequest& operator=(const DescribeResourcesDeleteProtectionRequest &) = default ;
    DescribeResourcesDeleteProtectionRequest& operator=(DescribeResourcesDeleteProtectionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->namespace_ == nullptr
        && this->resources_ == nullptr; };
    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline DescribeResourcesDeleteProtectionRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline string getResources() const { DARABONBA_PTR_GET_DEFAULT(resources_, "") };
    inline DescribeResourcesDeleteProtectionRequest& setResources(string resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };


  protected:
    // The namespace of the resource to query.
    // 
    // This parameter is required when resource_type is set to services. If this parameter is not specified, the namespace defaults to default.
    shared_ptr<string> namespace_ {};
    // The name of the resource to query. Separate multiple resources with commas (,).
    // 
    // - If resource_type is set to namespaces, set this parameter to namespace names. If this parameter is not specified, the deletion protection status of all namespaces in the cluster is queried.
    // 
    // - If resource_type is set to services, this parameter is required. Set this parameter to service names.
    shared_ptr<string> resources_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
