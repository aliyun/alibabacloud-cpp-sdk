// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENAMELISTPAGELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENAMELISTPAGELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeNameListPageListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNameListPageListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(currentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
      DARABONBA_PTR_TO_JSON(updateBeginTime, updateBeginTime_);
      DARABONBA_PTR_TO_JSON(updateEndTime, updateEndTime_);
      DARABONBA_PTR_TO_JSON(value, value_);
      DARABONBA_PTR_TO_JSON(variableId, variableId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNameListPageListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(currentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
      DARABONBA_PTR_FROM_JSON(updateBeginTime, updateBeginTime_);
      DARABONBA_PTR_FROM_JSON(updateEndTime, updateEndTime_);
      DARABONBA_PTR_FROM_JSON(value, value_);
      DARABONBA_PTR_FROM_JSON(variableId, variableId_);
    };
    DescribeNameListPageListRequest() = default ;
    DescribeNameListPageListRequest(const DescribeNameListPageListRequest &) = default ;
    DescribeNameListPageListRequest(DescribeNameListPageListRequest &&) = default ;
    DescribeNameListPageListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNameListPageListRequest() = default ;
    DescribeNameListPageListRequest& operator=(const DescribeNameListPageListRequest &) = default ;
    DescribeNameListPageListRequest& operator=(DescribeNameListPageListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->lang_ != nullptr
        && this->currentPage_ != nullptr && this->pageSize_ != nullptr && this->regId_ != nullptr && this->updateBeginTime_ != nullptr && this->updateEndTime_ != nullptr
        && this->value_ != nullptr && this->variableId_ != nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeNameListPageListRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeNameListPageListRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeNameListPageListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string regId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline DescribeNameListPageListRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


    // updateBeginTime Field Functions 
    bool hasUpdateBeginTime() const { return this->updateBeginTime_ != nullptr;};
    void deleteUpdateBeginTime() { this->updateBeginTime_ = nullptr;};
    inline int64_t updateBeginTime() const { DARABONBA_PTR_GET_DEFAULT(updateBeginTime_, 0L) };
    inline DescribeNameListPageListRequest& setUpdateBeginTime(int64_t updateBeginTime) { DARABONBA_PTR_SET_VALUE(updateBeginTime_, updateBeginTime) };


    // updateEndTime Field Functions 
    bool hasUpdateEndTime() const { return this->updateEndTime_ != nullptr;};
    void deleteUpdateEndTime() { this->updateEndTime_ = nullptr;};
    inline int64_t updateEndTime() const { DARABONBA_PTR_GET_DEFAULT(updateEndTime_, 0L) };
    inline DescribeNameListPageListRequest& setUpdateEndTime(int64_t updateEndTime) { DARABONBA_PTR_SET_VALUE(updateEndTime_, updateEndTime) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeNameListPageListRequest& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    // variableId Field Functions 
    bool hasVariableId() const { return this->variableId_ != nullptr;};
    void deleteVariableId() { this->variableId_ = nullptr;};
    inline int64_t variableId() const { DARABONBA_PTR_GET_DEFAULT(variableId_, 0L) };
    inline DescribeNameListPageListRequest& setVariableId(int64_t variableId) { DARABONBA_PTR_SET_VALUE(variableId_, variableId) };


  protected:
    // Sets the language type for requests and received messages, default value is **zh**. Values:
    // - **zh**: Chinese
    // - **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // Current page number.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // Page size, default value is 10
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // Region code
    std::shared_ptr<string> regId_ = nullptr;
    // Update start time.
    std::shared_ptr<int64_t> updateBeginTime_ = nullptr;
    // Update end time.
    std::shared_ptr<int64_t> updateEndTime_ = nullptr;
    // Variable name/description
    std::shared_ptr<string> value_ = nullptr;
    // Variable ID
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> variableId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
