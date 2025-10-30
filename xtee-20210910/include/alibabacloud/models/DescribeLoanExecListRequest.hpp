// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOANEXECLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOANEXECLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeLoanExecListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLoanExecListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(batchNo, batchNo_);
      DARABONBA_PTR_TO_JSON(currentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(monitorObj, monitorObj_);
      DARABONBA_PTR_TO_JSON(monitorStatus, monitorStatus_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLoanExecListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(batchNo, batchNo_);
      DARABONBA_PTR_FROM_JSON(currentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(monitorObj, monitorObj_);
      DARABONBA_PTR_FROM_JSON(monitorStatus, monitorStatus_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
    };
    DescribeLoanExecListRequest() = default ;
    DescribeLoanExecListRequest(const DescribeLoanExecListRequest &) = default ;
    DescribeLoanExecListRequest(DescribeLoanExecListRequest &&) = default ;
    DescribeLoanExecListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLoanExecListRequest() = default ;
    DescribeLoanExecListRequest& operator=(const DescribeLoanExecListRequest &) = default ;
    DescribeLoanExecListRequest& operator=(DescribeLoanExecListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && return this->batchNo_ == nullptr && return this->currentPage_ == nullptr && return this->monitorObj_ == nullptr && return this->monitorStatus_ == nullptr && return this->pageSize_ == nullptr
        && return this->regId_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeLoanExecListRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // batchNo Field Functions 
    bool hasBatchNo() const { return this->batchNo_ != nullptr;};
    void deleteBatchNo() { this->batchNo_ = nullptr;};
    inline string batchNo() const { DARABONBA_PTR_GET_DEFAULT(batchNo_, "") };
    inline DescribeLoanExecListRequest& setBatchNo(string batchNo) { DARABONBA_PTR_SET_VALUE(batchNo_, batchNo) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline string currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, "") };
    inline DescribeLoanExecListRequest& setCurrentPage(string currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // monitorObj Field Functions 
    bool hasMonitorObj() const { return this->monitorObj_ != nullptr;};
    void deleteMonitorObj() { this->monitorObj_ = nullptr;};
    inline string monitorObj() const { DARABONBA_PTR_GET_DEFAULT(monitorObj_, "") };
    inline DescribeLoanExecListRequest& setMonitorObj(string monitorObj) { DARABONBA_PTR_SET_VALUE(monitorObj_, monitorObj) };


    // monitorStatus Field Functions 
    bool hasMonitorStatus() const { return this->monitorStatus_ != nullptr;};
    void deleteMonitorStatus() { this->monitorStatus_ = nullptr;};
    inline string monitorStatus() const { DARABONBA_PTR_GET_DEFAULT(monitorStatus_, "") };
    inline DescribeLoanExecListRequest& setMonitorStatus(string monitorStatus) { DARABONBA_PTR_SET_VALUE(monitorStatus_, monitorStatus) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeLoanExecListRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string regId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline DescribeLoanExecListRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


  protected:
    // Set the language type for request and response messages, default value is **zh**. Values:
    // - **zh**: Chinese
    // - **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // Import batch number.
    std::shared_ptr<string> batchNo_ = nullptr;
    // Current page number.
    std::shared_ptr<string> currentPage_ = nullptr;
    // Monitoring metric data.
    std::shared_ptr<string> monitorObj_ = nullptr;
    // Status
    std::shared_ptr<string> monitorStatus_ = nullptr;
    // Page size, with a default value of 10.
    std::shared_ptr<string> pageSize_ = nullptr;
    // Region code
    std::shared_ptr<string> regId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
