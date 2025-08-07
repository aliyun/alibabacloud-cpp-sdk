// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMININGTASKRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETMININGTASKRESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetMiningTaskResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMiningTaskResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BaseMeAgentId, baseMeAgentId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMiningTaskResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BaseMeAgentId, baseMeAgentId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    GetMiningTaskResultRequest() = default ;
    GetMiningTaskResultRequest(const GetMiningTaskResultRequest &) = default ;
    GetMiningTaskResultRequest(GetMiningTaskResultRequest &&) = default ;
    GetMiningTaskResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMiningTaskResultRequest() = default ;
    GetMiningTaskResultRequest& operator=(const GetMiningTaskResultRequest &) = default ;
    GetMiningTaskResultRequest& operator=(GetMiningTaskResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->baseMeAgentId_ != nullptr
        && this->taskId_ != nullptr; };
    // baseMeAgentId Field Functions 
    bool hasBaseMeAgentId() const { return this->baseMeAgentId_ != nullptr;};
    void deleteBaseMeAgentId() { this->baseMeAgentId_ = nullptr;};
    inline int64_t baseMeAgentId() const { DARABONBA_PTR_GET_DEFAULT(baseMeAgentId_, 0L) };
    inline GetMiningTaskResultRequest& setBaseMeAgentId(int64_t baseMeAgentId) { DARABONBA_PTR_SET_VALUE(baseMeAgentId_, baseMeAgentId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetMiningTaskResultRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    std::shared_ptr<int64_t> baseMeAgentId_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
