// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYVIDEOCOGNITIONJOBSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYVIDEOCOGNITIONJOBSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class QueryVideoCognitionJobShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryVideoCognitionJobShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IncludeResults, includeResultsShrink_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(Params, params_);
    };
    friend void from_json(const Darabonba::Json& j, QueryVideoCognitionJobShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IncludeResults, includeResultsShrink_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(Params, params_);
    };
    QueryVideoCognitionJobShrinkRequest() = default ;
    QueryVideoCognitionJobShrinkRequest(const QueryVideoCognitionJobShrinkRequest &) = default ;
    QueryVideoCognitionJobShrinkRequest(QueryVideoCognitionJobShrinkRequest &&) = default ;
    QueryVideoCognitionJobShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryVideoCognitionJobShrinkRequest() = default ;
    QueryVideoCognitionJobShrinkRequest& operator=(const QueryVideoCognitionJobShrinkRequest &) = default ;
    QueryVideoCognitionJobShrinkRequest& operator=(QueryVideoCognitionJobShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->includeResultsShrink_ == nullptr
        && return this->jobId_ == nullptr && return this->params_ == nullptr; };
    // includeResultsShrink Field Functions 
    bool hasIncludeResultsShrink() const { return this->includeResultsShrink_ != nullptr;};
    void deleteIncludeResultsShrink() { this->includeResultsShrink_ = nullptr;};
    inline string includeResultsShrink() const { DARABONBA_PTR_GET_DEFAULT(includeResultsShrink_, "") };
    inline QueryVideoCognitionJobShrinkRequest& setIncludeResultsShrink(string includeResultsShrink) { DARABONBA_PTR_SET_VALUE(includeResultsShrink_, includeResultsShrink) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline QueryVideoCognitionJobShrinkRequest& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline string params() const { DARABONBA_PTR_GET_DEFAULT(params_, "") };
    inline QueryVideoCognitionJobShrinkRequest& setParams(string params) { DARABONBA_PTR_SET_VALUE(params_, params) };


  protected:
    // Specifies whether to include the full algorithm results in the response.
    std::shared_ptr<string> includeResultsShrink_ = nullptr;
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
