// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEJOBTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEJOBTEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class CreateJobTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateJobTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(JobTemplateId, jobTemplateId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateJobTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(JobTemplateId, jobTemplateId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateJobTemplateResponseBody() = default ;
    CreateJobTemplateResponseBody(const CreateJobTemplateResponseBody &) = default ;
    CreateJobTemplateResponseBody(CreateJobTemplateResponseBody &&) = default ;
    CreateJobTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateJobTemplateResponseBody() = default ;
    CreateJobTemplateResponseBody& operator=(const CreateJobTemplateResponseBody &) = default ;
    CreateJobTemplateResponseBody& operator=(CreateJobTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobTemplateId_ == nullptr
        && this->requestId_ == nullptr; };
    // jobTemplateId Field Functions 
    bool hasJobTemplateId() const { return this->jobTemplateId_ != nullptr;};
    void deleteJobTemplateId() { this->jobTemplateId_ = nullptr;};
    inline string getJobTemplateId() const { DARABONBA_PTR_GET_DEFAULT(jobTemplateId_, "") };
    inline CreateJobTemplateResponseBody& setJobTemplateId(string jobTemplateId) { DARABONBA_PTR_SET_VALUE(jobTemplateId_, jobTemplateId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateJobTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The job template ID.
    shared_ptr<string> jobTemplateId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
