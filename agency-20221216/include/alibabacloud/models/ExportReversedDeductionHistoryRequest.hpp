// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXPORTREVERSEDDEDUCTIONHISTORYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXPORTREVERSEDDEDUCTIONHISTORYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20221216
{
namespace Models
{
  class ExportReversedDeductionHistoryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExportReversedDeductionHistoryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(ExportUid, exportUid_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
    };
    friend void from_json(const Darabonba::Json& j, ExportReversedDeductionHistoryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(ExportUid, exportUid_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
    };
    ExportReversedDeductionHistoryRequest() = default ;
    ExportReversedDeductionHistoryRequest(const ExportReversedDeductionHistoryRequest &) = default ;
    ExportReversedDeductionHistoryRequest(ExportReversedDeductionHistoryRequest &&) = default ;
    ExportReversedDeductionHistoryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExportReversedDeductionHistoryRequest() = default ;
    ExportReversedDeductionHistoryRequest& operator=(const ExportReversedDeductionHistoryRequest &) = default ;
    ExportReversedDeductionHistoryRequest& operator=(ExportReversedDeductionHistoryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endDate_ == nullptr
        && this->exportUid_ == nullptr && this->language_ == nullptr && this->startDate_ == nullptr; };
    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline ExportReversedDeductionHistoryRequest& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // exportUid Field Functions 
    bool hasExportUid() const { return this->exportUid_ != nullptr;};
    void deleteExportUid() { this->exportUid_ = nullptr;};
    inline int64_t getExportUid() const { DARABONBA_PTR_GET_DEFAULT(exportUid_, 0L) };
    inline ExportReversedDeductionHistoryRequest& setExportUid(int64_t exportUid) { DARABONBA_PTR_SET_VALUE(exportUid_, exportUid) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline ExportReversedDeductionHistoryRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline ExportReversedDeductionHistoryRequest& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


  protected:
    // This parameter is required.
    shared_ptr<string> endDate_ {};
    // This parameter is required.
    shared_ptr<int64_t> exportUid_ {};
    shared_ptr<string> language_ {};
    // This parameter is required.
    shared_ptr<string> startDate_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20221216
#endif
