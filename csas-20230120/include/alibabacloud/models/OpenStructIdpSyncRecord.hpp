// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPENSTRUCTIDPSYNCRECORD_HPP_
#define ALIBABACLOUD_MODELS_OPENSTRUCTIDPSYNCRECORD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class OpenStructIdpSyncRecord : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OpenStructIdpSyncRecord& obj) { 
      DARABONBA_PTR_TO_JSON(Action, action_);
      DARABONBA_PTR_TO_JSON(IdpRawJson, idpRawJson_);
      DARABONBA_PTR_TO_JSON(IdpResourceId, idpResourceId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RecordType, recordType_);
      DARABONBA_PTR_TO_JSON(SaseRawJson, saseRawJson_);
      DARABONBA_PTR_TO_JSON(SaseResourceId, saseResourceId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(SyncRecordId, syncRecordId_);
      DARABONBA_PTR_TO_JSON(SyncTaskId, syncTaskId_);
      DARABONBA_PTR_TO_JSON(TimeUnix, timeUnix_);
    };
    friend void from_json(const Darabonba::Json& j, OpenStructIdpSyncRecord& obj) { 
      DARABONBA_PTR_FROM_JSON(Action, action_);
      DARABONBA_PTR_FROM_JSON(IdpRawJson, idpRawJson_);
      DARABONBA_PTR_FROM_JSON(IdpResourceId, idpResourceId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RecordType, recordType_);
      DARABONBA_PTR_FROM_JSON(SaseRawJson, saseRawJson_);
      DARABONBA_PTR_FROM_JSON(SaseResourceId, saseResourceId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(SyncRecordId, syncRecordId_);
      DARABONBA_PTR_FROM_JSON(SyncTaskId, syncTaskId_);
      DARABONBA_PTR_FROM_JSON(TimeUnix, timeUnix_);
    };
    OpenStructIdpSyncRecord() = default ;
    OpenStructIdpSyncRecord(const OpenStructIdpSyncRecord &) = default ;
    OpenStructIdpSyncRecord(OpenStructIdpSyncRecord &&) = default ;
    OpenStructIdpSyncRecord(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OpenStructIdpSyncRecord() = default ;
    OpenStructIdpSyncRecord& operator=(const OpenStructIdpSyncRecord &) = default ;
    OpenStructIdpSyncRecord& operator=(OpenStructIdpSyncRecord &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->action_ != nullptr
        && this->idpRawJson_ != nullptr && this->idpResourceId_ != nullptr && this->name_ != nullptr && this->recordType_ != nullptr && this->saseRawJson_ != nullptr
        && this->saseResourceId_ != nullptr && this->success_ != nullptr && this->syncRecordId_ != nullptr && this->syncTaskId_ != nullptr && this->timeUnix_ != nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string action() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline OpenStructIdpSyncRecord& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // idpRawJson Field Functions 
    bool hasIdpRawJson() const { return this->idpRawJson_ != nullptr;};
    void deleteIdpRawJson() { this->idpRawJson_ = nullptr;};
    inline string idpRawJson() const { DARABONBA_PTR_GET_DEFAULT(idpRawJson_, "") };
    inline OpenStructIdpSyncRecord& setIdpRawJson(string idpRawJson) { DARABONBA_PTR_SET_VALUE(idpRawJson_, idpRawJson) };


    // idpResourceId Field Functions 
    bool hasIdpResourceId() const { return this->idpResourceId_ != nullptr;};
    void deleteIdpResourceId() { this->idpResourceId_ = nullptr;};
    inline string idpResourceId() const { DARABONBA_PTR_GET_DEFAULT(idpResourceId_, "") };
    inline OpenStructIdpSyncRecord& setIdpResourceId(string idpResourceId) { DARABONBA_PTR_SET_VALUE(idpResourceId_, idpResourceId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline OpenStructIdpSyncRecord& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // recordType Field Functions 
    bool hasRecordType() const { return this->recordType_ != nullptr;};
    void deleteRecordType() { this->recordType_ = nullptr;};
    inline string recordType() const { DARABONBA_PTR_GET_DEFAULT(recordType_, "") };
    inline OpenStructIdpSyncRecord& setRecordType(string recordType) { DARABONBA_PTR_SET_VALUE(recordType_, recordType) };


    // saseRawJson Field Functions 
    bool hasSaseRawJson() const { return this->saseRawJson_ != nullptr;};
    void deleteSaseRawJson() { this->saseRawJson_ = nullptr;};
    inline string saseRawJson() const { DARABONBA_PTR_GET_DEFAULT(saseRawJson_, "") };
    inline OpenStructIdpSyncRecord& setSaseRawJson(string saseRawJson) { DARABONBA_PTR_SET_VALUE(saseRawJson_, saseRawJson) };


    // saseResourceId Field Functions 
    bool hasSaseResourceId() const { return this->saseResourceId_ != nullptr;};
    void deleteSaseResourceId() { this->saseResourceId_ = nullptr;};
    inline string saseResourceId() const { DARABONBA_PTR_GET_DEFAULT(saseResourceId_, "") };
    inline OpenStructIdpSyncRecord& setSaseResourceId(string saseResourceId) { DARABONBA_PTR_SET_VALUE(saseResourceId_, saseResourceId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline OpenStructIdpSyncRecord& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // syncRecordId Field Functions 
    bool hasSyncRecordId() const { return this->syncRecordId_ != nullptr;};
    void deleteSyncRecordId() { this->syncRecordId_ = nullptr;};
    inline string syncRecordId() const { DARABONBA_PTR_GET_DEFAULT(syncRecordId_, "") };
    inline OpenStructIdpSyncRecord& setSyncRecordId(string syncRecordId) { DARABONBA_PTR_SET_VALUE(syncRecordId_, syncRecordId) };


    // syncTaskId Field Functions 
    bool hasSyncTaskId() const { return this->syncTaskId_ != nullptr;};
    void deleteSyncTaskId() { this->syncTaskId_ = nullptr;};
    inline string syncTaskId() const { DARABONBA_PTR_GET_DEFAULT(syncTaskId_, "") };
    inline OpenStructIdpSyncRecord& setSyncTaskId(string syncTaskId) { DARABONBA_PTR_SET_VALUE(syncTaskId_, syncTaskId) };


    // timeUnix Field Functions 
    bool hasTimeUnix() const { return this->timeUnix_ != nullptr;};
    void deleteTimeUnix() { this->timeUnix_ = nullptr;};
    inline string timeUnix() const { DARABONBA_PTR_GET_DEFAULT(timeUnix_, "") };
    inline OpenStructIdpSyncRecord& setTimeUnix(string timeUnix) { DARABONBA_PTR_SET_VALUE(timeUnix_, timeUnix) };


  protected:
    std::shared_ptr<string> action_ = nullptr;
    std::shared_ptr<string> idpRawJson_ = nullptr;
    std::shared_ptr<string> idpResourceId_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> recordType_ = nullptr;
    std::shared_ptr<string> saseRawJson_ = nullptr;
    std::shared_ptr<string> saseResourceId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
    std::shared_ptr<string> syncRecordId_ = nullptr;
    std::shared_ptr<string> syncTaskId_ = nullptr;
    std::shared_ptr<string> timeUnix_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
