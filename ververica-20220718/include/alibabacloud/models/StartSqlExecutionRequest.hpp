// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTSQLEXECUTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTSQLEXECUTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/StartSqlExecutionBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class StartSqlExecutionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartSqlExecutionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, StartSqlExecutionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    StartSqlExecutionRequest() = default ;
    StartSqlExecutionRequest(const StartSqlExecutionRequest &) = default ;
    StartSqlExecutionRequest(StartSqlExecutionRequest &&) = default ;
    StartSqlExecutionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartSqlExecutionRequest() = default ;
    StartSqlExecutionRequest& operator=(const StartSqlExecutionRequest &) = default ;
    StartSqlExecutionRequest& operator=(StartSqlExecutionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const StartSqlExecutionBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, StartSqlExecutionBody) };
    inline StartSqlExecutionBody getBody() { DARABONBA_PTR_GET(body_, StartSqlExecutionBody) };
    inline StartSqlExecutionRequest& setBody(const StartSqlExecutionBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline StartSqlExecutionRequest& setBody(StartSqlExecutionBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // The request body, which contains the SQL content to execute and description information.
    shared_ptr<StartSqlExecutionBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
