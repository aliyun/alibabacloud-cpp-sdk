// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAIOUTBOUNDTASKPROGRESSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETAIOUTBOUNDTASKPROGRESSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetAiOutboundTaskProgressResponseBodyDataCalloutProgress.hpp>
#include <alibabacloud/models/GetAiOutboundTaskProgressResponseBodyDataTaskProgress.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class GetAiOutboundTaskProgressResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAiOutboundTaskProgressResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CalloutProgress, calloutProgress_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskProgress, taskProgress_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetAiOutboundTaskProgressResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CalloutProgress, calloutProgress_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskProgress, taskProgress_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetAiOutboundTaskProgressResponseBodyData() = default ;
    GetAiOutboundTaskProgressResponseBodyData(const GetAiOutboundTaskProgressResponseBodyData &) = default ;
    GetAiOutboundTaskProgressResponseBodyData(GetAiOutboundTaskProgressResponseBodyData &&) = default ;
    GetAiOutboundTaskProgressResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAiOutboundTaskProgressResponseBodyData() = default ;
    GetAiOutboundTaskProgressResponseBodyData& operator=(const GetAiOutboundTaskProgressResponseBodyData &) = default ;
    GetAiOutboundTaskProgressResponseBodyData& operator=(GetAiOutboundTaskProgressResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->calloutProgress_ != nullptr
        && this->taskId_ != nullptr && this->taskProgress_ != nullptr && this->type_ != nullptr; };
    // calloutProgress Field Functions 
    bool hasCalloutProgress() const { return this->calloutProgress_ != nullptr;};
    void deleteCalloutProgress() { this->calloutProgress_ = nullptr;};
    inline const Models::GetAiOutboundTaskProgressResponseBodyDataCalloutProgress & calloutProgress() const { DARABONBA_PTR_GET_CONST(calloutProgress_, Models::GetAiOutboundTaskProgressResponseBodyDataCalloutProgress) };
    inline Models::GetAiOutboundTaskProgressResponseBodyDataCalloutProgress calloutProgress() { DARABONBA_PTR_GET(calloutProgress_, Models::GetAiOutboundTaskProgressResponseBodyDataCalloutProgress) };
    inline GetAiOutboundTaskProgressResponseBodyData& setCalloutProgress(const Models::GetAiOutboundTaskProgressResponseBodyDataCalloutProgress & calloutProgress) { DARABONBA_PTR_SET_VALUE(calloutProgress_, calloutProgress) };
    inline GetAiOutboundTaskProgressResponseBodyData& setCalloutProgress(Models::GetAiOutboundTaskProgressResponseBodyDataCalloutProgress && calloutProgress) { DARABONBA_PTR_SET_RVALUE(calloutProgress_, calloutProgress) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline GetAiOutboundTaskProgressResponseBodyData& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskProgress Field Functions 
    bool hasTaskProgress() const { return this->taskProgress_ != nullptr;};
    void deleteTaskProgress() { this->taskProgress_ = nullptr;};
    inline const Models::GetAiOutboundTaskProgressResponseBodyDataTaskProgress & taskProgress() const { DARABONBA_PTR_GET_CONST(taskProgress_, Models::GetAiOutboundTaskProgressResponseBodyDataTaskProgress) };
    inline Models::GetAiOutboundTaskProgressResponseBodyDataTaskProgress taskProgress() { DARABONBA_PTR_GET(taskProgress_, Models::GetAiOutboundTaskProgressResponseBodyDataTaskProgress) };
    inline GetAiOutboundTaskProgressResponseBodyData& setTaskProgress(const Models::GetAiOutboundTaskProgressResponseBodyDataTaskProgress & taskProgress) { DARABONBA_PTR_SET_VALUE(taskProgress_, taskProgress) };
    inline GetAiOutboundTaskProgressResponseBodyData& setTaskProgress(Models::GetAiOutboundTaskProgressResponseBodyDataTaskProgress && taskProgress) { DARABONBA_PTR_SET_RVALUE(taskProgress_, taskProgress) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline GetAiOutboundTaskProgressResponseBodyData& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<Models::GetAiOutboundTaskProgressResponseBodyDataCalloutProgress> calloutProgress_ = nullptr;
    std::shared_ptr<int64_t> taskId_ = nullptr;
    std::shared_ptr<Models::GetAiOutboundTaskProgressResponseBodyDataTaskProgress> taskProgress_ = nullptr;
    std::shared_ptr<int32_t> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
