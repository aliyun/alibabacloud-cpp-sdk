// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STOPJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STOPJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/StopJobRequestBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class StopJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StopJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, StopJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    StopJobRequest() = default ;
    StopJobRequest(const StopJobRequest &) = default ;
    StopJobRequest(StopJobRequest &&) = default ;
    StopJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StopJobRequest() = default ;
    StopJobRequest& operator=(const StopJobRequest &) = default ;
    StopJobRequest& operator=(StopJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const StopJobRequestBody & body() const { DARABONBA_PTR_GET_CONST(body_, StopJobRequestBody) };
    inline StopJobRequestBody body() { DARABONBA_PTR_GET(body_, StopJobRequestBody) };
    inline StopJobRequest& setBody(const StopJobRequestBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline StopJobRequest& setBody(StopJobRequestBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // The parameter that is used to stop the job.
    // 
    // This parameter is required.
    std::shared_ptr<StopJobRequestBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
