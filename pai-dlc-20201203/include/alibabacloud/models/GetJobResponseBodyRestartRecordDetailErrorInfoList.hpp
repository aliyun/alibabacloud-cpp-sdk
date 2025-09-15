// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJOBRESPONSEBODYRESTARTRECORDDETAILERRORINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_GETJOBRESPONSEBODYRESTARTRECORDDETAILERRORINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class GetJobResponseBodyRestartRecordDetailErrorInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJobResponseBodyRestartRecordDetailErrorInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(AddJobLevelBlacklist, addJobLevelBlacklist_);
      DARABONBA_PTR_TO_JSON(AddNodeToBlacklist, addNodeToBlacklist_);
      DARABONBA_PTR_TO_JSON(DetailErrorMsg, detailErrorMsg_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(ErrorSource, errorSource_);
      DARABONBA_PTR_TO_JSON(Node, node_);
      DARABONBA_PTR_TO_JSON(Pod, pod_);
      DARABONBA_PTR_TO_JSON(TriggerRestart, triggerRestart_);
    };
    friend void from_json(const Darabonba::Json& j, GetJobResponseBodyRestartRecordDetailErrorInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(AddJobLevelBlacklist, addJobLevelBlacklist_);
      DARABONBA_PTR_FROM_JSON(AddNodeToBlacklist, addNodeToBlacklist_);
      DARABONBA_PTR_FROM_JSON(DetailErrorMsg, detailErrorMsg_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(ErrorSource, errorSource_);
      DARABONBA_PTR_FROM_JSON(Node, node_);
      DARABONBA_PTR_FROM_JSON(Pod, pod_);
      DARABONBA_PTR_FROM_JSON(TriggerRestart, triggerRestart_);
    };
    GetJobResponseBodyRestartRecordDetailErrorInfoList() = default ;
    GetJobResponseBodyRestartRecordDetailErrorInfoList(const GetJobResponseBodyRestartRecordDetailErrorInfoList &) = default ;
    GetJobResponseBodyRestartRecordDetailErrorInfoList(GetJobResponseBodyRestartRecordDetailErrorInfoList &&) = default ;
    GetJobResponseBodyRestartRecordDetailErrorInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJobResponseBodyRestartRecordDetailErrorInfoList() = default ;
    GetJobResponseBodyRestartRecordDetailErrorInfoList& operator=(const GetJobResponseBodyRestartRecordDetailErrorInfoList &) = default ;
    GetJobResponseBodyRestartRecordDetailErrorInfoList& operator=(GetJobResponseBodyRestartRecordDetailErrorInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->addJobLevelBlacklist_ != nullptr
        && this->addNodeToBlacklist_ != nullptr && this->detailErrorMsg_ != nullptr && this->errorCode_ != nullptr && this->errorMsg_ != nullptr && this->errorSource_ != nullptr
        && this->node_ != nullptr && this->pod_ != nullptr && this->triggerRestart_ != nullptr; };
    // addJobLevelBlacklist Field Functions 
    bool hasAddJobLevelBlacklist() const { return this->addJobLevelBlacklist_ != nullptr;};
    void deleteAddJobLevelBlacklist() { this->addJobLevelBlacklist_ = nullptr;};
    inline bool addJobLevelBlacklist() const { DARABONBA_PTR_GET_DEFAULT(addJobLevelBlacklist_, false) };
    inline GetJobResponseBodyRestartRecordDetailErrorInfoList& setAddJobLevelBlacklist(bool addJobLevelBlacklist) { DARABONBA_PTR_SET_VALUE(addJobLevelBlacklist_, addJobLevelBlacklist) };


    // addNodeToBlacklist Field Functions 
    bool hasAddNodeToBlacklist() const { return this->addNodeToBlacklist_ != nullptr;};
    void deleteAddNodeToBlacklist() { this->addNodeToBlacklist_ = nullptr;};
    inline bool addNodeToBlacklist() const { DARABONBA_PTR_GET_DEFAULT(addNodeToBlacklist_, false) };
    inline GetJobResponseBodyRestartRecordDetailErrorInfoList& setAddNodeToBlacklist(bool addNodeToBlacklist) { DARABONBA_PTR_SET_VALUE(addNodeToBlacklist_, addNodeToBlacklist) };


    // detailErrorMsg Field Functions 
    bool hasDetailErrorMsg() const { return this->detailErrorMsg_ != nullptr;};
    void deleteDetailErrorMsg() { this->detailErrorMsg_ = nullptr;};
    inline string detailErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(detailErrorMsg_, "") };
    inline GetJobResponseBodyRestartRecordDetailErrorInfoList& setDetailErrorMsg(string detailErrorMsg) { DARABONBA_PTR_SET_VALUE(detailErrorMsg_, detailErrorMsg) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetJobResponseBodyRestartRecordDetailErrorInfoList& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string errorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline GetJobResponseBodyRestartRecordDetailErrorInfoList& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // errorSource Field Functions 
    bool hasErrorSource() const { return this->errorSource_ != nullptr;};
    void deleteErrorSource() { this->errorSource_ = nullptr;};
    inline string errorSource() const { DARABONBA_PTR_GET_DEFAULT(errorSource_, "") };
    inline GetJobResponseBodyRestartRecordDetailErrorInfoList& setErrorSource(string errorSource) { DARABONBA_PTR_SET_VALUE(errorSource_, errorSource) };


    // node Field Functions 
    bool hasNode() const { return this->node_ != nullptr;};
    void deleteNode() { this->node_ = nullptr;};
    inline string node() const { DARABONBA_PTR_GET_DEFAULT(node_, "") };
    inline GetJobResponseBodyRestartRecordDetailErrorInfoList& setNode(string node) { DARABONBA_PTR_SET_VALUE(node_, node) };


    // pod Field Functions 
    bool hasPod() const { return this->pod_ != nullptr;};
    void deletePod() { this->pod_ = nullptr;};
    inline string pod() const { DARABONBA_PTR_GET_DEFAULT(pod_, "") };
    inline GetJobResponseBodyRestartRecordDetailErrorInfoList& setPod(string pod) { DARABONBA_PTR_SET_VALUE(pod_, pod) };


    // triggerRestart Field Functions 
    bool hasTriggerRestart() const { return this->triggerRestart_ != nullptr;};
    void deleteTriggerRestart() { this->triggerRestart_ = nullptr;};
    inline bool triggerRestart() const { DARABONBA_PTR_GET_DEFAULT(triggerRestart_, false) };
    inline GetJobResponseBodyRestartRecordDetailErrorInfoList& setTriggerRestart(bool triggerRestart) { DARABONBA_PTR_SET_VALUE(triggerRestart_, triggerRestart) };


  protected:
    std::shared_ptr<bool> addJobLevelBlacklist_ = nullptr;
    std::shared_ptr<bool> addNodeToBlacklist_ = nullptr;
    std::shared_ptr<string> detailErrorMsg_ = nullptr;
    std::shared_ptr<string> errorCode_ = nullptr;
    std::shared_ptr<string> errorMsg_ = nullptr;
    std::shared_ptr<string> errorSource_ = nullptr;
    std::shared_ptr<string> node_ = nullptr;
    std::shared_ptr<string> pod_ = nullptr;
    std::shared_ptr<bool> triggerRestart_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
