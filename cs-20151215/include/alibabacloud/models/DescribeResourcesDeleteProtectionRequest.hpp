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
    virtual bool empty() const override { this->namespace_ != nullptr
        && this->resources_ != nullptr; };
    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline DescribeResourcesDeleteProtectionRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline string resources() const { DARABONBA_PTR_GET_DEFAULT(resources_, "") };
    inline DescribeResourcesDeleteProtectionRequest& setResources(string resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };


  protected:
    // The namespace in which the resources that you want to query reside.
    // 
    // This parameter is required when you set resource_type to services. Default value: default.
    std::shared_ptr<string> namespace_ = nullptr;
    // The names of the resources that you want to query. Separate multiple resource names with commas (,).
    // 
    // *   When you set resource_type to namespaces, you must specify namespace names. If you leave this parameter empty, all namespaces in the cluster are queried.
    // *   If you set resource_type to services, you must specify Service names.
    std::shared_ptr<string> resources_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
