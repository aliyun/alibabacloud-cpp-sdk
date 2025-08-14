// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVIDEOTASKINFORESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETVIDEOTASKINFORESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetVideoTaskInfoResponseBodyDataTaskResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Avatar20220130
{
namespace Models
{
  class GetVideoTaskInfoResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVideoTaskInfoResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Process, process_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskResult, taskResult_);
      DARABONBA_PTR_TO_JSON(TaskUuid, taskUuid_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetVideoTaskInfoResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Process, process_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskResult, taskResult_);
      DARABONBA_PTR_FROM_JSON(TaskUuid, taskUuid_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetVideoTaskInfoResponseBodyData() = default ;
    GetVideoTaskInfoResponseBodyData(const GetVideoTaskInfoResponseBodyData &) = default ;
    GetVideoTaskInfoResponseBodyData(GetVideoTaskInfoResponseBodyData &&) = default ;
    GetVideoTaskInfoResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVideoTaskInfoResponseBodyData() = default ;
    GetVideoTaskInfoResponseBodyData& operator=(const GetVideoTaskInfoResponseBodyData &) = default ;
    GetVideoTaskInfoResponseBodyData& operator=(GetVideoTaskInfoResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->process_ != nullptr
        && this->status_ != nullptr && this->taskResult_ != nullptr && this->taskUuid_ != nullptr && this->type_ != nullptr; };
    // process Field Functions 
    bool hasProcess() const { return this->process_ != nullptr;};
    void deleteProcess() { this->process_ = nullptr;};
    inline string process() const { DARABONBA_PTR_GET_DEFAULT(process_, "") };
    inline GetVideoTaskInfoResponseBodyData& setProcess(string process) { DARABONBA_PTR_SET_VALUE(process_, process) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetVideoTaskInfoResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskResult Field Functions 
    bool hasTaskResult() const { return this->taskResult_ != nullptr;};
    void deleteTaskResult() { this->taskResult_ = nullptr;};
    inline const Models::GetVideoTaskInfoResponseBodyDataTaskResult & taskResult() const { DARABONBA_PTR_GET_CONST(taskResult_, Models::GetVideoTaskInfoResponseBodyDataTaskResult) };
    inline Models::GetVideoTaskInfoResponseBodyDataTaskResult taskResult() { DARABONBA_PTR_GET(taskResult_, Models::GetVideoTaskInfoResponseBodyDataTaskResult) };
    inline GetVideoTaskInfoResponseBodyData& setTaskResult(const Models::GetVideoTaskInfoResponseBodyDataTaskResult & taskResult) { DARABONBA_PTR_SET_VALUE(taskResult_, taskResult) };
    inline GetVideoTaskInfoResponseBodyData& setTaskResult(Models::GetVideoTaskInfoResponseBodyDataTaskResult && taskResult) { DARABONBA_PTR_SET_RVALUE(taskResult_, taskResult) };


    // taskUuid Field Functions 
    bool hasTaskUuid() const { return this->taskUuid_ != nullptr;};
    void deleteTaskUuid() { this->taskUuid_ = nullptr;};
    inline string taskUuid() const { DARABONBA_PTR_GET_DEFAULT(taskUuid_, "") };
    inline GetVideoTaskInfoResponseBodyData& setTaskUuid(string taskUuid) { DARABONBA_PTR_SET_VALUE(taskUuid_, taskUuid) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetVideoTaskInfoResponseBodyData& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> process_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<Models::GetVideoTaskInfoResponseBodyDataTaskResult> taskResult_ = nullptr;
    std::shared_ptr<string> taskUuid_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Avatar20220130
#endif
