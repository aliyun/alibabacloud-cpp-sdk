// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVIDEOTRANSLATIONJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETVIDEOTRANSLATIONJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yike20260707
{
namespace Models
{
  class GetVideoTranslationJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVideoTranslationJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
    };
    friend void from_json(const Darabonba::Json& j, GetVideoTranslationJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
    };
    GetVideoTranslationJobRequest() = default ;
    GetVideoTranslationJobRequest(const GetVideoTranslationJobRequest &) = default ;
    GetVideoTranslationJobRequest(GetVideoTranslationJobRequest &&) = default ;
    GetVideoTranslationJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVideoTranslationJobRequest() = default ;
    GetVideoTranslationJobRequest& operator=(const GetVideoTranslationJobRequest &) = default ;
    GetVideoTranslationJobRequest& operator=(GetVideoTranslationJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobId_ == nullptr; };
    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline GetVideoTranslationJobRequest& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


  protected:
    // The task ID returned by `SubmitVideoTranslationJob`.
    // 
    // This parameter is required.
    shared_ptr<string> jobId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yike20260707
#endif
