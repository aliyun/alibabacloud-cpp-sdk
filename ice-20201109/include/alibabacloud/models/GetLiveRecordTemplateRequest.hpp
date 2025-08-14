// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLIVERECORDTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETLIVERECORDTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetLiveRecordTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLiveRecordTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, GetLiveRecordTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    GetLiveRecordTemplateRequest() = default ;
    GetLiveRecordTemplateRequest(const GetLiveRecordTemplateRequest &) = default ;
    GetLiveRecordTemplateRequest(GetLiveRecordTemplateRequest &&) = default ;
    GetLiveRecordTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLiveRecordTemplateRequest() = default ;
    GetLiveRecordTemplateRequest& operator=(const GetLiveRecordTemplateRequest &) = default ;
    GetLiveRecordTemplateRequest& operator=(GetLiveRecordTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->jobId_ != nullptr
        && this->templateId_ != nullptr; };
    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline GetLiveRecordTemplateRequest& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline GetLiveRecordTemplateRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    // The ID of the recording job. You can specify the JobId parameter to retrieve the snapshot of the template used by the job.
    std::shared_ptr<string> jobId_ = nullptr;
    // The template ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> templateId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
