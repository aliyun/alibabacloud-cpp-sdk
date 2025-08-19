// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESOURCESDELETEPROTECTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESOURCESDELETEPROTECTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeResourcesDeleteProtectionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeResourcesDeleteProtectionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(namespace, namespace_);
      DARABONBA_PTR_TO_JSON(resource, resource_);
      DARABONBA_PTR_TO_JSON(protection, protection_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeResourcesDeleteProtectionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(resource, resource_);
      DARABONBA_PTR_FROM_JSON(protection, protection_);
    };
    DescribeResourcesDeleteProtectionResponseBody() = default ;
    DescribeResourcesDeleteProtectionResponseBody(const DescribeResourcesDeleteProtectionResponseBody &) = default ;
    DescribeResourcesDeleteProtectionResponseBody(DescribeResourcesDeleteProtectionResponseBody &&) = default ;
    DescribeResourcesDeleteProtectionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeResourcesDeleteProtectionResponseBody() = default ;
    DescribeResourcesDeleteProtectionResponseBody& operator=(const DescribeResourcesDeleteProtectionResponseBody &) = default ;
    DescribeResourcesDeleteProtectionResponseBody& operator=(DescribeResourcesDeleteProtectionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->namespace_ != nullptr && this->resource_ != nullptr && this->protection_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeResourcesDeleteProtectionResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline DescribeResourcesDeleteProtectionResponseBody& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline string resource() const { DARABONBA_PTR_GET_DEFAULT(resource_, "") };
    inline DescribeResourcesDeleteProtectionResponseBody& setResource(string resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };


    // protection Field Functions 
    bool hasProtection() const { return this->protection_ != nullptr;};
    void deleteProtection() { this->protection_ = nullptr;};
    inline bool protection() const { DARABONBA_PTR_GET_DEFAULT(protection_, false) };
    inline DescribeResourcesDeleteProtectionResponseBody& setProtection(bool protection) { DARABONBA_PTR_SET_VALUE(protection_, protection) };


  protected:
    // The resource name.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The namespace to which the resource belongs.
    std::shared_ptr<string> namespace_ = nullptr;
    // The type of the resource.
    std::shared_ptr<string> resource_ = nullptr;
    // Indicates whether deletion protection is enabled.
    // 
    // *   true: deletion protection is enabled.
    // *   false: deletion protection is disabled.
    std::shared_ptr<bool> protection_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
