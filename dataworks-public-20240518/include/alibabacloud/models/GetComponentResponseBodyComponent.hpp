// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCOMPONENTRESPONSEBODYCOMPONENT_HPP_
#define ALIBABACLOUD_MODELS_GETCOMPONENTRESPONSEBODYCOMPONENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetComponentResponseBodyComponent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetComponentResponseBodyComponent& obj) { 
      DARABONBA_PTR_TO_JSON(ComponentId, componentId_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Spec, spec_);
    };
    friend void from_json(const Darabonba::Json& j, GetComponentResponseBodyComponent& obj) { 
      DARABONBA_PTR_FROM_JSON(ComponentId, componentId_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Spec, spec_);
    };
    GetComponentResponseBodyComponent() = default ;
    GetComponentResponseBodyComponent(const GetComponentResponseBodyComponent &) = default ;
    GetComponentResponseBodyComponent(GetComponentResponseBodyComponent &&) = default ;
    GetComponentResponseBodyComponent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetComponentResponseBodyComponent() = default ;
    GetComponentResponseBodyComponent& operator=(const GetComponentResponseBodyComponent &) = default ;
    GetComponentResponseBodyComponent& operator=(GetComponentResponseBodyComponent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->componentId_ != nullptr
        && this->createTime_ != nullptr && this->description_ != nullptr && this->modifyTime_ != nullptr && this->name_ != nullptr && this->owner_ != nullptr
        && this->projectId_ != nullptr && this->regionId_ != nullptr && this->spec_ != nullptr; };
    // componentId Field Functions 
    bool hasComponentId() const { return this->componentId_ != nullptr;};
    void deleteComponentId() { this->componentId_ = nullptr;};
    inline string componentId() const { DARABONBA_PTR_GET_DEFAULT(componentId_, "") };
    inline GetComponentResponseBodyComponent& setComponentId(string componentId) { DARABONBA_PTR_SET_VALUE(componentId_, componentId) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetComponentResponseBodyComponent& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetComponentResponseBodyComponent& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline string modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
    inline GetComponentResponseBodyComponent& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetComponentResponseBodyComponent& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline GetComponentResponseBodyComponent& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline GetComponentResponseBodyComponent& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetComponentResponseBodyComponent& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline string spec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
    inline GetComponentResponseBodyComponent& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


  protected:
    std::shared_ptr<string> componentId_ = nullptr;
    // Use the UTC time format: yyyy-MM-ddTHH:mm:ss.SSSZ
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    // Use the UTC time format: yyyy-MM-ddTHH:mm:ss.SSSZ
    std::shared_ptr<string> modifyTime_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> owner_ = nullptr;
    std::shared_ptr<int64_t> projectId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> spec_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
