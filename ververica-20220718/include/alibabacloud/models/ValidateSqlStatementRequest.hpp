// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VALIDATESQLSTATEMENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_VALIDATESQLSTATEMENTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SqlStatementWithContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class ValidateSqlStatementRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ValidateSqlStatementRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ValidateSqlStatementRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    ValidateSqlStatementRequest() = default ;
    ValidateSqlStatementRequest(const ValidateSqlStatementRequest &) = default ;
    ValidateSqlStatementRequest(ValidateSqlStatementRequest &&) = default ;
    ValidateSqlStatementRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ValidateSqlStatementRequest() = default ;
    ValidateSqlStatementRequest& operator=(const ValidateSqlStatementRequest &) = default ;
    ValidateSqlStatementRequest& operator=(ValidateSqlStatementRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const SqlStatementWithContext & body() const { DARABONBA_PTR_GET_CONST(body_, SqlStatementWithContext) };
    inline SqlStatementWithContext body() { DARABONBA_PTR_GET(body_, SqlStatementWithContext) };
    inline ValidateSqlStatementRequest& setBody(const SqlStatementWithContext & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ValidateSqlStatementRequest& setBody(SqlStatementWithContext && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // The content of the code that you want to verify.
    // 
    // This parameter is required.
    std::shared_ptr<SqlStatementWithContext> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
