// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFILEDETECTREPORTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETFILEDETECTREPORTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetFileDetectReportRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFileDetectReportRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EventId, eventId_);
      DARABONBA_PTR_TO_JSON(Field, field_);
      DARABONBA_PTR_TO_JSON(FileHash, fileHash_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
    };
    friend void from_json(const Darabonba::Json& j, GetFileDetectReportRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EventId, eventId_);
      DARABONBA_PTR_FROM_JSON(Field, field_);
      DARABONBA_PTR_FROM_JSON(FileHash, fileHash_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
    };
    GetFileDetectReportRequest() = default ;
    GetFileDetectReportRequest(const GetFileDetectReportRequest &) = default ;
    GetFileDetectReportRequest(GetFileDetectReportRequest &&) = default ;
    GetFileDetectReportRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFileDetectReportRequest() = default ;
    GetFileDetectReportRequest& operator=(const GetFileDetectReportRequest &) = default ;
    GetFileDetectReportRequest& operator=(GetFileDetectReportRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eventId_ == nullptr
        && this->field_ == nullptr && this->fileHash_ == nullptr && this->lang_ == nullptr && this->sourceType_ == nullptr; };
    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline int64_t getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, 0L) };
    inline GetFileDetectReportRequest& setEventId(int64_t eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // field Field Functions 
    bool hasField() const { return this->field_ != nullptr;};
    void deleteField() { this->field_ = nullptr;};
    inline string getField() const { DARABONBA_PTR_GET_DEFAULT(field_, "") };
    inline GetFileDetectReportRequest& setField(string field) { DARABONBA_PTR_SET_VALUE(field_, field) };


    // fileHash Field Functions 
    bool hasFileHash() const { return this->fileHash_ != nullptr;};
    void deleteFileHash() { this->fileHash_ = nullptr;};
    inline string getFileHash() const { DARABONBA_PTR_GET_DEFAULT(fileHash_, "") };
    inline GetFileDetectReportRequest& setFileHash(string fileHash) { DARABONBA_PTR_SET_VALUE(fileHash_, fileHash) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline GetFileDetectReportRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline GetFileDetectReportRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


  protected:
    // The event ID that corresponds to the file to be detected.
    shared_ptr<int64_t> eventId_ {};
    // The field that you want to query. You can enter multiple fields and separate them with commas (,).
    // 
    // Valid values:
    // 
    // *   **ThreatTypes**: the type of the threat intelligence event
    // *   **Intelligences**: the threat intelligence event
    // *   **ThreatLevel**: the level of the threat intelligence event
    // *   **Basic**: the basic information about the report (the scan result)
    // *   **Sandbox**: the cloud sandbox check report
    shared_ptr<string> field_ {};
    // The hash value of the file to be detected.
    shared_ptr<string> fileHash_ {};
    // The language of the content within the request and response. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    shared_ptr<string> lang_ {};
    // The data source type. Valid values:
    // 
    // *   **machine**: host alerts
    // *   **object_scan**: file detection alerts
    shared_ptr<string> sourceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
