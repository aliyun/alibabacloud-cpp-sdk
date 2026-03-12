// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHGETYIKEAIAPPJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHGETYIKEAIAPPJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class BatchGetYikeAIAppJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchGetYikeAIAppJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(JobIds, jobIds_);
    };
    friend void from_json(const Darabonba::Json& j, BatchGetYikeAIAppJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(JobIds, jobIds_);
    };
    BatchGetYikeAIAppJobRequest() = default ;
    BatchGetYikeAIAppJobRequest(const BatchGetYikeAIAppJobRequest &) = default ;
    BatchGetYikeAIAppJobRequest(BatchGetYikeAIAppJobRequest &&) = default ;
    BatchGetYikeAIAppJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchGetYikeAIAppJobRequest() = default ;
    BatchGetYikeAIAppJobRequest& operator=(const BatchGetYikeAIAppJobRequest &) = default ;
    BatchGetYikeAIAppJobRequest& operator=(BatchGetYikeAIAppJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobIds_ == nullptr; };
    // jobIds Field Functions 
    bool hasJobIds() const { return this->jobIds_ != nullptr;};
    void deleteJobIds() { this->jobIds_ = nullptr;};
    inline string getJobIds() const { DARABONBA_PTR_GET_DEFAULT(jobIds_, "") };
    inline BatchGetYikeAIAppJobRequest& setJobIds(string jobIds) { DARABONBA_PTR_SET_VALUE(jobIds_, jobIds) };


  protected:
    shared_ptr<string> jobIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
