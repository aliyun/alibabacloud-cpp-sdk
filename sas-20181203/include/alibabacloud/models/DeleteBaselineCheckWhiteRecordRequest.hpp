// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEBASELINECHECKWHITERECORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEBASELINECHECKWHITERECORDREQUEST_HPP_
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
  class DeleteBaselineCheckWhiteRecordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteBaselineCheckWhiteRecordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CheckIds, checkIds_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(RecordIds, recordIds_);
      DARABONBA_PTR_TO_JSON(Source, source_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteBaselineCheckWhiteRecordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckIds, checkIds_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(RecordIds, recordIds_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
    };
    DeleteBaselineCheckWhiteRecordRequest() = default ;
    DeleteBaselineCheckWhiteRecordRequest(const DeleteBaselineCheckWhiteRecordRequest &) = default ;
    DeleteBaselineCheckWhiteRecordRequest(DeleteBaselineCheckWhiteRecordRequest &&) = default ;
    DeleteBaselineCheckWhiteRecordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteBaselineCheckWhiteRecordRequest() = default ;
    DeleteBaselineCheckWhiteRecordRequest& operator=(const DeleteBaselineCheckWhiteRecordRequest &) = default ;
    DeleteBaselineCheckWhiteRecordRequest& operator=(DeleteBaselineCheckWhiteRecordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkIds_ == nullptr
        && return this->lang_ == nullptr && return this->recordIds_ == nullptr && return this->source_ == nullptr; };
    // checkIds Field Functions 
    bool hasCheckIds() const { return this->checkIds_ != nullptr;};
    void deleteCheckIds() { this->checkIds_ = nullptr;};
    inline const vector<int64_t> & checkIds() const { DARABONBA_PTR_GET_CONST(checkIds_, vector<int64_t>) };
    inline vector<int64_t> checkIds() { DARABONBA_PTR_GET(checkIds_, vector<int64_t>) };
    inline DeleteBaselineCheckWhiteRecordRequest& setCheckIds(const vector<int64_t> & checkIds) { DARABONBA_PTR_SET_VALUE(checkIds_, checkIds) };
    inline DeleteBaselineCheckWhiteRecordRequest& setCheckIds(vector<int64_t> && checkIds) { DARABONBA_PTR_SET_RVALUE(checkIds_, checkIds) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DeleteBaselineCheckWhiteRecordRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // recordIds Field Functions 
    bool hasRecordIds() const { return this->recordIds_ != nullptr;};
    void deleteRecordIds() { this->recordIds_ = nullptr;};
    inline const vector<int64_t> & recordIds() const { DARABONBA_PTR_GET_CONST(recordIds_, vector<int64_t>) };
    inline vector<int64_t> recordIds() { DARABONBA_PTR_GET(recordIds_, vector<int64_t>) };
    inline DeleteBaselineCheckWhiteRecordRequest& setRecordIds(const vector<int64_t> & recordIds) { DARABONBA_PTR_SET_VALUE(recordIds_, recordIds) };
    inline DeleteBaselineCheckWhiteRecordRequest& setRecordIds(vector<int64_t> && recordIds) { DARABONBA_PTR_SET_RVALUE(recordIds_, recordIds) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline DeleteBaselineCheckWhiteRecordRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


  protected:
    // The IDs of check items.
    std::shared_ptr<vector<int64_t>> checkIds_ = nullptr;
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The IDs of the whitelist records.
    std::shared_ptr<vector<int64_t>> recordIds_ = nullptr;
    // The data source. Valid values:
    // 
    // *   **default**: host baseline
    // *   **agentless**: agentless detection
    std::shared_ptr<string> source_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
