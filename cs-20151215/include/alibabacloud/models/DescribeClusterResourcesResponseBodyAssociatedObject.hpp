// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERRESOURCESRESPONSEBODYASSOCIATEDOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERRESOURCESRESPONSEBODYASSOCIATEDOBJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeClusterResourcesResponseBodyAssociatedObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterResourcesResponseBodyAssociatedObject& obj) { 
      DARABONBA_PTR_TO_JSON(kind, kind_);
      DARABONBA_PTR_TO_JSON(namespace, namespace_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterResourcesResponseBodyAssociatedObject& obj) { 
      DARABONBA_PTR_FROM_JSON(kind, kind_);
      DARABONBA_PTR_FROM_JSON(namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    DescribeClusterResourcesResponseBodyAssociatedObject() = default ;
    DescribeClusterResourcesResponseBodyAssociatedObject(const DescribeClusterResourcesResponseBodyAssociatedObject &) = default ;
    DescribeClusterResourcesResponseBodyAssociatedObject(DescribeClusterResourcesResponseBodyAssociatedObject &&) = default ;
    DescribeClusterResourcesResponseBodyAssociatedObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterResourcesResponseBodyAssociatedObject() = default ;
    DescribeClusterResourcesResponseBodyAssociatedObject& operator=(const DescribeClusterResourcesResponseBodyAssociatedObject &) = default ;
    DescribeClusterResourcesResponseBodyAssociatedObject& operator=(DescribeClusterResourcesResponseBodyAssociatedObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->kind_ != nullptr
        && this->namespace_ != nullptr && this->name_ != nullptr; };
    // kind Field Functions 
    bool hasKind() const { return this->kind_ != nullptr;};
    void deleteKind() { this->kind_ = nullptr;};
    inline string kind() const { DARABONBA_PTR_GET_DEFAULT(kind_, "") };
    inline DescribeClusterResourcesResponseBodyAssociatedObject& setKind(string kind) { DARABONBA_PTR_SET_VALUE(kind_, kind) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline DescribeClusterResourcesResponseBodyAssociatedObject& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeClusterResourcesResponseBodyAssociatedObject& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The Kubernetes object type.
    std::shared_ptr<string> kind_ = nullptr;
    // The namespace in which the Kubernetes object resides.
    std::shared_ptr<string> namespace_ = nullptr;
    // The Kubernetes object name.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
