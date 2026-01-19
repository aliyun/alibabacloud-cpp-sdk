// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEXPRESSIONVARIABLEPAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEXPRESSIONVARIABLEPAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeExpressionVariablePageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeExpressionVariablePageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(currentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(eventCode, eventCode_);
      DARABONBA_PTR_TO_JSON(outputs, outputs_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeExpressionVariablePageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(currentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(eventCode, eventCode_);
      DARABONBA_PTR_FROM_JSON(outputs, outputs_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    DescribeExpressionVariablePageRequest() = default ;
    DescribeExpressionVariablePageRequest(const DescribeExpressionVariablePageRequest &) = default ;
    DescribeExpressionVariablePageRequest(DescribeExpressionVariablePageRequest &&) = default ;
    DescribeExpressionVariablePageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeExpressionVariablePageRequest() = default ;
    DescribeExpressionVariablePageRequest& operator=(const DescribeExpressionVariablePageRequest &) = default ;
    DescribeExpressionVariablePageRequest& operator=(DescribeExpressionVariablePageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->currentPage_ == nullptr && this->eventCode_ == nullptr && this->outputs_ == nullptr && this->pageSize_ == nullptr && this->regId_ == nullptr
        && this->status_ == nullptr && this->value_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeExpressionVariablePageRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline string getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, "") };
    inline DescribeExpressionVariablePageRequest& setCurrentPage(string currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // eventCode Field Functions 
    bool hasEventCode() const { return this->eventCode_ != nullptr;};
    void deleteEventCode() { this->eventCode_ = nullptr;};
    inline string getEventCode() const { DARABONBA_PTR_GET_DEFAULT(eventCode_, "") };
    inline DescribeExpressionVariablePageRequest& setEventCode(string eventCode) { DARABONBA_PTR_SET_VALUE(eventCode_, eventCode) };


    // outputs Field Functions 
    bool hasOutputs() const { return this->outputs_ != nullptr;};
    void deleteOutputs() { this->outputs_ = nullptr;};
    inline string getOutputs() const { DARABONBA_PTR_GET_DEFAULT(outputs_, "") };
    inline DescribeExpressionVariablePageRequest& setOutputs(string outputs) { DARABONBA_PTR_SET_VALUE(outputs_, outputs) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeExpressionVariablePageRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string getRegId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline DescribeExpressionVariablePageRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeExpressionVariablePageRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeExpressionVariablePageRequest& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // Sets the language type for requests and received messages, with a default value of **zh**. Values:
    // - **zh**: Chinese
    // - **en**: English
    shared_ptr<string> lang_ {};
    // Current page number.
    // 
    // This parameter is required.
    shared_ptr<string> currentPage_ {};
    // Event code.
    shared_ptr<string> eventCode_ {};
    // Variable return type.
    shared_ptr<string> outputs_ {};
    // Page size, with a default value of 10.
    // 
    // This parameter is required.
    shared_ptr<string> pageSize_ {};
    // Region code.
    // 
    // This parameter is required.
    shared_ptr<string> regId_ {};
    // Status.
    shared_ptr<string> status_ {};
    // Variable name/description.
    shared_ptr<string> value_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
