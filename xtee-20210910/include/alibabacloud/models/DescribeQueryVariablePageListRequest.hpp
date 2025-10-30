// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEQUERYVARIABLEPAGELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEQUERYVARIABLEPAGELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeQueryVariablePageListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeQueryVariablePageListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(currentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(dataSourceCode, dataSourceCode_);
      DARABONBA_PTR_TO_JSON(eventCode, eventCode_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeQueryVariablePageListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(currentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(dataSourceCode, dataSourceCode_);
      DARABONBA_PTR_FROM_JSON(eventCode, eventCode_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
    };
    DescribeQueryVariablePageListRequest() = default ;
    DescribeQueryVariablePageListRequest(const DescribeQueryVariablePageListRequest &) = default ;
    DescribeQueryVariablePageListRequest(DescribeQueryVariablePageListRequest &&) = default ;
    DescribeQueryVariablePageListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeQueryVariablePageListRequest() = default ;
    DescribeQueryVariablePageListRequest& operator=(const DescribeQueryVariablePageListRequest &) = default ;
    DescribeQueryVariablePageListRequest& operator=(DescribeQueryVariablePageListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && return this->currentPage_ == nullptr && return this->dataSourceCode_ == nullptr && return this->eventCode_ == nullptr && return this->name_ == nullptr && return this->pageSize_ == nullptr
        && return this->regId_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeQueryVariablePageListRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int64_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0L) };
    inline DescribeQueryVariablePageListRequest& setCurrentPage(int64_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // dataSourceCode Field Functions 
    bool hasDataSourceCode() const { return this->dataSourceCode_ != nullptr;};
    void deleteDataSourceCode() { this->dataSourceCode_ = nullptr;};
    inline string dataSourceCode() const { DARABONBA_PTR_GET_DEFAULT(dataSourceCode_, "") };
    inline DescribeQueryVariablePageListRequest& setDataSourceCode(string dataSourceCode) { DARABONBA_PTR_SET_VALUE(dataSourceCode_, dataSourceCode) };


    // eventCode Field Functions 
    bool hasEventCode() const { return this->eventCode_ != nullptr;};
    void deleteEventCode() { this->eventCode_ = nullptr;};
    inline string eventCode() const { DARABONBA_PTR_GET_DEFAULT(eventCode_, "") };
    inline DescribeQueryVariablePageListRequest& setEventCode(string eventCode) { DARABONBA_PTR_SET_VALUE(eventCode_, eventCode) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeQueryVariablePageListRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeQueryVariablePageListRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string regId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline DescribeQueryVariablePageListRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


  protected:
    // Sets the language type for requests and received messages, default value is **zh**. Values:
    // - **zh**: Chinese
    // - **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // Current page number.
    std::shared_ptr<int64_t> currentPage_ = nullptr;
    // Data source code
    std::shared_ptr<string> dataSourceCode_ = nullptr;
    // Event code
    std::shared_ptr<string> eventCode_ = nullptr;
    // Query variable name
    std::shared_ptr<string> name_ = nullptr;
    // Page size, default value is 10
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // Region code
    // 
    // This parameter is required.
    std::shared_ptr<string> regId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
