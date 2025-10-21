// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITSQLPREVIEWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITSQLPREVIEWREQUEST_HPP_
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
  class SubmitSqlPreviewRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitSqlPreviewRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
      DARABONBA_PTR_TO_JSON(sessionClusterName, sessionClusterName_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitSqlPreviewRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
      DARABONBA_PTR_FROM_JSON(sessionClusterName, sessionClusterName_);
    };
    SubmitSqlPreviewRequest() = default ;
    SubmitSqlPreviewRequest(const SubmitSqlPreviewRequest &) = default ;
    SubmitSqlPreviewRequest(SubmitSqlPreviewRequest &&) = default ;
    SubmitSqlPreviewRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitSqlPreviewRequest() = default ;
    SubmitSqlPreviewRequest& operator=(const SubmitSqlPreviewRequest &) = default ;
    SubmitSqlPreviewRequest& operator=(SubmitSqlPreviewRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr
        && return this->sessionClusterName_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const SqlStatementWithContext & body() const { DARABONBA_PTR_GET_CONST(body_, SqlStatementWithContext) };
    inline SqlStatementWithContext body() { DARABONBA_PTR_GET(body_, SqlStatementWithContext) };
    inline SubmitSqlPreviewRequest& setBody(const SqlStatementWithContext & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline SubmitSqlPreviewRequest& setBody(SqlStatementWithContext && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // sessionClusterName Field Functions 
    bool hasSessionClusterName() const { return this->sessionClusterName_ != nullptr;};
    void deleteSessionClusterName() { this->sessionClusterName_ = nullptr;};
    inline string sessionClusterName() const { DARABONBA_PTR_GET_DEFAULT(sessionClusterName_, "") };
    inline SubmitSqlPreviewRequest& setSessionClusterName(string sessionClusterName) { DARABONBA_PTR_SET_VALUE(sessionClusterName_, sessionClusterName) };


  protected:
    std::shared_ptr<SqlStatementWithContext> body_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> sessionClusterName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
