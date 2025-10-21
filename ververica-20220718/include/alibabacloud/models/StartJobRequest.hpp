// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/StartJobRequestBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class StartJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, StartJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    StartJobRequest() = default ;
    StartJobRequest(const StartJobRequest &) = default ;
    StartJobRequest(StartJobRequest &&) = default ;
    StartJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartJobRequest() = default ;
    StartJobRequest& operator=(const StartJobRequest &) = default ;
    StartJobRequest& operator=(StartJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const StartJobRequestBody & body() const { DARABONBA_PTR_GET_CONST(body_, StartJobRequestBody) };
    inline StartJobRequestBody body() { DARABONBA_PTR_GET(body_, StartJobRequestBody) };
    inline StartJobRequest& setBody(const StartJobRequestBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline StartJobRequest& setBody(StartJobRequestBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // The parameter that is used to start the job.
    // 
    // This parameter is required.
    std::shared_ptr<StartJobRequestBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
