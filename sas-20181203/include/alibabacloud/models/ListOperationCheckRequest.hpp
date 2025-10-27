// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOPERATIONCHECKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTOPERATIONCHECKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListOperationCheckRequestOperationTaskInstances.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListOperationCheckRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOperationCheckRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CheckId, checkId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(OperationTaskInstances, operationTaskInstances_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListOperationCheckRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckId, checkId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(OperationTaskInstances, operationTaskInstances_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListOperationCheckRequest() = default ;
    ListOperationCheckRequest(const ListOperationCheckRequest &) = default ;
    ListOperationCheckRequest(ListOperationCheckRequest &&) = default ;
    ListOperationCheckRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOperationCheckRequest() = default ;
    ListOperationCheckRequest& operator=(const ListOperationCheckRequest &) = default ;
    ListOperationCheckRequest& operator=(ListOperationCheckRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkId_ == nullptr
        && return this->endTime_ == nullptr && return this->lang_ == nullptr && return this->operationTaskInstances_ == nullptr && return this->startTime_ == nullptr && return this->type_ == nullptr; };
    // checkId Field Functions 
    bool hasCheckId() const { return this->checkId_ != nullptr;};
    void deleteCheckId() { this->checkId_ = nullptr;};
    inline int64_t checkId() const { DARABONBA_PTR_GET_DEFAULT(checkId_, 0L) };
    inline ListOperationCheckRequest& setCheckId(int64_t checkId) { DARABONBA_PTR_SET_VALUE(checkId_, checkId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ListOperationCheckRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ListOperationCheckRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // operationTaskInstances Field Functions 
    bool hasOperationTaskInstances() const { return this->operationTaskInstances_ != nullptr;};
    void deleteOperationTaskInstances() { this->operationTaskInstances_ = nullptr;};
    inline const vector<ListOperationCheckRequestOperationTaskInstances> & operationTaskInstances() const { DARABONBA_PTR_GET_CONST(operationTaskInstances_, vector<ListOperationCheckRequestOperationTaskInstances>) };
    inline vector<ListOperationCheckRequestOperationTaskInstances> operationTaskInstances() { DARABONBA_PTR_GET(operationTaskInstances_, vector<ListOperationCheckRequestOperationTaskInstances>) };
    inline ListOperationCheckRequest& setOperationTaskInstances(const vector<ListOperationCheckRequestOperationTaskInstances> & operationTaskInstances) { DARABONBA_PTR_SET_VALUE(operationTaskInstances_, operationTaskInstances) };
    inline ListOperationCheckRequest& setOperationTaskInstances(vector<ListOperationCheckRequestOperationTaskInstances> && operationTaskInstances) { DARABONBA_PTR_SET_RVALUE(operationTaskInstances_, operationTaskInstances) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ListOperationCheckRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListOperationCheckRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Check item ID.
    // > Obtain this parameter by calling the [ListCheckResult](~~ListCheckResult~~) interface.
    std::shared_ptr<int64_t> checkId_ = nullptr;
    // Timestamp (in milliseconds) of the end time of the queried task.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // Language type for request and response messages, default value is zh. Values:
    // - **zh**: Chinese
    // - **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // Information about the operated instances.
    // 
    // This parameter is required.
    std::shared_ptr<vector<ListOperationCheckRequestOperationTaskInstances>> operationTaskInstances_ = nullptr;
    // Timestamp (in milliseconds) of the start time of the queried task.
    std::shared_ptr<int64_t> startTime_ = nullptr;
    // Task type corresponding to the task:
    // - **REPAIR**: Repair task
    // - **ROLLBACK**: Rollback task
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
