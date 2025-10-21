// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTJOBWITHPARAMSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTJOBWITHPARAMSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/JobStartParameters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class StartJobWithParamsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartJobWithParamsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, StartJobWithParamsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    StartJobWithParamsRequest() = default ;
    StartJobWithParamsRequest(const StartJobWithParamsRequest &) = default ;
    StartJobWithParamsRequest(StartJobWithParamsRequest &&) = default ;
    StartJobWithParamsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartJobWithParamsRequest() = default ;
    StartJobWithParamsRequest& operator=(const StartJobWithParamsRequest &) = default ;
    StartJobWithParamsRequest& operator=(StartJobWithParamsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const JobStartParameters & body() const { DARABONBA_PTR_GET_CONST(body_, JobStartParameters) };
    inline JobStartParameters body() { DARABONBA_PTR_GET(body_, JobStartParameters) };
    inline StartJobWithParamsRequest& setBody(const JobStartParameters & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline StartJobWithParamsRequest& setBody(JobStartParameters && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // The parameter that is used to start the job.
    std::shared_ptr<JobStartParameters> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
