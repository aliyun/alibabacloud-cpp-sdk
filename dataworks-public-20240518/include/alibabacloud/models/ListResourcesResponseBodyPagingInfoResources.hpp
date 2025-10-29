// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCESRESPONSEBODYPAGINGINFORESOURCES_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCESRESPONSEBODYPAGINGINFORESOURCES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListResourcesResponseBodyPagingInfoResourcesDataSource.hpp>
#include <alibabacloud/models/ListResourcesResponseBodyPagingInfoResourcesScript.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListResourcesResponseBodyPagingInfoResources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourcesResponseBodyPagingInfoResources& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DataSource, dataSource_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(Script, script_);
      DARABONBA_PTR_TO_JSON(SourcePath, sourcePath_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(TargetPath, targetPath_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourcesResponseBodyPagingInfoResources& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DataSource, dataSource_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(Script, script_);
      DARABONBA_PTR_FROM_JSON(SourcePath, sourcePath_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(TargetPath, targetPath_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListResourcesResponseBodyPagingInfoResources() = default ;
    ListResourcesResponseBodyPagingInfoResources(const ListResourcesResponseBodyPagingInfoResources &) = default ;
    ListResourcesResponseBodyPagingInfoResources(ListResourcesResponseBodyPagingInfoResources &&) = default ;
    ListResourcesResponseBodyPagingInfoResources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourcesResponseBodyPagingInfoResources() = default ;
    ListResourcesResponseBodyPagingInfoResources& operator=(const ListResourcesResponseBodyPagingInfoResources &) = default ;
    ListResourcesResponseBodyPagingInfoResources& operator=(ListResourcesResponseBodyPagingInfoResources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->dataSource_ == nullptr && return this->id_ == nullptr && return this->modifyTime_ == nullptr && return this->name_ == nullptr && return this->owner_ == nullptr
        && return this->projectId_ == nullptr && return this->script_ == nullptr && return this->sourcePath_ == nullptr && return this->sourceType_ == nullptr && return this->targetPath_ == nullptr
        && return this->targetType_ == nullptr && return this->type_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListResourcesResponseBodyPagingInfoResources& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // dataSource Field Functions 
    bool hasDataSource() const { return this->dataSource_ != nullptr;};
    void deleteDataSource() { this->dataSource_ = nullptr;};
    inline const Models::ListResourcesResponseBodyPagingInfoResourcesDataSource & dataSource() const { DARABONBA_PTR_GET_CONST(dataSource_, Models::ListResourcesResponseBodyPagingInfoResourcesDataSource) };
    inline Models::ListResourcesResponseBodyPagingInfoResourcesDataSource dataSource() { DARABONBA_PTR_GET(dataSource_, Models::ListResourcesResponseBodyPagingInfoResourcesDataSource) };
    inline ListResourcesResponseBodyPagingInfoResources& setDataSource(const Models::ListResourcesResponseBodyPagingInfoResourcesDataSource & dataSource) { DARABONBA_PTR_SET_VALUE(dataSource_, dataSource) };
    inline ListResourcesResponseBodyPagingInfoResources& setDataSource(Models::ListResourcesResponseBodyPagingInfoResourcesDataSource && dataSource) { DARABONBA_PTR_SET_RVALUE(dataSource_, dataSource) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListResourcesResponseBodyPagingInfoResources& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline int64_t modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
    inline ListResourcesResponseBodyPagingInfoResources& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListResourcesResponseBodyPagingInfoResources& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline ListResourcesResponseBodyPagingInfoResources& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ListResourcesResponseBodyPagingInfoResources& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // script Field Functions 
    bool hasScript() const { return this->script_ != nullptr;};
    void deleteScript() { this->script_ = nullptr;};
    inline const Models::ListResourcesResponseBodyPagingInfoResourcesScript & script() const { DARABONBA_PTR_GET_CONST(script_, Models::ListResourcesResponseBodyPagingInfoResourcesScript) };
    inline Models::ListResourcesResponseBodyPagingInfoResourcesScript script() { DARABONBA_PTR_GET(script_, Models::ListResourcesResponseBodyPagingInfoResourcesScript) };
    inline ListResourcesResponseBodyPagingInfoResources& setScript(const Models::ListResourcesResponseBodyPagingInfoResourcesScript & script) { DARABONBA_PTR_SET_VALUE(script_, script) };
    inline ListResourcesResponseBodyPagingInfoResources& setScript(Models::ListResourcesResponseBodyPagingInfoResourcesScript && script) { DARABONBA_PTR_SET_RVALUE(script_, script) };


    // sourcePath Field Functions 
    bool hasSourcePath() const { return this->sourcePath_ != nullptr;};
    void deleteSourcePath() { this->sourcePath_ = nullptr;};
    inline string sourcePath() const { DARABONBA_PTR_GET_DEFAULT(sourcePath_, "") };
    inline ListResourcesResponseBodyPagingInfoResources& setSourcePath(string sourcePath) { DARABONBA_PTR_SET_VALUE(sourcePath_, sourcePath) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline ListResourcesResponseBodyPagingInfoResources& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // targetPath Field Functions 
    bool hasTargetPath() const { return this->targetPath_ != nullptr;};
    void deleteTargetPath() { this->targetPath_ = nullptr;};
    inline string targetPath() const { DARABONBA_PTR_GET_DEFAULT(targetPath_, "") };
    inline ListResourcesResponseBodyPagingInfoResources& setTargetPath(string targetPath) { DARABONBA_PTR_SET_VALUE(targetPath_, targetPath) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline ListResourcesResponseBodyPagingInfoResources& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListResourcesResponseBodyPagingInfoResources& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The time when the file resource was created. This value is a UNIX timestamp.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The information about the data source.
    std::shared_ptr<Models::ListResourcesResponseBodyPagingInfoResourcesDataSource> dataSource_ = nullptr;
    // The ID of the file resource.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The times when the file resource was last modified. This value is a UNIX timestamp.
    std::shared_ptr<int64_t> modifyTime_ = nullptr;
    // The name of the file resource.
    std::shared_ptr<string> name_ = nullptr;
    // The owner of the file resource.
    std::shared_ptr<string> owner_ = nullptr;
    // The DataWorks workspace ID. You can log on to the [DataWorks console](https://workbench.data.aliyun.com/console) and go to the Workspace page to obtain the ID.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The script information.
    std::shared_ptr<Models::ListResourcesResponseBodyPagingInfoResourcesScript> script_ = nullptr;
    // The path of the source of the file resource. If the SourecType parameter is set to Local, this parameter is left empty.
    std::shared_ptr<string> sourcePath_ = nullptr;
    // The storage type of the source of the file resource.
    // 
    // Valid values:
    // 
    // *   Local
    // *   Oss
    std::shared_ptr<string> sourceType_ = nullptr;
    // The storage path of the destination of the file resource.
    std::shared_ptr<string> targetPath_ = nullptr;
    // The storage type of the destination of the file resource.
    // 
    // Valid values:
    // 
    // *   Gateway
    // *   Oss
    // *   Hdfs
    std::shared_ptr<string> targetType_ = nullptr;
    // The type of the file resource.
    // 
    // Valid values:
    // 
    // *   Python
    // *   Jar
    // *   Archive
    // *   File
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
