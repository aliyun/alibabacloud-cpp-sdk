// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMAUDITRESPONSEBODYIMAGERESULTSRESULT_HPP_
#define ALIBABACLOUD_MODELS_IMAUDITRESPONSEBODYIMAGERESULTSRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ImAuditResponseBodyImageResultsResultResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class ImAuditResponseBodyImageResultsResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImAuditResponseBodyImageResultsResult& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(dataId, dataId_);
      DARABONBA_ANY_TO_JSON(extras, extras_);
      DARABONBA_PTR_TO_JSON(msg, msg_);
      DARABONBA_PTR_TO_JSON(results, results_);
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
      DARABONBA_PTR_TO_JSON(url, url_);
    };
    friend void from_json(const Darabonba::Json& j, ImAuditResponseBodyImageResultsResult& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(dataId, dataId_);
      DARABONBA_ANY_FROM_JSON(extras, extras_);
      DARABONBA_PTR_FROM_JSON(msg, msg_);
      DARABONBA_PTR_FROM_JSON(results, results_);
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
      DARABONBA_PTR_FROM_JSON(url, url_);
    };
    ImAuditResponseBodyImageResultsResult() = default ;
    ImAuditResponseBodyImageResultsResult(const ImAuditResponseBodyImageResultsResult &) = default ;
    ImAuditResponseBodyImageResultsResult(ImAuditResponseBodyImageResultsResult &&) = default ;
    ImAuditResponseBodyImageResultsResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImAuditResponseBodyImageResultsResult() = default ;
    ImAuditResponseBodyImageResultsResult& operator=(const ImAuditResponseBodyImageResultsResult &) = default ;
    ImAuditResponseBodyImageResultsResult& operator=(ImAuditResponseBodyImageResultsResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->dataId_ == nullptr && return this->extras_ == nullptr && return this->msg_ == nullptr && return this->results_ == nullptr && return this->taskId_ == nullptr
        && return this->url_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int64_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0L) };
    inline ImAuditResponseBodyImageResultsResult& setCode(int64_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // dataId Field Functions 
    bool hasDataId() const { return this->dataId_ != nullptr;};
    void deleteDataId() { this->dataId_ = nullptr;};
    inline string dataId() const { DARABONBA_PTR_GET_DEFAULT(dataId_, "") };
    inline ImAuditResponseBodyImageResultsResult& setDataId(string dataId) { DARABONBA_PTR_SET_VALUE(dataId_, dataId) };


    // extras Field Functions 
    bool hasExtras() const { return this->extras_ != nullptr;};
    void deleteExtras() { this->extras_ = nullptr;};
    inline     const Darabonba::Json & extras() const { DARABONBA_GET(extras_) };
    Darabonba::Json & extras() { DARABONBA_GET(extras_) };
    inline ImAuditResponseBodyImageResultsResult& setExtras(const Darabonba::Json & extras) { DARABONBA_SET_VALUE(extras_, extras) };
    inline ImAuditResponseBodyImageResultsResult& setExtras(Darabonba::Json & extras) { DARABONBA_SET_RVALUE(extras_, extras) };


    // msg Field Functions 
    bool hasMsg() const { return this->msg_ != nullptr;};
    void deleteMsg() { this->msg_ = nullptr;};
    inline string msg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
    inline ImAuditResponseBodyImageResultsResult& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const vector<Models::ImAuditResponseBodyImageResultsResultResults> & results() const { DARABONBA_PTR_GET_CONST(results_, vector<Models::ImAuditResponseBodyImageResultsResultResults>) };
    inline vector<Models::ImAuditResponseBodyImageResultsResultResults> results() { DARABONBA_PTR_GET(results_, vector<Models::ImAuditResponseBodyImageResultsResultResults>) };
    inline ImAuditResponseBodyImageResultsResult& setResults(const vector<Models::ImAuditResponseBodyImageResultsResultResults> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline ImAuditResponseBodyImageResultsResult& setResults(vector<Models::ImAuditResponseBodyImageResultsResultResults> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline ImAuditResponseBodyImageResultsResult& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline ImAuditResponseBodyImageResultsResult& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    // The error code. The error code is the same as the HTTP status code. This parameter is not returned if the request is successful.
    std::shared_ptr<int64_t> code_ = nullptr;
    // The ID of the moderated object.
    // 
    // >  If you set the dataId parameter in the moderation request, the dataId parameter is returned in the response.
    std::shared_ptr<string> dataId_ = nullptr;
    // The additional information about the image. If ad is specified for the Scenes parameter, the following content may be returned for this parameter: hitLibInfo: the information about the custom text library that is hit by the text in the image. The value of this parameter is an array. For more information about the structure, see [hitLibInfo](https://help.aliyun.com/document_detail/268644.html).
    Darabonba::Json extras_ = nullptr;
    // The message that is returned for the request.
    std::shared_ptr<string> msg_ = nullptr;
    // The returned data. If the call is successful, the array in the returned results contains one or more elements. Each element is a struct.
    std::shared_ptr<vector<Models::ImAuditResponseBodyImageResultsResultResults>> results_ = nullptr;
    // The ID of the moderation task.
    std::shared_ptr<string> taskId_ = nullptr;
    // The URL of the moderated object.
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
