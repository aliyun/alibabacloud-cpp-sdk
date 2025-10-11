// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPLICATIONREQUESTCOMPONENTS_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPLICATIONREQUESTCOMPONENTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class CreateApplicationRequestComponents : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateApplicationRequestComponents& obj) { 
      DARABONBA_PTR_TO_JSON(ComponentClass, componentClass_);
      DARABONBA_PTR_TO_JSON(ComponentMaxReplica, componentMaxReplica_);
      DARABONBA_PTR_TO_JSON(ComponentReplica, componentReplica_);
      DARABONBA_PTR_TO_JSON(ComponentType, componentType_);
      DARABONBA_PTR_TO_JSON(SecurityGroups, securityGroups_);
      DARABONBA_PTR_TO_JSON(SecurityIPArrayName, securityIPArrayName_);
      DARABONBA_PTR_TO_JSON(SecurityIPList, securityIPList_);
      DARABONBA_PTR_TO_JSON(SecurityIPType, securityIPType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateApplicationRequestComponents& obj) { 
      DARABONBA_PTR_FROM_JSON(ComponentClass, componentClass_);
      DARABONBA_PTR_FROM_JSON(ComponentMaxReplica, componentMaxReplica_);
      DARABONBA_PTR_FROM_JSON(ComponentReplica, componentReplica_);
      DARABONBA_PTR_FROM_JSON(ComponentType, componentType_);
      DARABONBA_PTR_FROM_JSON(SecurityGroups, securityGroups_);
      DARABONBA_PTR_FROM_JSON(SecurityIPArrayName, securityIPArrayName_);
      DARABONBA_PTR_FROM_JSON(SecurityIPList, securityIPList_);
      DARABONBA_PTR_FROM_JSON(SecurityIPType, securityIPType_);
    };
    CreateApplicationRequestComponents() = default ;
    CreateApplicationRequestComponents(const CreateApplicationRequestComponents &) = default ;
    CreateApplicationRequestComponents(CreateApplicationRequestComponents &&) = default ;
    CreateApplicationRequestComponents(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateApplicationRequestComponents() = default ;
    CreateApplicationRequestComponents& operator=(const CreateApplicationRequestComponents &) = default ;
    CreateApplicationRequestComponents& operator=(CreateApplicationRequestComponents &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->componentClass_ != nullptr
        && this->componentMaxReplica_ != nullptr && this->componentReplica_ != nullptr && this->componentType_ != nullptr && this->securityGroups_ != nullptr && this->securityIPArrayName_ != nullptr
        && this->securityIPList_ != nullptr && this->securityIPType_ != nullptr; };
    // componentClass Field Functions 
    bool hasComponentClass() const { return this->componentClass_ != nullptr;};
    void deleteComponentClass() { this->componentClass_ = nullptr;};
    inline string componentClass() const { DARABONBA_PTR_GET_DEFAULT(componentClass_, "") };
    inline CreateApplicationRequestComponents& setComponentClass(string componentClass) { DARABONBA_PTR_SET_VALUE(componentClass_, componentClass) };


    // componentMaxReplica Field Functions 
    bool hasComponentMaxReplica() const { return this->componentMaxReplica_ != nullptr;};
    void deleteComponentMaxReplica() { this->componentMaxReplica_ = nullptr;};
    inline int64_t componentMaxReplica() const { DARABONBA_PTR_GET_DEFAULT(componentMaxReplica_, 0L) };
    inline CreateApplicationRequestComponents& setComponentMaxReplica(int64_t componentMaxReplica) { DARABONBA_PTR_SET_VALUE(componentMaxReplica_, componentMaxReplica) };


    // componentReplica Field Functions 
    bool hasComponentReplica() const { return this->componentReplica_ != nullptr;};
    void deleteComponentReplica() { this->componentReplica_ = nullptr;};
    inline int64_t componentReplica() const { DARABONBA_PTR_GET_DEFAULT(componentReplica_, 0L) };
    inline CreateApplicationRequestComponents& setComponentReplica(int64_t componentReplica) { DARABONBA_PTR_SET_VALUE(componentReplica_, componentReplica) };


    // componentType Field Functions 
    bool hasComponentType() const { return this->componentType_ != nullptr;};
    void deleteComponentType() { this->componentType_ = nullptr;};
    inline string componentType() const { DARABONBA_PTR_GET_DEFAULT(componentType_, "") };
    inline CreateApplicationRequestComponents& setComponentType(string componentType) { DARABONBA_PTR_SET_VALUE(componentType_, componentType) };


    // securityGroups Field Functions 
    bool hasSecurityGroups() const { return this->securityGroups_ != nullptr;};
    void deleteSecurityGroups() { this->securityGroups_ = nullptr;};
    inline string securityGroups() const { DARABONBA_PTR_GET_DEFAULT(securityGroups_, "") };
    inline CreateApplicationRequestComponents& setSecurityGroups(string securityGroups) { DARABONBA_PTR_SET_VALUE(securityGroups_, securityGroups) };


    // securityIPArrayName Field Functions 
    bool hasSecurityIPArrayName() const { return this->securityIPArrayName_ != nullptr;};
    void deleteSecurityIPArrayName() { this->securityIPArrayName_ = nullptr;};
    inline string securityIPArrayName() const { DARABONBA_PTR_GET_DEFAULT(securityIPArrayName_, "") };
    inline CreateApplicationRequestComponents& setSecurityIPArrayName(string securityIPArrayName) { DARABONBA_PTR_SET_VALUE(securityIPArrayName_, securityIPArrayName) };


    // securityIPList Field Functions 
    bool hasSecurityIPList() const { return this->securityIPList_ != nullptr;};
    void deleteSecurityIPList() { this->securityIPList_ = nullptr;};
    inline string securityIPList() const { DARABONBA_PTR_GET_DEFAULT(securityIPList_, "") };
    inline CreateApplicationRequestComponents& setSecurityIPList(string securityIPList) { DARABONBA_PTR_SET_VALUE(securityIPList_, securityIPList) };


    // securityIPType Field Functions 
    bool hasSecurityIPType() const { return this->securityIPType_ != nullptr;};
    void deleteSecurityIPType() { this->securityIPType_ = nullptr;};
    inline string securityIPType() const { DARABONBA_PTR_GET_DEFAULT(securityIPType_, "") };
    inline CreateApplicationRequestComponents& setSecurityIPType(string securityIPType) { DARABONBA_PTR_SET_VALUE(securityIPType_, securityIPType) };


  protected:
    std::shared_ptr<string> componentClass_ = nullptr;
    std::shared_ptr<int64_t> componentMaxReplica_ = nullptr;
    std::shared_ptr<int64_t> componentReplica_ = nullptr;
    std::shared_ptr<string> componentType_ = nullptr;
    std::shared_ptr<string> securityGroups_ = nullptr;
    std::shared_ptr<string> securityIPArrayName_ = nullptr;
    std::shared_ptr<string> securityIPList_ = nullptr;
    std::shared_ptr<string> securityIPType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
