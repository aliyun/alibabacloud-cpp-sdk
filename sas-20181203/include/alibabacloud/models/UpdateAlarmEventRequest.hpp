// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEALARMEVENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEALARMEVENTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class UpdateAlarmEventRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAlarmEventRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlarmEventIdList, alarmEventIdList_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(OperationCode, operationCode_);
      DARABONBA_PTR_TO_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAlarmEventRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlarmEventIdList, alarmEventIdList_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(OperationCode, operationCode_);
      DARABONBA_PTR_FROM_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
    };
    UpdateAlarmEventRequest() = default ;
    UpdateAlarmEventRequest(const UpdateAlarmEventRequest &) = default ;
    UpdateAlarmEventRequest(UpdateAlarmEventRequest &&) = default ;
    UpdateAlarmEventRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAlarmEventRequest() = default ;
    UpdateAlarmEventRequest& operator=(const UpdateAlarmEventRequest &) = default ;
    UpdateAlarmEventRequest& operator=(UpdateAlarmEventRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alarmEventIdList_ == nullptr
        && this->lang_ == nullptr && this->operationCode_ == nullptr && this->resourceDirectoryAccountId_ == nullptr; };
    // alarmEventIdList Field Functions 
    bool hasAlarmEventIdList() const { return this->alarmEventIdList_ != nullptr;};
    void deleteAlarmEventIdList() { this->alarmEventIdList_ = nullptr;};
    inline const vector<int64_t> & getAlarmEventIdList() const { DARABONBA_PTR_GET_CONST(alarmEventIdList_, vector<int64_t>) };
    inline vector<int64_t> getAlarmEventIdList() { DARABONBA_PTR_GET(alarmEventIdList_, vector<int64_t>) };
    inline UpdateAlarmEventRequest& setAlarmEventIdList(const vector<int64_t> & alarmEventIdList) { DARABONBA_PTR_SET_VALUE(alarmEventIdList_, alarmEventIdList) };
    inline UpdateAlarmEventRequest& setAlarmEventIdList(vector<int64_t> && alarmEventIdList) { DARABONBA_PTR_SET_RVALUE(alarmEventIdList_, alarmEventIdList) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline UpdateAlarmEventRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // operationCode Field Functions 
    bool hasOperationCode() const { return this->operationCode_ != nullptr;};
    void deleteOperationCode() { this->operationCode_ = nullptr;};
    inline string getOperationCode() const { DARABONBA_PTR_GET_DEFAULT(operationCode_, "") };
    inline UpdateAlarmEventRequest& setOperationCode(string operationCode) { DARABONBA_PTR_SET_VALUE(operationCode_, operationCode) };


    // resourceDirectoryAccountId Field Functions 
    bool hasResourceDirectoryAccountId() const { return this->resourceDirectoryAccountId_ != nullptr;};
    void deleteResourceDirectoryAccountId() { this->resourceDirectoryAccountId_ = nullptr;};
    inline int64_t getResourceDirectoryAccountId() const { DARABONBA_PTR_GET_DEFAULT(resourceDirectoryAccountId_, 0L) };
    inline UpdateAlarmEventRequest& setResourceDirectoryAccountId(int64_t resourceDirectoryAccountId) { DARABONBA_PTR_SET_VALUE(resourceDirectoryAccountId_, resourceDirectoryAccountId) };


  protected:
    // The IDs of the alert events.
    shared_ptr<vector<int64_t>> alarmEventIdList_ {};
    // The language of the content within the request and response. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    shared_ptr<string> lang_ {};
    // The operation that you want to perform on the alert events. Valid values:
    // 
    // *   **manual_handled**: handle the alert events.
    // *   **ignore**: igore the alert events.
    // *   **cancel_ignore**: remove the alert events from the whitelist.
    shared_ptr<string> operationCode_ {};
    shared_ptr<int64_t> resourceDirectoryAccountId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
