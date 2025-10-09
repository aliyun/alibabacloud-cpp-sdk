// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCERESPONSEBODYRESOURCE_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCERESPONSEBODYRESOURCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetResourceResponseBodyResource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceResponseBodyResource& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(Spec, spec_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceResponseBodyResource& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(Spec, spec_);
    };
    GetResourceResponseBodyResource() = default ;
    GetResourceResponseBodyResource(const GetResourceResponseBodyResource &) = default ;
    GetResourceResponseBodyResource(GetResourceResponseBodyResource &&) = default ;
    GetResourceResponseBodyResource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceResponseBodyResource() = default ;
    GetResourceResponseBodyResource& operator=(const GetResourceResponseBodyResource &) = default ;
    GetResourceResponseBodyResource& operator=(GetResourceResponseBodyResource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->id_ != nullptr && this->modifyTime_ != nullptr && this->name_ != nullptr && this->owner_ != nullptr && this->projectId_ != nullptr
        && this->spec_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline GetResourceResponseBodyResource& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetResourceResponseBodyResource& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline int64_t modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
    inline GetResourceResponseBodyResource& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetResourceResponseBodyResource& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline GetResourceResponseBodyResource& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline GetResourceResponseBodyResource& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline string spec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
    inline GetResourceResponseBodyResource& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


  protected:
    // The time when the file resource was created. This value is a UNIX timestamp.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The ID of the file resource.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The time when the file resource was last modified. This value is a UNIX timestamp.
    std::shared_ptr<int64_t> modifyTime_ = nullptr;
    // The name of the file resource.
    std::shared_ptr<string> name_ = nullptr;
    // The owner of the file resource.
    std::shared_ptr<string> owner_ = nullptr;
    // The ID of the workspace to which the file resource belongs.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The FlowSpec field information about the file resource. For more information, see [FlowSpec](https://github.com/aliyun/alibabacloud-dataworks-tool-dflow).
    std::shared_ptr<string> spec_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
