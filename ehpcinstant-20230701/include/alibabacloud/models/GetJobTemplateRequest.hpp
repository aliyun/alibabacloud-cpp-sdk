// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJOBTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETJOBTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class GetJobTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJobTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(JobTemplateId, jobTemplateId_);
    };
    friend void from_json(const Darabonba::Json& j, GetJobTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(JobTemplateId, jobTemplateId_);
    };
    GetJobTemplateRequest() = default ;
    GetJobTemplateRequest(const GetJobTemplateRequest &) = default ;
    GetJobTemplateRequest(GetJobTemplateRequest &&) = default ;
    GetJobTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJobTemplateRequest() = default ;
    GetJobTemplateRequest& operator=(const GetJobTemplateRequest &) = default ;
    GetJobTemplateRequest& operator=(GetJobTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobTemplateId_ == nullptr; };
    // jobTemplateId Field Functions 
    bool hasJobTemplateId() const { return this->jobTemplateId_ != nullptr;};
    void deleteJobTemplateId() { this->jobTemplateId_ = nullptr;};
    inline string getJobTemplateId() const { DARABONBA_PTR_GET_DEFAULT(jobTemplateId_, "") };
    inline GetJobTemplateRequest& setJobTemplateId(string jobTemplateId) { DARABONBA_PTR_SET_VALUE(jobTemplateId_, jobTemplateId) };


  protected:
    // The job template ID.
    // 
    // This parameter is required.
    shared_ptr<string> jobTemplateId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
