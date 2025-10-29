// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LINEAGERELATIONSHIP_HPP_
#define ALIBABACLOUD_MODELS_LINEAGERELATIONSHIP_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/LineageEntity.hpp>
#include <alibabacloud/models/LineageTask.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class LineageRelationship : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LineageRelationship& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DstEntity, dstEntity_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(SrcEntity, srcEntity_);
      DARABONBA_PTR_TO_JSON(Task, task_);
    };
    friend void from_json(const Darabonba::Json& j, LineageRelationship& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DstEntity, dstEntity_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(SrcEntity, srcEntity_);
      DARABONBA_PTR_FROM_JSON(Task, task_);
    };
    LineageRelationship() = default ;
    LineageRelationship(const LineageRelationship &) = default ;
    LineageRelationship(LineageRelationship &&) = default ;
    LineageRelationship(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LineageRelationship() = default ;
    LineageRelationship& operator=(const LineageRelationship &) = default ;
    LineageRelationship& operator=(LineageRelationship &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->dstEntity_ == nullptr && return this->id_ == nullptr && return this->srcEntity_ == nullptr && return this->task_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline LineageRelationship& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // dstEntity Field Functions 
    bool hasDstEntity() const { return this->dstEntity_ != nullptr;};
    void deleteDstEntity() { this->dstEntity_ = nullptr;};
    inline const LineageEntity & dstEntity() const { DARABONBA_PTR_GET_CONST(dstEntity_, LineageEntity) };
    inline LineageEntity dstEntity() { DARABONBA_PTR_GET(dstEntity_, LineageEntity) };
    inline LineageRelationship& setDstEntity(const LineageEntity & dstEntity) { DARABONBA_PTR_SET_VALUE(dstEntity_, dstEntity) };
    inline LineageRelationship& setDstEntity(LineageEntity && dstEntity) { DARABONBA_PTR_SET_RVALUE(dstEntity_, dstEntity) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline LineageRelationship& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // srcEntity Field Functions 
    bool hasSrcEntity() const { return this->srcEntity_ != nullptr;};
    void deleteSrcEntity() { this->srcEntity_ = nullptr;};
    inline const LineageEntity & srcEntity() const { DARABONBA_PTR_GET_CONST(srcEntity_, LineageEntity) };
    inline LineageEntity srcEntity() { DARABONBA_PTR_GET(srcEntity_, LineageEntity) };
    inline LineageRelationship& setSrcEntity(const LineageEntity & srcEntity) { DARABONBA_PTR_SET_VALUE(srcEntity_, srcEntity) };
    inline LineageRelationship& setSrcEntity(LineageEntity && srcEntity) { DARABONBA_PTR_SET_RVALUE(srcEntity_, srcEntity) };


    // task Field Functions 
    bool hasTask() const { return this->task_ != nullptr;};
    void deleteTask() { this->task_ = nullptr;};
    inline const LineageTask & task() const { DARABONBA_PTR_GET_CONST(task_, LineageTask) };
    inline LineageTask task() { DARABONBA_PTR_GET(task_, LineageTask) };
    inline LineageRelationship& setTask(const LineageTask & task) { DARABONBA_PTR_SET_VALUE(task_, task) };
    inline LineageRelationship& setTask(LineageTask && task) { DARABONBA_PTR_SET_RVALUE(task_, task) };


  protected:
    std::shared_ptr<int64_t> createTime_ = nullptr;
    std::shared_ptr<LineageEntity> dstEntity_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<LineageEntity> srcEntity_ = nullptr;
    std::shared_ptr<LineageTask> task_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
