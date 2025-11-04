// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYVIDEOCOGNITIONJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYVIDEOCOGNITIONJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryVideoCognitionJobRequestIncludeResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class QueryVideoCognitionJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryVideoCognitionJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IncludeResults, includeResults_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(Params, params_);
    };
    friend void from_json(const Darabonba::Json& j, QueryVideoCognitionJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IncludeResults, includeResults_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(Params, params_);
    };
    QueryVideoCognitionJobRequest() = default ;
    QueryVideoCognitionJobRequest(const QueryVideoCognitionJobRequest &) = default ;
    QueryVideoCognitionJobRequest(QueryVideoCognitionJobRequest &&) = default ;
    QueryVideoCognitionJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryVideoCognitionJobRequest() = default ;
    QueryVideoCognitionJobRequest& operator=(const QueryVideoCognitionJobRequest &) = default ;
    QueryVideoCognitionJobRequest& operator=(QueryVideoCognitionJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->includeResults_ == nullptr
        && return this->jobId_ == nullptr && return this->params_ == nullptr; };
    // includeResults Field Functions 
    bool hasIncludeResults() const { return this->includeResults_ != nullptr;};
    void deleteIncludeResults() { this->includeResults_ = nullptr;};
    inline const QueryVideoCognitionJobRequestIncludeResults & includeResults() const { DARABONBA_PTR_GET_CONST(includeResults_, QueryVideoCognitionJobRequestIncludeResults) };
    inline QueryVideoCognitionJobRequestIncludeResults includeResults() { DARABONBA_PTR_GET(includeResults_, QueryVideoCognitionJobRequestIncludeResults) };
    inline QueryVideoCognitionJobRequest& setIncludeResults(const QueryVideoCognitionJobRequestIncludeResults & includeResults) { DARABONBA_PTR_SET_VALUE(includeResults_, includeResults) };
    inline QueryVideoCognitionJobRequest& setIncludeResults(QueryVideoCognitionJobRequestIncludeResults && includeResults) { DARABONBA_PTR_SET_RVALUE(includeResults_, includeResults) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline QueryVideoCognitionJobRequest& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline string params() const { DARABONBA_PTR_GET_DEFAULT(params_, "") };
    inline QueryVideoCognitionJobRequest& setParams(string params) { DARABONBA_PTR_SET_VALUE(params_, params) };


  protected:
    // Specifies whether to include the full algorithm results in the response.
    std::shared_ptr<QueryVideoCognitionJobRequestIncludeResults> includeResults_ = nullptr;
    // The ID of the task to query. It is returned when you call the [SubmitSmarttagJob](https://help.aliyun.com/document_detail/478786.html) operation.
    // 
    // This parameter is required.
    std::shared_ptr<string> jobId_ = nullptr;
    // Additional request parameters, provided as a JSON string.
    std::shared_ptr<string> params_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
