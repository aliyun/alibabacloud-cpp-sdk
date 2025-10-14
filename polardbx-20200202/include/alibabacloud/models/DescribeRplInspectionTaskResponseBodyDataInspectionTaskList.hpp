// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERPLINSPECTIONTASKRESPONSEBODYDATAINSPECTIONTASKLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERPLINSPECTIONTASKRESPONSEBODYDATAINSPECTIONTASKLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeRplInspectionTaskResponseBodyDataInspectionTaskList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRplInspectionTaskResponseBodyDataInspectionTaskList& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(SlinkTaskId, slinkTaskId_);
      DARABONBA_PTR_TO_JSON(Stage, stage_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRplInspectionTaskResponseBodyDataInspectionTaskList& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(SlinkTaskId, slinkTaskId_);
      DARABONBA_PTR_FROM_JSON(Stage, stage_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    DescribeRplInspectionTaskResponseBodyDataInspectionTaskList() = default ;
    DescribeRplInspectionTaskResponseBodyDataInspectionTaskList(const DescribeRplInspectionTaskResponseBodyDataInspectionTaskList &) = default ;
    DescribeRplInspectionTaskResponseBodyDataInspectionTaskList(DescribeRplInspectionTaskResponseBodyDataInspectionTaskList &&) = default ;
    DescribeRplInspectionTaskResponseBodyDataInspectionTaskList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRplInspectionTaskResponseBodyDataInspectionTaskList() = default ;
    DescribeRplInspectionTaskResponseBodyDataInspectionTaskList& operator=(const DescribeRplInspectionTaskResponseBodyDataInspectionTaskList &) = default ;
    DescribeRplInspectionTaskResponseBodyDataInspectionTaskList& operator=(DescribeRplInspectionTaskResponseBodyDataInspectionTaskList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->description_ == nullptr && return this->id_ == nullptr && return this->slinkTaskId_ == nullptr && return this->stage_ == nullptr && return this->status_ == nullptr
        && return this->updateTime_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline DescribeRplInspectionTaskResponseBodyDataInspectionTaskList& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeRplInspectionTaskResponseBodyDataInspectionTaskList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeRplInspectionTaskResponseBodyDataInspectionTaskList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // slinkTaskId Field Functions 
    bool hasSlinkTaskId() const { return this->slinkTaskId_ != nullptr;};
    void deleteSlinkTaskId() { this->slinkTaskId_ = nullptr;};
    inline string slinkTaskId() const { DARABONBA_PTR_GET_DEFAULT(slinkTaskId_, "") };
    inline DescribeRplInspectionTaskResponseBodyDataInspectionTaskList& setSlinkTaskId(string slinkTaskId) { DARABONBA_PTR_SET_VALUE(slinkTaskId_, slinkTaskId) };


    // stage Field Functions 
    bool hasStage() const { return this->stage_ != nullptr;};
    void deleteStage() { this->stage_ = nullptr;};
    inline string stage() const { DARABONBA_PTR_GET_DEFAULT(stage_, "") };
    inline DescribeRplInspectionTaskResponseBodyDataInspectionTaskList& setStage(string stage) { DARABONBA_PTR_SET_VALUE(stage_, stage) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeRplInspectionTaskResponseBodyDataInspectionTaskList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline DescribeRplInspectionTaskResponseBodyDataInspectionTaskList& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    std::shared_ptr<int64_t> createTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    // slinktaskid。
    std::shared_ptr<string> slinkTaskId_ = nullptr;
    std::shared_ptr<string> stage_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<int64_t> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
