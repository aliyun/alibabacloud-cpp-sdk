// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSTACKRESOURCESRESPONSEBODYRESOURCESMODULEINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTSTACKRESOURCESRESPONSEBODYRESOURCESMODULEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class ListStackResourcesResponseBodyResourcesModuleInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListStackResourcesResponseBodyResourcesModuleInfo& obj) { 
      DARABONBA_PTR_TO_JSON(LogicalIdHierarchy, logicalIdHierarchy_);
      DARABONBA_PTR_TO_JSON(TypeHierarchy, typeHierarchy_);
    };
    friend void from_json(const Darabonba::Json& j, ListStackResourcesResponseBodyResourcesModuleInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(LogicalIdHierarchy, logicalIdHierarchy_);
      DARABONBA_PTR_FROM_JSON(TypeHierarchy, typeHierarchy_);
    };
    ListStackResourcesResponseBodyResourcesModuleInfo() = default ;
    ListStackResourcesResponseBodyResourcesModuleInfo(const ListStackResourcesResponseBodyResourcesModuleInfo &) = default ;
    ListStackResourcesResponseBodyResourcesModuleInfo(ListStackResourcesResponseBodyResourcesModuleInfo &&) = default ;
    ListStackResourcesResponseBodyResourcesModuleInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListStackResourcesResponseBodyResourcesModuleInfo() = default ;
    ListStackResourcesResponseBodyResourcesModuleInfo& operator=(const ListStackResourcesResponseBodyResourcesModuleInfo &) = default ;
    ListStackResourcesResponseBodyResourcesModuleInfo& operator=(ListStackResourcesResponseBodyResourcesModuleInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->logicalIdHierarchy_ != nullptr
        && this->typeHierarchy_ != nullptr; };
    // logicalIdHierarchy Field Functions 
    bool hasLogicalIdHierarchy() const { return this->logicalIdHierarchy_ != nullptr;};
    void deleteLogicalIdHierarchy() { this->logicalIdHierarchy_ = nullptr;};
    inline string logicalIdHierarchy() const { DARABONBA_PTR_GET_DEFAULT(logicalIdHierarchy_, "") };
    inline ListStackResourcesResponseBodyResourcesModuleInfo& setLogicalIdHierarchy(string logicalIdHierarchy) { DARABONBA_PTR_SET_VALUE(logicalIdHierarchy_, logicalIdHierarchy) };


    // typeHierarchy Field Functions 
    bool hasTypeHierarchy() const { return this->typeHierarchy_ != nullptr;};
    void deleteTypeHierarchy() { this->typeHierarchy_ = nullptr;};
    inline string typeHierarchy() const { DARABONBA_PTR_GET_DEFAULT(typeHierarchy_, "") };
    inline ListStackResourcesResponseBodyResourcesModuleInfo& setTypeHierarchy(string typeHierarchy) { DARABONBA_PTR_SET_VALUE(typeHierarchy_, typeHierarchy) };


  protected:
    // The concatenated logical IDs of one or more modules that contain the resource. The modules are listed from the outermost layer and separated by forward slashes (`/`).
    // 
    // In the following example, the resource is created from Module B nested within Parent Module A:
    // 
    // `moduleA/moduleB`
    std::shared_ptr<string> logicalIdHierarchy_ = nullptr;
    // The concatenated types of one or more modules that contain the resource. The module types are listed from the outermost layer and separated by forward slashes (`/`).
    // 
    // In the following example, the resource is created from a module of the `MODULE::ROS::Child::Example` type that is nested within a parent module of the `MODULE::ROS::Parent::Example` type:
    // 
    // `MODULE::ROS::Parent::Example/MODULE::ROS::Child::Example`
    std::shared_ptr<string> typeHierarchy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
