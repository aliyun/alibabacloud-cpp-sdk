// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHEXPORTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHEXPORTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/MetricStat.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class BatchExportResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchExportResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Anchor, anchor_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Cursor, cursor_);
      DARABONBA_PTR_TO_JSON(DataResults, dataResults_);
      DARABONBA_PTR_TO_JSON(HasNext, hasNext_);
      DARABONBA_PTR_TO_JSON(Length, length_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, BatchExportResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Anchor, anchor_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Cursor, cursor_);
      DARABONBA_PTR_FROM_JSON(DataResults, dataResults_);
      DARABONBA_PTR_FROM_JSON(HasNext, hasNext_);
      DARABONBA_PTR_FROM_JSON(Length, length_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    BatchExportResponseBody() = default ;
    BatchExportResponseBody(const BatchExportResponseBody &) = default ;
    BatchExportResponseBody(BatchExportResponseBody &&) = default ;
    BatchExportResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchExportResponseBody() = default ;
    BatchExportResponseBody& operator=(const BatchExportResponseBody &) = default ;
    BatchExportResponseBody& operator=(BatchExportResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->anchor_ != nullptr
        && this->code_ != nullptr && this->cursor_ != nullptr && this->dataResults_ != nullptr && this->hasNext_ != nullptr && this->length_ != nullptr
        && this->message_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr; };
    // anchor Field Functions 
    bool hasAnchor() const { return this->anchor_ != nullptr;};
    void deleteAnchor() { this->anchor_ = nullptr;};
    inline int64_t anchor() const { DARABONBA_PTR_GET_DEFAULT(anchor_, 0L) };
    inline BatchExportResponseBody& setAnchor(int64_t anchor) { DARABONBA_PTR_SET_VALUE(anchor_, anchor) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline BatchExportResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // cursor Field Functions 
    bool hasCursor() const { return this->cursor_ != nullptr;};
    void deleteCursor() { this->cursor_ = nullptr;};
    inline string cursor() const { DARABONBA_PTR_GET_DEFAULT(cursor_, "") };
    inline BatchExportResponseBody& setCursor(string cursor) { DARABONBA_PTR_SET_VALUE(cursor_, cursor) };


    // dataResults Field Functions 
    bool hasDataResults() const { return this->dataResults_ != nullptr;};
    void deleteDataResults() { this->dataResults_ = nullptr;};
    inline const vector<MetricStat> & dataResults() const { DARABONBA_PTR_GET_CONST(dataResults_, vector<MetricStat>) };
    inline vector<MetricStat> dataResults() { DARABONBA_PTR_GET(dataResults_, vector<MetricStat>) };
    inline BatchExportResponseBody& setDataResults(const vector<MetricStat> & dataResults) { DARABONBA_PTR_SET_VALUE(dataResults_, dataResults) };
    inline BatchExportResponseBody& setDataResults(vector<MetricStat> && dataResults) { DARABONBA_PTR_SET_RVALUE(dataResults_, dataResults) };


    // hasNext Field Functions 
    bool hasHasNext() const { return this->hasNext_ != nullptr;};
    void deleteHasNext() { this->hasNext_ = nullptr;};
    inline bool hasNext() const { DARABONBA_PTR_GET_DEFAULT(hasNext_, false) };
    inline BatchExportResponseBody& setHasNext(bool hasNext) { DARABONBA_PTR_SET_VALUE(hasNext_, hasNext) };


    // length Field Functions 
    bool hasLength() const { return this->length_ != nullptr;};
    void deleteLength() { this->length_ = nullptr;};
    inline int32_t length() const { DARABONBA_PTR_GET_DEFAULT(length_, 0) };
    inline BatchExportResponseBody& setLength(int32_t length) { DARABONBA_PTR_SET_VALUE(length_, length) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline BatchExportResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BatchExportResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline BatchExportResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The timestamp of the data requested by the backend. A larger timestamp indicates that the data export time is closer to the current time.
    std::shared_ptr<int64_t> anchor_ = nullptr;
    // The HTTP status code.
    // 
    // >  The status code 200 indicates that the request was successful.
    std::shared_ptr<int32_t> code_ = nullptr;
    // The Cursor information that is used to call this operation again.
    // 
    // >  If `null` is returned, the monitoring data is exported.
    std::shared_ptr<string> cursor_ = nullptr;
    // The data returned in this call.
    std::shared_ptr<vector<MetricStat>> dataResults_ = nullptr;
    // Indicates whether the data has been exported. Valid values:
    // 
    // *   true: Some data is not exported.
    // *   false: All the data is exported.
    std::shared_ptr<bool> hasNext_ = nullptr;
    // The number of data entries returned in this call.
    std::shared_ptr<int32_t> length_ = nullptr;
    // The returned message.
    std::shared_ptr<string> message_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
