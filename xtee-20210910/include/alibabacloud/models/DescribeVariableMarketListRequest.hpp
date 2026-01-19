// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVARIABLEMARKETLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVARIABLEMARKETLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeVariableMarketListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVariableMarketListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(chargingMode, chargingMode_);
      DARABONBA_PTR_TO_JSON(currentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(paging, paging_);
      DARABONBA_PTR_TO_JSON(queryContent, queryContent_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
      DARABONBA_PTR_TO_JSON(scenesStr, scenesStr_);
      DARABONBA_PTR_TO_JSON(source, source_);
      DARABONBA_PTR_TO_JSON(title, title_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVariableMarketListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(chargingMode, chargingMode_);
      DARABONBA_PTR_FROM_JSON(currentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(paging, paging_);
      DARABONBA_PTR_FROM_JSON(queryContent, queryContent_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
      DARABONBA_PTR_FROM_JSON(scenesStr, scenesStr_);
      DARABONBA_PTR_FROM_JSON(source, source_);
      DARABONBA_PTR_FROM_JSON(title, title_);
    };
    DescribeVariableMarketListRequest() = default ;
    DescribeVariableMarketListRequest(const DescribeVariableMarketListRequest &) = default ;
    DescribeVariableMarketListRequest(DescribeVariableMarketListRequest &&) = default ;
    DescribeVariableMarketListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVariableMarketListRequest() = default ;
    DescribeVariableMarketListRequest& operator=(const DescribeVariableMarketListRequest &) = default ;
    DescribeVariableMarketListRequest& operator=(DescribeVariableMarketListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->chargingMode_ == nullptr && this->currentPage_ == nullptr && this->pageSize_ == nullptr && this->paging_ == nullptr && this->queryContent_ == nullptr
        && this->regId_ == nullptr && this->scenesStr_ == nullptr && this->source_ == nullptr && this->title_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeVariableMarketListRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // chargingMode Field Functions 
    bool hasChargingMode() const { return this->chargingMode_ != nullptr;};
    void deleteChargingMode() { this->chargingMode_ = nullptr;};
    inline string getChargingMode() const { DARABONBA_PTR_GET_DEFAULT(chargingMode_, "") };
    inline DescribeVariableMarketListRequest& setChargingMode(string chargingMode) { DARABONBA_PTR_SET_VALUE(chargingMode_, chargingMode) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeVariableMarketListRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeVariableMarketListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // paging Field Functions 
    bool hasPaging() const { return this->paging_ != nullptr;};
    void deletePaging() { this->paging_ = nullptr;};
    inline string getPaging() const { DARABONBA_PTR_GET_DEFAULT(paging_, "") };
    inline DescribeVariableMarketListRequest& setPaging(string paging) { DARABONBA_PTR_SET_VALUE(paging_, paging) };


    // queryContent Field Functions 
    bool hasQueryContent() const { return this->queryContent_ != nullptr;};
    void deleteQueryContent() { this->queryContent_ = nullptr;};
    inline string getQueryContent() const { DARABONBA_PTR_GET_DEFAULT(queryContent_, "") };
    inline DescribeVariableMarketListRequest& setQueryContent(string queryContent) { DARABONBA_PTR_SET_VALUE(queryContent_, queryContent) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string getRegId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline DescribeVariableMarketListRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


    // scenesStr Field Functions 
    bool hasScenesStr() const { return this->scenesStr_ != nullptr;};
    void deleteScenesStr() { this->scenesStr_ = nullptr;};
    inline string getScenesStr() const { DARABONBA_PTR_GET_DEFAULT(scenesStr_, "") };
    inline DescribeVariableMarketListRequest& setScenesStr(string scenesStr) { DARABONBA_PTR_SET_VALUE(scenesStr_, scenesStr) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline DescribeVariableMarketListRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline DescribeVariableMarketListRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    // Sets the language type for requests and received messages, with a default value of **zh**. Values:
    // - **zh**: Chinese
    // - **en**: English
    shared_ptr<string> lang_ {};
    // Charging mode
    shared_ptr<string> chargingMode_ {};
    // Current page number.
    shared_ptr<int32_t> currentPage_ {};
    // Page size, with a default value of 10.
    shared_ptr<int32_t> pageSize_ {};
    // Paging indicator, default is true.
    shared_ptr<string> paging_ {};
    // Query content, supports fuzzy search.
    // 
    //  Title/Description
    shared_ptr<string> queryContent_ {};
    // Region code
    shared_ptr<string> regId_ {};
    // Scenario
    shared_ptr<string> scenesStr_ {};
    // Source
    shared_ptr<string> source_ {};
    // Title.
    shared_ptr<string> title_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
