// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDISYNCTASKRESPONSEBODYDATASOLUTIONDETAIL_HPP_
#define ALIBABACLOUD_MODELS_GETDISYNCTASKRESPONSEBODYDATASOLUTIONDETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetDISyncTaskResponseBodyDataSolutionDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDISyncTaskResponseBodyDataSolutionDetail& obj) { 
      DARABONBA_PTR_TO_JSON(CreatorName, creatorName_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ProcessContent, processContent_);
      DARABONBA_PTR_TO_JSON(ProcessExtra, processExtra_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SubmitTime, submitTime_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetDISyncTaskResponseBodyDataSolutionDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(CreatorName, creatorName_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ProcessContent, processContent_);
      DARABONBA_PTR_FROM_JSON(ProcessExtra, processExtra_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SubmitTime, submitTime_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetDISyncTaskResponseBodyDataSolutionDetail() = default ;
    GetDISyncTaskResponseBodyDataSolutionDetail(const GetDISyncTaskResponseBodyDataSolutionDetail &) = default ;
    GetDISyncTaskResponseBodyDataSolutionDetail(GetDISyncTaskResponseBodyDataSolutionDetail &&) = default ;
    GetDISyncTaskResponseBodyDataSolutionDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDISyncTaskResponseBodyDataSolutionDetail() = default ;
    GetDISyncTaskResponseBodyDataSolutionDetail& operator=(const GetDISyncTaskResponseBodyDataSolutionDetail &) = default ;
    GetDISyncTaskResponseBodyDataSolutionDetail& operator=(GetDISyncTaskResponseBodyDataSolutionDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->creatorName_ != nullptr
        && this->id_ != nullptr && this->name_ != nullptr && this->processContent_ != nullptr && this->processExtra_ != nullptr && this->projectId_ != nullptr
        && this->sourceType_ != nullptr && this->startTime_ != nullptr && this->status_ != nullptr && this->submitTime_ != nullptr && this->type_ != nullptr; };
    // creatorName Field Functions 
    bool hasCreatorName() const { return this->creatorName_ != nullptr;};
    void deleteCreatorName() { this->creatorName_ = nullptr;};
    inline string creatorName() const { DARABONBA_PTR_GET_DEFAULT(creatorName_, "") };
    inline GetDISyncTaskResponseBodyDataSolutionDetail& setCreatorName(string creatorName) { DARABONBA_PTR_SET_VALUE(creatorName_, creatorName) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetDISyncTaskResponseBodyDataSolutionDetail& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetDISyncTaskResponseBodyDataSolutionDetail& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // processContent Field Functions 
    bool hasProcessContent() const { return this->processContent_ != nullptr;};
    void deleteProcessContent() { this->processContent_ = nullptr;};
    inline string processContent() const { DARABONBA_PTR_GET_DEFAULT(processContent_, "") };
    inline GetDISyncTaskResponseBodyDataSolutionDetail& setProcessContent(string processContent) { DARABONBA_PTR_SET_VALUE(processContent_, processContent) };


    // processExtra Field Functions 
    bool hasProcessExtra() const { return this->processExtra_ != nullptr;};
    void deleteProcessExtra() { this->processExtra_ = nullptr;};
    inline string processExtra() const { DARABONBA_PTR_GET_DEFAULT(processExtra_, "") };
    inline GetDISyncTaskResponseBodyDataSolutionDetail& setProcessExtra(string processExtra) { DARABONBA_PTR_SET_VALUE(processExtra_, processExtra) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline GetDISyncTaskResponseBodyDataSolutionDetail& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline GetDISyncTaskResponseBodyDataSolutionDetail& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetDISyncTaskResponseBodyDataSolutionDetail& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetDISyncTaskResponseBodyDataSolutionDetail& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // submitTime Field Functions 
    bool hasSubmitTime() const { return this->submitTime_ != nullptr;};
    void deleteSubmitTime() { this->submitTime_ = nullptr;};
    inline string submitTime() const { DARABONBA_PTR_GET_DEFAULT(submitTime_, "") };
    inline GetDISyncTaskResponseBodyDataSolutionDetail& setSubmitTime(string submitTime) { DARABONBA_PTR_SET_VALUE(submitTime_, submitTime) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetDISyncTaskResponseBodyDataSolutionDetail& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The creator of the data synchronization solution.
    std::shared_ptr<string> creatorName_ = nullptr;
    // The ID of the data synchronization solution.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The name of the data synchronization solution.
    std::shared_ptr<string> name_ = nullptr;
    // The configuration details of the data synchronization solution.
    std::shared_ptr<string> processContent_ = nullptr;
    // The additional parameters of the data synchronization solution.
    std::shared_ptr<string> processExtra_ = nullptr;
    // The ID of the project to which the data synchronization solution belongs.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The type of the source of the data synchronization solution.
    std::shared_ptr<string> sourceType_ = nullptr;
    // The start time of the data synchronization solution.
    std::shared_ptr<string> startTime_ = nullptr;
    // The status of the data synchronization solution. Valid values:
    // 
    // *   0: successful
    // *   1: not running
    // *   2: running
    // *   3: failed
    // *   4: committed
    // *   5: pending manual confirmation
    // *   6: manually confirmed
    // *   7: others
    // *   8: waiting
    // *   9: deleted
    std::shared_ptr<string> status_ = nullptr;
    // The time when the data synchronization solution was committed.
    std::shared_ptr<string> submitTime_ = nullptr;
    // The type of the data synchronization solution.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
