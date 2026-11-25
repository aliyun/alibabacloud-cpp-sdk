// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAIAPPJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAIAPPJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yike20260707
{
namespace Models
{
  class GetAIAppJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAIAppJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(OnlyOutputs, onlyOutputs_);
    };
    friend void from_json(const Darabonba::Json& j, GetAIAppJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(OnlyOutputs, onlyOutputs_);
    };
    GetAIAppJobRequest() = default ;
    GetAIAppJobRequest(const GetAIAppJobRequest &) = default ;
    GetAIAppJobRequest(GetAIAppJobRequest &&) = default ;
    GetAIAppJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAIAppJobRequest() = default ;
    GetAIAppJobRequest& operator=(const GetAIAppJobRequest &) = default ;
    GetAIAppJobRequest& operator=(GetAIAppJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobId_ == nullptr
        && this->onlyOutputs_ == nullptr; };
    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline GetAIAppJobRequest& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // onlyOutputs Field Functions 
    bool hasOnlyOutputs() const { return this->onlyOutputs_ != nullptr;};
    void deleteOnlyOutputs() { this->onlyOutputs_ = nullptr;};
    inline bool getOnlyOutputs() const { DARABONBA_PTR_GET_DEFAULT(onlyOutputs_, false) };
    inline GetAIAppJobRequest& setOnlyOutputs(bool onlyOutputs) { DARABONBA_PTR_SET_VALUE(onlyOutputs_, onlyOutputs) };


  protected:
    // The task ID.
    // 
    // This parameter is required.
    shared_ptr<string> jobId_ {};
    // Specifies whether to return only the task results. If you set this parameter to true, the response does not include the results of each node.
    shared_ptr<bool> onlyOutputs_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yike20260707
#endif
