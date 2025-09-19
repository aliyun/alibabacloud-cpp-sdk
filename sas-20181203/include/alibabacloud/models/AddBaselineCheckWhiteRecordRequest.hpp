// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDBASELINECHECKWHITERECORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDBASELINECHECKWHITERECORDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class AddBaselineCheckWhiteRecordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddBaselineCheckWhiteRecordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CheckId, checkId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
    };
    friend void from_json(const Darabonba::Json& j, AddBaselineCheckWhiteRecordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckId, checkId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
    };
    AddBaselineCheckWhiteRecordRequest() = default ;
    AddBaselineCheckWhiteRecordRequest(const AddBaselineCheckWhiteRecordRequest &) = default ;
    AddBaselineCheckWhiteRecordRequest(AddBaselineCheckWhiteRecordRequest &&) = default ;
    AddBaselineCheckWhiteRecordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddBaselineCheckWhiteRecordRequest() = default ;
    AddBaselineCheckWhiteRecordRequest& operator=(const AddBaselineCheckWhiteRecordRequest &) = default ;
    AddBaselineCheckWhiteRecordRequest& operator=(AddBaselineCheckWhiteRecordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->checkId_ != nullptr
        && this->lang_ != nullptr && this->reason_ != nullptr && this->source_ != nullptr && this->targetType_ != nullptr; };
    // checkId Field Functions 
    bool hasCheckId() const { return this->checkId_ != nullptr;};
    void deleteCheckId() { this->checkId_ = nullptr;};
    inline int64_t checkId() const { DARABONBA_PTR_GET_DEFAULT(checkId_, 0L) };
    inline AddBaselineCheckWhiteRecordRequest& setCheckId(int64_t checkId) { DARABONBA_PTR_SET_VALUE(checkId_, checkId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline AddBaselineCheckWhiteRecordRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline AddBaselineCheckWhiteRecordRequest& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline AddBaselineCheckWhiteRecordRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline AddBaselineCheckWhiteRecordRequest& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


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
    // The data source. If you leave this parameter empty, the default value is used. Valid values:
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
