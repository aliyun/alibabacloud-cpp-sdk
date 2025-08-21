// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDIAGNOSEREPORTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDIAGNOSEREPORTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListDiagnoseReportRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDiagnoseReportRequest& obj) { 
      DARABONBA_PTR_TO_JSON(detail, detail_);
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(lang, lang_);
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(size, size_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
      DARABONBA_PTR_TO_JSON(trigger, trigger_);
    };
    friend void from_json(const Darabonba::Json& j, ListDiagnoseReportRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(detail, detail_);
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(lang, lang_);
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(size, size_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
      DARABONBA_PTR_FROM_JSON(trigger, trigger_);
    };
    ListDiagnoseReportRequest() = default ;
    ListDiagnoseReportRequest(const ListDiagnoseReportRequest &) = default ;
    ListDiagnoseReportRequest(ListDiagnoseReportRequest &&) = default ;
    ListDiagnoseReportRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDiagnoseReportRequest() = default ;
    ListDiagnoseReportRequest& operator=(const ListDiagnoseReportRequest &) = default ;
    ListDiagnoseReportRequest& operator=(ListDiagnoseReportRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->detail_ != nullptr
        && this->endTime_ != nullptr && this->lang_ != nullptr && this->page_ != nullptr && this->size_ != nullptr && this->startTime_ != nullptr
        && this->trigger_ != nullptr; };
    // detail Field Functions 
    bool hasDetail() const { return this->detail_ != nullptr;};
    void deleteDetail() { this->detail_ = nullptr;};
    inline bool detail() const { DARABONBA_PTR_GET_DEFAULT(detail_, false) };
    inline ListDiagnoseReportRequest& setDetail(bool detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ListDiagnoseReportRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ListDiagnoseReportRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t page() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline ListDiagnoseReportRequest& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline ListDiagnoseReportRequest& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ListDiagnoseReportRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // trigger Field Functions 
    bool hasTrigger() const { return this->trigger_ != nullptr;};
    void deleteTrigger() { this->trigger_ = nullptr;};
    inline string trigger() const { DARABONBA_PTR_GET_DEFAULT(trigger_, "") };
    inline ListDiagnoseReportRequest& setTrigger(string trigger) { DARABONBA_PTR_SET_VALUE(trigger_, trigger) };


  protected:
    // SYSTEM
    std::shared_ptr<bool> detail_ = nullptr;
    // 1
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // 1594569600000
    std::shared_ptr<string> lang_ = nullptr;
    // 20
    std::shared_ptr<int32_t> page_ = nullptr;
    // true
    std::shared_ptr<int32_t> size_ = nullptr;
    // 1595174399999
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> startTime_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> trigger_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
