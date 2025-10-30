// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESAMPLEDATABYBATCHUUIDPAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESAMPLEDATABYBATCHUUIDPAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeSampleDataByBatchUUidPageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSampleDataByBatchUUidPageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(batchUuid, batchUuid_);
      DARABONBA_PTR_TO_JSON(currentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(dataValue, dataValue_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
      DARABONBA_PTR_TO_JSON(updateBeginTime, updateBeginTime_);
      DARABONBA_PTR_TO_JSON(updateEndTime, updateEndTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSampleDataByBatchUUidPageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(batchUuid, batchUuid_);
      DARABONBA_PTR_FROM_JSON(currentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(dataValue, dataValue_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
      DARABONBA_PTR_FROM_JSON(updateBeginTime, updateBeginTime_);
      DARABONBA_PTR_FROM_JSON(updateEndTime, updateEndTime_);
    };
    DescribeSampleDataByBatchUUidPageRequest() = default ;
    DescribeSampleDataByBatchUUidPageRequest(const DescribeSampleDataByBatchUUidPageRequest &) = default ;
    DescribeSampleDataByBatchUUidPageRequest(DescribeSampleDataByBatchUUidPageRequest &&) = default ;
    DescribeSampleDataByBatchUUidPageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSampleDataByBatchUUidPageRequest() = default ;
    DescribeSampleDataByBatchUUidPageRequest& operator=(const DescribeSampleDataByBatchUUidPageRequest &) = default ;
    DescribeSampleDataByBatchUUidPageRequest& operator=(DescribeSampleDataByBatchUUidPageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && return this->batchUuid_ == nullptr && return this->currentPage_ == nullptr && return this->dataValue_ == nullptr && return this->pageSize_ == nullptr && return this->regId_ == nullptr
        && return this->updateBeginTime_ == nullptr && return this->updateEndTime_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeSampleDataByBatchUUidPageRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // batchUuid Field Functions 
    bool hasBatchUuid() const { return this->batchUuid_ != nullptr;};
    void deleteBatchUuid() { this->batchUuid_ = nullptr;};
    inline string batchUuid() const { DARABONBA_PTR_GET_DEFAULT(batchUuid_, "") };
    inline DescribeSampleDataByBatchUUidPageRequest& setBatchUuid(string batchUuid) { DARABONBA_PTR_SET_VALUE(batchUuid_, batchUuid) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeSampleDataByBatchUUidPageRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // dataValue Field Functions 
    bool hasDataValue() const { return this->dataValue_ != nullptr;};
    void deleteDataValue() { this->dataValue_ = nullptr;};
    inline string dataValue() const { DARABONBA_PTR_GET_DEFAULT(dataValue_, "") };
    inline DescribeSampleDataByBatchUUidPageRequest& setDataValue(string dataValue) { DARABONBA_PTR_SET_VALUE(dataValue_, dataValue) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeSampleDataByBatchUUidPageRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string regId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline DescribeSampleDataByBatchUUidPageRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


    // updateBeginTime Field Functions 
    bool hasUpdateBeginTime() const { return this->updateBeginTime_ != nullptr;};
    void deleteUpdateBeginTime() { this->updateBeginTime_ = nullptr;};
    inline int64_t updateBeginTime() const { DARABONBA_PTR_GET_DEFAULT(updateBeginTime_, 0L) };
    inline DescribeSampleDataByBatchUUidPageRequest& setUpdateBeginTime(int64_t updateBeginTime) { DARABONBA_PTR_SET_VALUE(updateBeginTime_, updateBeginTime) };


    // updateEndTime Field Functions 
    bool hasUpdateEndTime() const { return this->updateEndTime_ != nullptr;};
    void deleteUpdateEndTime() { this->updateEndTime_ = nullptr;};
    inline int64_t updateEndTime() const { DARABONBA_PTR_GET_DEFAULT(updateEndTime_, 0L) };
    inline DescribeSampleDataByBatchUUidPageRequest& setUpdateEndTime(int64_t updateEndTime) { DARABONBA_PTR_SET_VALUE(updateEndTime_, updateEndTime) };


  protected:
    // Sets the language type for requests and received messages, default value is **zh**. Values:
    // - **zh**: Chinese
    // - **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // Sample batch UUID
    std::shared_ptr<string> batchUuid_ = nullptr;
    // Current page number.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // Content of the list entered in the text box
    std::shared_ptr<string> dataValue_ = nullptr;
    // Page size, default value is 10
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // Region code
    std::shared_ptr<string> regId_ = nullptr;
    // Start time
    std::shared_ptr<int64_t> updateBeginTime_ = nullptr;
    // End time
    std::shared_ptr<int64_t> updateEndTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
