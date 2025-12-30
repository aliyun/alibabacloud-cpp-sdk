// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYVIDEOCOGNITIONJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYVIDEOCOGNITIONJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
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
    class IncludeResults : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const IncludeResults& obj) { 
        DARABONBA_PTR_TO_JSON(NeedAsr, needAsr_);
        DARABONBA_PTR_TO_JSON(NeedOcr, needOcr_);
        DARABONBA_PTR_TO_JSON(NeedProcess, needProcess_);
      };
      friend void from_json(const Darabonba::Json& j, IncludeResults& obj) { 
        DARABONBA_PTR_FROM_JSON(NeedAsr, needAsr_);
        DARABONBA_PTR_FROM_JSON(NeedOcr, needOcr_);
        DARABONBA_PTR_FROM_JSON(NeedProcess, needProcess_);
      };
      IncludeResults() = default ;
      IncludeResults(const IncludeResults &) = default ;
      IncludeResults(IncludeResults &&) = default ;
      IncludeResults(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~IncludeResults() = default ;
      IncludeResults& operator=(const IncludeResults &) = default ;
      IncludeResults& operator=(IncludeResults &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->needAsr_ == nullptr
        && this->needOcr_ == nullptr && this->needProcess_ == nullptr; };
      // needAsr Field Functions 
      bool hasNeedAsr() const { return this->needAsr_ != nullptr;};
      void deleteNeedAsr() { this->needAsr_ = nullptr;};
      inline bool getNeedAsr() const { DARABONBA_PTR_GET_DEFAULT(needAsr_, false) };
      inline IncludeResults& setNeedAsr(bool needAsr) { DARABONBA_PTR_SET_VALUE(needAsr_, needAsr) };


      // needOcr Field Functions 
      bool hasNeedOcr() const { return this->needOcr_ != nullptr;};
      void deleteNeedOcr() { this->needOcr_ = nullptr;};
      inline bool getNeedOcr() const { DARABONBA_PTR_GET_DEFAULT(needOcr_, false) };
      inline IncludeResults& setNeedOcr(bool needOcr) { DARABONBA_PTR_SET_VALUE(needOcr_, needOcr) };


      // needProcess Field Functions 
      bool hasNeedProcess() const { return this->needProcess_ != nullptr;};
      void deleteNeedProcess() { this->needProcess_ = nullptr;};
      inline bool getNeedProcess() const { DARABONBA_PTR_GET_DEFAULT(needProcess_, false) };
      inline IncludeResults& setNeedProcess(bool needProcess) { DARABONBA_PTR_SET_VALUE(needProcess_, needProcess) };


    protected:
      // Specifies whether to include Automatic Speech Recognition (ASR) results.
      shared_ptr<bool> needAsr_ {};
      // Specifies whether to include Optical Character Recognition (OCR) results.
      shared_ptr<bool> needOcr_ {};
      // Specifies whether to include the URL to the raw output of the algorithm.
      shared_ptr<bool> needProcess_ {};
    };

    virtual bool empty() const override { return this->includeResults_ == nullptr
        && this->jobId_ == nullptr && this->params_ == nullptr; };
    // includeResults Field Functions 
    bool hasIncludeResults() const { return this->includeResults_ != nullptr;};
    void deleteIncludeResults() { this->includeResults_ = nullptr;};
    inline const QueryVideoCognitionJobRequest::IncludeResults & getIncludeResults() const { DARABONBA_PTR_GET_CONST(includeResults_, QueryVideoCognitionJobRequest::IncludeResults) };
    inline QueryVideoCognitionJobRequest::IncludeResults getIncludeResults() { DARABONBA_PTR_GET(includeResults_, QueryVideoCognitionJobRequest::IncludeResults) };
    inline QueryVideoCognitionJobRequest& setIncludeResults(const QueryVideoCognitionJobRequest::IncludeResults & includeResults) { DARABONBA_PTR_SET_VALUE(includeResults_, includeResults) };
    inline QueryVideoCognitionJobRequest& setIncludeResults(QueryVideoCognitionJobRequest::IncludeResults && includeResults) { DARABONBA_PTR_SET_RVALUE(includeResults_, includeResults) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline QueryVideoCognitionJobRequest& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline string getParams() const { DARABONBA_PTR_GET_DEFAULT(params_, "") };
    inline QueryVideoCognitionJobRequest& setParams(string params) { DARABONBA_PTR_SET_VALUE(params_, params) };


  protected:
    // Specifies whether to include the full algorithm results in the response.
    shared_ptr<QueryVideoCognitionJobRequest::IncludeResults> includeResults_ {};
    // The ID of the task to query. It is returned when you call the [SubmitSmarttagJob](https://help.aliyun.com/document_detail/478786.html) operation.
    // 
    // This parameter is required.
    shared_ptr<string> jobId_ {};
    // Additional request parameters, provided as a JSON string.
    shared_ptr<string> params_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
