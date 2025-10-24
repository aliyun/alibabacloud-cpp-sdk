// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMAUDITRESPONSEBODYTEXTRESULTSRESULT_HPP_
#define ALIBABACLOUD_MODELS_IMAUDITRESPONSEBODYTEXTRESULTSRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ImAuditResponseBodyTextResultsResultResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class ImAuditResponseBodyTextResultsResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImAuditResponseBodyTextResultsResult& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(dataId, dataId_);
      DARABONBA_PTR_TO_JSON(msg, msg_);
      DARABONBA_PTR_TO_JSON(results, results_);
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, ImAuditResponseBodyTextResultsResult& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(dataId, dataId_);
      DARABONBA_PTR_FROM_JSON(msg, msg_);
      DARABONBA_PTR_FROM_JSON(results, results_);
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
    };
    ImAuditResponseBodyTextResultsResult() = default ;
    ImAuditResponseBodyTextResultsResult(const ImAuditResponseBodyTextResultsResult &) = default ;
    ImAuditResponseBodyTextResultsResult(ImAuditResponseBodyTextResultsResult &&) = default ;
    ImAuditResponseBodyTextResultsResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImAuditResponseBodyTextResultsResult() = default ;
    ImAuditResponseBodyTextResultsResult& operator=(const ImAuditResponseBodyTextResultsResult &) = default ;
    ImAuditResponseBodyTextResultsResult& operator=(ImAuditResponseBodyTextResultsResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->content_ == nullptr && return this->dataId_ == nullptr && return this->msg_ == nullptr && return this->results_ == nullptr && return this->taskId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int64_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0L) };
    inline ImAuditResponseBodyTextResultsResult& setCode(int64_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline ImAuditResponseBodyTextResultsResult& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // dataId Field Functions 
    bool hasDataId() const { return this->dataId_ != nullptr;};
    void deleteDataId() { this->dataId_ = nullptr;};
    inline string dataId() const { DARABONBA_PTR_GET_DEFAULT(dataId_, "") };
    inline ImAuditResponseBodyTextResultsResult& setDataId(string dataId) { DARABONBA_PTR_SET_VALUE(dataId_, dataId) };


    // msg Field Functions 
    bool hasMsg() const { return this->msg_ != nullptr;};
    void deleteMsg() { this->msg_ = nullptr;};
    inline string msg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
    inline ImAuditResponseBodyTextResultsResult& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const vector<Models::ImAuditResponseBodyTextResultsResultResults> & results() const { DARABONBA_PTR_GET_CONST(results_, vector<Models::ImAuditResponseBodyTextResultsResultResults>) };
    inline vector<Models::ImAuditResponseBodyTextResultsResultResults> results() { DARABONBA_PTR_GET(results_, vector<Models::ImAuditResponseBodyTextResultsResultResults>) };
    inline ImAuditResponseBodyTextResultsResult& setResults(const vector<Models::ImAuditResponseBodyTextResultsResultResults> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline ImAuditResponseBodyTextResultsResult& setResults(vector<Models::ImAuditResponseBodyTextResultsResultResults> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline ImAuditResponseBodyTextResultsResult& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The error code. The error code is the same as the HTTP status code. For more information, see [Error codes](https://help.aliyun.com/document_detail/29254.html).
    std::shared_ptr<int64_t> code_ = nullptr;
    // The text that you specify in the moderation request.
    std::shared_ptr<string> content_ = nullptr;
    // The sequence number of the text.
    std::shared_ptr<string> dataId_ = nullptr;
    // The message that is returned for the request.
    std::shared_ptr<string> msg_ = nullptr;
    // The returned data. If the HTTP status code 200 is returned, the array in the returned results contains one or more elements. Each element is a struct.
    std::shared_ptr<vector<Models::ImAuditResponseBodyTextResultsResultResults>> results_ = nullptr;
    // The ID of the moderation task.
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
