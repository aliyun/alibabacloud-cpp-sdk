// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEBASELINECHECKWHITERECORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEBASELINECHECKWHITERECORDREQUEST_HPP_
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
  class UpdateBaselineCheckWhiteRecordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateBaselineCheckWhiteRecordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CheckId, checkId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
      DARABONBA_PTR_TO_JSON(RecordId, recordId_);
      DARABONBA_PTR_TO_JSON(RemoveContainerUuids, removeContainerUuids_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateBaselineCheckWhiteRecordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckId, checkId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
      DARABONBA_PTR_FROM_JSON(RecordId, recordId_);
      DARABONBA_PTR_FROM_JSON(RemoveContainerUuids, removeContainerUuids_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
    };
    UpdateBaselineCheckWhiteRecordRequest() = default ;
    UpdateBaselineCheckWhiteRecordRequest(const UpdateBaselineCheckWhiteRecordRequest &) = default ;
    UpdateBaselineCheckWhiteRecordRequest(UpdateBaselineCheckWhiteRecordRequest &&) = default ;
    UpdateBaselineCheckWhiteRecordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateBaselineCheckWhiteRecordRequest() = default ;
    UpdateBaselineCheckWhiteRecordRequest& operator=(const UpdateBaselineCheckWhiteRecordRequest &) = default ;
    UpdateBaselineCheckWhiteRecordRequest& operator=(UpdateBaselineCheckWhiteRecordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkId_ == nullptr
        && return this->lang_ == nullptr && return this->reason_ == nullptr && return this->recordId_ == nullptr && return this->removeContainerUuids_ == nullptr && return this->source_ == nullptr
        && return this->targetType_ == nullptr; };
    // checkId Field Functions 
    bool hasCheckId() const { return this->checkId_ != nullptr;};
    void deleteCheckId() { this->checkId_ = nullptr;};
    inline int64_t checkId() const { DARABONBA_PTR_GET_DEFAULT(checkId_, 0L) };
    inline UpdateBaselineCheckWhiteRecordRequest& setCheckId(int64_t checkId) { DARABONBA_PTR_SET_VALUE(checkId_, checkId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline UpdateBaselineCheckWhiteRecordRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline UpdateBaselineCheckWhiteRecordRequest& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // recordId Field Functions 
    bool hasRecordId() const { return this->recordId_ != nullptr;};
    void deleteRecordId() { this->recordId_ = nullptr;};
    inline int64_t recordId() const { DARABONBA_PTR_GET_DEFAULT(recordId_, 0L) };
    inline UpdateBaselineCheckWhiteRecordRequest& setRecordId(int64_t recordId) { DARABONBA_PTR_SET_VALUE(recordId_, recordId) };


    // removeContainerUuids Field Functions 
    bool hasRemoveContainerUuids() const { return this->removeContainerUuids_ != nullptr;};
    void deleteRemoveContainerUuids() { this->removeContainerUuids_ = nullptr;};
    inline const vector<string> & removeContainerUuids() const { DARABONBA_PTR_GET_CONST(removeContainerUuids_, vector<string>) };
    inline vector<string> removeContainerUuids() { DARABONBA_PTR_GET(removeContainerUuids_, vector<string>) };
    inline UpdateBaselineCheckWhiteRecordRequest& setRemoveContainerUuids(const vector<string> & removeContainerUuids) { DARABONBA_PTR_SET_VALUE(removeContainerUuids_, removeContainerUuids) };
    inline UpdateBaselineCheckWhiteRecordRequest& setRemoveContainerUuids(vector<string> && removeContainerUuids) { DARABONBA_PTR_SET_RVALUE(removeContainerUuids_, removeContainerUuids) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline UpdateBaselineCheckWhiteRecordRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline UpdateBaselineCheckWhiteRecordRequest& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


  protected:
    // The ID of the check item.
    // 
    // >  You can call the [ListCheckItemWarningSummary](~~ListCheckItemWarningSummary~~) operation to query the IDs of check items.
    std::shared_ptr<int64_t> checkId_ = nullptr;
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The reason why the check item is added to the whitelist.
    std::shared_ptr<string> reason_ = nullptr;
    // The ID of the whitelist record.
    std::shared_ptr<int64_t> recordId_ = nullptr;
    // A list of asset UUIDs from which container names need to be removed from the whitelist.
    std::shared_ptr<vector<string>> removeContainerUuids_ = nullptr;
    // The data source. Valid values:
    // 
    // *   **default**: server
    // *   **agentless**: agentless detection
    std::shared_ptr<string> source_ = nullptr;
    // The type of the assets on which the whitelist rule takes effect. Valid values:
    // 
    // *   **all_instance**: all servers
    // *   **instance**: specific servers
    std::shared_ptr<string> targetType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
