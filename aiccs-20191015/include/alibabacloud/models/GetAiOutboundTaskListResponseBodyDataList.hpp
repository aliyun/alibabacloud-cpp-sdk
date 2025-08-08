// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAIOUTBOUNDTASKLISTRESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_GETAIOUTBOUNDTASKLISTRESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class GetAiOutboundTaskListResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAiOutboundTaskListResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(ConcurrentRate, concurrentRate_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FinishCount, finishCount_);
      DARABONBA_PTR_TO_JSON(FinishRate, finishRate_);
      DARABONBA_PTR_TO_JSON(HandlerId, handlerId_);
      DARABONBA_PTR_TO_JSON(HandlerName, handlerName_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StatusDesc, statusDesc_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetAiOutboundTaskListResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(ConcurrentRate, concurrentRate_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FinishCount, finishCount_);
      DARABONBA_PTR_FROM_JSON(FinishRate, finishRate_);
      DARABONBA_PTR_FROM_JSON(HandlerId, handlerId_);
      DARABONBA_PTR_FROM_JSON(HandlerName, handlerName_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StatusDesc, statusDesc_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    GetAiOutboundTaskListResponseBodyDataList() = default ;
    GetAiOutboundTaskListResponseBodyDataList(const GetAiOutboundTaskListResponseBodyDataList &) = default ;
    GetAiOutboundTaskListResponseBodyDataList(GetAiOutboundTaskListResponseBodyDataList &&) = default ;
    GetAiOutboundTaskListResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAiOutboundTaskListResponseBodyDataList() = default ;
    GetAiOutboundTaskListResponseBodyDataList& operator=(const GetAiOutboundTaskListResponseBodyDataList &) = default ;
    GetAiOutboundTaskListResponseBodyDataList& operator=(GetAiOutboundTaskListResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->concurrentRate_ != nullptr
        && this->createTime_ != nullptr && this->description_ != nullptr && this->finishCount_ != nullptr && this->finishRate_ != nullptr && this->handlerId_ != nullptr
        && this->handlerName_ != nullptr && this->name_ != nullptr && this->status_ != nullptr && this->statusDesc_ != nullptr && this->taskId_ != nullptr
        && this->totalCount_ != nullptr; };
    // concurrentRate Field Functions 
    bool hasConcurrentRate() const { return this->concurrentRate_ != nullptr;};
    void deleteConcurrentRate() { this->concurrentRate_ = nullptr;};
    inline int32_t concurrentRate() const { DARABONBA_PTR_GET_DEFAULT(concurrentRate_, 0) };
    inline GetAiOutboundTaskListResponseBodyDataList& setConcurrentRate(int32_t concurrentRate) { DARABONBA_PTR_SET_VALUE(concurrentRate_, concurrentRate) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline GetAiOutboundTaskListResponseBodyDataList& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetAiOutboundTaskListResponseBodyDataList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // finishCount Field Functions 
    bool hasFinishCount() const { return this->finishCount_ != nullptr;};
    void deleteFinishCount() { this->finishCount_ = nullptr;};
    inline int32_t finishCount() const { DARABONBA_PTR_GET_DEFAULT(finishCount_, 0) };
    inline GetAiOutboundTaskListResponseBodyDataList& setFinishCount(int32_t finishCount) { DARABONBA_PTR_SET_VALUE(finishCount_, finishCount) };


    // finishRate Field Functions 
    bool hasFinishRate() const { return this->finishRate_ != nullptr;};
    void deleteFinishRate() { this->finishRate_ = nullptr;};
    inline float finishRate() const { DARABONBA_PTR_GET_DEFAULT(finishRate_, 0.0) };
    inline GetAiOutboundTaskListResponseBodyDataList& setFinishRate(float finishRate) { DARABONBA_PTR_SET_VALUE(finishRate_, finishRate) };


    // handlerId Field Functions 
    bool hasHandlerId() const { return this->handlerId_ != nullptr;};
    void deleteHandlerId() { this->handlerId_ = nullptr;};
    inline int64_t handlerId() const { DARABONBA_PTR_GET_DEFAULT(handlerId_, 0L) };
    inline GetAiOutboundTaskListResponseBodyDataList& setHandlerId(int64_t handlerId) { DARABONBA_PTR_SET_VALUE(handlerId_, handlerId) };


    // handlerName Field Functions 
    bool hasHandlerName() const { return this->handlerName_ != nullptr;};
    void deleteHandlerName() { this->handlerName_ = nullptr;};
    inline string handlerName() const { DARABONBA_PTR_GET_DEFAULT(handlerName_, "") };
    inline GetAiOutboundTaskListResponseBodyDataList& setHandlerName(string handlerName) { DARABONBA_PTR_SET_VALUE(handlerName_, handlerName) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetAiOutboundTaskListResponseBodyDataList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline GetAiOutboundTaskListResponseBodyDataList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusDesc Field Functions 
    bool hasStatusDesc() const { return this->statusDesc_ != nullptr;};
    void deleteStatusDesc() { this->statusDesc_ = nullptr;};
    inline string statusDesc() const { DARABONBA_PTR_GET_DEFAULT(statusDesc_, "") };
    inline GetAiOutboundTaskListResponseBodyDataList& setStatusDesc(string statusDesc) { DARABONBA_PTR_SET_VALUE(statusDesc_, statusDesc) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline GetAiOutboundTaskListResponseBodyDataList& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline GetAiOutboundTaskListResponseBodyDataList& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<int32_t> concurrentRate_ = nullptr;
    std::shared_ptr<int64_t> createTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<int32_t> finishCount_ = nullptr;
    std::shared_ptr<float> finishRate_ = nullptr;
    std::shared_ptr<int64_t> handlerId_ = nullptr;
    std::shared_ptr<string> handlerName_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<string> statusDesc_ = nullptr;
    std::shared_ptr<int64_t> taskId_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
