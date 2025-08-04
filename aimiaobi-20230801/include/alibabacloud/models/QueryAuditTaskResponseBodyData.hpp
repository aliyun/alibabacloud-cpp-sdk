// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAUDITTASKRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYAUDITTASKRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryAuditTaskResponseBodyDataResponse.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class QueryAuditTaskResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAuditTaskResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AuditTime, auditTime_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(HtmlContent, htmlContent_);
      DARABONBA_PTR_TO_JSON(Response, response_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAuditTaskResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AuditTime, auditTime_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(HtmlContent, htmlContent_);
      DARABONBA_PTR_FROM_JSON(Response, response_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    QueryAuditTaskResponseBodyData() = default ;
    QueryAuditTaskResponseBodyData(const QueryAuditTaskResponseBodyData &) = default ;
    QueryAuditTaskResponseBodyData(QueryAuditTaskResponseBodyData &&) = default ;
    QueryAuditTaskResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAuditTaskResponseBodyData() = default ;
    QueryAuditTaskResponseBodyData& operator=(const QueryAuditTaskResponseBodyData &) = default ;
    QueryAuditTaskResponseBodyData& operator=(QueryAuditTaskResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->auditTime_ != nullptr
        && this->content_ != nullptr && this->htmlContent_ != nullptr && this->response_ != nullptr && this->status_ != nullptr && this->taskStatus_ != nullptr
        && this->title_ != nullptr; };
    // auditTime Field Functions 
    bool hasAuditTime() const { return this->auditTime_ != nullptr;};
    void deleteAuditTime() { this->auditTime_ = nullptr;};
    inline string auditTime() const { DARABONBA_PTR_GET_DEFAULT(auditTime_, "") };
    inline QueryAuditTaskResponseBodyData& setAuditTime(string auditTime) { DARABONBA_PTR_SET_VALUE(auditTime_, auditTime) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline QueryAuditTaskResponseBodyData& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // htmlContent Field Functions 
    bool hasHtmlContent() const { return this->htmlContent_ != nullptr;};
    void deleteHtmlContent() { this->htmlContent_ = nullptr;};
    inline string htmlContent() const { DARABONBA_PTR_GET_DEFAULT(htmlContent_, "") };
    inline QueryAuditTaskResponseBodyData& setHtmlContent(string htmlContent) { DARABONBA_PTR_SET_VALUE(htmlContent_, htmlContent) };


    // response Field Functions 
    bool hasResponse() const { return this->response_ != nullptr;};
    void deleteResponse() { this->response_ = nullptr;};
    inline const Models::QueryAuditTaskResponseBodyDataResponse & response() const { DARABONBA_PTR_GET_CONST(response_, Models::QueryAuditTaskResponseBodyDataResponse) };
    inline Models::QueryAuditTaskResponseBodyDataResponse response() { DARABONBA_PTR_GET(response_, Models::QueryAuditTaskResponseBodyDataResponse) };
    inline QueryAuditTaskResponseBodyData& setResponse(const Models::QueryAuditTaskResponseBodyDataResponse & response) { DARABONBA_PTR_SET_VALUE(response_, response) };
    inline QueryAuditTaskResponseBodyData& setResponse(Models::QueryAuditTaskResponseBodyDataResponse && response) { DARABONBA_PTR_SET_RVALUE(response_, response) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline QueryAuditTaskResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline int32_t taskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, 0) };
    inline QueryAuditTaskResponseBodyData& setTaskStatus(int32_t taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline QueryAuditTaskResponseBodyData& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    std::shared_ptr<string> auditTime_ = nullptr;
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> htmlContent_ = nullptr;
    std::shared_ptr<Models::QueryAuditTaskResponseBodyDataResponse> response_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<int32_t> taskStatus_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
