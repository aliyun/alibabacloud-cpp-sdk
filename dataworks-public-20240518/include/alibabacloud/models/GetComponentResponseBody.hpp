// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCOMPONENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCOMPONENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetComponentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetComponentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Component, component_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetComponentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Component, component_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetComponentResponseBody() = default ;
    GetComponentResponseBody(const GetComponentResponseBody &) = default ;
    GetComponentResponseBody(GetComponentResponseBody &&) = default ;
    GetComponentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetComponentResponseBody() = default ;
    GetComponentResponseBody& operator=(const GetComponentResponseBody &) = default ;
    GetComponentResponseBody& operator=(GetComponentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Component : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Component& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Component& obj) { 
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
      Component() = default ;
      Component(const Component &) = default ;
      Component(Component &&) = default ;
      Component(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Component() = default ;
      Component& operator=(const Component &) = default ;
      Component& operator=(Component &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->componentId_ == nullptr
        && this->createTime_ == nullptr && this->description_ == nullptr && this->modifyTime_ == nullptr && this->name_ == nullptr && this->owner_ == nullptr
        && this->projectId_ == nullptr && this->regionId_ == nullptr && this->spec_ == nullptr; };
      // componentId Field Functions 
      bool hasComponentId() const { return this->componentId_ != nullptr;};
      void deleteComponentId() { this->componentId_ = nullptr;};
      inline string getComponentId() const { DARABONBA_PTR_GET_DEFAULT(componentId_, "") };
      inline Component& setComponentId(string componentId) { DARABONBA_PTR_SET_VALUE(componentId_, componentId) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Component& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Component& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // modifyTime Field Functions 
      bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
      void deleteModifyTime() { this->modifyTime_ = nullptr;};
      inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
      inline Component& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Component& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // owner Field Functions 
      bool hasOwner() const { return this->owner_ != nullptr;};
      void deleteOwner() { this->owner_ = nullptr;};
      inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
      inline Component& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
      inline Component& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Component& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // spec Field Functions 
      bool hasSpec() const { return this->spec_ != nullptr;};
      void deleteSpec() { this->spec_ = nullptr;};
      inline string getSpec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
      inline Component& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


    protected:
      // The ID of the dataset acceleration component. For information on how to obtain the component ID, see [ListComponents](https://help.aliyun.com/document_detail/2979566.html).
      shared_ptr<string> componentId_ {};
      // The creation time.
      // 
      // Use the UTC time format: yyyy-MM-ddTHH:mm:ss.SSSZ
      shared_ptr<string> createTime_ {};
      // The description.
      shared_ptr<string> description_ {};
      // The modification time (millisecond-level timestamp).
      // 
      // Use the UTC time format: yyyy-MM-ddTHH:mm:ss.SSSZ
      shared_ptr<string> modifyTime_ {};
      // Parameter
      shared_ptr<string> name_ {};
      // The ID of the task owner.
      shared_ptr<string> owner_ {};
      // The DataWorks workspace ID.
      shared_ptr<int64_t> projectId_ {};
      // The region ID, such as ap-southeast-1. The region ID is automatically parsed from your endpoint.
      shared_ptr<string> regionId_ {};
      // The FlowSpec information for this workflow. For more information, see [FlowSpec](https://github.com/aliyun/alibabacloud-dataworks-tool-dflow/).
      shared_ptr<string> spec_ {};
    };

    virtual bool empty() const override { return this->component_ == nullptr
        && this->requestId_ == nullptr; };
    // component Field Functions 
    bool hasComponent() const { return this->component_ != nullptr;};
    void deleteComponent() { this->component_ = nullptr;};
    inline const GetComponentResponseBody::Component & getComponent() const { DARABONBA_PTR_GET_CONST(component_, GetComponentResponseBody::Component) };
    inline GetComponentResponseBody::Component getComponent() { DARABONBA_PTR_GET(component_, GetComponentResponseBody::Component) };
    inline GetComponentResponseBody& setComponent(const GetComponentResponseBody::Component & component) { DARABONBA_PTR_SET_VALUE(component_, component) };
    inline GetComponentResponseBody& setComponent(GetComponentResponseBody::Component && component) { DARABONBA_PTR_SET_RVALUE(component_, component) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetComponentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // JSON serialization of the component module.
    shared_ptr<GetComponentResponseBody::Component> component_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
