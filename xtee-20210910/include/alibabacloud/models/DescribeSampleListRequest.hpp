// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESAMPLELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESAMPLELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeSampleListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSampleListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(currentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
      DARABONBA_PTR_TO_JSON(sampleType, sampleType_);
      DARABONBA_PTR_TO_JSON(sampleValue, sampleValue_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSampleListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(currentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
      DARABONBA_PTR_FROM_JSON(sampleType, sampleType_);
      DARABONBA_PTR_FROM_JSON(sampleValue, sampleValue_);
    };
    DescribeSampleListRequest() = default ;
    DescribeSampleListRequest(const DescribeSampleListRequest &) = default ;
    DescribeSampleListRequest(DescribeSampleListRequest &&) = default ;
    DescribeSampleListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSampleListRequest() = default ;
    DescribeSampleListRequest& operator=(const DescribeSampleListRequest &) = default ;
    DescribeSampleListRequest& operator=(DescribeSampleListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->currentPage_ == nullptr && this->pageSize_ == nullptr && this->regId_ == nullptr && this->sampleType_ == nullptr && this->sampleValue_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeSampleListRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeSampleListRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeSampleListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string getRegId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline DescribeSampleListRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


    // sampleType Field Functions 
    bool hasSampleType() const { return this->sampleType_ != nullptr;};
    void deleteSampleType() { this->sampleType_ = nullptr;};
    inline string getSampleType() const { DARABONBA_PTR_GET_DEFAULT(sampleType_, "") };
    inline DescribeSampleListRequest& setSampleType(string sampleType) { DARABONBA_PTR_SET_VALUE(sampleType_, sampleType) };


    // sampleValue Field Functions 
    bool hasSampleValue() const { return this->sampleValue_ != nullptr;};
    void deleteSampleValue() { this->sampleValue_ = nullptr;};
    inline string getSampleValue() const { DARABONBA_PTR_GET_DEFAULT(sampleValue_, "") };
    inline DescribeSampleListRequest& setSampleValue(string sampleValue) { DARABONBA_PTR_SET_VALUE(sampleValue_, sampleValue) };


  protected:
    // Sets the language type for requests and received messages, with a default value of **zh**. Values:
    // - **zh**: Chinese
    // - **en**: English
    shared_ptr<string> lang_ {};
    // Current page number.
    shared_ptr<int32_t> currentPage_ {};
    // Page size, with a default value of 10
    shared_ptr<int32_t> pageSize_ {};
    // Region code
    shared_ptr<string> regId_ {};
    // Sample type
    shared_ptr<string> sampleType_ {};
    // Sample data value.
    shared_ptr<string> sampleValue_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
