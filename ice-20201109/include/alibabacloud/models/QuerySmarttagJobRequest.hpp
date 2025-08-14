// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSMARTTAGJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYSMARTTAGJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class QuerySmarttagJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySmarttagJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(Params, params_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySmarttagJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(Params, params_);
    };
    QuerySmarttagJobRequest() = default ;
    QuerySmarttagJobRequest(const QuerySmarttagJobRequest &) = default ;
    QuerySmarttagJobRequest(QuerySmarttagJobRequest &&) = default ;
    QuerySmarttagJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySmarttagJobRequest() = default ;
    QuerySmarttagJobRequest& operator=(const QuerySmarttagJobRequest &) = default ;
    QuerySmarttagJobRequest& operator=(QuerySmarttagJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->jobId_ != nullptr
        && this->params_ != nullptr; };
    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline QuerySmarttagJobRequest& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline string params() const { DARABONBA_PTR_GET_DEFAULT(params_, "") };
    inline QuerySmarttagJobRequest& setParams(string params) { DARABONBA_PTR_SET_VALUE(params_, params) };


  protected:
    // The ID of the smart tagging job that you want to query. You can obtain the job ID from the response parameters of the SubmitSmarttagJob operation.
    // 
    // This parameter is required.
    std::shared_ptr<string> jobId_ = nullptr;
    // The extra parameters that you want to query in the request. The value is a JSON string. Example: {"labelResultType":"auto"}. The value of labelResultType is of the STRING type. Valid values:
    // 
    // *   auto: machine tagging
    // *   hmi: tagging by human and machine
    std::shared_ptr<string> params_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
