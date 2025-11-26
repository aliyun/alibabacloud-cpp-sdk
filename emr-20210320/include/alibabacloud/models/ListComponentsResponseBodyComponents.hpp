// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOMPONENTSRESPONSEBODYCOMPONENTS_HPP_
#define ALIBABACLOUD_MODELS_LISTCOMPONENTSRESPONSEBODYCOMPONENTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Attribute.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class ListComponentsResponseBodyComponents : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListComponentsResponseBodyComponents& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_TO_JSON(Attributes, attributes_);
      DARABONBA_PTR_TO_JSON(ComponentName, componentName_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(Replica, replica_);
    };
    friend void from_json(const Darabonba::Json& j, ListComponentsResponseBodyComponents& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_FROM_JSON(Attributes, attributes_);
      DARABONBA_PTR_FROM_JSON(ComponentName, componentName_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(Replica, replica_);
    };
    ListComponentsResponseBodyComponents() = default ;
    ListComponentsResponseBodyComponents(const ListComponentsResponseBodyComponents &) = default ;
    ListComponentsResponseBodyComponents(ListComponentsResponseBodyComponents &&) = default ;
    ListComponentsResponseBodyComponents(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListComponentsResponseBodyComponents() = default ;
    ListComponentsResponseBodyComponents& operator=(const ListComponentsResponseBodyComponents &) = default ;
    ListComponentsResponseBodyComponents& operator=(ListComponentsResponseBodyComponents &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationName_ == nullptr
        && return this->attributes_ == nullptr && return this->componentName_ == nullptr && return this->namespace_ == nullptr && return this->replica_ == nullptr; };
    // applicationName Field Functions 
    bool hasApplicationName() const { return this->applicationName_ != nullptr;};
    void deleteApplicationName() { this->applicationName_ = nullptr;};
    inline string applicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
    inline ListComponentsResponseBodyComponents& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


    // attributes Field Functions 
    bool hasAttributes() const { return this->attributes_ != nullptr;};
    void deleteAttributes() { this->attributes_ = nullptr;};
    inline const vector<Models::Attribute> & attributes() const { DARABONBA_PTR_GET_CONST(attributes_, vector<Models::Attribute>) };
    inline vector<Models::Attribute> attributes() { DARABONBA_PTR_GET(attributes_, vector<Models::Attribute>) };
    inline ListComponentsResponseBodyComponents& setAttributes(const vector<Models::Attribute> & attributes) { DARABONBA_PTR_SET_VALUE(attributes_, attributes) };
    inline ListComponentsResponseBodyComponents& setAttributes(vector<Models::Attribute> && attributes) { DARABONBA_PTR_SET_RVALUE(attributes_, attributes) };


    // componentName Field Functions 
    bool hasComponentName() const { return this->componentName_ != nullptr;};
    void deleteComponentName() { this->componentName_ = nullptr;};
    inline string componentName() const { DARABONBA_PTR_GET_DEFAULT(componentName_, "") };
    inline ListComponentsResponseBodyComponents& setComponentName(string componentName) { DARABONBA_PTR_SET_VALUE(componentName_, componentName) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline ListComponentsResponseBodyComponents& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // replica Field Functions 
    bool hasReplica() const { return this->replica_ != nullptr;};
    void deleteReplica() { this->replica_ = nullptr;};
    inline int32_t replica() const { DARABONBA_PTR_GET_DEFAULT(replica_, 0) };
    inline ListComponentsResponseBodyComponents& setReplica(int32_t replica) { DARABONBA_PTR_SET_VALUE(replica_, replica) };


  protected:
    // The application name.
    std::shared_ptr<string> applicationName_ = nullptr;
    // The list of attributes.
    std::shared_ptr<vector<Models::Attribute>> attributes_ = nullptr;
    // The component name.
    std::shared_ptr<string> componentName_ = nullptr;
    // The reserved field.
    std::shared_ptr<string> namespace_ = nullptr;
    // The total number of instances on which the component is installed.
    std::shared_ptr<int32_t> replica_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
