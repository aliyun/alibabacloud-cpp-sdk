// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEXPORTERRULELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEXPORTERRULELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeExporterRuleListResponseBodyDatapoints.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeExporterRuleListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeExporterRuleListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Datapoints, datapoints_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeExporterRuleListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Datapoints, datapoints_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeExporterRuleListResponseBody() = default ;
    DescribeExporterRuleListResponseBody(const DescribeExporterRuleListResponseBody &) = default ;
    DescribeExporterRuleListResponseBody(DescribeExporterRuleListResponseBody &&) = default ;
    DescribeExporterRuleListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeExporterRuleListResponseBody() = default ;
    DescribeExporterRuleListResponseBody& operator=(const DescribeExporterRuleListResponseBody &) = default ;
    DescribeExporterRuleListResponseBody& operator=(DescribeExporterRuleListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->datapoints_ == nullptr && return this->message_ == nullptr && return this->pageNumber_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr
        && return this->total_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeExporterRuleListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // datapoints Field Functions 
    bool hasDatapoints() const { return this->datapoints_ != nullptr;};
    void deleteDatapoints() { this->datapoints_ = nullptr;};
    inline const DescribeExporterRuleListResponseBodyDatapoints & datapoints() const { DARABONBA_PTR_GET_CONST(datapoints_, DescribeExporterRuleListResponseBodyDatapoints) };
    inline DescribeExporterRuleListResponseBodyDatapoints datapoints() { DARABONBA_PTR_GET(datapoints_, DescribeExporterRuleListResponseBodyDatapoints) };
    inline DescribeExporterRuleListResponseBody& setDatapoints(const DescribeExporterRuleListResponseBodyDatapoints & datapoints) { DARABONBA_PTR_SET_VALUE(datapoints_, datapoints) };
    inline DescribeExporterRuleListResponseBody& setDatapoints(DescribeExporterRuleListResponseBodyDatapoints && datapoints) { DARABONBA_PTR_SET_RVALUE(datapoints_, datapoints) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeExporterRuleListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeExporterRuleListResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeExporterRuleListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeExporterRuleListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline DescribeExporterRuleListResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The HTTP status code.
    // 
    // > The status code 200 indicates that the request was successful. Other status codes indicate that the request failed.
    std::shared_ptr<string> code_ = nullptr;
    // The details of the data export rules.
    std::shared_ptr<DescribeExporterRuleListResponseBodyDatapoints> datapoints_ = nullptr;
    // The returned message.
    std::shared_ptr<string> message_ = nullptr;
    // The page number of the returned page.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   `true`
    // *   `false`
    std::shared_ptr<bool> success_ = nullptr;
    // The total number of returned entries.
    std::shared_ptr<int32_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
