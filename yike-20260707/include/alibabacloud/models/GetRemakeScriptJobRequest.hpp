// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREMAKESCRIPTJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETREMAKESCRIPTJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yike20260707
{
namespace Models
{
  class GetRemakeScriptJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRemakeScriptJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
    };
    friend void from_json(const Darabonba::Json& j, GetRemakeScriptJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
    };
    GetRemakeScriptJobRequest() = default ;
    GetRemakeScriptJobRequest(const GetRemakeScriptJobRequest &) = default ;
    GetRemakeScriptJobRequest(GetRemakeScriptJobRequest &&) = default ;
    GetRemakeScriptJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRemakeScriptJobRequest() = default ;
    GetRemakeScriptJobRequest& operator=(const GetRemakeScriptJobRequest &) = default ;
    GetRemakeScriptJobRequest& operator=(GetRemakeScriptJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobId_ == nullptr; };
    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline GetRemakeScriptJobRequest& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


  protected:
    // The task ID.
    shared_ptr<string> jobId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yike20260707
#endif
