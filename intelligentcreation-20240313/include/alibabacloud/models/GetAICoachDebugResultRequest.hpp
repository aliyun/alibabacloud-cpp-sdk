// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAICOACHDEBUGRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAICOACHDEBUGRESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class GetAICoachDebugResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAICoachDebugResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(dataId, dataId_);
      DARABONBA_PTR_TO_JSON(dataType, dataType_);
      DARABONBA_PTR_TO_JSON(scriptDebugId, scriptDebugId_);
      DARABONBA_PTR_TO_JSON(scriptRecordId, scriptRecordId_);
      DARABONBA_PTR_TO_JSON(scriptSnapshotId, scriptSnapshotId_);
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAICoachDebugResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(dataId, dataId_);
      DARABONBA_PTR_FROM_JSON(dataType, dataType_);
      DARABONBA_PTR_FROM_JSON(scriptDebugId, scriptDebugId_);
      DARABONBA_PTR_FROM_JSON(scriptRecordId, scriptRecordId_);
      DARABONBA_PTR_FROM_JSON(scriptSnapshotId, scriptSnapshotId_);
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
    };
    GetAICoachDebugResultRequest() = default ;
    GetAICoachDebugResultRequest(const GetAICoachDebugResultRequest &) = default ;
    GetAICoachDebugResultRequest(GetAICoachDebugResultRequest &&) = default ;
    GetAICoachDebugResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAICoachDebugResultRequest() = default ;
    GetAICoachDebugResultRequest& operator=(const GetAICoachDebugResultRequest &) = default ;
    GetAICoachDebugResultRequest& operator=(GetAICoachDebugResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataId_ == nullptr
        && this->dataType_ == nullptr && this->scriptDebugId_ == nullptr && this->scriptRecordId_ == nullptr && this->scriptSnapshotId_ == nullptr && this->taskId_ == nullptr; };
    // dataId Field Functions 
    bool hasDataId() const { return this->dataId_ != nullptr;};
    void deleteDataId() { this->dataId_ = nullptr;};
    inline string getDataId() const { DARABONBA_PTR_GET_DEFAULT(dataId_, "") };
    inline GetAICoachDebugResultRequest& setDataId(string dataId) { DARABONBA_PTR_SET_VALUE(dataId_, dataId) };


    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline string getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
    inline GetAICoachDebugResultRequest& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


    // scriptDebugId Field Functions 
    bool hasScriptDebugId() const { return this->scriptDebugId_ != nullptr;};
    void deleteScriptDebugId() { this->scriptDebugId_ = nullptr;};
    inline string getScriptDebugId() const { DARABONBA_PTR_GET_DEFAULT(scriptDebugId_, "") };
    inline GetAICoachDebugResultRequest& setScriptDebugId(string scriptDebugId) { DARABONBA_PTR_SET_VALUE(scriptDebugId_, scriptDebugId) };


    // scriptRecordId Field Functions 
    bool hasScriptRecordId() const { return this->scriptRecordId_ != nullptr;};
    void deleteScriptRecordId() { this->scriptRecordId_ = nullptr;};
    inline string getScriptRecordId() const { DARABONBA_PTR_GET_DEFAULT(scriptRecordId_, "") };
    inline GetAICoachDebugResultRequest& setScriptRecordId(string scriptRecordId) { DARABONBA_PTR_SET_VALUE(scriptRecordId_, scriptRecordId) };


    // scriptSnapshotId Field Functions 
    bool hasScriptSnapshotId() const { return this->scriptSnapshotId_ != nullptr;};
    void deleteScriptSnapshotId() { this->scriptSnapshotId_ = nullptr;};
    inline string getScriptSnapshotId() const { DARABONBA_PTR_GET_DEFAULT(scriptSnapshotId_, "") };
    inline GetAICoachDebugResultRequest& setScriptSnapshotId(string scriptSnapshotId) { DARABONBA_PTR_SET_VALUE(scriptSnapshotId_, scriptSnapshotId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetAICoachDebugResultRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    shared_ptr<string> dataId_ {};
    shared_ptr<string> dataType_ {};
    shared_ptr<string> scriptDebugId_ {};
    shared_ptr<string> scriptRecordId_ {};
    shared_ptr<string> scriptSnapshotId_ {};
    shared_ptr<string> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
