// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCOMPUTERESOURCERESPONSEBODYCOMPUTERESOURCE_HPP_
#define ALIBABACLOUD_MODELS_GETCOMPUTERESOURCERESPONSEBODYCOMPUTERESOURCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetComputeResourceResponseBodyComputeResource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetComputeResourceResponseBodyComputeResource& obj) { 
      DARABONBA_ANY_TO_JSON(ConnectionProperties, connectionProperties_);
      DARABONBA_PTR_TO_JSON(ConnectionPropertiesMode, connectionPropertiesMode_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreateUser, createUser_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(ModifyUser, modifyUser_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(QualifiedName, qualifiedName_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(WhetherDefault, whetherDefault_);
    };
    friend void from_json(const Darabonba::Json& j, GetComputeResourceResponseBodyComputeResource& obj) { 
      DARABONBA_ANY_FROM_JSON(ConnectionProperties, connectionProperties_);
      DARABONBA_PTR_FROM_JSON(ConnectionPropertiesMode, connectionPropertiesMode_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreateUser, createUser_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(ModifyUser, modifyUser_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(QualifiedName, qualifiedName_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(WhetherDefault, whetherDefault_);
    };
    GetComputeResourceResponseBodyComputeResource() = default ;
    GetComputeResourceResponseBodyComputeResource(const GetComputeResourceResponseBodyComputeResource &) = default ;
    GetComputeResourceResponseBodyComputeResource(GetComputeResourceResponseBodyComputeResource &&) = default ;
    GetComputeResourceResponseBodyComputeResource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetComputeResourceResponseBodyComputeResource() = default ;
    GetComputeResourceResponseBodyComputeResource& operator=(const GetComputeResourceResponseBodyComputeResource &) = default ;
    GetComputeResourceResponseBodyComputeResource& operator=(GetComputeResourceResponseBodyComputeResource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->connectionProperties_ == nullptr
        && return this->connectionPropertiesMode_ == nullptr && return this->createTime_ == nullptr && return this->createUser_ == nullptr && return this->description_ == nullptr && return this->id_ == nullptr
        && return this->modifyTime_ == nullptr && return this->modifyUser_ == nullptr && return this->name_ == nullptr && return this->projectId_ == nullptr && return this->qualifiedName_ == nullptr
        && return this->type_ == nullptr && return this->whetherDefault_ == nullptr; };
    // connectionProperties Field Functions 
    bool hasConnectionProperties() const { return this->connectionProperties_ != nullptr;};
    void deleteConnectionProperties() { this->connectionProperties_ = nullptr;};
    inline     const Darabonba::Json & connectionProperties() const { DARABONBA_GET(connectionProperties_) };
    Darabonba::Json & connectionProperties() { DARABONBA_GET(connectionProperties_) };
    inline GetComputeResourceResponseBodyComputeResource& setConnectionProperties(const Darabonba::Json & connectionProperties) { DARABONBA_SET_VALUE(connectionProperties_, connectionProperties) };
    inline GetComputeResourceResponseBodyComputeResource& setConnectionProperties(Darabonba::Json & connectionProperties) { DARABONBA_SET_RVALUE(connectionProperties_, connectionProperties) };


    // connectionPropertiesMode Field Functions 
    bool hasConnectionPropertiesMode() const { return this->connectionPropertiesMode_ != nullptr;};
    void deleteConnectionPropertiesMode() { this->connectionPropertiesMode_ = nullptr;};
    inline string connectionPropertiesMode() const { DARABONBA_PTR_GET_DEFAULT(connectionPropertiesMode_, "") };
    inline GetComputeResourceResponseBodyComputeResource& setConnectionPropertiesMode(string connectionPropertiesMode) { DARABONBA_PTR_SET_VALUE(connectionPropertiesMode_, connectionPropertiesMode) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline GetComputeResourceResponseBodyComputeResource& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createUser Field Functions 
    bool hasCreateUser() const { return this->createUser_ != nullptr;};
    void deleteCreateUser() { this->createUser_ = nullptr;};
    inline string createUser() const { DARABONBA_PTR_GET_DEFAULT(createUser_, "") };
    inline GetComputeResourceResponseBodyComputeResource& setCreateUser(string createUser) { DARABONBA_PTR_SET_VALUE(createUser_, createUser) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetComputeResourceResponseBodyComputeResource& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetComputeResourceResponseBodyComputeResource& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline int64_t modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
    inline GetComputeResourceResponseBodyComputeResource& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // modifyUser Field Functions 
    bool hasModifyUser() const { return this->modifyUser_ != nullptr;};
    void deleteModifyUser() { this->modifyUser_ = nullptr;};
    inline string modifyUser() const { DARABONBA_PTR_GET_DEFAULT(modifyUser_, "") };
    inline GetComputeResourceResponseBodyComputeResource& setModifyUser(string modifyUser) { DARABONBA_PTR_SET_VALUE(modifyUser_, modifyUser) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetComputeResourceResponseBodyComputeResource& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline GetComputeResourceResponseBodyComputeResource& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // qualifiedName Field Functions 
    bool hasQualifiedName() const { return this->qualifiedName_ != nullptr;};
    void deleteQualifiedName() { this->qualifiedName_ = nullptr;};
    inline string qualifiedName() const { DARABONBA_PTR_GET_DEFAULT(qualifiedName_, "") };
    inline GetComputeResourceResponseBodyComputeResource& setQualifiedName(string qualifiedName) { DARABONBA_PTR_SET_VALUE(qualifiedName_, qualifiedName) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetComputeResourceResponseBodyComputeResource& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // whetherDefault Field Functions 
    bool hasWhetherDefault() const { return this->whetherDefault_ != nullptr;};
    void deleteWhetherDefault() { this->whetherDefault_ = nullptr;};
    inline bool whetherDefault() const { DARABONBA_PTR_GET_DEFAULT(whetherDefault_, false) };
    inline GetComputeResourceResponseBodyComputeResource& setWhetherDefault(bool whetherDefault) { DARABONBA_PTR_SET_VALUE(whetherDefault_, whetherDefault) };


  protected:
    Darabonba::Json connectionProperties_ = nullptr;
    std::shared_ptr<string> connectionPropertiesMode_ = nullptr;
    std::shared_ptr<int64_t> createTime_ = nullptr;
    std::shared_ptr<string> createUser_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<int64_t> modifyTime_ = nullptr;
    std::shared_ptr<string> modifyUser_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int64_t> projectId_ = nullptr;
    std::shared_ptr<string> qualifiedName_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<bool> whetherDefault_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
