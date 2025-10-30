// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETADHOCTASKLOGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETADHOCTASKLOGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetAdHocTaskLogRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAdHocTaskLogRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Offset, offset_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(SubTaskId, subTaskId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAdHocTaskLogRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Offset, offset_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(SubTaskId, subTaskId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    GetAdHocTaskLogRequest() = default ;
    GetAdHocTaskLogRequest(const GetAdHocTaskLogRequest &) = default ;
    GetAdHocTaskLogRequest(GetAdHocTaskLogRequest &&) = default ;
    GetAdHocTaskLogRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAdHocTaskLogRequest() = default ;
    GetAdHocTaskLogRequest& operator=(const GetAdHocTaskLogRequest &) = default ;
    GetAdHocTaskLogRequest& operator=(GetAdHocTaskLogRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->offset_ == nullptr
        && return this->opTenantId_ == nullptr && return this->projectId_ == nullptr && return this->subTaskId_ == nullptr && return this->taskId_ == nullptr; };
    // offset Field Functions 
    bool hasOffset() const { return this->offset_ != nullptr;};
    void deleteOffset() { this->offset_ = nullptr;};
    inline int32_t offset() const { DARABONBA_PTR_GET_DEFAULT(offset_, 0) };
    inline GetAdHocTaskLogRequest& setOffset(int32_t offset) { DARABONBA_PTR_SET_VALUE(offset_, offset) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline GetAdHocTaskLogRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline GetAdHocTaskLogRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // subTaskId Field Functions 
    bool hasSubTaskId() const { return this->subTaskId_ != nullptr;};
    void deleteSubTaskId() { this->subTaskId_ = nullptr;};
    inline int32_t subTaskId() const { DARABONBA_PTR_GET_DEFAULT(subTaskId_, 0) };
    inline GetAdHocTaskLogRequest& setSubTaskId(int32_t subTaskId) { DARABONBA_PTR_SET_VALUE(subTaskId_, subTaskId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetAdHocTaskLogRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // This parameter is required.
    std::shared_ptr<int32_t> offset_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> subTaskId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
