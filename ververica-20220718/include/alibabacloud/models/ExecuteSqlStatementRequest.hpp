// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTESQLSTATEMENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXECUTESQLSTATEMENTREQUEST_HPP_
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
  class ExecuteSqlStatementRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteSqlStatementRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteSqlStatementRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    ExecuteSqlStatementRequest() = default ;
    ExecuteSqlStatementRequest(const ExecuteSqlStatementRequest &) = default ;
    ExecuteSqlStatementRequest(ExecuteSqlStatementRequest &&) = default ;
    ExecuteSqlStatementRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteSqlStatementRequest() = default ;
    ExecuteSqlStatementRequest& operator=(const ExecuteSqlStatementRequest &) = default ;
    ExecuteSqlStatementRequest& operator=(ExecuteSqlStatementRequest &&) = default ;
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
    inline ExecuteSqlStatementRequest& setBody(const SqlStatementWithContext & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ExecuteSqlStatementRequest& setBody(SqlStatementWithContext && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<SqlStatementWithContext> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
